// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"

// SCREEN: ui_Home
void ui_Home_screen_init(void);
extern lv_obj_t * ui_Home;
extern lv_obj_t * ui_TitleHome;
extern lv_obj_t * ui_ChooseYourPlantLabel;
void ui_event_ButtonToP1(lv_event_t * e);
extern lv_obj_t * ui_ButtonToP1;
extern lv_obj_t * ui_Label6;
void ui_event_ButtonToP2(lv_event_t * e);
extern lv_obj_t * ui_ButtonToP2;
extern lv_obj_t * ui_Label7;
void ui_event_ButtonToP3(lv_event_t * e);
extern lv_obj_t * ui_ButtonToP3;
extern lv_obj_t * ui_Label8;
// SCREEN: ui_Plant_1
void ui_Plant_1_screen_init(void);
extern lv_obj_t * ui_Plant_1;
extern lv_obj_t * ui_TitleP1;
void ui_event_ChoosePlantP1(lv_event_t * e);
extern lv_obj_t * ui_ChoosePlantP1;
extern lv_obj_t * ui_CPLabel1;
extern lv_obj_t * ui_P1Display;
extern lv_obj_t * ui_Temperature;
extern lv_obj_t * ui_TempLabel;
extern lv_obj_t * ui_Humidity;
extern lv_obj_t * ui_HumLabel;
extern lv_obj_t * ui_SoilpH;
extern lv_obj_t * ui_pHLabel;
extern lv_obj_t * ui_SoilMoisture;
extern lv_obj_t * ui_MoisLabel;
extern lv_obj_t * ui_LightIntensity;
extern lv_obj_t * ui_LuxLabel;
extern lv_obj_t * ui_TempData;
extern lv_obj_t * ui_HumData;
extern lv_obj_t * ui_pHData;
extern lv_obj_t * ui_MoisData;
extern lv_obj_t * ui_LuxData;
void ui_event_Switch3(lv_event_t * e);
extern lv_obj_t * ui_Switch3;
// SCREEN: ui_Plant_2
void ui_Plant_2_screen_init(void);
extern lv_obj_t * ui_Plant_2;
extern lv_obj_t * ui_TitleP2;
void ui_event_ChoosePlantP2(lv_event_t * e);
extern lv_obj_t * ui_ChoosePlantP2;
extern lv_obj_t * ui_CPLabel2;
extern lv_obj_t * ui_P1Display1;
extern lv_obj_t * ui_Temperature1;
extern lv_obj_t * ui_TempLabel1;
extern lv_obj_t * ui_Humidity1;
extern lv_obj_t * ui_HumLabel1;
extern lv_obj_t * ui_SoilpH1;
extern lv_obj_t * ui_pHLabel1;
extern lv_obj_t * ui_SoilMoisture1;
extern lv_obj_t * ui_MoisLabel1;
extern lv_obj_t * ui_LightIntensity1;
extern lv_obj_t * ui_LuxLabel1;
extern lv_obj_t * ui_TempData1;
extern lv_obj_t * ui_HumData1;
extern lv_obj_t * ui_pHData1;
extern lv_obj_t * ui_MoisData1;
extern lv_obj_t * ui_LuxData1;
// SCREEN: ui_Plant_3
void ui_Plant_3_screen_init(void);
extern lv_obj_t * ui_Plant_3;
extern lv_obj_t * ui_TitleP3;
void ui_event_ChoosePlantP3(lv_event_t * e);
extern lv_obj_t * ui_ChoosePlantP3;
extern lv_obj_t * ui_CPLabel3;
extern lv_obj_t * ui_P1Display2;
extern lv_obj_t * ui_Temperature2;
extern lv_obj_t * ui_TempLabel2;
extern lv_obj_t * ui_Humidity2;
extern lv_obj_t * ui_HumLabel2;
extern lv_obj_t * ui_SoilpH2;
extern lv_obj_t * ui_pHLabel2;
extern lv_obj_t * ui_SoilMoisture2;
extern lv_obj_t * ui_MoisLabel2;
extern lv_obj_t * ui_LightIntensity2;
extern lv_obj_t * ui_LuxLabel2;
extern lv_obj_t * ui_TempData2;
extern lv_obj_t * ui_HumData2;
extern lv_obj_t * ui_pHData2;
extern lv_obj_t * ui_MoisData2;
extern lv_obj_t * ui_LuxData2;
extern lv_obj_t * ui____initial_actions0;








void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
