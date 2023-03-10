/**
 * Menus
 */
#define MENU_MODE_ROOT 0

#define MENU_MODE_R1_MINUTES 1
#define MENU_MODE_R1_SECONDS 2
#define MENU_MODE_R1_RPM 3

#define MENU_MODE_R2_MINUTES 4
#define MENU_MODE_R2_SECONDS 5
#define MENU_MODE_R2_RPM 6

#define MENU_MODE_R3_MINUTES 7
#define MENU_MODE_R3_SECONDS 8
#define MENU_MODE_R3_RPM 9

#define MENU_MODE_R4_MINUTES 10
#define MENU_MODE_R4_SECONDS 11
#define MENU_MODE_R4_RPM 12

#define MENU_MODE_TIMER_MINUTES 13
#define MENU_MODE_TIMER_SECONDS 14

#define MENU_MODE_PRESETS 15

#define MENU_MODE_SETTINGS 16
#define MENU_MODE_SETTINGS_PRESET1 17
#define MENU_MODE_SETTINGS_PRESET2 18
#define MENU_MODE_SETTINGS_PRESET3 19
#define MENU_MODE_SETTINGS_PRESET4 20
#define MENU_MODE_SETTINGS_PRESET5 21
#define MENU_MODE_SETTINGS_PRESETX_MODE 22
#define MENU_MODE_SETTINGS_PRESETX_MINUTES 23
#define MENU_MODE_SETTINGS_PRESETX_SECONDS 24 
#define MENU_MODE_SETTINGS_PRESETX_SPEED 25

#define MENU_MODE_ABOUT 26

#define MENU_ROOT_SIZE 8

#define MENU_ROOT_R1 0
#define MENU_ROOT_R2 1
#define MENU_ROOT_R3 2
#define MENU_ROOT_R4 3
#define MENU_ROOT_TIMER 4
#define MENU_ROOT_PRESETS 5
#define MENU_ROOT_SETTINGS 6
#define MENU_ROOT_ABOUT 7

#define MENU_SETTINGS_TANK 0
#define MENU_SETTINGS_SOUND 1
#define MENU_SETTINGS_PRESET1 2
#define MENU_SETTINGS_PRESET2 3
#define MENU_SETTINGS_PRESET3 4
#define MENU_SETTINGS_PRESET4 5
#define MENU_SETTINGS_PRESET5 6

#if (DEMO_AVAILABLE == 1)
  #define MENU_SETTINGS_DEMO 7
  #define MENU_SETTINGS_SAVE 8
  #define MENU_SETTINGS_CANCEL 9
  #define MENU_SETTINGS_SIZE 10
#else
  #define MENU_SETTINGS_SAVE 7
  #define MENU_SETTINGS_CANCEL 8
  #define MENU_SETTINGS_SIZE 9
#endif


#define PRESETS_COUNT 5
#define PRESETS_SETTINGS_COUNT 4

const String menuRoot[MENU_ROOT_SIZE] = {"Easy Mode", "Continuous", "Oscilate", "Progress", "Timer Only", "Presets", "Settings", "About"};
#if (DEMO_AVAILABLE == 1)
  const String menuSettings[MENU_SETTINGS_SIZE] = {"Tank: ", "Sound: ", "P1", "P2", "P3", "P4", "P5", "Demo mode: ", "Save", "Cancel"};
#else
  const String menuSettings[MENU_SETTINGS_SIZE] = {"Tank: ", "Sound: ", "P1", "P2", "P3", "P4", "P5", "Save", "Cancel"};
#endif  

#define ICON_EASY 0
#define ICON_CONTINUOUS 1
#define ICON_OSCILATE 2
#define ICON_PROGRESS 3
#define ICON_TIMER 4
#define ICON_PRESETS 5
#define ICON_SETTINGS 6
#define ICON_HEART 7
#define ICON_SOUND 8
#define ICON_TANK 9
#define ICON_OK 10
#define ICON_CANCEL 11

const static unsigned char menuIcons[12][128] PROGMEM  = {
  // Easy Mode 0
  {
    0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x00, 0x80, 0xff, 0x1f,
    0x00, 0x20, 0xf0, 0x41, 0x00, 0x20, 0xf0, 0x81, 0x00, 0x60, 0x40, 0xc0,
    0x00, 0xa0, 0x01, 0x9c, 0x00, 0x20, 0xfc, 0x81, 0xfe, 0xfb, 0x07, 0x80,
    0xfe, 0xff, 0x07, 0x80, 0x09, 0xa5, 0x06, 0x80, 0xfb, 0xfd, 0x46, 0x80,
    0xfe, 0xff, 0x07, 0x80, 0xff, 0xff, 0x47, 0x82, 0xfe, 0xff, 0x87, 0x80,
    0xff, 0xff, 0x07, 0x82, 0xfe, 0xff, 0x87, 0x80, 0xfe, 0xff, 0x07, 0x82,
    0x00, 0xfe, 0x87, 0x80, 0x00, 0xfc, 0x07, 0x82, 0x00, 0xf8, 0x87, 0x80,
    0x00, 0xf8, 0x07, 0x82, 0x00, 0xf0, 0x87, 0x80, 0x00, 0xf0, 0x07, 0x82,
    0x00, 0xf0, 0x87, 0x80, 0x00, 0xb0, 0x06, 0x82, 0x00, 0xb0, 0x86, 0x80,
    0x00, 0xe0, 0x07, 0x80, 0x00, 0x20, 0x84, 0x80, 0x00, 0x20, 0x04, 0x80,
    0x00, 0xc0, 0x0c, 0x30, 0x00, 0x00, 0x5a, 0x07
  },
  // Continuous 1
  {
    0x00, 0xf0, 0x0f, 0x00, 0x00, 0xfe, 0x7f, 0xc0, 0x80, 0xff, 0xff, 0xe0,
    0xc0, 0xff, 0xff, 0xf3, 0xe0, 0x0f, 0xf8, 0xff, 0xf0, 0x03, 0xc0, 0xff,
    0xf8, 0x01, 0x80, 0xff, 0x7c, 0x00, 0x00, 0xff, 0x7c, 0x00, 0x80, 0xff,
    0x3e, 0x00, 0xc0, 0xff, 0x1e, 0x00, 0xe0, 0xff, 0x1e, 0x00, 0xf0, 0xff,
    0x0f, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00,
    0x0f, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00,
    0x0f, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00,
    0x1e, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00,
    0x7c, 0x00, 0x00, 0x00, 0xf8, 0x01, 0x80, 0x01, 0xf0, 0x03, 0xc0, 0x03,
    0xe0, 0x1f, 0xf8, 0x07, 0xc0, 0xff, 0xff, 0x03, 0x80, 0xff, 0xff, 0x01,
    0x00, 0xfe, 0x7f, 0x00, 0x00, 0xf0, 0x0f, 0x00
  },
  // Oscilate 2
  {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x1f,
    0xff, 0xff, 0xff, 0x3f, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0x7f,
    0xff, 0xff, 0xff, 0x3f, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x07,
    0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x80, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00,
    0xf8, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff,
    0xfe, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00,
    0xe0, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  },
  // Progress 3
  {
    0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x7c,
    0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x80, 0x3f,
    0x00, 0x00, 0xc0, 0x1f, 0x00, 0x00, 0xe0, 0x0f, 0x00, 0x00, 0xf0, 0x07,
    0x00, 0x18, 0xf8, 0x03, 0x00, 0x3c, 0xfc, 0x01, 0x00, 0x7e, 0xfe, 0x00,
    0x00, 0xff, 0x7f, 0x00, 0x80, 0xff, 0x3f, 0x00, 0xc0, 0xff, 0x1f, 0x00,
    0xe0, 0xff, 0x0f, 0x00, 0xf0, 0xe7, 0x07, 0x00, 0xf8, 0xc3, 0x03, 0x00,
    0xfc, 0x83, 0x01, 0x00, 0xfe, 0x01, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00,
    0x7e, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
  },
  // Timer 4
  {
    0x00, 0xf0, 0x0f, 0x00, 0x00, 0xfe, 0x7f, 0x00, 0x80, 0xff, 0xff, 0x01,
    0xc0, 0xff, 0xff, 0x03, 0xe0, 0x1f, 0xf8, 0x07, 0xf0, 0x03, 0xc0, 0x0f,
    0xf8, 0x01, 0x80, 0x1f, 0xfc, 0x00, 0x00, 0x3f, 0x7c, 0xc0, 0x03, 0x3e,
    0x3e, 0xc0, 0x03, 0x7c, 0x1e, 0xc0, 0x03, 0x78, 0x1e, 0xc0, 0x03, 0x78,
    0x1f, 0xc0, 0x03, 0xf8, 0x0f, 0xc0, 0x03, 0xf0, 0x0f, 0xc0, 0x03, 0xf0,
    0x0f, 0xc0, 0x03, 0xf0, 0x0f, 0xc0, 0x07, 0xf0, 0x0f, 0x80, 0x0f, 0xf0,
    0x0f, 0x00, 0x0f, 0xf0, 0x1f, 0x00, 0x06, 0xf8, 0x1e, 0x00, 0x00, 0x78,
    0x1e, 0x00, 0x00, 0x78, 0x3e, 0x00, 0x00, 0x7c, 0x7c, 0x00, 0x00, 0x3e,
    0xfc, 0x00, 0x00, 0x3f, 0xf8, 0x01, 0x80, 0x1f, 0xf0, 0x03, 0xc0, 0x0f,
    0xe0, 0x1f, 0xf8, 0x07, 0xc0, 0xff, 0xff, 0x03, 0x80, 0xff, 0xff, 0x01,
    0x00, 0xfe, 0x7f, 0x00, 0x00, 0xf0, 0x0f, 0x00
  },
  // Presets 5
  {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0xff, 0xff, 0xff,
    0x0f, 0xff, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xff, 0x06, 0xff, 0xff, 0xff,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x06, 0xff, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xff,
    0x0f, 0xff, 0xff, 0xff, 0x06, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x06, 0xff, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xff,
    0x06, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0xff, 0xff, 0xff,
    0x0f, 0xff, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xff, 0x06, 0xff, 0xff, 0xff,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  },
  // Settings 6
  {
    0x00, 0xc0, 0x03, 0x00, 0x00, 0xe0, 0x07, 0x00, 0x00, 0xe0, 0x07, 0x00,
    0x40, 0xe0, 0x07, 0x02, 0xe0, 0xf1, 0x8f, 0x07, 0xf0, 0xff, 0xff, 0x0f,
    0xf8, 0xff, 0xff, 0x1f, 0xf0, 0xff, 0xff, 0x0f, 0xf0, 0xff, 0xff, 0x0f,
    0xe0, 0xff, 0xff, 0x07, 0xe0, 0x3f, 0xfc, 0x07, 0xe0, 0x0f, 0xf0, 0x07,
    0xf0, 0x07, 0xe0, 0x0f, 0xfe, 0x07, 0xe0, 0x7f, 0xff, 0x03, 0xc0, 0xff,
    0xff, 0x03, 0xc0, 0xff, 0xff, 0x03, 0xc0, 0xff, 0xff, 0x03, 0xc0, 0xff,
    0xfe, 0x07, 0xe0, 0x7f, 0xf8, 0x07, 0xe0, 0x1f, 0xe0, 0x0f, 0xf0, 0x07,
    0xe0, 0x3f, 0xfc, 0x07, 0xe0, 0xff, 0xff, 0x07, 0xf0, 0xff, 0xff, 0x0f,
    0xf0, 0xff, 0xff, 0x0f, 0xf8, 0xff, 0xff, 0x1f, 0xf0, 0xff, 0xff, 0x0f,
    0xe0, 0xf1, 0x8f, 0x07, 0x40, 0xe0, 0x07, 0x02, 0x00, 0xe0, 0x07, 0x00,
    0x00, 0xe0, 0x07, 0x00, 0x00, 0xc0, 0x03, 0x00
  },
  // Heart/About 7
  {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xe0, 0x07, 0xe0, 0x07, 0xf8, 0x1f, 0xf8, 0x1f,
    0xfc, 0x3f, 0xfc, 0x3f, 0xfe, 0x7f, 0xfe, 0x7f, 0xfe, 0x7f, 0xfe, 0x7f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfe, 0xff, 0xff, 0x7f, 0xfe, 0xff, 0xff, 0x7f, 0xfc, 0xff, 0xff, 0x3f,
    0xf8, 0xff, 0xff, 0x1f, 0xf0, 0xff, 0xff, 0x0f, 0xe0, 0xff, 0xff, 0x07,
    0xc0, 0xff, 0xff, 0x03, 0x80, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x00,
    0x00, 0xfe, 0x7f, 0x00, 0x00, 0xfc, 0x3f, 0x00, 0x00, 0xf8, 0x1f, 0x00,
    0x00, 0xf0, 0x0f, 0x00, 0x00, 0xe0, 0x07, 0x00, 0x00, 0xc0, 0x03, 0x00,
    0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00
  },
  // Sound 8
  {
    0x00, 0x00, 0xe0, 0xff, 0x00, 0x80, 0xff, 0xff, 0x00, 0xf8, 0xff, 0xff,
    0x00, 0xfe, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff,
    0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0x1f, 0xf0,
    0x00, 0x3f, 0x00, 0xf0, 0x00, 0x0f, 0x00, 0xf0, 0x00, 0x0f, 0x00, 0xf0,
    0x00, 0x0f, 0x00, 0xf0, 0x00, 0x0f, 0x00, 0xf0, 0x00, 0x0f, 0x00, 0xf0,
    0x00, 0x0f, 0x00, 0xf0, 0x00, 0x0f, 0x00, 0xff, 0x00, 0x0f, 0xc0, 0xff,
    0x00, 0x0f, 0xe0, 0xff, 0x00, 0x0f, 0xe0, 0xff, 0xf0, 0x0f, 0xf0, 0xff,
    0xfc, 0x0f, 0xf0, 0xff, 0xfe, 0x0f, 0xf0, 0xff, 0xfe, 0x0f, 0xf0, 0xff,
    0xff, 0x0f, 0xe0, 0x7f, 0xff, 0x0f, 0xe0, 0x7f, 0xff, 0x0f, 0xc0, 0x3f,
    0xff, 0x0f, 0x00, 0x0f, 0xfe, 0x07, 0x00, 0x00, 0xfe, 0x07, 0x00, 0x00,
    0xfc, 0x03, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00
  },
  // Tank 9
  {
    0x00, 0xd4, 0x2a, 0x00, 0x00, 0xdf, 0xff, 0x00, 0x00, 0xf5, 0x5b, 0x00,
    0x00, 0xdd, 0xff, 0x00, 0x00, 0xfe, 0x7f, 0x00, 0x00, 0xff, 0x7f, 0x00,
    0x00, 0xff, 0xff, 0x01, 0xc0, 0xff, 0xff, 0x03, 0x40, 0xff, 0xff, 0x02,
    0xc0, 0xea, 0xbf, 0x03, 0x40, 0x7f, 0x6b, 0x01, 0x80, 0xea, 0xdf, 0x03,
    0xc0, 0xfe, 0xbf, 0x02, 0x80, 0xda, 0xf6, 0x00, 0x00, 0xff, 0xbf, 0x00,
    0x00, 0xf7, 0xff, 0x00, 0x00, 0xfb, 0xef, 0x00, 0x00, 0xf7, 0xff, 0x00,
    0x00, 0xfb, 0xff, 0x00, 0x00, 0xf3, 0xff, 0x00, 0x00, 0xfb, 0xff, 0x00,
    0x00, 0xfb, 0xff, 0x00, 0x00, 0xf7, 0xff, 0x00, 0x00, 0xf7, 0xff, 0x00,
    0x00, 0xfb, 0xff, 0x00, 0x00, 0xfb, 0xff, 0x00, 0x00, 0xeb, 0xff, 0x00,
    0x00, 0xeb, 0xff, 0x00, 0x00, 0xeb, 0xff, 0x00, 0x00, 0xea, 0x7f, 0x00,
    0x00, 0xec, 0x3f, 0x00, 0x00, 0xd0, 0x05, 0x00
  },
  // OK 10
  {
    0x00, 0xf0, 0x0f, 0x00, 0x00, 0xfe, 0x7f, 0x00, 0x80, 0xff, 0xff, 0x01,
    0xc0, 0xff, 0xff, 0x03, 0xe0, 0xff, 0xff, 0x07, 0xf0, 0xff, 0xff, 0x0f,
    0xf8, 0xff, 0xff, 0x1f, 0xfc, 0xff, 0xff, 0x3f, 0xfc, 0xff, 0x7f, 0x3e,
    0xfe, 0xff, 0x3f, 0x7c, 0xfe, 0xff, 0x1f, 0x7c, 0xfe, 0xff, 0x0f, 0x7e,
    0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x83, 0xff, 0xff, 0xf9, 0xc1, 0xff,
    0xff, 0xf0, 0xe0, 0xff, 0xff, 0x60, 0xf0, 0xff, 0xff, 0x01, 0xf8, 0xff,
    0xff, 0x03, 0xfc, 0xff, 0xff, 0x07, 0xfe, 0xff, 0xfe, 0x0f, 0xff, 0x7f,
    0xfe, 0x9f, 0xff, 0x7f, 0xfe, 0xff, 0xff, 0x7f, 0xfc, 0xff, 0xff, 0x3f,
    0xfc, 0xff, 0xff, 0x3f, 0xf8, 0xff, 0xff, 0x1f, 0xf0, 0xff, 0xff, 0x0f,
    0xe0, 0xff, 0xff, 0x07, 0xc0, 0xff, 0xff, 0x03, 0x80, 0xff, 0xff, 0x01,
    0x00, 0xfe, 0x7f, 0x00, 0x00, 0xf0, 0x0f, 0x00
  },
  // Cancel 11
  {
    0x00, 0xf0, 0x0f, 0x00, 0x00, 0xfe, 0x7f, 0x00, 0x80, 0xff, 0xff, 0x01,
    0xc0, 0xff, 0xff, 0x03, 0xe0, 0xff, 0xff, 0x07, 0xf0, 0xff, 0xff, 0x0f,
    0xf8, 0xff, 0xff, 0x1f, 0xfc, 0xff, 0xff, 0x3f, 0xfc, 0xf9, 0x9f, 0x3f,
    0xfe, 0xf0, 0x0f, 0x7f, 0xfe, 0xe0, 0x07, 0x7f, 0xfe, 0xc1, 0x83, 0x7f,
    0xff, 0x83, 0xc1, 0xff, 0xff, 0x07, 0xe0, 0xff, 0xff, 0x0f, 0xf0, 0xff,
    0xff, 0x1f, 0xf8, 0xff, 0xff, 0x1f, 0xf8, 0xff, 0xff, 0x0f, 0xf0, 0xff,
    0xff, 0x07, 0xe0, 0xff, 0xff, 0x83, 0xc1, 0xff, 0xfe, 0xc1, 0x83, 0x7f,
    0xfe, 0xe0, 0x07, 0x7f, 0xfe, 0xf0, 0x0f, 0x7f, 0xfc, 0xf9, 0x9f, 0x3f,
    0xfc, 0xff, 0xff, 0x3f, 0xf8, 0xff, 0xff, 0x1f, 0xf0, 0xff, 0xff, 0x0f,
    0xe0, 0xff, 0xff, 0x07, 0xc0, 0xff, 0xff, 0x03, 0x80, 0xff, 0xff, 0x01,
    0x00, 0xfe, 0x7f, 0x00, 0x00, 0xf0, 0x0f, 0x00
  }
};

const static unsigned char smallIcons[5][24] PROGMEM  = {
  // easy
  {
    0x80, 0x03, 0xe0, 0x0f, 0x3f, 0x08, 0x21, 0x08, 0x21, 0x08, 0x21, 0x08,
    0x21, 0x08, 0x27, 0x08, 0x2c, 0x08, 0x28, 0x08, 0x38, 0x08, 0xe0, 0x0f
  },
  // continuous
  { 
    0xf0, 0x00, 0xdc, 0x0f, 0x06, 0x0e, 0x02, 0x0f, 0x03, 0x0a, 0x01, 0x00,
    0x03, 0x00, 0x03, 0x00, 0x02, 0x00, 0x06, 0x00, 0xdc, 0x03, 0xf0, 0x00 
  },
  // oscilate
  {
    0x00, 0x00, 0x54, 0x07, 0xff, 0x07, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x56, 0x05, 0xfe, 0x0f, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00
  },
  // progress
  {
    0x00, 0x04, 0x00, 0x0e, 0x00, 0x07, 0x80, 0x03, 0xf8, 0x01, 0xfc, 0x00,
    0x6e, 0x00, 0x07, 0x00, 0x02, 0x00, 0x00, 0x00, 0xaa, 0x0a, 0xff, 0x0f
  },
  // timer
  {
    0xf0, 0x00, 0x0c, 0x03, 0x62, 0x04, 0x62, 0x04, 0x61, 0x08, 0x61, 0x08,
    0xe1, 0x08, 0xc1, 0x09, 0x82, 0x05, 0x02, 0x04, 0x0c, 0x03, 0xf0, 0x00 
  }
};
