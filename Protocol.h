#define DATA_PACKAGE_SIZE 4

// 1st byte: identifier
#define CMD_IDENTIFIER '@'

// 2nd byte: command, capital: feedback going up
#define CMD_PING 'p'
#define CMD_PING_FB 'P'

#define CMD_VAPO 'v'
#define CMD_VAPO_FB 'V'
#define CMD_MM_FB 'M'

#define CMD_FAN 'f'
#define CMD_FAN_FB 'F'

#define CMD_SEAT 's'
#define CMD_SEAT_POS_FB 'S'
#define CMD_SEAT_SWITCH_FB 'W'
#define CMD_SEAT_MOVE_FB 'O'

#define CMD_LEVEL_FB 'L'

#define CMD_LED_COLOR 'e'
#define CMD_LED_COLOR_FB 'E'

#define CMD_LED_BRIGHTNESS 'b'
#define CMD_LED_BRIGHTNESS_FB 'B'

// 3rd byte: modifier or index as char
#define MOD_NONE 'x'
#define MOD_ERROR 'e'

#define MOD_LEFT 'l'
#define MOD_MIDDLE 'm'
#define MOD_RIGHT 'r'

#define MOD_LED_DASHBOARD 'd'
#define MOD_LED_FINS 'f'
#define MOD_LED_CABLE_HOLDER 'c'
#define MOD_LED_HEADLIGHTS 'h'
#define MOD_LED_HEADLIGHTS_AMB 'a'
#define MOD_LED_MIDDLE_STRIP 'm'

#define MOD_STOP 's'
#define MOD_FORWARD 'f'
#define MOD_BACKWARD 'b'

#define INDEX_TO_LOCATION_MOD(index)        										\
(                                       											\
  ((index==0)?MOD_LEFT:(index==1)?MOD_MIDDLE:(index==2)?MOD_RIGHT:MOD_ERROR)			\
)

#define LOCATION_MOD_TO_INDEX(loc)        										\
(                                       										\
  ((loc==MOD_LEFT)?0:(loc==MOD_MIDDLE)?1:(loc==MOD_RIGHT)?2:-1)					\
)

#define INDEX_TO_LED_MOD(index)        																		\
(                                       																	\
  ((index==0)?MOD_LED_DASHBOARD:(index==1)?MOD_LED_FINS:(index==2)?MOD_LED_CABLE_HOLDER:(index==3)?MOD_LED_HEADLIGHTS:(index==4)?MOD_LED_HEADLIGHTS_AMB:(index==5)?MOD_LED_MIDDLE_STRIP:MOD_ERROR)			\
)

#define SEAT_POS_TO_STRING(pos)        																		\
(                                       																	\
  ((pos==0)?F("Moving"):(pos==1)?F("Forward"):(pos==2)?F("Backward"):F("Unknown"))			\
)

#define SEAT_MOVE_TO_STRING(pos)        																		\
(                                       																	\
  ((pos==0)?F("Stop"):(pos==1)?F("Forward"):(pos==2)?F("Backward"):(pos==3)?F("Error"):F("Unknown"))			\
)

// 4th param: (value as char)
