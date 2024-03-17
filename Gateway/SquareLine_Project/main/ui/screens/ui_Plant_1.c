// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"

void ui_Plant_1_screen_init(void)
{
    ui_Plant_1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Plant_1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_TitleP1 = lv_label_create(ui_Plant_1);
    lv_obj_set_width(ui_TitleP1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TitleP1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TitleP1, 0);
    lv_obj_set_y(ui_TitleP1, -222);
    lv_obj_set_align(ui_TitleP1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TitleP1, "Welcome to Smart Terrarium Portal");

    ui_ChoosePlantP1 = lv_btn_create(ui_Plant_1);
    lv_obj_set_width(ui_ChoosePlantP1, 108);
    lv_obj_set_height(ui_ChoosePlantP1, 50);
    lv_obj_set_x(ui_ChoosePlantP1, 144);
    lv_obj_set_y(ui_ChoosePlantP1, -145);
    lv_obj_set_align(ui_ChoosePlantP1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ChoosePlantP1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ChoosePlantP1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ChoosePlantP1, lv_color_hex(0x29C411), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ChoosePlantP1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CPLabel1 = lv_label_create(ui_Plant_1);
    lv_obj_set_width(ui_CPLabel1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_CPLabel1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_CPLabel1, 144);
    lv_obj_set_y(ui_CPLabel1, -145);
    lv_obj_set_align(ui_CPLabel1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_CPLabel1, "Choose Plant");

    ui_P1Display = lv_label_create(ui_Plant_1);
    lv_obj_set_width(ui_P1Display, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_P1Display, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_P1Display, -110);
    lv_obj_set_y(ui_P1Display, -147);
    lv_obj_set_align(ui_P1Display, LV_ALIGN_CENTER);
    lv_label_set_text(ui_P1Display, "Currently Displaying:\n\nPlant 1");

    ui_Temperature = lv_obj_create(ui_Plant_1);
    lv_obj_set_width(ui_Temperature, 169);
    lv_obj_set_height(ui_Temperature, 50);
    lv_obj_set_x(ui_Temperature, 130);
    lv_obj_set_y(ui_Temperature, -83);
    lv_obj_set_align(ui_Temperature, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Temperature, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_TempLabel = lv_label_create(ui_Plant_1);
    lv_obj_set_width(ui_TempLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TempLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TempLabel, 130);
    lv_obj_set_y(ui_TempLabel, -93);
    lv_obj_set_align(ui_TempLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TempLabel, "Soil Temperature (°C)");
    lv_obj_set_style_text_align(ui_TempLabel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Humidity = lv_obj_create(ui_Plant_1);
    lv_obj_set_width(ui_Humidity, 169);
    lv_obj_set_height(ui_Humidity, 50);
    lv_obj_set_x(ui_Humidity, 130);
    lv_obj_set_y(ui_Humidity, -23);
    lv_obj_set_align(ui_Humidity, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Humidity, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_HumLabel = lv_label_create(ui_Plant_1);
    lv_obj_set_width(ui_HumLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_HumLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_HumLabel, 130);
    lv_obj_set_y(ui_HumLabel, -33);
    lv_obj_set_align(ui_HumLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_HumLabel, "Humidity (%)");
    lv_obj_set_style_text_align(ui_HumLabel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SoilpH = lv_obj_create(ui_Plant_1);
    lv_obj_set_width(ui_SoilpH, 169);
    lv_obj_set_height(ui_SoilpH, 50);
    lv_obj_set_x(ui_SoilpH, 130);
    lv_obj_set_y(ui_SoilpH, 37);
    lv_obj_set_align(ui_SoilpH, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_SoilpH, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_pHLabel = lv_label_create(ui_Plant_1);
    lv_obj_set_width(ui_pHLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_pHLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_pHLabel, 130);
    lv_obj_set_y(ui_pHLabel, 27);
    lv_obj_set_align(ui_pHLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_pHLabel, "Soil pH Value");
    lv_obj_set_style_text_align(ui_pHLabel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SoilMoisture = lv_obj_create(ui_Plant_1);
    lv_obj_set_width(ui_SoilMoisture, 169);
    lv_obj_set_height(ui_SoilMoisture, 50);
    lv_obj_set_x(ui_SoilMoisture, 130);
    lv_obj_set_y(ui_SoilMoisture, 97);
    lv_obj_set_align(ui_SoilMoisture, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_SoilMoisture, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_MoisLabel = lv_label_create(ui_Plant_1);
    lv_obj_set_width(ui_MoisLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MoisLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_MoisLabel, 130);
    lv_obj_set_y(ui_MoisLabel, 87);
    lv_obj_set_align(ui_MoisLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_MoisLabel, "Soil Moisture (%)");
    lv_obj_set_style_text_align(ui_MoisLabel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LightIntensity = lv_obj_create(ui_Plant_1);
    lv_obj_set_width(ui_LightIntensity, 169);
    lv_obj_set_height(ui_LightIntensity, 50);
    lv_obj_set_x(ui_LightIntensity, 130);
    lv_obj_set_y(ui_LightIntensity, 157);
    lv_obj_set_align(ui_LightIntensity, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_LightIntensity, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_LuxLabel = lv_label_create(ui_Plant_1);
    lv_obj_set_width(ui_LuxLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LuxLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LuxLabel, 130);
    lv_obj_set_y(ui_LuxLabel, 147);
    lv_obj_set_align(ui_LuxLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LuxLabel, "Light Intensity (Lux)");
    lv_obj_set_style_text_align(ui_LuxLabel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TempData = lv_label_create(ui_Plant_1);
    lv_obj_set_width(ui_TempData, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TempData, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TempData, 130);
    lv_obj_set_y(ui_TempData, -73);
    lv_obj_set_align(ui_TempData, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TempData, "26.00");

    ui_HumData = lv_label_create(ui_Plant_1);
    lv_obj_set_width(ui_HumData, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_HumData, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_HumData, 130);
    lv_obj_set_y(ui_HumData, -13);
    lv_obj_set_align(ui_HumData, LV_ALIGN_CENTER);
    lv_label_set_text(ui_HumData, "50");

    ui_pHData = lv_label_create(ui_Plant_1);
    lv_obj_set_width(ui_pHData, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_pHData, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_pHData, 130);
    lv_obj_set_y(ui_pHData, 47);
    lv_obj_set_align(ui_pHData, LV_ALIGN_CENTER);

    ui_MoisData = lv_label_create(ui_Plant_1);
    lv_obj_set_width(ui_MoisData, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MoisData, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_MoisData, 130);
    lv_obj_set_y(ui_MoisData, 107);
    lv_obj_set_align(ui_MoisData, LV_ALIGN_CENTER);
    lv_label_set_text(ui_MoisData, "50");

    ui_LuxData = lv_label_create(ui_Plant_1);
    lv_obj_set_width(ui_LuxData, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LuxData, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LuxData, 130);
    lv_obj_set_y(ui_LuxData, 167);
    lv_obj_set_align(ui_LuxData, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LuxData, "1000");

    ui_Switch3 = lv_switch_create(ui_Plant_1);
    lv_obj_set_width(ui_Switch3, 50);
    lv_obj_set_height(ui_Switch3, 25);
    lv_obj_set_x(ui_Switch3, 39);
    lv_obj_set_y(ui_Switch3, -149);
    lv_obj_set_align(ui_Switch3, LV_ALIGN_CENTER);


    lv_obj_add_event_cb(ui_ChoosePlantP1, ui_event_ChoosePlantP1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Switch3, ui_event_Switch3, LV_EVENT_ALL, NULL);

}
