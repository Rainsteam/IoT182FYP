SET(SOURCES screens/ui_Home.c
    screens/ui_Plant_1.c
    screens/ui_Plant_2.c
    screens/ui_Plant_3.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    ui_events.c)

add_library(ui ${SOURCES})
