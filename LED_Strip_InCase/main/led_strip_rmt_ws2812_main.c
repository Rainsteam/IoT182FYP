#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "led_strip.h"
#include "esp_log.h"
#include "esp_err.h"

// GPIO assignment
#define LED_STRIP_BLINK_GPIO  19
// Numbers of the LED in the strip
#define LED_STRIP_LED_NUMBERS 60
// 10MHz resolution, 1 tick = 0.1us (led strip needs a high resolution)
#define LED_STRIP_RMT_RES_HZ  (10 * 1000 * 1000)

static const char *TAG = "example";

int led_stat = 5;

led_strip_handle_t configure_led(void)
{
    // LED strip general initialization, according to your led board design
    led_strip_config_t strip_config = {
        .strip_gpio_num = LED_STRIP_BLINK_GPIO,   // The GPIO that connected to the LED strip's data line
        .max_leds = LED_STRIP_LED_NUMBERS,        // The number of LEDs in the strip,
        .led_pixel_format = LED_PIXEL_FORMAT_GRB, // Pixel format of your LED strip
        .led_model = LED_MODEL_WS2812,            // LED strip model
        .flags.invert_out = false,                // whether to invert the output signal
    };

    // LED strip backend configuration: RMT
    led_strip_rmt_config_t rmt_config = {
#if ESP_IDF_VERSION < ESP_IDF_VERSION_VAL(5, 0, 0)
        .rmt_channel = 0,
#else
        .clk_src = RMT_CLK_SRC_DEFAULT,        // different clock source can lead to different power consumption
        .resolution_hz = LED_STRIP_RMT_RES_HZ, // RMT counter clock frequency
        .flags.with_dma = false,               // DMA feature is available on ESP target like ESP32-S3
#endif
    };

    // LED Strip object handle
    led_strip_handle_t led_strip;
    ESP_ERROR_CHECK(led_strip_new_rmt_device(&strip_config, &rmt_config, &led_strip));
    ESP_LOGI(TAG, "Created LED strip object with RMT backend");
    return led_strip;
}

uint32_t color_wheel(uint8_t pos) {
    pos = 255 - pos;
    if(pos < 85) {
        return (255 - pos * 3) << 16 | (pos * 3) << 8 | 0;
    } else if(pos < 170) {
        pos -= 85;
        return 0 << 16 | (255 - pos * 3) << 8 | (pos * 3);
    } else {
        pos -= 170;
        return (pos * 3) << 16 | 0 << 8 | (255 - pos * 3);
    }
}

void red_blink (void)
{
    led_strip_handle_t led_strip = configure_led();
    bool led_on_off = false;

    ESP_LOGI(TAG, "Start red blinking LED strip");
    while (1) {
        if (led_on_off) {

            for (int i = 0; i < LED_STRIP_LED_NUMBERS; i++) {
                ESP_ERROR_CHECK(led_strip_set_pixel(led_strip, i, 255, 0, 0));
            }

            ESP_ERROR_CHECK(led_strip_refresh(led_strip));
            ESP_LOGI(TAG, "LED ON!");
        } else {

            ESP_ERROR_CHECK(led_strip_clear(led_strip));
            ESP_LOGI(TAG, "LED OFF!");
        }

        led_on_off = !led_on_off;
        vTaskDelay(pdMS_TO_TICKS(500));
    }
}

void green_breath(void)
{
    led_strip_handle_t led_strip = configure_led();

    ESP_LOGI(TAG, "Start green breathing LED strip effect");
    int brightness = 0;
    bool increasing = true;

    while (1) {
        for (int i = 0; i < LED_STRIP_LED_NUMBERS; i++) {
            ESP_ERROR_CHECK(led_strip_set_pixel(led_strip, i, 0, brightness, 0));
        }
        ESP_ERROR_CHECK(led_strip_refresh(led_strip));

        if (increasing) {
            brightness += 5;
            if (brightness >= 255) {
                increasing = false; 
                vTaskDelay(pdMS_TO_TICKS(500));
            }
        } else {
            brightness -= 5;
            if (brightness <= 0) {
                increasing = true;
            }
        }

        vTaskDelay(pdMS_TO_TICKS(30));
    }
}

void yellow_breath(void)
{
    led_strip_handle_t led_strip = configure_led();

    ESP_LOGI(TAG, "Start yellow breathing LED strip effect");
    int brightness = 0;
    bool increasing = true;

    while (1) {
        for (int i = 0; i < LED_STRIP_LED_NUMBERS; i++) {
            ESP_ERROR_CHECK(led_strip_set_pixel(led_strip, i, brightness, brightness, 0));
        }
        ESP_ERROR_CHECK(led_strip_refresh(led_strip));

        if (increasing) {
            brightness += 5;
            if (brightness >= 255) {
                increasing = false; 
                vTaskDelay(pdMS_TO_TICKS(500));
            }
        } else {
            brightness -= 5;
            if (brightness <= 0) {
                increasing = true;
            }
        }

        vTaskDelay(pdMS_TO_TICKS(30));
    }
}

void colour_wheel(void) {
    led_strip_handle_t led_strip = configure_led();
    uint8_t position = 0; // Position in the color wheel

    while (1) {
        uint32_t color = color_wheel(position++);
        uint8_t red = (color >> 16) & 0xFF;
        uint8_t green = (color >> 8) & 0xFF;
        uint8_t blue = color & 0xFF;

        for(int i = 0; i < LED_STRIP_LED_NUMBERS; i++) {
            ESP_ERROR_CHECK(led_strip_set_pixel(led_strip, i, red, green, blue));
        }
        ESP_ERROR_CHECK(led_strip_refresh(led_strip));

        if (position >= 255) position = 0;

        vTaskDelay(pdMS_TO_TICKS(25));
    }
}

void green_wave(void)
{
    led_strip_handle_t led_strip = configure_led();

    ESP_LOGI(TAG, "Start green wave LED strip effect");
    bool increasing = true;
    int i = 3;

    while (1) {
        if (increasing) {
            ESP_ERROR_CHECK(led_strip_clear(led_strip));
            ESP_ERROR_CHECK(led_strip_set_pixel(led_strip, i-2, 0, 5, 0));
            ESP_ERROR_CHECK(led_strip_set_pixel(led_strip, i-1, 0, 155, 0));
            ESP_ERROR_CHECK(led_strip_set_pixel(led_strip, i, 0, 255, 0));
            ESP_ERROR_CHECK(led_strip_set_pixel(led_strip, i+1, 0, 155, 0));
            ESP_ERROR_CHECK(led_strip_set_pixel(led_strip, i+2, 0, 5, 0));
            ESP_ERROR_CHECK(led_strip_refresh(led_strip));
            i = i+1;
            if(i>=58){
                increasing = false;
            }
        }
        else{
            ESP_ERROR_CHECK(led_strip_clear(led_strip));
            ESP_ERROR_CHECK(led_strip_set_pixel(led_strip, i-2, 0, 5, 0));
            ESP_ERROR_CHECK(led_strip_set_pixel(led_strip, i-1, 0, 155, 0));
            ESP_ERROR_CHECK(led_strip_set_pixel(led_strip, i, 0, 255, 0));
            ESP_ERROR_CHECK(led_strip_set_pixel(led_strip, i+1, 0, 155, 0));
            ESP_ERROR_CHECK(led_strip_set_pixel(led_strip, i+2, 0, 5, 0));
            ESP_ERROR_CHECK(led_strip_refresh(led_strip));
            i = i-1;
            if(i<=3){
                increasing = true;
            }
        }

        vTaskDelay(pdMS_TO_TICKS(100));
    }
}

void rainbow(void) {
    led_strip_handle_t led_strip = configure_led();
    int position = 0; // This will be used to shift the starting point in the color wheel

    while (1) {
        for (int i = 0; i < LED_STRIP_LED_NUMBERS; i++) {
            uint32_t color = color_wheel(((i * 256 / LED_STRIP_LED_NUMBERS) + position) & 0xFF);
            uint8_t red = (color >> 16) & 0xFF;
            uint8_t green = (color >> 8) & 0xFF;
            uint8_t blue = color & 0xFF;

            ESP_ERROR_CHECK(led_strip_set_pixel(led_strip, i, red, green, blue));
        }
        ESP_ERROR_CHECK(led_strip_refresh(led_strip));

        position++;
        if (position >= 256) position = 0;

        vTaskDelay(pdMS_TO_TICKS(20));
    }
}

void app_main(void) {
    while (1) {
        switch (led_stat) {
            case 0:
                red_blink();
                break;
            case 1:
                green_breath();
                break;
            case 2:
                yellow_breath();
                break;
            case 3:
                colour_wheel();
                break;
            case 4:
                green_wave();
                break;
            case 5:
                rainbow();
                break;
            default:
                break;
        }
    }
}