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

#define CMD_LEVEL_FB 'L'

#define CMD_LED_COLOR 'e'
#define CMD_LED_COLOR_FB 'E'

// 3rd byte: modifier or index as char
#define MOD_LEFT 'l'
#define MOD_MIDDLE 'm'
#define MOD_RIGHT 'r'
#define MOD_NONE 'x'

#define MOD_LED_DASHBOARD 'd'
#define MOD_LED_FINS 'f'
#define MOD_LED_CABLE_HOLDER 'c'

#define CMD_FORWARD 'f'
#define CMD_BACKWARD 'b'

#define INDEX_TO_LOCATION_MOD(index)        										\
(                                       											\
  ((index==0)?MOD_LEFT:(index==1)?MOD_MIDDLE:(index==2)?MOD_RIGHT:MOD_NONE)			\
)

#define LOCATION_MOD_TO_INDEX(loc)        										\
(                                       										\
  ((loc==MOD_LEFT)?0:(loc==MOD_MIDDLE)?1:(loc==MOD_RIGHT)?2:-1)					\
)

// 4th param: (value as char)
