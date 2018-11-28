#define SERIAL_SPEED 115200

#define LEVEL_COUNT 3

#define FAN_SPEED_MAX 9
#define FAN_SPEED_MIN 0

#define MM_COUNT 3

#define LED_STRIP_COUNT 7

#define LED_COUNT_DASHBOARD 144
#define LED_COUNT_FINS 60					// 2 x 30
#define LED_COUNT_CABLE_HOLDER 144			// 2 x 72
#define LED_COUNT_HEADLIGHTS_LEFT 58
#define LED_COUNT_HEADLIGHTS_RIGHT LED_COUNT_HEADLIGHTS_LEFT
#define LED_COUNT_HEADLIGHTS_AMB 112		// 2 x 56
#define LED_COUNT_MIDDLE_STRIP 67

#define LED_DEFAULT_BRIGHTNESS 128

#define LED_BRIGHTNESS_DASHBOARD LED_DEFAULT_BRIGHTNESS
#define LED_BRIGHTNESS_FINS LED_DEFAULT_BRIGHTNESS
#define LED_BRIGHTNESS_CABLE_HOLDER LED_DEFAULT_BRIGHTNESS
#define LED_BRIGHTNESS_HEADLIGHTS_LEFT LED_DEFAULT_BRIGHTNESS
#define LED_BRIGHTNESS_HEADLIGHTS_RIGHT LED_DEFAULT_BRIGHTNESS
#define LED_BRIGHTNESS_HEADLIGHTS_AMB LED_DEFAULT_BRIGHTNESS
#define LED_BRIGHTNESS_MIDDLE_STRIP 255


#define COLOR_COUNT 2
#define LED_COLOR_0 CRGB::DarkRed
#define LED_COLOR_1 CRGB::Red
