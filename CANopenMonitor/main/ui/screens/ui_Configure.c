// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.11
// Project name: CANopenMonitor

#include "../ui.h"

void ui_Configure_screen_init(void)
{
    ui_Configure = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Configure, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    ui_object_set_themeable_style_property(ui_Configure, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_ColorThree);
    ui_object_set_themeable_style_property(ui_Configure, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_ColorThree);

    ui_Configure_Container_Header = lv_obj_create(ui_Configure);
    lv_obj_remove_style_all(ui_Configure_Container_Header);
    lv_obj_set_height(ui_Configure_Container_Header, 35);
    lv_obj_set_width(ui_Configure_Container_Header, lv_pct(100));
    lv_obj_set_align(ui_Configure_Container_Header, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Configure_Container_Header, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    ui_object_set_themeable_style_property(ui_Configure_Container_Header, LV_PART_MAIN | LV_STATE_DEFAULT,
                                           LV_STYLE_BG_COLOR, _ui_theme_color_ColorFive);
    ui_object_set_themeable_style_property(ui_Configure_Container_Header, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_ColorFive);

    ui_Configure_Label_Label2 = lv_label_create(ui_Configure_Container_Header);
    lv_obj_set_width(ui_Configure_Label_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Configure_Label_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Configure_Label_Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Configure_Label_Label2, "CONFIGURE");
    lv_obj_set_style_text_color(ui_Configure_Label_Label2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Configure_Label_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Configure_Label_Label2, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Configure_Button_Connect = lv_btn_create(ui_Configure);
    lv_obj_set_height(ui_Configure_Button_Connect, 60);
    lv_obj_set_width(ui_Configure_Button_Connect, lv_pct(100));
    lv_obj_set_align(ui_Configure_Button_Connect, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_Configure_Button_Connect, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Configure_Button_Connect, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Configure_Button_Connect, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    ui_object_set_themeable_style_property(ui_Configure_Button_Connect, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_ColorTwo);
    ui_object_set_themeable_style_property(ui_Configure_Button_Connect, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_ColorTwo);

    ui_Configure_Label_Label3 = lv_label_create(ui_Configure_Button_Connect);
    lv_obj_set_width(ui_Configure_Label_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Configure_Label_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Configure_Label_Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Configure_Label_Label3, "CONNECT");
    lv_obj_set_style_text_color(ui_Configure_Label_Label3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Configure_Label_Label3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Configure_Label_Label3, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Configure_Label_Label4 = lv_label_create(ui_Configure);
    lv_obj_set_width(ui_Configure_Label_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Configure_Label_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Configure_Label_Label4, -68);
    lv_obj_set_y(ui_Configure_Label_Label4, -53);
    lv_obj_set_align(ui_Configure_Label_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Configure_Label_Label4, "BIT RATE");
    lv_obj_set_style_text_color(ui_Configure_Label_Label4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Configure_Label_Label4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Configure_Label_Label4, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Configure_Roller_Roller1 = lv_roller_create(ui_Configure);
    lv_roller_set_options(ui_Configure_Roller_Roller1, "1Mbps\n800kbps\n500kbps\n250kbps\n125kbps", LV_ROLLER_MODE_NORMAL);
    lv_obj_set_width(ui_Configure_Roller_Roller1, 120);
    lv_obj_set_height(ui_Configure_Roller_Roller1, 100);
    lv_obj_set_x(ui_Configure_Roller_Roller1, 47);
    lv_obj_set_y(ui_Configure_Roller_Roller1, -53);
    lv_obj_set_align(ui_Configure_Roller_Roller1, LV_ALIGN_CENTER);
    lv_obj_set_style_text_font(ui_Configure_Roller_Roller1, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_object_set_themeable_style_property(ui_Configure_Roller_Roller1, LV_PART_SELECTED | LV_STATE_DEFAULT,
                                           LV_STYLE_BG_COLOR, _ui_theme_color_ColorTwo);
    ui_object_set_themeable_style_property(ui_Configure_Roller_Roller1, LV_PART_SELECTED | LV_STATE_DEFAULT,
                                           LV_STYLE_BG_OPA, _ui_theme_alpha_ColorTwo);

    ui_Configure_Label_Label5 = lv_label_create(ui_Configure);
    lv_obj_set_width(ui_Configure_Label_Label5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Configure_Label_Label5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Configure_Label_Label5, -55);
    lv_obj_set_y(ui_Configure_Label_Label5, -144);
    lv_obj_set_align(ui_Configure_Label_Label5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Configure_Label_Label5, "NODE");
    lv_obj_set_style_text_color(ui_Configure_Label_Label5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Configure_Label_Label5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Configure_Label_Label5, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Configure_Dropdown_Dropdown1 = lv_dropdown_create(ui_Configure);
    lv_dropdown_set_options(ui_Configure_Dropdown_Dropdown1, "1\n2\n3\n4\n5\n6\n7\n8\n9\n10");
    lv_obj_set_width(ui_Configure_Dropdown_Dropdown1, 120);
    lv_obj_set_height(ui_Configure_Dropdown_Dropdown1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Configure_Dropdown_Dropdown1, 47);
    lv_obj_set_y(ui_Configure_Dropdown_Dropdown1, -145);
    lv_obj_set_align(ui_Configure_Dropdown_Dropdown1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Configure_Dropdown_Dropdown1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_set_style_text_font(ui_Configure_Dropdown_Dropdown1, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_text_font(ui_Configure_Dropdown_Dropdown1, &lv_font_montserrat_18,
                               LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_text_font(lv_dropdown_get_list(ui_Configure_Dropdown_Dropdown1), &lv_font_montserrat_18,
                               LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Configure_Button_Connect, ui_event_Configure_Button_Connect, LV_EVENT_ALL, NULL);

}
