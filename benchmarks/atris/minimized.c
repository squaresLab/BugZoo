typedef unsigned int size_t;

typedef long long __quad_t;

typedef long __off_t;

typedef __quad_t __off64_t;

struct _IO_FILE;

struct _IO_FILE;

struct _IO_FILE;

typedef struct _IO_FILE FILE;

typedef void _IO_lock_t;

struct _IO_marker {
   struct _IO_marker *_next ;
   struct _IO_FILE *_sbuf ;
   int _pos ;
};

struct _IO_FILE {
   int _flags ;
   char *_IO_read_ptr ;
   char *_IO_read_end ;
   char *_IO_read_base ;
   char *_IO_write_base ;
   char *_IO_write_ptr ;
   char *_IO_write_end ;
   char *_IO_buf_base ;
   char *_IO_buf_end ;
   char *_IO_save_base ;
   char *_IO_backup_base ;
   char *_IO_save_end ;
   struct _IO_marker *_markers ;
   struct _IO_FILE *_chain ;
   int _fileno ;
   int _flags2 ;
   __off_t _old_offset ;
   unsigned short _cur_column ;
   signed char _vtable_offset ;
   char _shortbuf[1] ;
   _IO_lock_t *_lock ;
   __off64_t _offset ;
   void *__pad1 ;
   void *__pad2 ;
   void *__pad3 ;
   void *__pad4 ;
   size_t __pad5 ;
   int _mode ;
   char _unused2[(15U * sizeof(int ) - 4U * sizeof(void *)) - sizeof(size_t )] ;
};

typedef short int16_t;

typedef unsigned char uint8_t;

typedef unsigned short uint16_t;

typedef unsigned int uint32_t;

typedef uint8_t Uint8;

typedef int16_t Sint16;

typedef uint16_t Uint16;

typedef uint32_t Uint32;

struct SDL_AudioSpec {
   int freq ;
   Uint16 format ;
   Uint8 channels ;
   Uint8 silence ;
   Uint16 samples ;
   Uint16 padding ;
   Uint32 size ;
   void (*callback)(void *userdata , Uint8 *stream , int len ) ;
   void *userdata ;
};

typedef struct SDL_AudioSpec SDL_AudioSpec;

enum __anonenum_SDLKey_43 {
    SDLK_UNKNOWN = 0,
    SDLK_FIRST = 0,
    SDLK_BACKSPACE = 8,
    SDLK_TAB = 9,
    SDLK_CLEAR = 12,
    SDLK_RETURN = 13,
    SDLK_PAUSE = 19,
    SDLK_ESCAPE = 27,
    SDLK_SPACE = 32,
    SDLK_EXCLAIM = 33,
    SDLK_QUOTEDBL = 34,
    SDLK_HASH = 35,
    SDLK_DOLLAR = 36,
    SDLK_AMPERSAND = 38,
    SDLK_QUOTE = 39,
    SDLK_LEFTPAREN = 40,
    SDLK_RIGHTPAREN = 41,
    SDLK_ASTERISK = 42,
    SDLK_PLUS = 43,
    SDLK_COMMA = 44,
    SDLK_MINUS = 45,
    SDLK_PERIOD = 46,
    SDLK_SLASH = 47,
    SDLK_0 = 48,
    SDLK_1 = 49,
    SDLK_2 = 50,
    SDLK_3 = 51,
    SDLK_4 = 52,
    SDLK_5 = 53,
    SDLK_6 = 54,
    SDLK_7 = 55,
    SDLK_8 = 56,
    SDLK_9 = 57,
    SDLK_COLON = 58,
    SDLK_SEMICOLON = 59,
    SDLK_LESS = 60,
    SDLK_EQUALS = 61,
    SDLK_GREATER = 62,
    SDLK_QUESTION = 63,
    SDLK_AT = 64,
    SDLK_LEFTBRACKET = 91,
    SDLK_BACKSLASH = 92,
    SDLK_RIGHTBRACKET = 93,
    SDLK_CARET = 94,
    SDLK_UNDERSCORE = 95,
    SDLK_BACKQUOTE = 96,
    SDLK_a = 97,
    SDLK_b = 98,
    SDLK_c = 99,
    SDLK_d = 100,
    SDLK_e = 101,
    SDLK_f = 102,
    SDLK_g = 103,
    SDLK_h = 104,
    SDLK_i = 105,
    SDLK_j = 106,
    SDLK_k = 107,
    SDLK_l = 108,
    SDLK_m = 109,
    SDLK_n = 110,
    SDLK_o = 111,
    SDLK_p = 112,
    SDLK_q = 113,
    SDLK_r = 114,
    SDLK_s = 115,
    SDLK_t = 116,
    SDLK_u = 117,
    SDLK_v = 118,
    SDLK_w = 119,
    SDLK_x = 120,
    SDLK_y = 121,
    SDLK_z = 122,
    SDLK_DELETE = 127,
    SDLK_WORLD_0 = 160,
    SDLK_WORLD_1 = 161,
    SDLK_WORLD_2 = 162,
    SDLK_WORLD_3 = 163,
    SDLK_WORLD_4 = 164,
    SDLK_WORLD_5 = 165,
    SDLK_WORLD_6 = 166,
    SDLK_WORLD_7 = 167,
    SDLK_WORLD_8 = 168,
    SDLK_WORLD_9 = 169,
    SDLK_WORLD_10 = 170,
    SDLK_WORLD_11 = 171,
    SDLK_WORLD_12 = 172,
    SDLK_WORLD_13 = 173,
    SDLK_WORLD_14 = 174,
    SDLK_WORLD_15 = 175,
    SDLK_WORLD_16 = 176,
    SDLK_WORLD_17 = 177,
    SDLK_WORLD_18 = 178,
    SDLK_WORLD_19 = 179,
    SDLK_WORLD_20 = 180,
    SDLK_WORLD_21 = 181,
    SDLK_WORLD_22 = 182,
    SDLK_WORLD_23 = 183,
    SDLK_WORLD_24 = 184,
    SDLK_WORLD_25 = 185,
    SDLK_WORLD_26 = 186,
    SDLK_WORLD_27 = 187,
    SDLK_WORLD_28 = 188,
    SDLK_WORLD_29 = 189,
    SDLK_WORLD_30 = 190,
    SDLK_WORLD_31 = 191,
    SDLK_WORLD_32 = 192,
    SDLK_WORLD_33 = 193,
    SDLK_WORLD_34 = 194,
    SDLK_WORLD_35 = 195,
    SDLK_WORLD_36 = 196,
    SDLK_WORLD_37 = 197,
    SDLK_WORLD_38 = 198,
    SDLK_WORLD_39 = 199,
    SDLK_WORLD_40 = 200,
    SDLK_WORLD_41 = 201,
    SDLK_WORLD_42 = 202,
    SDLK_WORLD_43 = 203,
    SDLK_WORLD_44 = 204,
    SDLK_WORLD_45 = 205,
    SDLK_WORLD_46 = 206,
    SDLK_WORLD_47 = 207,
    SDLK_WORLD_48 = 208,
    SDLK_WORLD_49 = 209,
    SDLK_WORLD_50 = 210,
    SDLK_WORLD_51 = 211,
    SDLK_WORLD_52 = 212,
    SDLK_WORLD_53 = 213,
    SDLK_WORLD_54 = 214,
    SDLK_WORLD_55 = 215,
    SDLK_WORLD_56 = 216,
    SDLK_WORLD_57 = 217,
    SDLK_WORLD_58 = 218,
    SDLK_WORLD_59 = 219,
    SDLK_WORLD_60 = 220,
    SDLK_WORLD_61 = 221,
    SDLK_WORLD_62 = 222,
    SDLK_WORLD_63 = 223,
    SDLK_WORLD_64 = 224,
    SDLK_WORLD_65 = 225,
    SDLK_WORLD_66 = 226,
    SDLK_WORLD_67 = 227,
    SDLK_WORLD_68 = 228,
    SDLK_WORLD_69 = 229,
    SDLK_WORLD_70 = 230,
    SDLK_WORLD_71 = 231,
    SDLK_WORLD_72 = 232,
    SDLK_WORLD_73 = 233,
    SDLK_WORLD_74 = 234,
    SDLK_WORLD_75 = 235,
    SDLK_WORLD_76 = 236,
    SDLK_WORLD_77 = 237,
    SDLK_WORLD_78 = 238,
    SDLK_WORLD_79 = 239,
    SDLK_WORLD_80 = 240,
    SDLK_WORLD_81 = 241,
    SDLK_WORLD_82 = 242,
    SDLK_WORLD_83 = 243,
    SDLK_WORLD_84 = 244,
    SDLK_WORLD_85 = 245,
    SDLK_WORLD_86 = 246,
    SDLK_WORLD_87 = 247,
    SDLK_WORLD_88 = 248,
    SDLK_WORLD_89 = 249,
    SDLK_WORLD_90 = 250,
    SDLK_WORLD_91 = 251,
    SDLK_WORLD_92 = 252,
    SDLK_WORLD_93 = 253,
    SDLK_WORLD_94 = 254,
    SDLK_WORLD_95 = 255,
    SDLK_KP0 = 256,
    SDLK_KP1 = 257,
    SDLK_KP2 = 258,
    SDLK_KP3 = 259,
    SDLK_KP4 = 260,
    SDLK_KP5 = 261,
    SDLK_KP6 = 262,
    SDLK_KP7 = 263,
    SDLK_KP8 = 264,
    SDLK_KP9 = 265,
    SDLK_KP_PERIOD = 266,
    SDLK_KP_DIVIDE = 267,
    SDLK_KP_MULTIPLY = 268,
    SDLK_KP_MINUS = 269,
    SDLK_KP_PLUS = 270,
    SDLK_KP_ENTER = 271,
    SDLK_KP_EQUALS = 272,
    SDLK_UP = 273,
    SDLK_DOWN = 274,
    SDLK_RIGHT = 275,
    SDLK_LEFT = 276,
    SDLK_INSERT = 277,
    SDLK_HOME = 278,
    SDLK_END = 279,
    SDLK_PAGEUP = 280,
    SDLK_PAGEDOWN = 281,
    SDLK_F1 = 282,
    SDLK_F2 = 283,
    SDLK_F3 = 284,
    SDLK_F4 = 285,
    SDLK_F5 = 286,
    SDLK_F6 = 287,
    SDLK_F7 = 288,
    SDLK_F8 = 289,
    SDLK_F9 = 290,
    SDLK_F10 = 291,
    SDLK_F11 = 292,
    SDLK_F12 = 293,
    SDLK_F13 = 294,
    SDLK_F14 = 295,
    SDLK_F15 = 296,
    SDLK_NUMLOCK = 300,
    SDLK_CAPSLOCK = 301,
    SDLK_SCROLLOCK = 302,
    SDLK_RSHIFT = 303,
    SDLK_LSHIFT = 304,
    SDLK_RCTRL = 305,
    SDLK_LCTRL = 306,
    SDLK_RALT = 307,
    SDLK_LALT = 308,
    SDLK_RMETA = 309,
    SDLK_LMETA = 310,
    SDLK_LSUPER = 311,
    SDLK_RSUPER = 312,
    SDLK_MODE = 313,
    SDLK_COMPOSE = 314,
    SDLK_HELP = 315,
    SDLK_PRINT = 316,
    SDLK_SYSREQ = 317,
    SDLK_BREAK = 318,
    SDLK_MENU = 319,
    SDLK_POWER = 320,
    SDLK_EURO = 321,
    SDLK_UNDO = 322,
    SDLK_LAST = 323
} ;

typedef enum __anonenum_SDLKey_43 SDLKey;

enum __anonenum_SDLMod_44 {
    KMOD_NONE = 0,
    KMOD_LSHIFT = 1,
    KMOD_RSHIFT = 2,
    KMOD_LCTRL = 64,
    KMOD_RCTRL = 128,
    KMOD_LALT = 256,
    KMOD_RALT = 512,
    KMOD_LMETA = 1024,
    KMOD_RMETA = 2048,
    KMOD_NUM = 4096,
    KMOD_CAPS = 8192,
    KMOD_MODE = 16384,
    KMOD_RESERVED = 32768
} ;

typedef enum __anonenum_SDLMod_44 SDLMod;

struct SDL_keysym {
   Uint8 scancode ;
   SDLKey sym ;
   SDLMod mod ;
   Uint16 unicode ;
};

typedef struct SDL_keysym SDL_keysym;

struct SDL_Rect {
   Sint16 x ;
   Sint16 y ;
   Uint16 w ;
   Uint16 h ;
};

typedef struct SDL_Rect SDL_Rect;

struct SDL_Color {
   Uint8 r ;
   Uint8 g ;
   Uint8 b ;
   Uint8 unused ;
};

typedef struct SDL_Color SDL_Color;

struct SDL_Palette {
   int ncolors ;
   SDL_Color *colors ;
};

typedef struct SDL_Palette SDL_Palette;

struct SDL_PixelFormat {
   SDL_Palette *palette ;
   Uint8 BitsPerPixel ;
   Uint8 BytesPerPixel ;
   Uint8 Rloss ;
   Uint8 Gloss ;
   Uint8 Bloss ;
   Uint8 Aloss ;
   Uint8 Rshift ;
   Uint8 Gshift ;
   Uint8 Bshift ;
   Uint8 Ashift ;
   Uint32 Rmask ;
   Uint32 Gmask ;
   Uint32 Bmask ;
   Uint32 Amask ;
   Uint32 colorkey ;
   Uint8 alpha ;
};

typedef struct SDL_PixelFormat SDL_PixelFormat;

struct private_hwdata;

struct private_hwdata;

struct private_hwdata;

struct SDL_BlitMap;

struct SDL_BlitMap;

struct SDL_BlitMap;

struct SDL_Surface {
   Uint32 flags ;
   SDL_PixelFormat *format ;
   int w ;
   int h ;
   Uint16 pitch ;
   void *pixels ;
   int offset ;
   struct private_hwdata *hwdata ;
   SDL_Rect clip_rect ;
   Uint32 unused1 ;
   Uint32 locked ;
   struct SDL_BlitMap *map ;
   unsigned int format_version ;
   int refcount ;
};

typedef struct SDL_Surface SDL_Surface;

struct SDL_ActiveEvent {
   Uint8 type ;
   Uint8 gain ;
   Uint8 state ;
};

typedef struct SDL_ActiveEvent SDL_ActiveEvent;

struct SDL_KeyboardEvent {
   Uint8 type ;
   Uint8 which ;
   Uint8 state ;
   SDL_keysym keysym ;
};

typedef struct SDL_KeyboardEvent SDL_KeyboardEvent;

struct SDL_MouseMotionEvent {
   Uint8 type ;
   Uint8 which ;
   Uint8 state ;
   Uint16 x ;
   Uint16 y ;
   Sint16 xrel ;
   Sint16 yrel ;
};

typedef struct SDL_MouseMotionEvent SDL_MouseMotionEvent;

struct SDL_MouseButtonEvent {
   Uint8 type ;
   Uint8 which ;
   Uint8 button ;
   Uint8 state ;
   Uint16 x ;
   Uint16 y ;
};

typedef struct SDL_MouseButtonEvent SDL_MouseButtonEvent;

struct SDL_JoyAxisEvent {
   Uint8 type ;
   Uint8 which ;
   Uint8 axis ;
   Sint16 value ;
};

typedef struct SDL_JoyAxisEvent SDL_JoyAxisEvent;

struct SDL_JoyBallEvent {
   Uint8 type ;
   Uint8 which ;
   Uint8 ball ;
   Sint16 xrel ;
   Sint16 yrel ;
};

typedef struct SDL_JoyBallEvent SDL_JoyBallEvent;

struct SDL_JoyHatEvent {
   Uint8 type ;
   Uint8 which ;
   Uint8 hat ;
   Uint8 value ;
};

typedef struct SDL_JoyHatEvent SDL_JoyHatEvent;

struct SDL_JoyButtonEvent {
   Uint8 type ;
   Uint8 which ;
   Uint8 button ;
   Uint8 state ;
};

typedef struct SDL_JoyButtonEvent SDL_JoyButtonEvent;

struct SDL_ResizeEvent {
   Uint8 type ;
   int w ;
   int h ;
};

typedef struct SDL_ResizeEvent SDL_ResizeEvent;

struct SDL_ExposeEvent {
   Uint8 type ;
};

typedef struct SDL_ExposeEvent SDL_ExposeEvent;

struct SDL_QuitEvent {
   Uint8 type ;
};

typedef struct SDL_QuitEvent SDL_QuitEvent;

struct SDL_UserEvent {
   Uint8 type ;
   int code ;
   void *data1 ;
   void *data2 ;
};

typedef struct SDL_UserEvent SDL_UserEvent;

struct SDL_SysWMmsg;

struct SDL_SysWMmsg;

struct SDL_SysWMmsg;

typedef struct SDL_SysWMmsg SDL_SysWMmsg;

struct SDL_SysWMEvent {
   Uint8 type ;
   SDL_SysWMmsg *msg ;
};

typedef struct SDL_SysWMEvent SDL_SysWMEvent;

union SDL_Event {
   Uint8 type ;
   SDL_ActiveEvent active ;
   SDL_KeyboardEvent key ;
   SDL_MouseMotionEvent motion ;
   SDL_MouseButtonEvent button ;
   SDL_JoyAxisEvent jaxis ;
   SDL_JoyBallEvent jball ;
   SDL_JoyHatEvent jhat ;
   SDL_JoyButtonEvent jbutton ;
   SDL_ResizeEvent resize ;
   SDL_ExposeEvent expose ;
   SDL_QuitEvent quit ;
   SDL_UserEvent user ;
   SDL_SysWMEvent syswm ;
};

typedef union SDL_Event SDL_Event;

enum __anonenum_GT_50 {
    SINGLE = 0,
    MARATHON = 1,
    SINGLE_VS_AI = 2,
    TWO_PLAYERS = 3,
    NETWORK = 4,
    AI_VS_AI = 5,
    QUIT = 6,
    DEMO = 7
} ;

typedef enum __anonenum_GT_50 GT;

struct _TTF_Font;

struct _TTF_Font;

struct _TTF_Font;

typedef struct _TTF_Font TTF_Font;

struct piece_struct {
   int dim ;
   int num_color ;
   unsigned char *bitmap[4] ;
};

typedef struct piece_struct piece;

enum __anonenum_special_type_51 {
    No_Special = -1,
    Special_Bomb = 0,
    Special_Repaint = 1,
    Special_Pushdown = 2,
    Special_Colorkill = 3
} ;

typedef enum __anonenum_special_type_51 special_type;

struct play_piece_struct {
   piece *base ;
   unsigned char colormap[12] ;
   special_type special ;
};

typedef struct play_piece_struct play_piece;

struct color_style_struct {
   char *name ;
   int num_color ;
   SDL_Surface **color ;
   int w ;
   int h ;
};

typedef struct color_style_struct color_style;

struct __anonstruct_Grid_52 {
   int w ;
   int h ;
   unsigned char *contents ;
   unsigned char *fall ;
   unsigned char *changed ;
   unsigned char *temp ;
   SDL_Rect board ;
};

typedef struct __anonstruct_Grid_52 Grid;

struct WAV_sample_struct {
   SDL_AudioSpec spec ;
   Uint8 *audio_buf ;
   Uint32 audio_len ;
   char *filename ;
};

typedef struct WAV_sample_struct WAV_sample;

struct sound_style_struct {
   WAV_sample WAV[7] ;
   char *name ;
};

typedef struct sound_style_struct sound_style;

enum __anonenum_Command_53 {
    MOVE_NONE = 0,
    MOVE_LEFT = 1,
    MOVE_RIGHT = 2,
    MOVE_ROTATE = 3,
    MOVE_DOWN = 4
} ;

typedef enum __anonenum_Command_53 Command;

struct AI_Player_struct {
   char *name ;
   char *msg ;
   Command (*move)(void *state , Grid * , play_piece * , play_piece * , int  ,
                   int  , int  ) ;
   void (*think)(void *state , Grid * , play_piece * , play_piece * , int  ,
                 int  , int  ) ;
   void *(*reset)(void *state , Grid * ) ;
   int delay_factor ;
};

typedef struct AI_Player_struct AI_Player;

struct AI_Players_struct {
   int n ;
   AI_Player *player ;
};

typedef struct AI_Players_struct AI_Players;

struct _WalkRadio {
   int n ;
   char **label ;
   int x ;
   int y ;
   int defaultchoice ;
   int (*action)(struct _WalkRadio * ) ;
   int *var_to_set ;
   void *data ;
   int inactive ;
   Uint32 face_color[2] ;
   Uint32 text_color[2] ;
   Uint32 border_color[2] ;
   int w ;
   int h ;
   SDL_Rect area ;
   SDL_Surface **bitmap0 ;
   SDL_Surface **bitmap1 ;
};

typedef struct _WalkRadio WalkRadio;

struct _WalkRadioGroup {
   WalkRadio *wr ;
   int n ;
   int cur ;
};

typedef struct _WalkRadioGroup WalkRadioGroup;

struct wessy_struct {
   int know_what_to_do ;
   int desired_column ;
   int desired_rot ;
   int cc ;
   int current_rot ;
   int best_weight ;
   Grid tg ;
};

typedef struct wessy_struct Wessy_State;

struct double_struct {
   int know_what_to_do ;
   int desired_col ;
   int desired_rot ;
   int best_weight ;
   int stage_alpha ;
   int cur_alpha_col ;
   int cur_alpha_rot ;
   Grid ag ;
   int cur_beta_col ;
   int cur_beta_rot ;
   Grid tg ;
};

typedef struct double_struct Double_State;

struct Aliz_State_struct {
   double bestEval ;
   int foundBest ;
   int goalColumn ;
   int goalRotation ;
   int checkColumn ;
   int checkRotation ;
   int goalSides ;
   int checkSides ;
   Grid kg ;
};

typedef struct Aliz_State_struct Aliz_State;

typedef unsigned int __mode_t;

typedef long __time_t;

typedef int __ssize_t;

typedef __ssize_t ssize_t;

typedef __time_t time_t;

typedef __builtin_va_list __gnuc_va_list;

typedef __gnuc_va_list va_list;

struct piece_style_struct {
   char *name ;
   int num_piece ;
   piece *shape ;
};

typedef struct piece_style_struct piece_style;

struct piece_styles_struct {
   int num_style ;
   int choice ;
   piece_style **style ;
};

typedef struct piece_styles_struct piece_styles;

struct color_styles_struct {
   int num_style ;
   int choice ;
   color_style **style ;
};

typedef struct color_styles_struct color_styles;

struct sound_styles_struct {
   int num_style ;
   int choice ;
   sound_style **style ;
};

typedef struct sound_styles_struct sound_styles;

struct person_struct {
   char *name ;
   int level ;
};

typedef struct person_struct person;

struct identity_struct {
   int n ;
   person *p ;
};

typedef struct identity_struct identity;

struct option_struct {
   int bpp_wanted ;
   int sound_wanted ;
   int full_screen ;
   int flame_wanted ;
   int special_wanted ;
   int faster_levels ;
   int long_settle_delay ;
   int upward_rotation ;
   int key_repeat_delay ;
   int named_color ;
   int named_sound ;
   int named_piece ;
   int named_game ;
};

struct _ATButton {
   SDL_Surface *bitmap[2] ;
   SDL_Rect area ;
   Uint32 face_color[2] ;
   Uint32 text_color[2] ;
};

typedef struct _ATButton ATButton;

struct __anonstruct_stdio_41 {
   int autoclose ;
   FILE *fp ;
};

struct __anonstruct_mem_42 {
   Uint8 *base ;
   Uint8 *here ;
   Uint8 *stop ;
};

struct __anonstruct_unknown_43 {
   void *data1 ;
};

union __anonunion_hidden_40 {
   struct __anonstruct_stdio_41 stdio ;
   struct __anonstruct_mem_42 mem ;
   struct __anonstruct_unknown_43 unknown ;
};

struct SDL_RWops {
   int (*seek)(struct SDL_RWops *context , int offset , int whence ) ;
   int (*read)(struct SDL_RWops *context , void *ptr , int size , int maxnum ) ;
   int (*write)(struct SDL_RWops *context , void const   *ptr , int size ,
                int num ) ;
   int (*close)(struct SDL_RWops *context ) ;
   Uint32 type ;
   union __anonunion_hidden_40 hidden ;
};

typedef struct SDL_RWops SDL_RWops;

struct adjust_struct {
   SDL_Rect symbol[3] ;
};

struct layout_struct {
   SDL_Rect grid_border[2] ;
   SDL_Rect grid[2] ;
   SDL_Rect score[2] ;
   SDL_Rect name[2] ;
   struct adjust_struct adjust[2] ;
   SDL_Rect time ;
   SDL_Rect time_border ;
   SDL_Rect next_piece_border[2] ;
   SDL_Rect next_piece[2] ;
   SDL_Rect pause ;
};

typedef long __suseconds_t;

struct timeval {
   __time_t tv_sec ;
   __suseconds_t tv_usec ;
};

typedef long __fd_mask;

struct __anonstruct_fd_set_6 {
   __fd_mask fds_bits[1024U / (8U * sizeof(__fd_mask ))] ;
};

typedef struct __anonstruct_fd_set_6 fd_set;

struct state_struct {
   int ai ;
   int falling ;
   int fall_speed ;
   int accept_input ;
   int tetris_handling ;
   int limbo ;
   int other_in_limbo ;
   int limbo_sent ;
   int draw ;
   Uint32 collide_time ;
   Uint32 next_draw ;
   Uint32 draw_timeout ;
   Uint32 tv_next_fall ;
   int fall_event_interval ;
   Uint32 tv_next_tetris ;
   int tetris_event_interval ;
   Uint32 tv_next_ai_think ;
   Uint32 tv_next_ai_move ;
   int ai_interval ;
   int ready_for_fast ;
   int ready_for_rotate ;
   int seed ;
   play_piece cp ;
   play_piece np ;
   void *ai_state ;
   int check_result ;
   int num_lines_cleared ;
};

struct pos_struct {
   int x ;
   int y ;
   int rot ;
   int old_x ;
   int old_y ;
   int old_rot ;
   Command move ;
};

struct tm {
   int tm_sec ;
   int tm_min ;
   int tm_hour ;
   int tm_mday ;
   int tm_mon ;
   int tm_year ;
   int tm_wday ;
   int tm_yday ;
   int tm_isdst ;
   long tm_gmtoff ;
   char const   *tm_zone ;
};

struct _ATMenu {
   int nButtons ;
   ATButton **buttons ;
   char *clicked ;
   int x ;
   int y ;
   int w ;
   int h ;
   int defaultchoice ;
};

typedef struct _ATMenu ATMenu;

typedef unsigned int __socklen_t;

typedef __socklen_t socklen_t;

typedef unsigned short sa_family_t;

struct sockaddr {
   sa_family_t sa_family ;
   char sa_data[14] ;
};

struct linger {
   int l_onoff ;
   int l_linger ;
};

struct sockaddr_in;

struct sockaddr_in;

struct sockaddr_in;

typedef uint16_t in_port_t;

typedef uint32_t in_addr_t;

struct in_addr {
   in_addr_t s_addr ;
};

struct sockaddr_in {
   sa_family_t sin_family ;
   in_port_t sin_port ;
   struct in_addr sin_addr ;
   unsigned char sin_zero[((sizeof(struct sockaddr ) - sizeof(unsigned short )) - sizeof(in_port_t )) - sizeof(struct in_addr )] ;
};

struct hostent {
   char *h_name ;
   char **h_aliases ;
   int h_addrtype ;
   int h_length ;
   char **h_addr_list ;
};

typedef unsigned long __ino_t;

struct dirent {
   __ino_t d_ino ;
   __off_t d_off ;
   unsigned short d_reclen ;
   unsigned char d_type ;
   char d_name[256] ;
};

struct __dirstream;

struct __dirstream;

struct __dirstream;

typedef struct __dirstream DIR;

struct playing_sample_struct {
   int in_use ;
   int delay ;
   Uint32 len ;
   Uint32 pos ;
   Uint8 *audio_data ;
   char *filename ;
};

typedef struct playing_sample_struct playing_sample;

struct samples_to_be_played_struct {
   playing_sample sample[32] ;
};

typedef struct samples_to_be_played_struct samples_to_be_played;

struct globaldata {
   Uint32 flags ;
   SDL_Surface *screen ;
   int nrects ;
   SDL_Rect *rects ;
};

/* compiler builtin: 
   void __builtin_varargs_start(__builtin_va_list  ) ;  */

/* compiler builtin: 
   int __builtin_strcmp(char const   * , char const   * ) ;  */

/* compiler builtin: 
   void *__builtin___memmove_chk(void * , void const   * , unsigned int  ,
                                 unsigned int  ) ;  */

/* compiler builtin: 
   char *__builtin_strpbrk(char const   * , char const   * ) ;  */

/* compiler builtin: 
   void *__builtin_memcpy(void * , void const   * , unsigned int  ) ;  */

/* compiler builtin: 
   double __builtin_exp(double  ) ;  */

/* compiler builtin: 
   long double __builtin_nanl(char const   * ) ;  */

/* compiler builtin: 
   double __builtin_cos(double  ) ;  */

/* compiler builtin: 
   char *__builtin_strchr(char * , int  ) ;  */

/* compiler builtin: 
   float __builtin_atan2f(float  , float  ) ;  */

/* compiler builtin: 
   void *__builtin___memcpy_chk(void * , void const   * , unsigned int  ,
                                unsigned int  ) ;  */

/* compiler builtin: 
   double __builtin_asin(double  ) ;  */

/* compiler builtin: 
   int __builtin_ctz(unsigned int  ) ;  */

/* compiler builtin: 
   char *__builtin_stpcpy(char * , char const   * ) ;  */

/* compiler builtin: 
   double __builtin_nans(char const   * ) ;  */

/* compiler builtin: 
   long double __builtin_atan2l(long double  , long double  ) ;  */

/* compiler builtin: 
   float __builtin_logf(float  ) ;  */

/* compiler builtin: 
   int __builtin___fprintf_chk(void * , int  , char const   *  , ...) ;  */

/* compiler builtin: 
   int __builtin___vsprintf_chk(char * , int  , unsigned int  , char const   * ,
                                __builtin_va_list  ) ;  */

/* compiler builtin: 
   char *__builtin___strncpy_chk(char * , char const   * , unsigned int  ,
                                 unsigned int  ) ;  */

/* compiler builtin: 
   float __builtin_log10f(float  ) ;  */

/* compiler builtin: 
   double __builtin_atan(double  ) ;  */

/* compiler builtin: 
   void *__builtin_alloca(unsigned int  ) ;  */

/* compiler builtin: 
   void __builtin_va_end(__builtin_va_list  ) ;  */

/* compiler builtin: 
   int __builtin_strncmp(char const   * , char const   * , unsigned int  ) ;  */

/* compiler builtin: 
   double __builtin_sin(double  ) ;  */

/* compiler builtin: 
   long double __builtin_logl(long double  ) ;  */

/* compiler builtin: 
   float __builtin_coshf(float  ) ;  */

/* compiler builtin: 
   void *__builtin___mempcpy_chk(void * , void const   * , unsigned int  ,
                                 unsigned int  ) ;  */

/* compiler builtin: 
   char *__builtin___strcat_chk(char * , char const   * , unsigned int  ) ;  */

/* compiler builtin: 
   float __builtin_nansf(char const   * ) ;  */

/* compiler builtin: 
   void *__builtin_memset(void * , int  , int  ) ;  */

/* compiler builtin: 
   void __builtin_va_copy(__builtin_va_list  , __builtin_va_list  ) ;  */

/* compiler builtin: 
   float __builtin_sinhf(float  ) ;  */

/* compiler builtin: 
   long double __builtin_log10l(long double  ) ;  */

/* compiler builtin: 
   long double __builtin_coshl(long double  ) ;  */

/* compiler builtin: 
   int __builtin_ffs(unsigned int  ) ;  */

/* compiler builtin: 
   float __builtin_asinf(float  ) ;  */

/* compiler builtin: 
   long double __builtin_nansl(char const   * ) ;  */

/* compiler builtin: 
   double __builtin_frexp(double  , int * ) ;  */

/* compiler builtin: 
   double __builtin_tan(double  ) ;  */

/* compiler builtin: 
   long double __builtin_sinhl(long double  ) ;  */

/* compiler builtin: 
   float __builtin_frexpf(float  , int * ) ;  */

/* compiler builtin: 
   long double __builtin_asinl(long double  ) ;  */

/* compiler builtin: 
   void *__builtin_frame_address(unsigned int  ) ;  */

/* compiler builtin: 
   double __builtin_floor(double  ) ;  */

/* compiler builtin: 
   float __builtin_tanhf(float  ) ;  */

/* compiler builtin: 
   int __builtin_parityl(unsigned long  ) ;  */

/* compiler builtin: 
   int __builtin_clzl(unsigned long  ) ;  */

/* compiler builtin: 
   double __builtin_powi(double  , int  ) ;  */

/* compiler builtin: 
   long double __builtin_frexpl(long double  , int * ) ;  */

/* compiler builtin: 
   float __builtin_atanf(float  ) ;  */

/* compiler builtin: 
   float __builtin_huge_valf(void) ;  */

/* compiler builtin: 
   float __builtin_sqrtf(float  ) ;  */

/* compiler builtin: 
   float __builtin_fmodf(float  ) ;  */

/* compiler builtin: 
   unsigned int __builtin_object_size(void * , int  ) ;  */

/* compiler builtin: 
   void __builtin_va_arg(__builtin_va_list  , unsigned int  , void * ) ;  */

/* compiler builtin: 
   void __builtin_stdarg_start(__builtin_va_list  ) ;  */

/* compiler builtin: 
   long double __builtin_tanhl(long double  ) ;  */

/* compiler builtin: 
   double __builtin_nan(char const   * ) ;  */

/* compiler builtin: 
   void __builtin_return(void const   * ) ;  */

/* compiler builtin: 
   long double __builtin_atanl(long double  ) ;  */

/* compiler builtin: 
   long double __builtin_huge_vall(void) ;  */

/* compiler builtin: 
   float __builtin_inff(void) ;  */

/* compiler builtin: 
   long double __builtin_sqrtl(long double  ) ;  */

/* compiler builtin: 
   long double __builtin_fmodl(long double  ) ;  */

/* compiler builtin: 
   int __builtin___printf_chk(int  , char const   *  , ...) ;  */

/* compiler builtin: 
   float __builtin_floorf(float  ) ;  */

/* compiler builtin: 
   float __builtin_fabsf(float  ) ;  */

/* compiler builtin: 
   int __builtin_popcountll(unsigned long long  ) ;  */

/* compiler builtin: 
   int __builtin___sprintf_chk(char * , int  , unsigned int  , char const   * 
                               , ...) ;  */

/* compiler builtin: 
   int __builtin___vprintf_chk(int  , char const   * , __builtin_va_list  ) ;  */

/* compiler builtin: 
   int __builtin___snprintf_chk(char * , unsigned int  , int  , unsigned int  ,
                                char const   *  , ...) ;  */

/* compiler builtin: 
   long double __builtin_infl(void) ;  */

/* compiler builtin: 
   void *__builtin_mempcpy(void * , void const   * , unsigned int  ) ;  */

/* compiler builtin: 
   long double __builtin_floorl(long double  ) ;  */

/* compiler builtin: 
   int __builtin_ctzl(unsigned long  ) ;  */

/* compiler builtin: 
   long double __builtin_fabsl(long double  ) ;  */

/* compiler builtin: 
   int __builtin_clz(unsigned int  ) ;  */

/* compiler builtin: 
   double __builtin_fabs(double  ) ;  */

/* compiler builtin: 
   int __builtin_popcount(unsigned int  ) ;  */

/* compiler builtin: 
   double __builtin_ceil(double  ) ;  */

/* compiler builtin: 
   double __builtin_ldexp(double  , int  ) ;  */

/* compiler builtin: 
   float __builtin_sinf(float  ) ;  */

/* compiler builtin: 
   float __builtin_acosf(float  ) ;  */

/* compiler builtin: 
   int __builtin___vsnprintf_chk(char * , unsigned int  , int  , unsigned int  ,
                                 char const   * , __builtin_va_list  ) ;  */

/* compiler builtin: 
   double __builtin_sinh(double  ) ;  */

/* compiler builtin: 
   int __builtin_ffsll(unsigned long long  ) ;  */

/* compiler builtin: 
   char *__builtin___strcpy_chk(char * , char const   * , unsigned int  ) ;  */

/* compiler builtin: 
   double __builtin_inf(void) ;  */

/* compiler builtin: 
   void __builtin_prefetch(void const   *  , ...) ;  */

/* compiler builtin: 
   long double __builtin_sinl(long double  ) ;  */

/* compiler builtin: 
   long double __builtin_acosl(long double  ) ;  */

/* compiler builtin: 
   double __builtin_sqrt(double  ) ;  */

/* compiler builtin: 
   double __builtin_fmod(double  ) ;  */

/* compiler builtin: 
   char *__builtin_strcpy(char * , char const   * ) ;  */

/* compiler builtin: 
   float __builtin_ceilf(float  ) ;  */

/* compiler builtin: 
   void *__builtin_return_address(unsigned int  ) ;  */

/* compiler builtin: 
   char *__builtin___stpcpy_chk(char * , char const   * , unsigned int  ) ;  */

/* compiler builtin: 
   float __builtin_tanf(float  ) ;  */

/* compiler builtin: 
   int __builtin_parityll(unsigned long long  ) ;  */

/* compiler builtin: 
   float __builtin_ldexpf(float  , int  ) ;  */

/* compiler builtin: 
   int __builtin_types_compatible_p(unsigned int  , unsigned int  ) ;  */

/* compiler builtin: 
   double __builtin_log10(double  ) ;  */

/* compiler builtin: 
   float __builtin_expf(float  ) ;  */

/* compiler builtin: 
   int __builtin_clzll(unsigned long long  ) ;  */

/* compiler builtin: 
   double __builtin_tanh(double  ) ;  */

/* compiler builtin: 
   int __builtin_constant_p(int  ) ;  */

/* compiler builtin: 
   long double __builtin_ceill(long double  ) ;  */

/* compiler builtin: 
   long double __builtin_tanl(long double  ) ;  */

/* compiler builtin: 
   double __builtin_log(double  ) ;  */

/* compiler builtin: 
   long double __builtin_ldexpl(long double  , int  ) ;  */

/* compiler builtin: 
   long double __builtin_expl(long double  ) ;  */

/* compiler builtin: 
   int __builtin_popcountl(unsigned long  ) ;  */

/* compiler builtin: 
   void *__builtin___memset_chk(void * , int  , unsigned int  , unsigned int  ) ;  */

/* compiler builtin: 
   char *__builtin___strncat_chk(char * , char const   * , unsigned int  ,
                                 unsigned int  ) ;  */

/* compiler builtin: 
   double __builtin_huge_val(void) ;  */

/* compiler builtin: 
   __builtin_va_list __builtin_next_arg(void) ;  */

/* compiler builtin: 
   float __builtin_powif(float  , int  ) ;  */

/* compiler builtin: 
   int __builtin___vfprintf_chk(void * , int  , char const   * ,
                                __builtin_va_list  ) ;  */

/* compiler builtin: 
   float __builtin_modff(float  , float * ) ;  */

/* compiler builtin: 
   double __builtin_atan2(double  , double  ) ;  */

/* compiler builtin: 
   char *__builtin_strncpy(char * , char const   * , unsigned int  ) ;  */

/* compiler builtin: 
   long double __builtin_powil(long double  , int  ) ;  */

/* compiler builtin: 
   float __builtin_cosf(float  ) ;  */

/* compiler builtin: 
   unsigned int __builtin_strspn(char const   * , char const   * ) ;  */

/* compiler builtin: 
   long double __builtin_modfl(long double  , long double * ) ;  */

/* compiler builtin: 
   int __builtin_parity(unsigned int  ) ;  */

/* compiler builtin: 
   double __builtin_cosh(double  ) ;  */

/* compiler builtin: 
   char *__builtin_strncat(char * , char const   * , unsigned int  ) ;  */

/* compiler builtin: 
   long __builtin_expect(long  , long  ) ;  */

/* compiler builtin: 
   double __builtin_acos(double  ) ;  */

/* compiler builtin: 
   long double __builtin_cosl(long double  ) ;  */

/* compiler builtin: 
   void __builtin_va_start(__builtin_va_list  ) ;  */

/* compiler builtin: 
   int __builtin_ctzll(unsigned long long  ) ;  */

/* compiler builtin: 
   unsigned int __builtin_strcspn(char const   * , char const   * ) ;  */

/* compiler builtin: 
   int __builtin_ffsl(unsigned long  ) ;  */

/* compiler builtin: 
   float __builtin_nanf(char const   * ) ;  */

extern struct _IO_FILE *stdout ;

extern int fflush(FILE *__stream ) ;

extern int printf(char const   * __restrict  __format  , ...) ;

extern  __attribute__((__nothrow__)) int sprintf(char * __restrict  __s ,
                                                 char const   * __restrict  __format 
                                                 , ...) ;

extern  __attribute__((__nothrow__)) int sscanf(char const   * __restrict  __s ,
                                                char const   * __restrict  __format 
                                                , ...) ;

extern  __attribute__((__nothrow__)) void *calloc(size_t __nmemb ,
                                                  size_t __size )  __attribute__((__malloc__)) ;

extern  __attribute__((__nothrow__)) void free(void *__ptr ) ;

extern  __attribute__((__nothrow__)) void *memcpy(void * __restrict  __dest ,
                                                  void const   * __restrict  __src ,
                                                  size_t __n )  __attribute__((__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) char *__strdup(char const   *__string )  __attribute__((__malloc__)) ;

extern Uint32 __attribute__((__visibility__("default")))  SDL_GetTicks(void) ;

GT gametype  ;

 __attribute__((__noreturn__)) void Panic(char const   *func ,
                                          char const   *file , char *fmt  , ...) ;

SDL_Color color_white  ;

SDL_Color color_black  ;

SDL_Color color_red  ;

SDL_Color color_blue  ;

SDL_Color color_purple  ;

Uint32 int_black  ;

Uint32 int_white  ;

Uint32 int_grey  ;

Uint32 int_blue  ;

Uint32 int_med_blue  ;

Uint32 int_dark_blue  ;

Uint32 int_purple  ;

Uint32 int_dark_purple  ;

Uint32 int_solid_black  ;

SDL_Surface *screen  ;

SDL_Surface *widget_layer  ;

SDL_Surface *flame_layer  ;

TTF_Font *font  ;

TTF_Font *sfont  ;

TTF_Font *lfont  ;

TTF_Font *hfont  ;

color_style special_style  ;

SDL_Surface *edge[4]  ;

void cleanup_grid(Grid *g___0 ) ;

Grid generate_board(int w___1 , int h___1 , int level ) ;

void fall_down(Grid *g___0 ) ;

int determine_falling(Grid *g___0 ) ;

int run_gravity(Grid *g___0 ) ;

int check_tetris(Grid *g___0 ) ;

void setup_radio(WalkRadio *wr ) ;

void draw_radio(WalkRadio *wr , int state ) ;

WalkRadioGroup *create_single_wrg(int n ) ;

int handle_radio_event(WalkRadioGroup *wrg___1 , SDL_Event const   *ev ) ;

void paste_on_board(play_piece *pp , int col , int row , int rot , Grid *g___0 ) ;

int valid_position(play_piece *pp , int col , int row , int rot , Grid *g___0 ) ;

void handle_special(play_piece *pp , int row , int col , int rot , Grid *g___0 ,
                    sound_style *ss ) ;

char *input_string(SDL_Surface *screen___0 , int x , int y , int opaque ) ;

void poll_and_flame(SDL_Event *ev ) ;

void clear_screen_to_flame(void) ;

int draw_string(char *text , SDL_Color sc , int x , int y , int flags___0 ) ;

static int weight_board(Grid *g___0 ) ;

int drop_piece_on_grid(Grid *g___0 , play_piece *pp , int col , int row ,
                       int rot ) 
{ int should_we_loop ;
  int lines_cleared ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int x ;
  int y ;
  int l ;
  int tmp___2 ;
  int tmp___3 ;

  {
  should_we_loop = 0;
  lines_cleared = 0;
  tmp = valid_position(pp, col, row, rot, g___0);
  if (! tmp) {
    return (-1);
  }
  while (1) {
    tmp___0 = valid_position(pp, col, row, rot, g___0);
    if (! tmp___0) {
      break;
    }
    row ++;
  }
  row --;
  tmp___1 = valid_position(pp, col, row, rot, g___0);
  if (! tmp___1) {
    return (-1);
  }
  if ((int )pp->special != -1) {
    handle_special(pp, row, col, rot, g___0, (sound_style *)((void *)0));
    cleanup_grid(g___0);
  } else {
    paste_on_board(pp, col, row, rot, g___0);
  }
  while (1) {
    should_we_loop = 0;
    l = check_tetris(g___0);
    if (l) {
      cleanup_grid(g___0);
    }
    lines_cleared += l;
    y = g___0->h - 1;
    while (y >= 0) {
      x = g___0->w - 1;
      while (x >= 0) {
        *(g___0->changed + (x + y * g___0->w)) = (unsigned char )((int )*(g___0->changed + (x + y * g___0->w)) | ((int )*(g___0->fall + (x + y * g___0->w)) != 254));
        *(g___0->fall + (x + y * g___0->w)) = (unsigned char)254;
        x --;
      }
      y --;
    }
    run_gravity(g___0);
    tmp___3 = determine_falling(g___0);
    if (tmp___3) {
      while (1) {
        fall_down(g___0);
        cleanup_grid(g___0);
        run_gravity(g___0);
        tmp___2 = determine_falling(g___0);
        if (! tmp___2) {
          break;
        }
      }
      should_we_loop = 1;
    }
    if (! should_we_loop) {
      break;
    }
  }
  return (lines_cleared);
}
}

static void *double_ai_reset(void *state , Grid *g___0 ) 
{ Double_State *retval ;
  void *tmp ;

  {
  if ((unsigned int )state == (unsigned int )((void *)0)) {
    tmp = calloc(sizeof(Double_State ), 1U);
    retval = (Double_State *)tmp;
    if (! retval) {
      Panic("double_ai_reset", "ai.c",
            (char *)"Out of Memory:\n\tcannot callocate %d bytes for retval",
            sizeof(Double_State ));
    }
  } else {
    retval = (Double_State *)state;
  }
  if (! retval) {
    Panic("double_ai_reset", "ai.c",
          (char *)"Failed assertion \"%s\" on line %d", "retval", 128);
  }
  retval->know_what_to_do = 0;
  retval->desired_col = g___0->w / 2;
  retval->desired_rot = 0;
  retval->best_weight = 1 << 30;
  retval->stage_alpha = 1;
  retval->cur_alpha_col = -4;
  retval->cur_alpha_rot = 0;
  retval->cur_beta_col = -4;
  retval->cur_beta_rot = 0;
  if ((unsigned int )retval->tg.contents == (unsigned int )((void *)0)) {
    retval->tg = generate_board(g___0->w, g___0->h, 0);
  }
  if ((unsigned int )retval->ag.contents == (unsigned int )((void *)0)) {
    retval->ag = generate_board(g___0->w, g___0->h, 0);
  }
  return ((void *)retval);
}
}

static void double_ai_think(void *data , Grid *g___0 , play_piece *pp ,
                            play_piece *np , int col , int row , int rot ) 
{ Double_State *ds ;
  Uint32 incoming_time ;
  Uint32 __attribute__((__visibility__("default")))  tmp ;
  int weight ;
  int tmp___0 ;
  int weight___0 ;
  int tmp___1 ;
  int tmp___2 ;
  Uint32 __attribute__((__visibility__("default")))  tmp___3 ;

  {
  ds = (Double_State *)data;
  tmp = SDL_GetTicks();
  incoming_time = (unsigned int )tmp;
  if (! ds) {
    Panic("double_ai_think", "ai.c",
          (char *)"Failed assertion \"%s\" on line %d", "ds", 157);
  }
  while (1) {
    tmp___3 = SDL_GetTicks();
    if (! (tmp___3 == (unsigned int __attribute__((__visibility__("default")))  )incoming_time)) {
      break;
    }
    if (ds->know_what_to_do) {
      return;
    }
    if (ds->stage_alpha) {
      memcpy((void */* __restrict  */)((void *)ds->ag.contents),
             (void const   */* __restrict  */)((void const   *)g___0->contents),
             (unsigned int )(g___0->w * g___0->h) * sizeof(*(ds->ag.contents + 0)));
      memcpy((void */* __restrict  */)((void *)ds->ag.fall),
             (void const   */* __restrict  */)((void const   *)g___0->fall),
             (unsigned int )(g___0->w * g___0->h) * sizeof(*(ds->ag.fall + 0)));
      tmp___0 = drop_piece_on_grid(& ds->ag, pp, ds->cur_alpha_col, row,
                                   ds->cur_alpha_rot);
      if (tmp___0 != -1) {
        ds->cur_beta_col = -4;
        ds->cur_beta_rot = 0;
        ds->stage_alpha = 0;
        weight = weight_board(& ds->ag);
        if (weight <= 0) {
          ds->best_weight = weight;
          ds->desired_col = ds->cur_alpha_col;
          ds->desired_rot = ds->cur_alpha_rot;
          ds->know_what_to_do = 1;
        }
      } else {
        (ds->cur_alpha_col) ++;
        if (ds->cur_alpha_col == g___0->w) {
          ds->cur_alpha_col = -4;
          (ds->cur_alpha_rot) ++;
          if (ds->cur_alpha_rot == 4) {
            ds->cur_alpha_rot = 0;
            ds->know_what_to_do = 1;
          }
        }
      }
    } else {
      memcpy((void */* __restrict  */)((void *)ds->tg.contents),
             (void const   */* __restrict  */)((void const   *)ds->ag.contents),
             (unsigned int )(ds->ag.w * ds->ag.h) * sizeof(*(ds->ag.contents + 0)));
      memcpy((void */* __restrict  */)((void *)ds->tg.fall),
             (void const   */* __restrict  */)((void const   *)ds->ag.fall),
             (unsigned int )(ds->ag.w * ds->ag.h) * sizeof(*(ds->ag.fall + 0)));
      tmp___2 = drop_piece_on_grid(& ds->tg, np, ds->cur_beta_col, row,
                                   ds->cur_beta_rot);
      if (tmp___2 != -1) {
        tmp___1 = weight_board(& ds->tg);
        weight___0 = 1 + tmp___1;
        if (weight___0 < ds->best_weight) {
          ds->best_weight = weight___0;
          ds->desired_col = ds->cur_alpha_col;
          ds->desired_rot = ds->cur_alpha_rot;
        }
      }
      (ds->cur_beta_col) ++;
      if (ds->cur_beta_col == g___0->w) {
        ds->cur_beta_col = -4;
        (ds->cur_beta_rot) ++;
        if (ds->cur_beta_rot == 2) {
          ds->cur_beta_rot = 0;
          ds->stage_alpha = 1;
          (ds->cur_alpha_col) ++;
          if (ds->cur_alpha_col == g___0->w) {
            ds->cur_alpha_col = -4;
            (ds->cur_alpha_rot) ++;
            if (ds->cur_alpha_rot == 4) {
              ds->cur_alpha_rot = 0;
              ds->know_what_to_do = 1;
            }
          }
        }
      }
    }
  }
  return;
}
}

static Command double_ai_move(void *state , Grid *g___0 , play_piece *pp ,
                              play_piece *np , int col , int row , int rot ) 
{ Double_State *ws___0 ;

  {
  ws___0 = (Double_State *)state;
  if (rot != ws___0->desired_rot) {
    return ((enum __anonenum_Command_53 )3);
  } else {
    if (col > ws___0->desired_col) {
      return ((enum __anonenum_Command_53 )1);
    } else {
      if (col < ws___0->desired_col) {
        return ((enum __anonenum_Command_53 )2);
      } else {
        if (ws___0->know_what_to_do) {
          return ((enum __anonenum_Command_53 )4);
        } else {
          return ((enum __anonenum_Command_53 )0);
        }
      }
    }
  }
}
}

static int weight_board(Grid *g___0 ) 
{ int x ;
  int y ;
  int w___1 ;
  int holes ;
  int same_color ;
  int garbage ;
  int badness[10] ;
  int possible_holes ;
  int what ;

  {
  w___1 = 0;
  holes = 0;
  same_color = 0;
  garbage = 0;
  badness[0] = 7;
  badness[1] = 9;
  badness[2] = 9;
  badness[3] = 9;
  badness[4] = 9;
  badness[5] = 9;
  badness[6] = 9;
  badness[7] = 9;
  badness[8] = 9;
  badness[9] = 7;
  x = 0;
  while (x < g___0->w) {
    possible_holes = 0;
    y = g___0->h - 1;
    while (y >= 0) {
      what = (int )*(g___0->contents + (x + y * g___0->w));
      if (what) {
        w___1 += ((2 * (g___0->h - y)) * badness[x]) / 3;
        if (possible_holes) {
          if (what != 1) {
            holes += ((3 * (g___0->h - y)) * g___0->w) * possible_holes;
          }
          possible_holes = 0;
        }
        if (x > 1) {
          if (what) {
            if ((int )*(g___0->contents + ((x - 1) + y * g___0->w)) == what) {
              same_color ++;
            }
          }
        }
        if (what == 1) {
          garbage ++;
        }
      } else {
        possible_holes ++;
      }
      y --;
    }
    x ++;
  }
  w___1 += holes * 2;
  w___1 += same_color * 4;
  if (garbage == 0) {
    w___1 = 0;
  }
  return (w___1);
}
}

static void wes_ai_think(void *data , Grid *g___0 , play_piece *pp ,
                         play_piece *np , int col , int row , int rot ) 
{ int weight ;
  Wessy_State *ws___0 ;
  Uint32 incoming_time ;
  Uint32 __attribute__((__visibility__("default")))  tmp ;
  int tmp___0 ;
  Uint32 __attribute__((__visibility__("default")))  tmp___1 ;

  {
  ws___0 = (Wessy_State *)data;
  tmp = SDL_GetTicks();
  incoming_time = (unsigned int )tmp;
  if (! ws___0) {
    Panic("wes_ai_think", "ai.c", (char *)"Failed assertion \"%s\" on line %d",
          "ws", 339);
  }
  while (1) {
    tmp___1 = SDL_GetTicks();
    if (! (tmp___1 == (unsigned int __attribute__((__visibility__("default")))  )incoming_time)) {
      break;
    }
    if (ws___0->know_what_to_do) {
      return;
    }
    memcpy((void */* __restrict  */)((void *)ws___0->tg.contents),
           (void const   */* __restrict  */)((void const   *)g___0->contents),
           (unsigned int )(g___0->w * g___0->h) * sizeof(*(ws___0->tg.contents + 0)));
    memcpy((void */* __restrict  */)((void *)ws___0->tg.fall),
           (void const   */* __restrict  */)((void const   *)g___0->fall),
           (unsigned int )(g___0->w * g___0->h) * sizeof(*(ws___0->tg.fall + 0)));
    tmp___0 = drop_piece_on_grid(& ws___0->tg, pp, ws___0->cc, row,
                                 ws___0->current_rot);
    if (tmp___0 != -1) {
      weight = weight_board(& ws___0->tg);
      if (weight < ws___0->best_weight) {
        ws___0->best_weight = weight;
        ws___0->desired_column = ws___0->cc;
        ws___0->desired_rot = ws___0->current_rot;
        if (weight == 0) {
          ws___0->know_what_to_do = 1;
        }
      }
    }
    (ws___0->cc) ++;
    if (ws___0->cc == g___0->w) {
      ws___0->cc = 0;
      (ws___0->current_rot) ++;
      if (ws___0->current_rot == 4) {
        ws___0->know_what_to_do = 1;
      }
    }
  }
  return;
}
}

static void beginner_ai_think(void *data , Grid *g___0 , play_piece *pp ,
                              play_piece *np , int col , int row , int rot ) 
{ int weight ;
  Wessy_State *ws___0 ;
  Uint32 __attribute__((__visibility__("default")))  tmp ;
  int tmp___0 ;

  {
  ws___0 = (Wessy_State *)data;
  if (! ws___0) {
    Panic("beginner_ai_think", "ai.c",
          (char *)"Failed assertion \"%s\" on line %d", "ws", 377);
  }
  if (ws___0->know_what_to_do) {
    return;
  } else {
    tmp = SDL_GetTicks();
    if (tmp & (unsigned int __attribute__((__visibility__("default")))  )3) {
      return;
    }
  }
  memcpy((void */* __restrict  */)((void *)ws___0->tg.contents),
         (void const   */* __restrict  */)((void const   *)g___0->contents),
         (unsigned int )(g___0->w * g___0->h) * sizeof(*(ws___0->tg.contents + 0)));
  memcpy((void */* __restrict  */)((void *)ws___0->tg.fall),
         (void const   */* __restrict  */)((void const   *)g___0->fall),
         (unsigned int )(g___0->w * g___0->h) * sizeof(*(ws___0->tg.fall + 0)));
  tmp___0 = drop_piece_on_grid(& ws___0->tg, pp, ws___0->cc, row,
                               ws___0->current_rot);
  if (tmp___0 != -1) {
    weight = weight_board(& ws___0->tg);
    if (weight < ws___0->best_weight) {
      ws___0->best_weight = weight;
      ws___0->desired_column = ws___0->cc;
      ws___0->desired_rot = ws___0->current_rot;
      if (weight == 0) {
        ws___0->know_what_to_do = 1;
      }
    }
  }
  (ws___0->cc) ++;
  if (ws___0->cc == g___0->w) {
    ws___0->cc = 0;
    (ws___0->current_rot) ++;
    if (ws___0->current_rot == 4) {
      ws___0->know_what_to_do = 1;
    }
  }
  return;
}
}

static void *wes_ai_reset(void *state , Grid *g___0 ) 
{ Wessy_State *retval ;
  void *tmp ;

  {
  if ((unsigned int )state == (unsigned int )((void *)0)) {
    tmp = calloc(sizeof(Wessy_State ), 1U);
    retval = (Wessy_State *)tmp;
    if (! retval) {
      Panic("wes_ai_reset", "ai.c",
            (char *)"Out of Memory:\n\tcannot callocate %d bytes for retval",
            sizeof(Wessy_State ));
    }
  } else {
    retval = (Wessy_State *)state;
  }
  if (! retval) {
    Panic("wes_ai_reset", "ai.c", (char *)"Failed assertion \"%s\" on line %d",
          "retval", 423);
  }
  retval->know_what_to_do = 0;
  retval->cc = -4;
  retval->current_rot = 0;
  retval->best_weight = 1 << 30;
  retval->desired_column = g___0->w / 2;
  retval->desired_rot = 0;
  if ((unsigned int )retval->tg.contents == (unsigned int )((void *)0)) {
    retval->tg = generate_board(g___0->w, g___0->h, 0);
  }
  return ((void *)retval);
}
}

static Command wes_ai_move(void *state , Grid *g___0 , play_piece *pp ,
                           play_piece *np , int col , int row , int rot ) 
{ Wessy_State *ws___0 ;

  {
  ws___0 = (Wessy_State *)state;
  if (rot != ws___0->desired_rot) {
    return ((enum __anonenum_Command_53 )3);
  } else {
    if (col > ws___0->desired_column) {
      return ((enum __anonenum_Command_53 )1);
    } else {
      if (col < ws___0->desired_column) {
        return ((enum __anonenum_Command_53 )2);
      } else {
        if (ws___0->know_what_to_do) {
          return ((enum __anonenum_Command_53 )4);
        } else {
          return ((enum __anonenum_Command_53 )0);
        }
      }
    }
  }
}
}

static double evalBoard(Grid *g___0 , int nLines , int row ) 
{ int x ;
  int y ;
  int z ;
  int maxHeight ;
  int minHeight ;
  int nHoles ;
  int nGarbage ;
  int nCanyons ;
  double avgHeight ;
  int nColumns ;
  int height ;
  char gc ;
  char gc2 ;

  {
  maxHeight = 0;
  minHeight = g___0->h;
  nHoles = 0;
  nGarbage = 0;
  nCanyons = 0;
  avgHeight = (double )0;
  nColumns = g___0->w;
  x = 0;
  while (x < g___0->w) {
    height = g___0->h;
    y = 0;
    while (y < g___0->h) {
      gc = (char )*(g___0->contents + (x + y * g___0->w));
      if ((int )gc == 0) {
        height --;
      } else {
        if ((int )gc == 1) {
          nGarbage ++;
        }
        z = y + 1;
        while (z < g___0->h) {
          gc2 = (char )*(g___0->contents + (x + z * g___0->w));
          if ((int )gc2 == 0) {
            nHoles += 2;
          } else {
            if ((int )gc2 == 1) {
              nGarbage ++;
            }
          }
          z ++;
        }
        break;
      }
      y ++;
    }
    avgHeight += (double )height;
    if (height > maxHeight) {
      maxHeight = height;
    }
    if (height < minHeight) {
      minHeight = height;
    }
    x ++;
  }
  avgHeight /= (double )nColumns;
  nHoles *= g___0->h;
  x = 0;
  while (x < g___0->w) {
    y = g___0->h - maxHeight;
    while (y < g___0->h) {
      if ((int )*(g___0->contents + (x + y * g___0->w)) == 0) {
        if (x == 0) {
          goto _L;
        } else {
          if (*(g___0->contents + ((x - 1) + y * g___0->w))) {
            _L: 
            if (x == g___0->w - 1) {
              nCanyons += y;
            } else {
              if (*(g___0->contents + ((x + 1) + y * g___0->w))) {
                nCanyons += y;
              }
            }
          }
        }
      }
      y ++;
    }
    x ++;
  }
  return ((((((((double )(maxHeight * g___0->h) + avgHeight) + (double )(maxHeight - minHeight)) + (double )nHoles) + (double )nCanyons) + (double )nGarbage) + (double )(g___0->h - row)) - (double )(nLines * nLines));
}
}

static void alizCogitate(void *state , Grid *g___0 , play_piece *pp ,
                         play_piece *np , int col , int row , int rot ) 
{ Aliz_State *as ;
  double eval ;
  double evalLeft ;
  double evalRight ;
  int nLines ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int y ;
  int tmp___3 ;
  int y___0 ;
  int tmp___4 ;

  {
  as = (Aliz_State *)state;
  evalLeft = (double )-1;
  evalRight = (double )-1;
  if (! as) {
    Panic("alizCogitate", "ai.c", (char *)"Failed assertion \"%s\" on line %d",
          "as", 571);
  }
  if (as->foundBest) {
    return;
  }
  memcpy((void */* __restrict  */)((void *)as->kg.contents),
         (void const   */* __restrict  */)((void const   *)g___0->contents),
         (unsigned int )(g___0->w * g___0->h) * sizeof(*(as->kg.contents + 0)));
  memcpy((void */* __restrict  */)((void *)as->kg.fall),
         (void const   */* __restrict  */)((void const   *)g___0->fall),
         (unsigned int )(g___0->w * g___0->h) * sizeof(*(as->kg.fall)));
  if (as->bestEval == (double )-1) {
    as->checkColumn = col;
    as->checkRotation = 0;
    as->checkSides = 0;
  } else {
    as->checkRotation = (as->checkRotation + 1) % 4;
    if (as->checkRotation == 0) {
      if (as->checkColumn == col) {
        goto _L;
      } else {
        if (as->checkColumn < col) {
          _L: 
          (as->checkColumn) --;
          tmp___0 = valid_position(pp, as->checkColumn, row, as->checkRotation,
                                   & as->kg);
          if (! tmp___0) {
            as->checkColumn = col + 1;
            tmp = valid_position(pp, as->checkColumn, row, as->checkRotation,
                                 & as->kg);
            if (! tmp) {
              return;
            }
          }
        } else {
          (as->checkColumn) ++;
          tmp___1 = valid_position(pp, as->checkColumn, row, as->checkRotation,
                                   & as->kg);
          if (! tmp___1) {
            return;
          }
        }
      }
    } else {
      tmp___2 = valid_position(pp, as->checkColumn, row, as->checkRotation,
                               & as->kg);
      if (! tmp___2) {
        if (as->checkColumn >= g___0->w) {
          if (as->checkRotation == 3) {
            as->foundBest = 1;
            return;
          } else {
            return;
          }
        } else {
          return;
        }
      }
    }
  }
  if (*(g___0->contents + (col + (row + 1) * g___0->w))) {
    if (col > g___0->w - col) {
      as->goalColumn = col / 2;
      as->goalRotation = as->checkRotation;
    } else {
      as->goalColumn = col + (g___0->w - col) / 2;
      as->goalRotation = as->checkRotation;
    }
    return;
  }
  nLines = drop_piece_on_grid(& as->kg, pp, as->checkColumn, row,
                              as->checkRotation);
  if (nLines != -1) {
    eval = evalBoard(& as->kg, nLines, row);
    if (as->bestEval == (double )-1) {
      goto _L___4;
    } else {
      if (eval < as->bestEval) {
        _L___4: 
        as->bestEval = eval;
        as->goalColumn = as->checkColumn;
        as->goalRotation = as->checkRotation;
        if (as->checkColumn > 0) {
          if (! *(g___0->contents + ((as->checkColumn - 1) + row * g___0->w))) {
            y = row;
            while (y >= 0) {
              if (*(g___0->contents + ((as->checkColumn - 1) + y * g___0->w))) {
                break;
              }
              y --;
            }
            if (y >= 0) {
              tmp___3 = valid_position(pp, as->checkColumn - 1, row,
                                       as->checkRotation, & as->kg);
              if (tmp___3) {
                printf((char const   */* __restrict  */)"Aliz: Trying to slip left.\n");
                memcpy((void */* __restrict  */)((void *)as->kg.contents),
                       (void const   */* __restrict  */)((void const   *)g___0->contents),
                       (unsigned int )(g___0->w * g___0->h) * sizeof(*(as->kg.contents + 0)));
                memcpy((void */* __restrict  */)((void *)as->kg.fall),
                       (void const   */* __restrict  */)((void const   *)g___0->fall),
                       (unsigned int )(g___0->w * g___0->h) * sizeof(*(as->kg.fall)));
                paste_on_board(pp, as->checkColumn - 1, row, as->checkRotation,
                               & as->kg);
                evalLeft = evalBoard(& as->kg, nLines, row);
              }
            }
          }
        }
        if (as->checkColumn < g___0->w - 1) {
          if (! *(g___0->contents + ((as->checkColumn + 1) + row * g___0->w))) {
            y___0 = row;
            while (y___0 >= 0) {
              if (*(g___0->contents + ((as->checkColumn + 1) + y___0 * g___0->w))) {
                break;
              }
              y___0 --;
            }
            if (y___0 >= 0) {
              tmp___4 = valid_position(pp, as->checkColumn + 1, row,
                                       as->checkRotation, & as->kg);
              if (tmp___4) {
                printf((char const   */* __restrict  */)"Aliz: Trying to slip right.\n");
                memcpy((void */* __restrict  */)((void *)as->kg.contents),
                       (void const   */* __restrict  */)((void const   *)g___0->contents),
                       (unsigned int )(g___0->w * g___0->h) * sizeof(*(as->kg.contents + 0)));
                memcpy((void */* __restrict  */)((void *)as->kg.fall),
                       (void const   */* __restrict  */)((void const   *)g___0->fall),
                       (unsigned int )(g___0->w * g___0->h) * sizeof(*(as->kg.fall)));
                paste_on_board(pp, as->checkColumn + 1, row, as->checkRotation,
                               & as->kg);
                evalRight = evalBoard(& as->kg, nLines, row);
              }
            }
          }
        }
        if (evalLeft >= (double )0) {
          if (evalLeft < as->bestEval) {
            if (evalLeft <= evalRight) {
              as->goalColumn = as->checkColumn;
              as->goalSides = -1;
              printf((char const   */* __restrict  */)": eval = %.3f left **",
                     eval);
            } else {
              goto _L___3;
            }
          } else {
            goto _L___3;
          }
        } else {
          _L___3: 
          if (evalRight >= (double )0) {
            if (evalRight < as->bestEval) {
              if (evalRight < evalLeft) {
                as->goalColumn = as->checkColumn;
                as->goalSides = 1;
                printf((char const   */* __restrict  */)": eval = %.3f right **",
                       eval);
              } else {
                goto _L___1;
              }
            } else {
              goto _L___1;
            }
          } else {
            _L___1: 
            if (as->bestEval == (double )-1) {
              as->bestEval = eval;
              as->goalColumn = as->checkColumn;
              as->goalRotation = as->checkRotation;
              as->goalSides = as->checkSides;
            } else {
              if (eval < as->bestEval) {
                as->bestEval = eval;
                as->goalColumn = as->checkColumn;
                as->goalRotation = as->checkRotation;
                as->goalSides = as->checkSides;
              }
            }
          }
        }
      }
    }
  }
  return;
}
}

static void *alizReset(void *state , Grid *g___0 ) 
{ Aliz_State *as ;
  void *tmp ;

  {
  if ((unsigned int )state == (unsigned int )((void *)0)) {
    tmp = calloc(sizeof(Aliz_State ), 1U);
    as = (Aliz_State *)tmp;
    if (! as) {
      Panic("alizReset", "ai.c",
            (char *)"Out of Memory:\n\tcannot callocate %d bytes for as",
            sizeof(Aliz_State ));
    }
  } else {
    as = (Aliz_State *)state;
  }
  if (! as) {
    Panic("alizReset", "ai.c", (char *)"Failed assertion \"%s\" on line %d",
          "as", 760);
  }
  as->bestEval = (double )-1;
  as->foundBest = 0;
  if ((unsigned int )as->kg.contents == (unsigned int )((void *)0)) {
    as->kg = generate_board(g___0->w, g___0->h, 0);
  }
  return ((void *)as);
}
}

static Command alizMove(void *state , Grid *g___0 , play_piece *pp ,
                        play_piece *np , int col , int row , int rot ) 
{ Aliz_State *as ;

  {
  as = (Aliz_State *)state;
  if (! as) {
    Panic("alizMove", "ai.c", (char *)"Failed assertion \"%s\" on line %d",
          "as", 784);
  }
  if (rot == as->goalRotation) {
    if (col == as->goalColumn) {
      if (as->foundBest) {
        if (*(g___0->contents + (col + (row + 1) * g___0->w))) {
          if (as->goalSides == -1) {
            return ((enum __anonenum_Command_53 )1);
          } else {
            if (as->goalSides == 1) {
              return ((enum __anonenum_Command_53 )2);
            }
          }
        }
        return ((enum __anonenum_Command_53 )4);
      } else {
        return ((enum __anonenum_Command_53 )0);
      }
    } else {
      if (col < as->goalColumn) {
        return ((enum __anonenum_Command_53 )2);
      } else {
        return ((enum __anonenum_Command_53 )1);
      }
    }
  } else {
    return ((enum __anonenum_Command_53 )3);
  }
}
}

AI_Players *AI_Players_Setup(void) 
{ int i ;
  AI_Players *retval ;
  void *tmp ;
  void *tmp___0 ;

  {
  tmp = calloc(sizeof(AI_Players ), 1U);
  retval = (AI_Players *)tmp;
  if (! retval) {
    Panic("AI_Players_Setup", "ai.c",
          (char *)"Out of Memory:\n\tcannot callocate %d bytes for retval",
          sizeof(AI_Players ));
  }
  retval->n = 4;
  tmp___0 = calloc(sizeof(AI_Player ) * (unsigned int )retval->n, 1U);
  retval->player = (AI_Player *)tmp___0;
  if (! retval->player) {
    Panic("AI_Players_Setup", "ai.c",
          (char *)"Out of Memory:\n\tcannot callocate %d bytes for retval->player",
          sizeof(AI_Player ) * (unsigned int )retval->n);
  }
  i = 0;
  (retval->player + i)->name = (char *)"Simple Robot";
  (retval->player + i)->msg = (char *)"An introductory opponent.";
  (retval->player + i)->move = & wes_ai_move;
  (retval->player + i)->think = & beginner_ai_think;
  (retval->player + i)->reset = & wes_ai_reset;
  i ++;
  (retval->player + i)->name = (char *)"Lightning";
  (retval->player + i)->msg = (char *)"Warp-speed heuristics.";
  (retval->player + i)->move = & wes_ai_move;
  (retval->player + i)->think = & wes_ai_think;
  (retval->player + i)->reset = & wes_ai_reset;
  i ++;
  (retval->player + i)->name = (char *)"Aliz";
  (retval->player + i)->msg = (char *)"Kiri\'s codified wit and wisdom.";
  (retval->player + i)->move = & alizMove;
  (retval->player + i)->think = & alizCogitate;
  (retval->player + i)->reset = & alizReset;
  i ++;
  (retval->player + i)->name = (char *)"Double-Think";
  (retval->player + i)->msg = (char *)"Brilliant but slow.";
  (retval->player + i)->move = & double_ai_move;
  (retval->player + i)->think = & double_ai_think;
  (retval->player + i)->reset = & double_ai_reset;
  i ++;
  printf((char const   */* __restrict  */)"%-14.14s| ", "AI_Players_Setup");
  printf((char const   */* __restrict  */)"AI Players Initialized (%d AIs).\n",
         retval->n);
  fflush(stdout);
  return (retval);
}
}

int pick_key_repeat(SDL_Surface *screen___0 ) 
{ char *factor ;
  int retval ;

  {
  clear_screen_to_flame();
  draw_string((char *)"(1 = Slow Repeat, 16 = Default, 32 = Fastest)",
              color_purple, screen___0->w / 2, screen___0->h / 2,
              ((1 << 3) | 1) | (1 << 1));
  draw_string((char *)"Keyboard repeat delay factor:", color_purple,
              screen___0->w / 2, screen___0->h / 2, (1 << 3) | (1 << 2));
  factor = input_string(screen___0, screen___0->w / 2, screen___0->h / 2, 0);
  retval = 0;
  sscanf((char const   */* __restrict  */)((char const   *)factor),
         (char const   */* __restrict  */)"%d", & retval);
  free((void *)factor);
  if (retval < 1) {
    retval = 1;
  }
  if (retval > 32) {
    retval = 32;
  }
  clear_screen_to_flame();
  return (retval);
}
}

int pick_ai_factor(SDL_Surface *screen___0 ) 
{ char *factor ;
  int retval ;

  {
  clear_screen_to_flame();
  draw_string((char *)"(1 = Impossible, 100 = Easy, 0 = Set Automatically)",
              color_purple, screen___0->w / 2, screen___0->h / 2,
              ((1 << 3) | 1) | (1 << 1));
  draw_string((char *)"Pick an AI delay factor:", color_purple,
              screen___0->w / 2, screen___0->h / 2, (1 << 3) | (1 << 2));
  factor = input_string(screen___0, screen___0->w / 2, screen___0->h / 2, 0);
  retval = 0;
  sscanf((char const   */* __restrict  */)((char const   *)factor),
         (char const   */* __restrict  */)"%d", & retval);
  free((void *)factor);
  if (retval < 0) {
    retval = 0;
  }
  if (retval > 100) {
    retval = 100;
  }
  return (retval);
}
}

int pick_an_ai(SDL_Surface *screen___0 , char *msg , AI_Players *AI ) 
{ WalkRadioGroup *wrg___1 ;
  int i ;
  int text_h ;
  int retval ;
  SDL_Event event ;
  char buf[1024] ;
  char *tmp___8 ;
  int retval___0 ;

  {
  wrg___1 = create_single_wrg(AI->n + 1);
  i = 0;
  while (i < AI->n) {
    sprintf((char */* __restrict  */)(buf),
            (char const   */* __restrict  */)"\"%s\" : %s",
            (AI->player + i)->name, (AI->player + i)->msg);
    tmp___8 = __strdup((char const   *)(buf));
    *((wrg___1->wr + 0)->label + i) = tmp___8;
    i ++;
  }
  *((wrg___1->wr + 0)->label + AI->n) = (char *)"-- Cancel --";
  retval = 0;
  (wrg___1->wr + 0)->defaultchoice = retval;
  if ((wrg___1->wr + 0)->defaultchoice > AI->n) {
    Panic("pick_an_ai", "ai.c", (char *)"not enough choices!");
  }
  setup_radio(wrg___1->wr + 0);
  (wrg___1->wr + 0)->x = (screen___0->w - (int )(wrg___1->wr + 0)->area.w) / 2;
  (wrg___1->wr + 0)->y = (screen___0->h - (int )(wrg___1->wr + 0)->area.h) / 2;
  clear_screen_to_flame();
  text_h = draw_string(msg, color_blue, screen___0->w / 2,
                       (wrg___1->wr + 0)->y - 30, (1 << 3) | 1);
  draw_string((char *)"Choose a Computer Player", color_blue, screen___0->w / 2,
              ((wrg___1->wr + 0)->y - 30) - text_h, (1 << 3) | 1);
  draw_radio(wrg___1->wr + 0, 1);
  while (1) {
    poll_and_flame(& event);
    retval___0 = handle_radio_event(wrg___1, (SDL_Event const   *)(& event));
    if (retval___0 == -1) {
      continue;
    }
    if (retval___0 == AI->n) {
      return (-1);
    }
    return (retval___0);
  }
}
}

extern int close(int __fd ) ;

extern  __attribute__((__nothrow__)) int chdir(char const   *__path )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) __mode_t umask(__mode_t __mask ) ;

extern int fclose(FILE *__stream ) ;

extern FILE *fopen(char const   * __restrict  __filename ,
                   char const   * __restrict  __modes ) ;

extern int fprintf(FILE * __restrict  __stream ,
                   char const   * __restrict  __format  , ...) ;

extern int vfprintf(FILE * __restrict  __s ,
                    char const   * __restrict  __format , __gnuc_va_list __arg ) ;

__inline static int vprintf(char const   * __restrict  __fmt ,
                            __gnuc_va_list __arg ) ;

extern char *fgets(char * __restrict  __s , int __n ,
                   FILE * __restrict  __stream ) ;

extern  __attribute__((__nothrow__)) int feof(FILE *__stream ) ;

__inline static int vprintf(char const   * __restrict  __fmt ,
                            __gnuc_va_list __arg ) 
{ int tmp ;

  {
  tmp = vfprintf((FILE */* __restrict  */)stdout, __fmt, __arg);
  return (tmp);
}
}

extern  __attribute__((__nothrow__)) int atexit(void (*__func)(void) )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status ) ;

extern  __attribute__((__nothrow__)) char *getenv(char const   *__name )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int strncmp(char const   *__s1 ,
                                                 char const   *__s2 ,
                                                 size_t __n )  __attribute__((__pure__,
__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) size_t strlen(char const   *__s )  __attribute__((__pure__,
__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) char *strerror(int __errnum ) ;

extern  __attribute__((__nothrow__)) int strcasecmp(char const   *__s1 ,
                                                    char const   *__s2 )  __attribute__((__pure__,
__nonnull__(1,2))) ;

extern char __attribute__((__visibility__("default")))  *SDL_GetError(void) ;

extern void __attribute__((__visibility__("default")))  SDL_CloseAudio(void) ;

extern int __attribute__((__visibility__("default")))  SDL_EnableUNICODE(int enable ) ;

extern int __attribute__((__visibility__("default")))  SDL_EnableKeyRepeat(int delay ,
                                                                           int interval ) ;

extern SDL_Surface __attribute__((__visibility__("default")))  *SDL_SetVideoMode(int width ,
                                                                                 int height ,
                                                                                 int bpp ,
                                                                                 Uint32 flags ) ;

extern void __attribute__((__visibility__("default")))  SDL_WM_SetCaption(char const   *title ,
                                                                          char const   *icon ) ;

extern int __attribute__((__visibility__("default")))  SDL_PollEvent(SDL_Event *event ) ;

extern void __attribute__((__visibility__("default")))  SDL_Delay(Uint32 ms ) ;

extern int __attribute__((__visibility__("default")))  SDL_Init(Uint32 flags ) ;

extern void __attribute__((__visibility__("default")))  SDL_Quit(void) ;

extern int __attribute__((__visibility__("default")))  TTF_Init(void) ;

extern TTF_Font __attribute__((__visibility__("default")))  *TTF_OpenFont(char const   *file ,
                                                                          int ptsize ) ;

extern void __attribute__((__visibility__("default")))  TTF_SetFontStyle(TTF_Font *font ,
                                                                         int style ) ;

extern void __attribute__((__visibility__("default")))  TTF_CloseFont(TTF_Font *font ) ;

extern void __attribute__((__visibility__("default")))  TTF_Quit(void) ;

extern ssize_t send(int __fd , void const   *__buf , size_t __n , int __flags ) ;

extern ssize_t recv(int __fd , void *__buf , size_t __n , int __flags ) ;

extern  __attribute__((__nothrow__)) int *__errno_location(void)  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) time_t time(time_t *__timer ) ;

void SeedRandom(Uint32 Seed ) ;

Uint16 FastRandom(Uint16 range ) ;

piece_styles load_piece_styles(void) ;

color_styles load_color_styles(SDL_Surface *screen___0 ) ;

sound_styles load_sound_styles(int sound_wanted ) ;

struct option_struct Options  ;

void setup_colors(SDL_Surface *screen___0 ) ;

int give_notice(char *s , int quit_possible ) ;

void setup_layers(SDL_Surface *screen___0 ) ;

void draw_background(SDL_Surface *screen___0 , int blockWidth , Grid *g___0 ,
                     int *level , int *my_adj , int *their_adj , char **name ) ;

void draw_score(SDL_Surface *screen___0 , int i ) ;

int event_loop(SDL_Surface *screen___0 , piece_style *ps , color_style **cs ,
               sound_style **ss , Grid *g___0 , int *level , int sock ,
               int *seconds_remaining , int time_is_hard_limit , int *adjust ,
               int (*handle)(SDL_Event const   * ) , int seed , int p1 ,
               int p2 , AI_Player **AI ) ;

int choose_gametype(piece_styles *ps , color_styles *cs , sound_styles *ss ,
                    AI_Players *ai ) ;

void high_score_check(int level , int new_score ) ;

identity *load_identity_file(void) ;

void save_identity_file(identity *id , char *new_name , int new_level ) ;

char *network_choice(SDL_Surface *screen___0 ) ;

int who_are_you(SDL_Surface *screen___0 , identity **id , int taken , int p ) ;

int Server_AwaitConnection(int port ) ;

int Client_Connect(char *hoststr , int lport ) ;

int Network_Init(void) ;

void Network_Quit(void) ;

void atris_xflame_setup(void) ;

static color_style *event_cs[2]  ;

static sound_style *event_ss[2]  ;

static AI_Player *event_ai[2]  ;

static char *event_name[2]  ;

int Score[2]  ;

 __attribute__((__noreturn__)) void Panic(char const   *func ,
                                          char const   *file , char *fmt  , ...) ;
void Panic(char const   *func , char const   *file , char *fmt  , ...) 
{ va_list ap ;
  int *tmp ;
  char *tmp___0 ;
  int *tmp___1 ;
  char __attribute__((__visibility__("default")))  *tmp___2 ;

  {
  __builtin_va_start(ap, fmt);
  printf((char const   */* __restrict  */)"\nPANIC in %s() of %s:\n\t", func,
         file);
  vprintf((char const   */* __restrict  */)((char const   *)fmt), ap);
  tmp = __errno_location();
  tmp___0 = strerror(*tmp);
  tmp___1 = __errno_location();
  printf((char const   */* __restrict  */)"\n\nlibc error %3d| %s\n", *tmp___1,
         tmp___0);
  tmp___2 = SDL_GetError();
  printf((char const   */* __restrict  */)"SDL error     | %s\n", tmp___2);
  SDL_CloseAudio();
  exit(1);
}
}

static void usage(void) 
{ 

  {
  printf((char const   */* __restrict  */)"\n\t\t\t\tatris -- Alizarin Tetris\nUsage: atris [options] \n\t-h --help\t\tThis message.\n\t-b --bg     \t\tFlaming background (default).\n\t-n --noflame\t\tNo flaming background.\n\t-s --sound\t\tEnable sound effects (default).\n\t-q --quiet\t\tNo sound effects.\n\t-w --window\t\tWindowed display (default).\n\t-f --fullscreen\t\tFull-screen display.\n\t-d=X --depth=X\t\tSet color detph (bpp) to X.\n\t-r=X --repeat=X\t\tSet the keyboard repeat delay to X.\n\t\t\t\t(1 = Slow Repeat, 16 = Fast Repeat)\n");
  exit(1);
}
}

void save_options(char *filespec ) 
{ FILE *fout ;
  FILE *tmp ;

  {
  tmp = fopen((char const   */* __restrict  */)((char const   *)filespec),
              (char const   */* __restrict  */)"wt");
  fout = tmp;
  if (! fout) {
    return;
  }
  fprintf((FILE */* __restrict  */)fout,
          (char const   */* __restrict  */)"# bpp = 15, 16, 24, 32 or 0 for auto-detect bits per pixel\nbpp = %d\n# sound_wanted = 0 or 1\nsound_wanted = %d\n# full_screen = 0 or 1\nfull_screen = %d\n# flame = 0 or 1 (CPU-sucking background flame)\nflame = %d\n# key_repeat = 1 to 32 (1 = slow repeat, 16 = default)\nkey_repeat = %d\n# power_pieces = 0 or 1\npower_pieces = %d\n# double_difficulty = 0 or 1\ndouble_difficulty = %d\n# long_settle = 0 or 1\nlong_settle = %d\n# upward_rotation = 0 or 1\nupward_rotation = %d\n#\ncolor_style = %d\nsound_style = %d\npiece_style = %d\ngame_style = %d\n",
          Options.bpp_wanted, Options.sound_wanted, Options.full_screen,
          Options.flame_wanted, Options.key_repeat_delay,
          Options.special_wanted, Options.faster_levels,
          Options.long_settle_delay, Options.upward_rotation,
          Options.named_color, Options.named_sound, Options.named_piece,
          Options.named_game);
  fclose(fout);
  printf((char const   */* __restrict  */)"%-14.14s| ", "save_options");
  printf((char const   */* __restrict  */)"Preference file [%s] saved.\n",
         filespec);
  fflush(stdout);
  return;
}
}

void load_options(char *filespec ) 
{ FILE *fin ;
  FILE *tmp ;
  char buf[1024] ;
  char cmd[1024] ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;

  {
  tmp = fopen((char const   */* __restrict  */)((char const   *)filespec),
              (char const   */* __restrict  */)"rt");
  fin = tmp;
  Options.full_screen = 0;
  Options.sound_wanted = 1;
  Options.flame_wanted = 1;
  Options.bpp_wanted = 0;
  Options.key_repeat_delay = 16;
  Options.special_wanted = 0;
  Options.faster_levels = 0;
  Options.upward_rotation = 1;
  Options.long_settle_delay = 1;
  Options.named_color = -1;
  Options.named_sound = -1;
  Options.named_piece = -1;
  Options.named_game = -1;
  if (! fin) {
    return;
  }
  while (1) {
    tmp___14 = feof(fin);
    if (tmp___14) {
      break;
    }
    fgets((char */* __restrict  */)(buf), (int )sizeof(buf),
          (FILE */* __restrict  */)fin);
    tmp___0 = feof(fin);
    if (tmp___0) {
      break;
    }
    if ((int )buf[0] == 35) {
      continue;
    } else {
      if ((int )buf[0] == 10) {
        continue;
      }
    }
    sscanf((char const   */* __restrict  */)((char const   *)(buf)),
           (char const   */* __restrict  */)"%s", cmd);
    tmp___13 = strcasecmp((char const   *)(cmd), "full_screen");
    if (tmp___13) {
      tmp___12 = strcasecmp((char const   *)(cmd), "sound_wanted");
      if (tmp___12) {
        tmp___11 = strcasecmp((char const   *)(cmd), "flame");
        if (tmp___11) {
          tmp___10 = strcasecmp((char const   *)(cmd), "bpp");
          if (tmp___10) {
            tmp___9 = strcasecmp((char const   *)(cmd), "key_repeat");
            if (tmp___9) {
              tmp___8 = strcasecmp((char const   *)(cmd), "power_pieces");
              if (tmp___8) {
                tmp___7 = strcasecmp((char const   *)(cmd), "double_difficulty");
                if (tmp___7) {
                  tmp___6 = strcasecmp((char const   *)(cmd), "long_settle");
                  if (tmp___6) {
                    tmp___5 = strcasecmp((char const   *)(cmd),
                                         "upward_rotation");
                    if (tmp___5) {
                      tmp___4 = strcasecmp((char const   *)(cmd), "color_style");
                      if (tmp___4) {
                        tmp___3 = strcasecmp((char const   *)(cmd),
                                             "sound_style");
                        if (tmp___3) {
                          tmp___2 = strcasecmp((char const   *)(cmd),
                                               "piece_style");
                          if (tmp___2) {
                            tmp___1 = strcasecmp((char const   *)(cmd),
                                                 "game_style");
                            if (tmp___1) {
                              printf((char const   */* __restrict  */)"%-14.14s| ",
                                     "load_options");
                              printf((char const   */* __restrict  */)"Unable to parse configuration line\n%s",
                                     buf);
                              fflush(stdout);
                            } else {
                              sscanf((char const   */* __restrict  */)((char const   *)(buf)),
                                     (char const   */* __restrict  */)"%s = %d",
                                     cmd, & Options.named_game);
                            }
                          } else {
                            sscanf((char const   */* __restrict  */)((char const   *)(buf)),
                                   (char const   */* __restrict  */)"%s = %d",
                                   cmd, & Options.named_piece);
                          }
                        } else {
                          sscanf((char const   */* __restrict  */)((char const   *)(buf)),
                                 (char const   */* __restrict  */)"%s = %d",
                                 cmd, & Options.named_sound);
                        }
                      } else {
                        sscanf((char const   */* __restrict  */)((char const   *)(buf)),
                               (char const   */* __restrict  */)"%s = %d", cmd,
                               & Options.named_color);
                      }
                    } else {
                      sscanf((char const   */* __restrict  */)((char const   *)(buf)),
                             (char const   */* __restrict  */)"%s = %d", cmd,
                             & Options.upward_rotation);
                    }
                  } else {
                    sscanf((char const   */* __restrict  */)((char const   *)(buf)),
                           (char const   */* __restrict  */)"%s = %d", cmd,
                           & Options.long_settle_delay);
                  }
                } else {
                  sscanf((char const   */* __restrict  */)((char const   *)(buf)),
                         (char const   */* __restrict  */)"%s = %d", cmd,
                         & Options.faster_levels);
                }
              } else {
                sscanf((char const   */* __restrict  */)((char const   *)(buf)),
                       (char const   */* __restrict  */)"%s = %d", cmd,
                       & Options.special_wanted);
              }
            } else {
              sscanf((char const   */* __restrict  */)((char const   *)(buf)),
                     (char const   */* __restrict  */)"%s = %d", cmd,
                     & Options.key_repeat_delay);
              if (Options.key_repeat_delay < 1) {
                Options.key_repeat_delay = 1;
              }
              if (Options.key_repeat_delay > 32) {
                Options.key_repeat_delay = 32;
              }
            }
          } else {
            sscanf((char const   */* __restrict  */)((char const   *)(buf)),
                   (char const   */* __restrict  */)"%s = %d", cmd,
                   & Options.bpp_wanted);
          }
        } else {
          sscanf((char const   */* __restrict  */)((char const   *)(buf)),
                 (char const   */* __restrict  */)"%s = %d", cmd,
                 & Options.flame_wanted);
        }
      } else {
        sscanf((char const   */* __restrict  */)((char const   *)(buf)),
               (char const   */* __restrict  */)"%s = %d", cmd,
               & Options.sound_wanted);
      }
    } else {
      sscanf((char const   */* __restrict  */)((char const   *)(buf)),
             (char const   */* __restrict  */)"%s = %d", cmd,
             & Options.full_screen);
    }
  }
  fclose(fin);
  printf((char const   */* __restrict  */)"%-14.14s| ", "load_options");
  printf((char const   */* __restrict  */)"Preference file [%s] loaded.\n",
         filespec);
  fflush(stdout);
  return;
}
}

static void parse_options(int argc , char **argv ) 
{ int i ;
  char *tmp___0 ;
  char *tmp___2 ;
  int tmp___16 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___22 ;
  int tmp___25 ;
  int tmp___26 ;
  int tmp___42 ;
  size_t __s1_len___2 ;
  size_t __s2_len___2 ;
  int tmp___48 ;
  int tmp___51 ;
  int tmp___52 ;
  int tmp___68 ;
  size_t __s1_len___4 ;
  size_t __s2_len___4 ;
  int tmp___74 ;
  int tmp___77 ;
  int tmp___78 ;
  int tmp___94 ;
  size_t __s1_len___6 ;
  size_t __s2_len___6 ;
  int tmp___100 ;
  int tmp___103 ;
  int tmp___104 ;
  size_t __s1_len___7 ;
  size_t __s2_len___7 ;
  int tmp___112 ;
  int tmp___115 ;
  int tmp___116 ;
  size_t __s1_len___8 ;
  size_t __s2_len___8 ;
  int tmp___122 ;
  int tmp___125 ;
  int tmp___126 ;
  size_t __s1_len___9 ;
  size_t __s2_len___9 ;
  int tmp___132 ;
  int tmp___135 ;
  int tmp___136 ;
  size_t __s1_len___10 ;
  size_t __s2_len___10 ;
  int tmp___142 ;
  int tmp___145 ;
  int tmp___146 ;
  size_t __s1_len___11 ;
  size_t __s2_len___11 ;
  int tmp___152 ;
  int tmp___155 ;
  int tmp___156 ;
  size_t __s1_len___12 ;
  size_t __s2_len___12 ;
  int tmp___162 ;
  int tmp___165 ;
  int tmp___166 ;
  size_t __s1_len___13 ;
  size_t __s2_len___13 ;
  int tmp___172 ;
  int tmp___175 ;
  int tmp___176 ;
  size_t __s1_len___14 ;
  size_t __s2_len___14 ;
  int tmp___182 ;
  int tmp___185 ;
  int tmp___186 ;
  size_t __s1_len___15 ;
  size_t __s2_len___15 ;
  int tmp___192 ;
  int tmp___195 ;
  int tmp___196 ;
  size_t __s1_len___16 ;
  size_t __s2_len___16 ;
  int tmp___202 ;
  int tmp___205 ;
  int tmp___206 ;
  size_t __s1_len___17 ;
  size_t __s2_len___17 ;
  int tmp___212 ;
  int tmp___215 ;
  int tmp___216 ;
  size_t __s1_len___18 ;
  size_t __s2_len___18 ;
  int tmp___222 ;
  int tmp___225 ;
  int tmp___226 ;
  size_t __s1_len___19 ;
  size_t __s2_len___19 ;
  int tmp___232 ;
  int tmp___235 ;
  int tmp___236 ;
  size_t __s1_len___20 ;
  size_t __s2_len___20 ;
  int tmp___242 ;
  int tmp___245 ;
  int tmp___246 ;
  size_t __s1_len___21 ;
  size_t __s2_len___21 ;
  int tmp___252 ;
  int tmp___255 ;
  int tmp___256 ;
  size_t __s1_len___22 ;
  size_t __s2_len___22 ;
  int tmp___262 ;
  int tmp___265 ;
  int tmp___266 ;

  {
  i = 1;
  while (i < argc) {
    if (0) {
      __s1_len___21 = strlen((char const   *)*(argv + i));
      __s2_len___21 = strlen("-h");
      if (! ((unsigned int )((void const   *)(*(argv + i) + 1)) - (unsigned int )((void const   *)*(argv + i)) == 1U)) {
        goto _L___45;
      } else {
        if (__s1_len___21 >= 4U) {
          _L___45: 
          if (! ((unsigned int )((void const   *)("-h" + 1)) - (unsigned int )((void const   *)"-h") == 1U)) {
            tmp___256 = 1;
          } else {
            if (__s2_len___21 >= 4U) {
              tmp___256 = 1;
            } else {
              tmp___256 = 0;
            }
          }
        } else {
          tmp___256 = 0;
        }
      }
      if (tmp___256) {
        tmp___252 = __builtin_strcmp((char const   *)*(argv + i), "-h");
      } else {
        tmp___255 = __builtin_strcmp((char const   *)*(argv + i), "-h");
        tmp___252 = tmp___255;
      }
    } else {
      tmp___255 = __builtin_strcmp((char const   *)*(argv + i), "-h");
      tmp___252 = tmp___255;
    }
    if (tmp___252) {
      if (0) {
        __s1_len___22 = strlen((char const   *)*(argv + i));
        __s2_len___22 = strlen("--help");
        if (! ((unsigned int )((void const   *)(*(argv + i) + 1)) - (unsigned int )((void const   *)*(argv + i)) == 1U)) {
          goto _L___47;
        } else {
          if (__s1_len___22 >= 4U) {
            _L___47: 
            if (! ((unsigned int )((void const   *)("--help" + 1)) - (unsigned int )((void const   *)"--help") == 1U)) {
              tmp___266 = 1;
            } else {
              if (__s2_len___22 >= 4U) {
                tmp___266 = 1;
              } else {
                tmp___266 = 0;
              }
            }
          } else {
            tmp___266 = 0;
          }
        }
        if (tmp___266) {
          tmp___262 = __builtin_strcmp((char const   *)*(argv + i), "--help");
        } else {
          tmp___265 = __builtin_strcmp((char const   *)*(argv + i), "--help");
          tmp___262 = tmp___265;
        }
      } else {
        tmp___265 = __builtin_strcmp((char const   *)*(argv + i), "--help");
        tmp___262 = tmp___265;
      }
      if (tmp___262) {
        if (0) {
          __s1_len___19 = strlen((char const   *)*(argv + i));
          __s2_len___19 = strlen("-?");
          if (! ((unsigned int )((void const   *)(*(argv + i) + 1)) - (unsigned int )((void const   *)*(argv + i)) == 1U)) {
            goto _L___41;
          } else {
            if (__s1_len___19 >= 4U) {
              _L___41: 
              if (! ((unsigned int )((void const   *)("-?" + 1)) - (unsigned int )((void const   *)"-?") == 1U)) {
                tmp___236 = 1;
              } else {
                if (__s2_len___19 >= 4U) {
                  tmp___236 = 1;
                } else {
                  tmp___236 = 0;
                }
              }
            } else {
              tmp___236 = 0;
            }
          }
          if (tmp___236) {
            tmp___232 = __builtin_strcmp((char const   *)*(argv + i), "-?");
          } else {
            tmp___235 = __builtin_strcmp((char const   *)*(argv + i), "-?");
            tmp___232 = tmp___235;
          }
        } else {
          tmp___235 = __builtin_strcmp((char const   *)*(argv + i), "-?");
          tmp___232 = tmp___235;
        }
        if (tmp___232) {
          if (0) {
            __s1_len___20 = strlen((char const   *)*(argv + i));
            __s2_len___20 = strlen("-help");
            if (! ((unsigned int )((void const   *)(*(argv + i) + 1)) - (unsigned int )((void const   *)*(argv + i)) == 1U)) {
              goto _L___43;
            } else {
              if (__s1_len___20 >= 4U) {
                _L___43: 
                if (! ((unsigned int )((void const   *)("-help" + 1)) - (unsigned int )((void const   *)"-help") == 1U)) {
                  tmp___246 = 1;
                } else {
                  if (__s2_len___20 >= 4U) {
                    tmp___246 = 1;
                  } else {
                    tmp___246 = 0;
                  }
                }
              } else {
                tmp___246 = 0;
              }
            }
            if (tmp___246) {
              tmp___242 = __builtin_strcmp((char const   *)*(argv + i), "-help");
            } else {
              tmp___245 = __builtin_strcmp((char const   *)*(argv + i), "-help");
              tmp___242 = tmp___245;
            }
          } else {
            tmp___245 = __builtin_strcmp((char const   *)*(argv + i), "-help");
            tmp___242 = tmp___245;
          }
          if (tmp___242) {
            if (0) {
              __s1_len___17 = strlen((char const   *)*(argv + i));
              __s2_len___17 = strlen("-b");
              if (! ((unsigned int )((void const   *)(*(argv + i) + 1)) - (unsigned int )((void const   *)*(argv + i)) == 1U)) {
                goto _L___37;
              } else {
                if (__s1_len___17 >= 4U) {
                  _L___37: 
                  if (! ((unsigned int )((void const   *)("-b" + 1)) - (unsigned int )((void const   *)"-b") == 1U)) {
                    tmp___216 = 1;
                  } else {
                    if (__s2_len___17 >= 4U) {
                      tmp___216 = 1;
                    } else {
                      tmp___216 = 0;
                    }
                  }
                } else {
                  tmp___216 = 0;
                }
              }
              if (tmp___216) {
                tmp___212 = __builtin_strcmp((char const   *)*(argv + i), "-b");
              } else {
                tmp___215 = __builtin_strcmp((char const   *)*(argv + i), "-b");
                tmp___212 = tmp___215;
              }
            } else {
              tmp___215 = __builtin_strcmp((char const   *)*(argv + i), "-b");
              tmp___212 = tmp___215;
            }
            if (tmp___212) {
              if (0) {
                __s1_len___18 = strlen((char const   *)*(argv + i));
                __s2_len___18 = strlen("--bg");
                if (! ((unsigned int )((void const   *)(*(argv + i) + 1)) - (unsigned int )((void const   *)*(argv + i)) == 1U)) {
                  goto _L___39;
                } else {
                  if (__s1_len___18 >= 4U) {
                    _L___39: 
                    if (! ((unsigned int )((void const   *)("--bg" + 1)) - (unsigned int )((void const   *)"--bg") == 1U)) {
                      tmp___226 = 1;
                    } else {
                      if (__s2_len___18 >= 4U) {
                        tmp___226 = 1;
                      } else {
                        tmp___226 = 0;
                      }
                    }
                  } else {
                    tmp___226 = 0;
                  }
                }
                if (tmp___226) {
                  tmp___222 = __builtin_strcmp((char const   *)*(argv + i),
                                               "--bg");
                } else {
                  tmp___225 = __builtin_strcmp((char const   *)*(argv + i),
                                               "--bg");
                  tmp___222 = tmp___225;
                }
              } else {
                tmp___225 = __builtin_strcmp((char const   *)*(argv + i), "--bg");
                tmp___222 = tmp___225;
              }
              if (tmp___222) {
                if (0) {
                  __s1_len___15 = strlen((char const   *)*(argv + i));
                  __s2_len___15 = strlen("-n");
                  if (! ((unsigned int )((void const   *)(*(argv + i) + 1)) - (unsigned int )((void const   *)*(argv + i)) == 1U)) {
                    goto _L___33;
                  } else {
                    if (__s1_len___15 >= 4U) {
                      _L___33: 
                      if (! ((unsigned int )((void const   *)("-n" + 1)) - (unsigned int )((void const   *)"-n") == 1U)) {
                        tmp___196 = 1;
                      } else {
                        if (__s2_len___15 >= 4U) {
                          tmp___196 = 1;
                        } else {
                          tmp___196 = 0;
                        }
                      }
                    } else {
                      tmp___196 = 0;
                    }
                  }
                  if (tmp___196) {
                    tmp___192 = __builtin_strcmp((char const   *)*(argv + i),
                                                 "-n");
                  } else {
                    tmp___195 = __builtin_strcmp((char const   *)*(argv + i),
                                                 "-n");
                    tmp___192 = tmp___195;
                  }
                } else {
                  tmp___195 = __builtin_strcmp((char const   *)*(argv + i), "-n");
                  tmp___192 = tmp___195;
                }
                if (tmp___192) {
                  if (0) {
                    __s1_len___16 = strlen((char const   *)*(argv + i));
                    __s2_len___16 = strlen("--noflame");
                    if (! ((unsigned int )((void const   *)(*(argv + i) + 1)) - (unsigned int )((void const   *)*(argv + i)) == 1U)) {
                      goto _L___35;
                    } else {
                      if (__s1_len___16 >= 4U) {
                        _L___35: 
                        if (! ((unsigned int )((void const   *)("--noflame" + 1)) - (unsigned int )((void const   *)"--noflame") == 1U)) {
                          tmp___206 = 1;
                        } else {
                          if (__s2_len___16 >= 4U) {
                            tmp___206 = 1;
                          } else {
                            tmp___206 = 0;
                          }
                        }
                      } else {
                        tmp___206 = 0;
                      }
                    }
                    if (tmp___206) {
                      tmp___202 = __builtin_strcmp((char const   *)*(argv + i),
                                                   "--noflame");
                    } else {
                      tmp___205 = __builtin_strcmp((char const   *)*(argv + i),
                                                   "--noflame");
                      tmp___202 = tmp___205;
                    }
                  } else {
                    tmp___205 = __builtin_strcmp((char const   *)*(argv + i),
                                                 "--noflame");
                    tmp___202 = tmp___205;
                  }
                  if (tmp___202) {
                    if (0) {
                      __s1_len___13 = strlen((char const   *)*(argv + i));
                      __s2_len___13 = strlen("-s");
                      if (! ((unsigned int )((void const   *)(*(argv + i) + 1)) - (unsigned int )((void const   *)*(argv + i)) == 1U)) {
                        goto _L___29;
                      } else {
                        if (__s1_len___13 >= 4U) {
                          _L___29: 
                          if (! ((unsigned int )((void const   *)("-s" + 1)) - (unsigned int )((void const   *)"-s") == 1U)) {
                            tmp___176 = 1;
                          } else {
                            if (__s2_len___13 >= 4U) {
                              tmp___176 = 1;
                            } else {
                              tmp___176 = 0;
                            }
                          }
                        } else {
                          tmp___176 = 0;
                        }
                      }
                      if (tmp___176) {
                        tmp___172 = __builtin_strcmp((char const   *)*(argv + i),
                                                     "-s");
                      } else {
                        tmp___175 = __builtin_strcmp((char const   *)*(argv + i),
                                                     "-s");
                        tmp___172 = tmp___175;
                      }
                    } else {
                      tmp___175 = __builtin_strcmp((char const   *)*(argv + i),
                                                   "-s");
                      tmp___172 = tmp___175;
                    }
                    if (tmp___172) {
                      if (0) {
                        __s1_len___14 = strlen((char const   *)*(argv + i));
                        __s2_len___14 = strlen("--sound");
                        if (! ((unsigned int )((void const   *)(*(argv + i) + 1)) - (unsigned int )((void const   *)*(argv + i)) == 1U)) {
                          goto _L___31;
                        } else {
                          if (__s1_len___14 >= 4U) {
                            _L___31: 
                            if (! ((unsigned int )((void const   *)("--sound" + 1)) - (unsigned int )((void const   *)"--sound") == 1U)) {
                              tmp___186 = 1;
                            } else {
                              if (__s2_len___14 >= 4U) {
                                tmp___186 = 1;
                              } else {
                                tmp___186 = 0;
                              }
                            }
                          } else {
                            tmp___186 = 0;
                          }
                        }
                        if (tmp___186) {
                          tmp___182 = __builtin_strcmp((char const   *)*(argv + i),
                                                       "--sound");
                        } else {
                          tmp___185 = __builtin_strcmp((char const   *)*(argv + i),
                                                       "--sound");
                          tmp___182 = tmp___185;
                        }
                      } else {
                        tmp___185 = __builtin_strcmp((char const   *)*(argv + i),
                                                     "--sound");
                        tmp___182 = tmp___185;
                      }
                      if (tmp___182) {
                        if (0) {
                          __s1_len___11 = strlen((char const   *)*(argv + i));
                          __s2_len___11 = strlen("-q");
                          if (! ((unsigned int )((void const   *)(*(argv + i) + 1)) - (unsigned int )((void const   *)*(argv + i)) == 1U)) {
                            goto _L___25;
                          } else {
                            if (__s1_len___11 >= 4U) {
                              _L___25: 
                              if (! ((unsigned int )((void const   *)("-q" + 1)) - (unsigned int )((void const   *)"-q") == 1U)) {
                                tmp___156 = 1;
                              } else {
                                if (__s2_len___11 >= 4U) {
                                  tmp___156 = 1;
                                } else {
                                  tmp___156 = 0;
                                }
                              }
                            } else {
                              tmp___156 = 0;
                            }
                          }
                          if (tmp___156) {
                            tmp___152 = __builtin_strcmp((char const   *)*(argv + i),
                                                         "-q");
                          } else {
                            tmp___155 = __builtin_strcmp((char const   *)*(argv + i),
                                                         "-q");
                            tmp___152 = tmp___155;
                          }
                        } else {
                          tmp___155 = __builtin_strcmp((char const   *)*(argv + i),
                                                       "-q");
                          tmp___152 = tmp___155;
                        }
                        if (tmp___152) {
                          if (0) {
                            __s1_len___12 = strlen((char const   *)*(argv + i));
                            __s2_len___12 = strlen("--quiet");
                            if (! ((unsigned int )((void const   *)(*(argv + i) + 1)) - (unsigned int )((void const   *)*(argv + i)) == 1U)) {
                              goto _L___27;
                            } else {
                              if (__s1_len___12 >= 4U) {
                                _L___27: 
                                if (! ((unsigned int )((void const   *)("--quiet" + 1)) - (unsigned int )((void const   *)"--quiet") == 1U)) {
                                  tmp___166 = 1;
                                } else {
                                  if (__s2_len___12 >= 4U) {
                                    tmp___166 = 1;
                                  } else {
                                    tmp___166 = 0;
                                  }
                                }
                              } else {
                                tmp___166 = 0;
                              }
                            }
                            if (tmp___166) {
                              tmp___162 = __builtin_strcmp((char const   *)*(argv + i),
                                                           "--quiet");
                            } else {
                              tmp___165 = __builtin_strcmp((char const   *)*(argv + i),
                                                           "--quiet");
                              tmp___162 = tmp___165;
                            }
                          } else {
                            tmp___165 = __builtin_strcmp((char const   *)*(argv + i),
                                                         "--quiet");
                            tmp___162 = tmp___165;
                          }
                          if (tmp___162) {
                            if (0) {
                              __s1_len___9 = strlen((char const   *)*(argv + i));
                              __s2_len___9 = strlen("-w");
                              if (! ((unsigned int )((void const   *)(*(argv + i) + 1)) - (unsigned int )((void const   *)*(argv + i)) == 1U)) {
                                goto _L___21;
                              } else {
                                if (__s1_len___9 >= 4U) {
                                  _L___21: 
                                  if (! ((unsigned int )((void const   *)("-w" + 1)) - (unsigned int )((void const   *)"-w") == 1U)) {
                                    tmp___136 = 1;
                                  } else {
                                    if (__s2_len___9 >= 4U) {
                                      tmp___136 = 1;
                                    } else {
                                      tmp___136 = 0;
                                    }
                                  }
                                } else {
                                  tmp___136 = 0;
                                }
                              }
                              if (tmp___136) {
                                tmp___132 = __builtin_strcmp((char const   *)*(argv + i),
                                                             "-w");
                              } else {
                                tmp___135 = __builtin_strcmp((char const   *)*(argv + i),
                                                             "-w");
                                tmp___132 = tmp___135;
                              }
                            } else {
                              tmp___135 = __builtin_strcmp((char const   *)*(argv + i),
                                                           "-w");
                              tmp___132 = tmp___135;
                            }
                            if (tmp___132) {
                              if (0) {
                                __s1_len___10 = strlen((char const   *)*(argv + i));
                                __s2_len___10 = strlen("--window");
                                if (! ((unsigned int )((void const   *)(*(argv + i) + 1)) - (unsigned int )((void const   *)*(argv + i)) == 1U)) {
                                  goto _L___23;
                                } else {
                                  if (__s1_len___10 >= 4U) {
                                    _L___23: 
                                    if (! ((unsigned int )((void const   *)("--window" + 1)) - (unsigned int )((void const   *)"--window") == 1U)) {
                                      tmp___146 = 1;
                                    } else {
                                      if (__s2_len___10 >= 4U) {
                                        tmp___146 = 1;
                                      } else {
                                        tmp___146 = 0;
                                      }
                                    }
                                  } else {
                                    tmp___146 = 0;
                                  }
                                }
                                if (tmp___146) {
                                  tmp___142 = __builtin_strcmp((char const   *)*(argv + i),
                                                               "--window");
                                } else {
                                  tmp___145 = __builtin_strcmp((char const   *)*(argv + i),
                                                               "--window");
                                  tmp___142 = tmp___145;
                                }
                              } else {
                                tmp___145 = __builtin_strcmp((char const   *)*(argv + i),
                                                             "--window");
                                tmp___142 = tmp___145;
                              }
                              if (tmp___142) {
                                if (0) {
                                  __s1_len___7 = strlen((char const   *)*(argv + i));
                                  __s2_len___7 = strlen("-f");
                                  if (! ((unsigned int )((void const   *)(*(argv + i) + 1)) - (unsigned int )((void const   *)*(argv + i)) == 1U)) {
                                    goto _L___17;
                                  } else {
                                    if (__s1_len___7 >= 4U) {
                                      _L___17: 
                                      if (! ((unsigned int )((void const   *)("-f" + 1)) - (unsigned int )((void const   *)"-f") == 1U)) {
                                        tmp___116 = 1;
                                      } else {
                                        if (__s2_len___7 >= 4U) {
                                          tmp___116 = 1;
                                        } else {
                                          tmp___116 = 0;
                                        }
                                      }
                                    } else {
                                      tmp___116 = 0;
                                    }
                                  }
                                  if (tmp___116) {
                                    tmp___112 = __builtin_strcmp((char const   *)*(argv + i),
                                                                 "-f");
                                  } else {
                                    tmp___115 = __builtin_strcmp((char const   *)*(argv + i),
                                                                 "-f");
                                    tmp___112 = tmp___115;
                                  }
                                } else {
                                  tmp___115 = __builtin_strcmp((char const   *)*(argv + i),
                                                               "-f");
                                  tmp___112 = tmp___115;
                                }
                                if (tmp___112) {
                                  if (0) {
                                    __s1_len___8 = strlen((char const   *)*(argv + i));
                                    __s2_len___8 = strlen("--fullscreen");
                                    if (! ((unsigned int )((void const   *)(*(argv + i) + 1)) - (unsigned int )((void const   *)*(argv + i)) == 1U)) {
                                      goto _L___19;
                                    } else {
                                      if (__s1_len___8 >= 4U) {
                                        _L___19: 
                                        if (! ((unsigned int )((void const   *)("--fullscreen" + 1)) - (unsigned int )((void const   *)"--fullscreen") == 1U)) {
                                          tmp___126 = 1;
                                        } else {
                                          if (__s2_len___8 >= 4U) {
                                            tmp___126 = 1;
                                          } else {
                                            tmp___126 = 0;
                                          }
                                        }
                                      } else {
                                        tmp___126 = 0;
                                      }
                                    }
                                    if (tmp___126) {
                                      tmp___122 = __builtin_strcmp((char const   *)*(argv + i),
                                                                   "--fullscreen");
                                    } else {
                                      tmp___125 = __builtin_strcmp((char const   *)*(argv + i),
                                                                   "--fullscreen");
                                      tmp___122 = tmp___125;
                                    }
                                  } else {
                                    tmp___125 = __builtin_strcmp((char const   *)*(argv + i),
                                                                 "--fullscreen");
                                    tmp___122 = tmp___125;
                                  }
                                  if (tmp___122) {
                                    if (0) {
                                      if (0) {
                                        __s1_len___4 = strlen((char const   *)*(argv + i));
                                        __s2_len___4 = strlen("-d=");
                                        if (! ((unsigned int )((void const   *)(*(argv + i) + 1)) - (unsigned int )((void const   *)*(argv + i)) == 1U)) {
                                          goto _L___11;
                                        } else {
                                          if (__s1_len___4 >= 4U) {
                                            _L___11: 
                                            if (! ((unsigned int )((void const   *)("-d=" + 1)) - (unsigned int )((void const   *)"-d=") == 1U)) {
                                              tmp___78 = 1;
                                            } else {
                                              if (__s2_len___4 >= 4U) {
                                                tmp___78 = 1;
                                              } else {
                                                tmp___78 = 0;
                                              }
                                            }
                                          } else {
                                            tmp___78 = 0;
                                          }
                                        }
                                        if (tmp___78) {
                                          tmp___74 = __builtin_strcmp((char const   *)*(argv + i),
                                                                      "-d=");
                                        } else {
                                          tmp___77 = __builtin_strcmp((char const   *)*(argv + i),
                                                                      "-d=");
                                          tmp___74 = tmp___77;
                                        }
                                      } else {
                                        tmp___77 = __builtin_strcmp((char const   *)*(argv + i),
                                                                    "-d=");
                                        tmp___74 = tmp___77;
                                      }
                                      tmp___68 = tmp___74;
                                    } else {
                                      tmp___68 = strncmp((char const   *)*(argv + i),
                                                         "-d=", 3U);
                                    }
                                    if (tmp___68) {
                                      if (0) {
                                        if (0) {
                                          __s1_len___6 = strlen((char const   *)*(argv + i));
                                          __s2_len___6 = strlen("--depth=");
                                          if (! ((unsigned int )((void const   *)(*(argv + i) + 1)) - (unsigned int )((void const   *)*(argv + i)) == 1U)) {
                                            goto _L___15;
                                          } else {
                                            if (__s1_len___6 >= 4U) {
                                              _L___15: 
                                              if (! ((unsigned int )((void const   *)("--depth=" + 1)) - (unsigned int )((void const   *)"--depth=") == 1U)) {
                                                tmp___104 = 1;
                                              } else {
                                                if (__s2_len___6 >= 4U) {
                                                  tmp___104 = 1;
                                                } else {
                                                  tmp___104 = 0;
                                                }
                                              }
                                            } else {
                                              tmp___104 = 0;
                                            }
                                          }
                                          if (tmp___104) {
                                            tmp___100 = __builtin_strcmp((char const   *)*(argv + i),
                                                                         "--depth=");
                                          } else {
                                            tmp___103 = __builtin_strcmp((char const   *)*(argv + i),
                                                                         "--depth=");
                                            tmp___100 = tmp___103;
                                          }
                                        } else {
                                          tmp___103 = __builtin_strcmp((char const   *)*(argv + i),
                                                                       "--depth=");
                                          tmp___100 = tmp___103;
                                        }
                                        tmp___94 = tmp___100;
                                      } else {
                                        tmp___94 = strncmp((char const   *)*(argv + i),
                                                           "--depth=", 8U);
                                      }
                                      if (tmp___94) {
                                        if (0) {
                                          if (0) {
                                            __s1_len___0 = strlen((char const   *)*(argv + i));
                                            __s2_len___0 = strlen("-r=");
                                            if (! ((unsigned int )((void const   *)(*(argv + i) + 1)) - (unsigned int )((void const   *)*(argv + i)) == 1U)) {
                                              goto _L___2;
                                            } else {
                                              if (__s1_len___0 >= 4U) {
                                                _L___2: 
                                                if (! ((unsigned int )((void const   *)("-r=" + 1)) - (unsigned int )((void const   *)"-r=") == 1U)) {
                                                  tmp___26 = 1;
                                                } else {
                                                  if (__s2_len___0 >= 4U) {
                                                    tmp___26 = 1;
                                                  } else {
                                                    tmp___26 = 0;
                                                  }
                                                }
                                              } else {
                                                tmp___26 = 0;
                                              }
                                            }
                                            if (tmp___26) {
                                              tmp___22 = __builtin_strcmp((char const   *)*(argv + i),
                                                                          "-r=");
                                            } else {
                                              tmp___25 = __builtin_strcmp((char const   *)*(argv + i),
                                                                          "-r=");
                                              tmp___22 = tmp___25;
                                            }
                                          } else {
                                            tmp___25 = __builtin_strcmp((char const   *)*(argv + i),
                                                                        "-r=");
                                            tmp___22 = tmp___25;
                                          }
                                          tmp___16 = tmp___22;
                                        } else {
                                          tmp___16 = strncmp((char const   *)*(argv + i),
                                                             "-r=", 3U);
                                        }
                                        if (tmp___16) {
                                          if (0) {
                                            if (0) {
                                              __s1_len___2 = strlen((char const   *)*(argv + i));
                                              __s2_len___2 = strlen("--repeat=");
                                              if (! ((unsigned int )((void const   *)(*(argv + i) + 1)) - (unsigned int )((void const   *)*(argv + i)) == 1U)) {
                                                goto _L___6;
                                              } else {
                                                if (__s1_len___2 >= 4U) {
                                                  _L___6: 
                                                  if (! ((unsigned int )((void const   *)("--repeat=" + 1)) - (unsigned int )((void const   *)"--repeat=") == 1U)) {
                                                    tmp___52 = 1;
                                                  } else {
                                                    if (__s2_len___2 >= 4U) {
                                                      tmp___52 = 1;
                                                    } else {
                                                      tmp___52 = 0;
                                                    }
                                                  }
                                                } else {
                                                  tmp___52 = 0;
                                                }
                                              }
                                              if (tmp___52) {
                                                tmp___48 = __builtin_strcmp((char const   *)*(argv + i),
                                                                            "--repeat=");
                                              } else {
                                                tmp___51 = __builtin_strcmp((char const   *)*(argv + i),
                                                                            "--repeat=");
                                                tmp___48 = tmp___51;
                                              }
                                            } else {
                                              tmp___51 = __builtin_strcmp((char const   *)*(argv + i),
                                                                          "--repeat=");
                                              tmp___48 = tmp___51;
                                            }
                                            tmp___42 = tmp___48;
                                          } else {
                                            tmp___42 = strncmp((char const   *)*(argv + i),
                                                               "--repeat=", 8U);
                                          }
                                          if (tmp___42) {
                                            printf((char const   */* __restrict  */)"%-14.14s| ",
                                                   "parse_options");
                                            printf((char const   */* __restrict  */)"option not understood: [%s]\n",
                                                   *(argv + i));
                                            fflush(stdout);
                                            usage();
                                          } else {
                                            _L___7: 
                                            tmp___2 = __builtin_strchr(*(argv + i),
                                                                       '=');
                                            sscanf((char const   */* __restrict  */)((char const   *)(tmp___2 + 1)),
                                                   (char const   */* __restrict  */)"%d",
                                                   & Options.key_repeat_delay);
                                            if (Options.key_repeat_delay < 1) {
                                              Options.key_repeat_delay = 1;
                                            }
                                            if (Options.key_repeat_delay > 32) {
                                              Options.key_repeat_delay = 32;
                                            }
                                          }
                                        } else {
                                          goto _L___7;
                                        }
                                      } else {
                                        tmp___0 = __builtin_strchr(*(argv + i),
                                                                   '=');
                                        sscanf((char const   */* __restrict  */)((char const   *)(tmp___0 + 1)),
                                               (char const   */* __restrict  */)"%d",
                                               & Options.bpp_wanted);
                                      }
                                    } else {
                                      tmp___0 = __builtin_strchr(*(argv + i),
                                                                 '=');
                                      sscanf((char const   */* __restrict  */)((char const   *)(tmp___0 + 1)),
                                             (char const   */* __restrict  */)"%d",
                                             & Options.bpp_wanted);
                                    }
                                  } else {
                                    Options.full_screen = 1;
                                  }
                                } else {
                                  Options.full_screen = 1;
                                }
                              } else {
                                Options.full_screen = 0;
                              }
                            } else {
                              Options.full_screen = 0;
                            }
                          } else {
                            Options.sound_wanted = 0;
                          }
                        } else {
                          Options.sound_wanted = 0;
                        }
                      } else {
                        Options.sound_wanted = 1;
                      }
                    } else {
                      Options.sound_wanted = 1;
                    }
                  } else {
                    Options.flame_wanted = 0;
                  }
                } else {
                  Options.flame_wanted = 0;
                }
              } else {
                Options.flame_wanted = 1;
              }
            } else {
              Options.flame_wanted = 1;
            }
          } else {
            usage();
          }
        } else {
          usage();
        }
      } else {
        usage();
      }
    } else {
      usage();
    }
    i ++;
  }
  printf((char const   */* __restrict  */)"%-14.14s| ", "parse_options");
  printf((char const   */* __restrict  */)"Command line arguments parsed.\n");
  fflush(stdout);
  return;
}
}

static int level_adjust(int *a , int *b , int *level , int match ) 
{ int i ;
  int up[2] ;
  int down[2] ;
  int tmp___3 ;
  int tmp___4 ;

  {
  up[0] = 0;
  up[1] = 0;
  down[0] = 0;
  down[1] = 0;
  i = 0;
  while (i <= match) {
    if (*(a + i) == 0) {
      (up[0]) ++;
    }
    if (*(a + i) == 2) {
      (down[0]) ++;
    }
    if (*(b + i) == 0) {
      (up[1]) ++;
    }
    if (*(b + i) == 2) {
      (down[1]) ++;
    }
    i ++;
  }
  while (1) {
    if (up[0] > 0) {
      if (! (up[1] > 0)) {
        break;
      }
    } else {
      break;
    }
    (up[0]) --;
    (up[1]) --;
  }
  while (1) {
    if (up[0] > 0) {
      if (! (down[0] > 0)) {
        break;
      }
    } else {
      break;
    }
    (up[0]) --;
    (down[0]) --;
  }
  while (1) {
    if (up[1] > 0) {
      if (! (down[1] > 0)) {
        break;
      }
    } else {
      break;
    }
    (up[1]) --;
    (down[1]) --;
  }
  while (1) {
    if (down[0] > 0) {
      if (! (down[1] > 0)) {
        break;
      }
    } else {
      break;
    }
    (down[0]) --;
    (down[1]) --;
  }
  if (up[0] == 3) {
    goto _L;
  } else {
    if (down[0] == 3) {
      goto _L;
    } else {
      if (up[1] == 3) {
        goto _L;
      } else {
        if (down[1] == 3) {
          _L: 
          if (up[0] == 3) {
            (*(level + 0)) ++;
          }
          if (down[0] == 3) {
            (*(level + 0)) --;
          }
          if (up[1] == 3) {
            (*(level + 1)) ++;
          }
          if (down[1] == 3) {
            (*(level + 1)) --;
          }
          *(b + 2) = -1;
          *(b + 1) = *(b + 2);
          *(b + 0) = *(b + 1);
          *(a + 2) = *(b + 0);
          *(a + 1) = *(a + 2);
          *(a + 0) = *(a + 1);
          return (0);
        }
      }
    }
  }
  *(b + 2) = -1;
  *(b + 1) = *(b + 2);
  *(b + 0) = *(b + 1);
  *(a + 2) = *(b + 0);
  *(a + 1) = *(a + 2);
  *(a + 0) = *(a + 1);
  if (up[0] > up[1]) {
    tmp___3 = up[0];
  } else {
    tmp___3 = up[1];
  }
  if (down[0] > down[1]) {
    tmp___4 = down[0];
  } else {
    tmp___4 = down[1];
  }
  if (tmp___3 > tmp___4) {
    if (up[0] > up[1]) {
      match = up[0];
    } else {
      match = up[1];
    }
  } else {
    if (down[0] > down[1]) {
      match = down[0];
    } else {
      match = down[1];
    }
  }
  i = 0;
  while (i < up[0]) {
    *(a + i) = 0;
    i ++;
  }
  i = up[0];
  while (i < up[0] + down[0]) {
    *(a + i) = 2;
    i ++;
  }
  i = up[0] + down[0];
  while (i < match) {
    *(a + i) = 1;
    i ++;
  }
  i = 0;
  while (i < up[1]) {
    *(b + i) = 0;
    i ++;
  }
  i = up[1];
  while (i < up[1] + down[1]) {
    *(b + i) = 2;
    i ++;
  }
  i = up[1] + down[1];
  while (i < match) {
    *(b + i) = 1;
    i ++;
  }
  return (match);
}
}

static void play_TWO_PLAYERS(color_styles cs , piece_styles ps ,
                             sound_styles ss , Grid *g___0 , person *p1 ,
                             person *p2 ) 
{ int curtimeleft ;
  int match ;
  int adjustment[2] ;
  int my_adj[3] ;
  int their_adj[3] ;
  int done ;
  int level[2] ;
  time_t our_time ;
  int tmp ;

  {
  adjustment[0] = -1;
  adjustment[1] = -1;
  done = 0;
  my_adj[2] = -1;
  my_adj[1] = my_adj[2];
  my_adj[0] = my_adj[1];
  their_adj[2] = -1;
  their_adj[1] = their_adj[2];
  their_adj[0] = their_adj[1];
  match = 0;
  level[0] = p1->level;
  level[1] = p2->level;
  while (! done) {
    time(& our_time);
    SeedRandom((unsigned int )our_time);
    *(g___0 + 0) = generate_board(10, 20, level[0]);
    SeedRandom((unsigned int )our_time);
    *(g___0 + 1) = generate_board(10, 20, level[1]);
    SeedRandom((unsigned int )our_time);
    event_name[0] = p1->name;
    event_name[1] = p2->name;
    draw_background(screen, (*(cs.style + 0))->w, g___0, level, my_adj,
                    their_adj, event_name);
    curtimeleft = 120;
    event_cs[1] = *(cs.style + cs.choice);
    event_cs[0] = event_cs[1];
    event_ss[1] = *(ss.style + ss.choice);
    event_ss[0] = event_ss[1];
    tmp = event_loop(screen, *(ps.style + ps.choice), event_cs, event_ss, g___0,
                     level, 0, & curtimeleft, 0, adjustment,
                     (int (*)(SDL_Event const   * ))((void *)0), (int )our_time,
                     1, 1, (AI_Player **)((void *)0));
    if (tmp >= 0) {
      draw_background(screen, (*(cs.style + 0))->w, g___0, level, my_adj,
                      their_adj, event_name);
      SDL_Delay(1000U);
    }
    my_adj[match] = adjustment[0];
    their_adj[match] = adjustment[1];
    match = level_adjust(my_adj, their_adj, level, match);
    p1->level = level[0];
    p2->level = level[1];
    draw_background(screen, (*(cs.style + 0))->w, g___0, level, my_adj,
                    their_adj, event_name);
    draw_score(screen, 0);
    draw_score(screen, 1);
    done = give_notice((char *)((void *)0), 1);
  }
  return;
}
}

static void play_AI_VS_AI(color_styles cs , piece_styles ps , sound_styles ss ,
                          Grid *g___0 , AI_Player *p1 , AI_Player *p2 ) 
{ int curtimeleft ;
  int match ;
  int level[2] ;
  int adjustment[2] ;
  int my_adj[3] ;
  int their_adj[3] ;
  int done ;
  time_t our_time ;
  int p1_results[3] ;
  int p2_results[3] ;
  Uint16 tmp___1 ;
  Uint16 tmp___2 ;
  Uint16 tmp___3 ;
  int tmp___4 ;

  {
  adjustment[0] = -1;
  adjustment[1] = -1;
  done = 0;
  p1_results[0] = 0;
  p1_results[1] = 0;
  p1_results[2] = 0;
  p2_results[0] = 0;
  p2_results[1] = 0;
  p2_results[2] = 0;
  my_adj[0] = -1;
  my_adj[1] = -1;
  my_adj[2] = -1;
  their_adj[0] = -1;
  their_adj[1] = -1;
  their_adj[2] = -1;
  match = 0;
  while (! done) {
    time(& our_time);
    if (Options.faster_levels) {
      tmp___1 = FastRandom((unsigned short)8);
      level[1] = 1 + (int )tmp___1;
    } else {
      tmp___2 = FastRandom((unsigned short)16);
      level[1] = 2 + (int )tmp___2;
    }
    level[0] = level[1];
    SeedRandom((unsigned int )our_time);
    *(g___0 + 0) = generate_board(10, 20, level[0]);
    SeedRandom((unsigned int )our_time);
    *(g___0 + 1) = generate_board(10, 20, level[0]);
    SeedRandom((unsigned int )our_time);
    event_name[0] = p1->name;
    event_name[1] = p2->name;
    draw_background(screen, (*(cs.style + 0))->w, g___0, level, p1_results,
                    p2_results, event_name);
    curtimeleft = 120;
    event_cs[0] = *(cs.style + cs.choice);
    tmp___3 = FastRandom((unsigned short )cs.num_style);
    event_cs[1] = *(cs.style + (int )tmp___3);
    event_ss[1] = *(ss.style + ss.choice);
    event_ss[0] = event_ss[1];
    event_ai[0] = p1;
    event_ai[1] = p2;
    tmp___4 = event_loop(screen, *(ps.style + ps.choice), event_cs, event_ss,
                         g___0, level, 0, & curtimeleft, 0, adjustment,
                         (int (*)(SDL_Event const   * ))((void *)0),
                         (int )our_time, 2, 2, event_ai);
    if (tmp___4 < 0) {
      return;
    }
    if (adjustment[0] != -1) {
      (p1_results[adjustment[0]]) ++;
    }
    if (adjustment[1] != -1) {
      (p2_results[adjustment[1]]) ++;
    }
    draw_background(screen, (*(cs.style + 0))->w, g___0, level, p1_results,
                    p2_results, event_name);
    draw_score(screen, 0);
    draw_score(screen, 1);
  }
  return;
}
}

static int play_SINGLE_VS_AI(color_styles cs , piece_styles ps ,
                             sound_styles ss , Grid *g___0 , person *p ,
                             AI_Player *aip ) 
{ int curtimeleft ;
  int match ;
  int level[2] ;
  int adjustment[2] ;
  int my_adj[3] ;
  int their_adj[3] ;
  int done ;
  time_t our_time ;
  Uint16 tmp ;
  int tmp___0 ;

  {
  adjustment[0] = -1;
  adjustment[1] = -1;
  done = 0;
  my_adj[2] = -1;
  my_adj[1] = my_adj[2];
  my_adj[0] = my_adj[1];
  their_adj[2] = -1;
  their_adj[1] = their_adj[2];
  their_adj[0] = their_adj[1];
  match = 0;
  level[1] = p->level;
  level[0] = level[1];
  while (! done) {
    time(& our_time);
    level[1] = level[0];
    SeedRandom((unsigned int )our_time);
    *(g___0 + 0) = generate_board(10, 20, level[0]);
    SeedRandom((unsigned int )our_time);
    *(g___0 + 1) = generate_board(10, 20, level[0]);
    SeedRandom((unsigned int )our_time);
    event_name[0] = p->name;
    event_name[1] = aip->name;
    draw_background(screen, (*(cs.style + 0))->w, g___0, level, my_adj,
                    their_adj, event_name);
    curtimeleft = 120;
    event_cs[0] = *(cs.style + cs.choice);
    tmp = FastRandom((unsigned short )cs.num_style);
    event_cs[1] = *(cs.style + (int )tmp);
    event_ss[1] = *(ss.style + ss.choice);
    event_ss[0] = event_ss[1];
    event_ai[0] = (AI_Player *)((void *)0);
    event_ai[1] = aip;
    tmp___0 = event_loop(screen, *(ps.style + ps.choice), event_cs, event_ss,
                         g___0, level, 0, & curtimeleft, 0, adjustment,
                         (int (*)(SDL_Event const   * ))((void *)0),
                         (int )our_time, 1, 2, event_ai);
    if (tmp___0 >= 0) {
      draw_background(screen, (*(cs.style + 0))->w, g___0, level, my_adj,
                      their_adj, event_name);
      draw_score(screen, 0);
      draw_score(screen, 1);
      SDL_Delay(1000U);
    }
    my_adj[match] = adjustment[0];
    their_adj[match] = adjustment[1];
    match = level_adjust(my_adj, their_adj, level, match);
    draw_background(screen, (*(cs.style + 0))->w, g___0, level, my_adj,
                    their_adj, event_name);
    draw_score(screen, 0);
    draw_score(screen, 1);
    done = give_notice((char *)((void *)0), 1);
  }
  return (level[0]);
}
}

char *error_msg ;

static int play_NETWORK(color_styles cs , piece_styles ps , sound_styles ss ,
                        Grid *g___0 , person *p , char *hostname ) 
{ int curtimeleft ;
  int server ;
  int match ;
  int level[2] ;
  int adjustment[2] ;
  int my_adj[3] ;
  int their_adj[3] ;
  char message[1024] ;
  char *their_name ;
  int done ;
  int sock ;
  int their_cs_choice ;
  int their_data ;
  time_t our_time ;
  SDL_Event event ;
  int __attribute__((__visibility__("default")))  tmp ;
  int i ;
  SDL_Event event___0 ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  ssize_t tmp___1 ;
  ssize_t tmp___2 ;
  ssize_t tmp___3 ;
  ssize_t tmp___4 ;
  ssize_t tmp___5 ;
  ssize_t tmp___6 ;
  ssize_t tmp___7 ;
  ssize_t tmp___8 ;
  ssize_t tmp___9 ;
  ssize_t tmp___10 ;
  size_t tmp___11 ;
  ssize_t tmp___12 ;
  size_t tmp___13 ;
  ssize_t tmp___14 ;
  size_t tmp___15 ;
  ssize_t tmp___16 ;
  ssize_t tmp___17 ;
  ssize_t tmp___18 ;
  void *tmp___19 ;
  ssize_t tmp___20 ;
  ssize_t tmp___21 ;
  ssize_t tmp___22 ;
  ssize_t tmp___23 ;
  ssize_t tmp___24 ;
  unsigned int msg ;
  ssize_t tmp___25 ;
  ssize_t tmp___26 ;
  unsigned int msg___0 ;
  ssize_t tmp___27 ;
  ssize_t tmp___28 ;
  ssize_t tmp___29 ;
  SDL_Event event___1 ;
  ssize_t tmp___30 ;
  int __attribute__((__visibility__("default")))  tmp___31 ;
  int *tmp___32 ;
  char *tmp___33 ;

  {
  adjustment[0] = -1;
  adjustment[1] = -1;
  done = 0;
  server = (unsigned int )hostname == (unsigned int )((void *)0);
  level[0] = p->level;
  if (server) {
    clear_screen_to_flame();
    draw_string((char *)"Waiting for the client ...", color_blue, screen->w / 2,
                screen->h / 2, (1 | (1 << 1)) | (1 << 3));
    draw_string((char *)"Press \'Q\' to give up.", color_blue, screen->w / 2,
                screen->h / 2, 1 | (1 << 3));
    while (1) {
      sock = Server_AwaitConnection(7741);
      if (sock == -1) {
        tmp = SDL_PollEvent(& event);
        if (tmp) {
          if ((int )event.type == 2) {
            if ((int )event.key.keysym.sym == 113) {
              goto done;
            }
          }
        }
      }
      if (! (sock == -1)) {
        break;
      }
    }
  } else {
    sock = -1;
    i = 0;
    while (1) {
      if (i < 5) {
        if (! (sock == -1)) {
          break;
        }
      } else {
        break;
      }
      sock = Client_Connect(hostname, 7741);
      if (sock == -1) {
        tmp___0 = SDL_PollEvent(& event___0);
        if (tmp___0) {
          if ((int )event___0.type == 2) {
            if ((int )event___0.key.keysym.sym == 113) {
              goto done;
            }
          }
        }
      }
      if (sock == -1) {
        SDL_Delay(1000U);
      }
      i ++;
    }
    if (sock == -1) {
      goto error;
    }
  }
  clear_screen_to_flame();
  tmp___1 = send(sock,
                 (void const   *)((char const   *)(& (*(cs.style + cs.choice))->num_color)),
                 sizeof(int ), 0);
  if (tmp___1 < (int )sizeof(int )) {
    goto error;
  }
  tmp___2 = recv(sock, (void *)((char *)(& their_data)), sizeof(int ), 0);
  if (tmp___2 < (int )sizeof(int )) {
    goto error;
  }
  if (their_data != (*(cs.style + cs.choice))->num_color) {
    sprintf((char */* __restrict  */)(message),
            (char const   */* __restrict  */)"The # of colors in your styles are not equal. (%d/%d)",
            (*(cs.style + cs.choice))->num_color, their_data);
    goto known_error;
  }
  tmp___3 = send(sock,
                 (void const   *)((char const   *)(& (*(ps.style + ps.choice))->num_piece)),
                 sizeof(int ), 0);
  if (tmp___3 < (int )sizeof(int )) {
    goto error;
  }
  tmp___4 = recv(sock, (void *)((char *)(& their_data)), sizeof(int ), 0);
  if (tmp___4 < (int )sizeof(int )) {
    goto error;
  }
  if (their_data != (*(ps.style + ps.choice))->num_piece) {
    sprintf((char */* __restrict  */)(message),
            (char const   */* __restrict  */)"The # of shapes in your styles are not equal. (%d/%d)",
            (*(ps.style + ps.choice))->num_piece, their_data);
    goto known_error;
  }
  tmp___5 = send(sock,
                 (void const   *)((char const   *)(& Options.special_wanted)),
                 sizeof(int ), 0);
  if (tmp___5 < (int )sizeof(int )) {
    goto error;
  }
  tmp___6 = recv(sock, (void *)((char *)(& their_data)), sizeof(int ), 0);
  if (tmp___6 < (int )sizeof(int )) {
    goto error;
  }
  if (their_data != Options.special_wanted) {
    sprintf((char */* __restrict  */)(message),
            (char const   */* __restrict  */)"You must both agree on whether to use Power Pieces");
    goto known_error;
  }
  tmp___7 = send(sock,
                 (void const   *)((char const   *)(& Options.faster_levels)),
                 sizeof(int ), 0);
  if (tmp___7 < (int )sizeof(int )) {
    goto error;
  }
  tmp___8 = recv(sock, (void *)((char *)(& their_data)), sizeof(int ), 0);
  if (tmp___8 < (int )sizeof(int )) {
    goto error;
  }
  if (their_data != Options.special_wanted) {
    sprintf((char */* __restrict  */)(message),
            (char const   */* __restrict  */)"You must both agree on Double Difficulty");
    goto known_error;
  }
  tmp___9 = send(sock, (void const   *)((char const   *)(level)),
                 sizeof(level[0]), 0);
  if (tmp___9 < (int )sizeof(level[0])) {
    goto error;
  }
  tmp___10 = send(sock, (void const   *)((char const   *)(& cs.choice)),
                  sizeof(cs.choice), 0);
  if (tmp___10 < (int )sizeof(cs.choice)) {
    goto error;
  }
  tmp___11 = strlen((char const   *)p->name);
  match = (int )tmp___11;
  tmp___12 = send(sock, (void const   *)((char const   *)(& match)),
                  sizeof(match), 0);
  if (tmp___12 < (int )sizeof(match)) {
    goto error;
  }
  tmp___13 = strlen((char const   *)p->name);
  tmp___14 = send(sock, (void const   *)((char const   *)p->name), tmp___13, 0);
  tmp___15 = strlen((char const   *)p->name);
  if (tmp___14 < (int )tmp___15) {
    goto error;
  }
  tmp___16 = recv(sock, (void *)((char *)(& level[1])), sizeof(level[1]), 0);
  if (tmp___16 < (int )sizeof(level[1])) {
    goto error;
  }
  if (! (sizeof(their_cs_choice) == sizeof(cs.choice))) {
    Panic("play_NETWORK", "atris.c",
          (char *)"Failed assertion \"%s\" on line %d",
          "sizeof(their_cs_choice) == sizeof(cs.choice)", 650);
  }
  tmp___17 = recv(sock, (void *)((char *)(& their_cs_choice)),
                  sizeof(cs.choice), 0);
  if (tmp___17 < (int )sizeof(cs.choice)) {
    goto error;
  }
  if (their_cs_choice < 0) {
    their_cs_choice = cs.choice;
  } else {
    if (their_cs_choice >= cs.num_style) {
      their_cs_choice = cs.choice;
    }
  }
  tmp___18 = recv(sock, (void *)((char *)(& match)), sizeof(match), 0);
  if (tmp___18 < (int )sizeof(match)) {
    goto error;
  }
  tmp___19 = calloc((unsigned int )match, 1U);
  their_name = (char *)tmp___19;
  if (! their_name) {
    Panic("play_NETWORK", "atris.c",
          (char *)"Out of Memory:\n\tcannot callocate %d bytes for their_name",
          match);
  }
  tmp___20 = recv(sock, (void *)their_name, (unsigned int )match, 0);
  if (tmp___20 < match) {
    goto error;
  }
  my_adj[2] = -1;
  my_adj[1] = my_adj[2];
  my_adj[0] = my_adj[1];
  their_adj[2] = -1;
  their_adj[1] = their_adj[2];
  their_adj[0] = their_adj[1];
  match = 0;
  while (! done) {
    if (server) {
      time(& our_time);
      tmp___21 = send(sock, (void const   *)((char const   *)(& our_time)),
                      sizeof(our_time), 0);
      if (tmp___21 < (int )sizeof(our_time)) {
        goto error;
      }
    } else {
      tmp___22 = recv(sock, (void *)((char *)(& our_time)), sizeof(our_time), 0);
      if (tmp___22 < (int )sizeof(our_time)) {
        goto error;
      }
    }
    SeedRandom((unsigned int )our_time);
    *(g___0 + 0) = generate_board(10, 20, level[0]);
    SeedRandom((unsigned int )our_time);
    *(g___0 + 1) = generate_board(10, 20, level[1]);
    SeedRandom((unsigned int )our_time);
    event_name[0] = p->name;
    event_name[1] = their_name;
    draw_background(screen, (*(cs.style + 0))->w, g___0, level, my_adj,
                    their_adj, event_name);
    curtimeleft = 120;
    event_cs[0] = *(cs.style + cs.choice);
    event_cs[1] = *(cs.style + their_cs_choice);
    event_ss[1] = *(ss.style + ss.choice);
    event_ss[0] = event_ss[1];
    event_loop(screen, *(ps.style + ps.choice), event_cs, event_ss, g___0,
               level, sock, & curtimeleft, 0, adjustment,
               (int (*)(SDL_Event const   * ))((void *)0), (int )our_time, 1, 3,
               (AI_Player **)((void *)0));
    tmp___23 = send(sock, (void const   *)((char const   *)(Score)),
                    sizeof(Score[0]), 0);
    if (tmp___23 < (int )sizeof(Score[0])) {
      goto error;
    }
    tmp___24 = recv(sock, (void *)((char *)(& Score[1])), sizeof(Score[1]), 0);
    if (tmp___24 < (int )sizeof(Score[1])) {
      goto error;
    }
    draw_background(screen, (*(cs.style + 0))->w, g___0, level, my_adj,
                    their_adj, event_name);
    draw_score(screen, 0);
    draw_score(screen, 1);
    SDL_Delay(1000U);
    my_adj[match] = adjustment[0];
    their_adj[match] = adjustment[1];
    match = level_adjust(my_adj, their_adj, level, match);
    if (server) {
      msg = 305419896U;
      tmp___25 = send(sock, (void const   *)((char const   *)(& msg)),
                      sizeof(msg), 0);
      if (tmp___25 < (int )sizeof(msg)) {
        goto error;
      }
      tmp___26 = recv(sock, (void *)((char *)(& msg)), sizeof(msg), 0);
      if (tmp___26 < (int )sizeof(msg)) {
        goto error;
      }
      if (msg != 2557891634U) {
        give_notice((char *)"Network Error: Syncronization Failed", 0);
        goto done;
      }
    } else {
      tmp___27 = recv(sock, (void *)((char *)(& msg___0)), sizeof(msg___0), 0);
      if (tmp___27 < (int )sizeof(msg___0)) {
        goto error;
      }
      if (msg___0 != 305419896U) {
        give_notice((char *)"Network Error: Syncronization Failed", 1);
        goto done;
      }
      msg___0 = 2557891634U;
      tmp___28 = send(sock, (void const   *)((char const   *)(& msg___0)),
                      sizeof(msg___0), 0);
      if (tmp___28 < (int )sizeof(msg___0)) {
        goto error;
      }
    }
    draw_background(screen, (*(cs.style + 0))->w, g___0, level, my_adj,
                    their_adj, event_name);
    draw_score(screen, 0);
    draw_score(screen, 1);
    if (server) {
      done = give_notice((char *)((void *)0), 1);
      tmp___29 = send(sock, (void const   *)((char const   *)(& done)),
                      sizeof(done), 0);
      if (tmp___29 < (int )sizeof(done)) {
        goto error;
      }
    } else {
      draw_string((char *)"Waiting for the", color_blue, 0, 0,
                  ((1 | (1 << 1)) | (1 << 3)) | (1 << 7));
      draw_string((char *)"Server to go on.", color_blue, 0, 0,
                  (1 | (1 << 3)) | (1 << 7));
      tmp___30 = recv(sock, (void *)((char *)(& done)), sizeof(done), 0);
      if (tmp___30 < (int )sizeof(done)) {
        goto error;
      }
      while (1) {
        tmp___31 = SDL_PollEvent(& event___1);
        if (! tmp___31) {
          break;
        }
      }
    }
    clear_screen_to_flame();
  }
  close(sock);
  return (level[0]);
  error: 
  if (error_msg) {
    sprintf((char */* __restrict  */)(message),
            (char const   */* __restrict  */)"Network Error: %s", error_msg);
  } else {
    tmp___32 = __errno_location();
    tmp___33 = strerror(*tmp___32);
    sprintf((char */* __restrict  */)(message),
            (char const   */* __restrict  */)"Network Error: %s", tmp___33);
  }
  known_error: 
  clear_screen_to_flame();
  give_notice(message, 0);
  done: 
  close(sock);
  return (level[0]);
}
}

static int play_MARATHON(color_styles cs , piece_styles ps , sound_styles ss ,
                         Grid *g___0 , person *p ) 
{ int curtimeleft ;
  int level[2] ;
  int adjustment[2] ;
  int my_adj[3] ;
  char message[1024] ;
  int result ;
  time_t tmp ;
  int tmp___0 ;

  {
  adjustment[0] = -1;
  adjustment[1] = -1;
  level[0] = p->level;
  SeedRandom(0U);
  Score[0] = 0;
  my_adj[0] = -1;
  my_adj[1] = -1;
  my_adj[2] = -1;
  while (1) {
    curtimeleft = 300;
    *(g___0 + 0) = generate_board(10, 20, level[0]);
    event_name[0] = p->name;
    draw_background(screen, (*(cs.style + 0))->w, g___0, level, my_adj,
                    (int *)((void *)0), event_name);
    event_cs[1] = *(cs.style + cs.choice);
    event_cs[0] = event_cs[1];
    event_ss[1] = *(ss.style + ss.choice);
    event_ss[0] = event_ss[1];
    tmp = time((time_t *)((void *)0));
    result = event_loop(screen, *(ps.style + ps.choice), event_cs, event_ss,
                        g___0, level, 0, & curtimeleft, 1, adjustment,
                        (int (*)(SDL_Event const   * ))((void *)0), (int )tmp,
                        1, 0, (AI_Player **)((void *)0));
    if (result < 0) {
      return (level[0]);
    }
    my_adj[0] = adjustment[0];
    draw_background(screen, (*(cs.style + 0))->w, g___0, level, my_adj,
                    (int *)((void *)0), event_name);
    draw_score(screen, 0);
    if (adjustment[0] != 0) {
      give_notice((char *)"Game Over!", 0);
      return (level[0]);
    }
    my_adj[0] = -1;
    (level[0]) ++;
    sprintf((char */* __restrict  */)(message),
            (char const   */* __restrict  */)"Up to Level %d!", level[0]);
    tmp___0 = give_notice(message, 1);
    if (tmp___0) {
      return (level[0]);
    }
  }
}
}

static int play_SINGLE(color_styles cs , piece_styles ps , sound_styles ss ,
                       Grid *g___0 , person *p ) 
{ int curtimeleft ;
  int match ;
  int level[2] ;
  int adjustment[2] ;
  int my_adj[3] ;
  char message[1024] ;
  int result ;
  time_t tmp ;
  int tmp___0 ;

  {
  adjustment[0] = -1;
  adjustment[1] = -1;
  level[0] = p->level;
  SeedRandom(0U);
  Score[0] = 0;
  while (1) {
    curtimeleft = 300;
    my_adj[0] = -1;
    my_adj[1] = -1;
    my_adj[2] = -1;
    match = 0;
    while (1) {
      if (match < 3) {
        if (! (curtimeleft > 0)) {
          break;
        }
      } else {
        break;
      }
      *(g___0 + 0) = generate_board(10, 20, level[0]);
      event_name[0] = p->name;
      draw_background(screen, (*(cs.style + 0))->w, g___0, level, my_adj,
                      (int *)((void *)0), event_name);
      event_cs[1] = *(cs.style + cs.choice);
      event_cs[0] = event_cs[1];
      event_ss[1] = *(ss.style + ss.choice);
      event_ss[0] = event_ss[1];
      tmp = time((time_t *)((void *)0));
      result = event_loop(screen, *(ps.style + ps.choice), event_cs, event_ss,
                          g___0, level, 0, & curtimeleft, 1, adjustment,
                          (int (*)(SDL_Event const   * ))((void *)0), (int )tmp,
                          1, 0, (AI_Player **)((void *)0));
      if (result < 0) {
        return (level[0]);
      }
      my_adj[match] = adjustment[0];
      draw_background(screen, (*(cs.style + 0))->w, g___0, level, my_adj,
                      (int *)((void *)0), event_name);
      draw_score(screen, 0);
      message[0] = (char)0;
      if (match == 2) {
        if (my_adj[0] == 0) {
          if (my_adj[1] == 0) {
            if (my_adj[2] == 0) {
              (level[0]) ++;
              sprintf((char */* __restrict  */)(message),
                      (char const   */* __restrict  */)"Up to level %d!",
                      level[0]);
            } else {
              goto _L___0;
            }
          } else {
            goto _L___0;
          }
        } else {
          _L___0: 
          if (my_adj[0] == 2) {
            if (my_adj[1] == 2) {
              if (my_adj[2] == 2) {
                (level[0]) --;
                sprintf((char */* __restrict  */)(message),
                        (char const   */* __restrict  */)"Down to level %d!",
                        level[0]);
              }
            }
          }
        }
      }
      tmp___0 = give_notice(message, 1);
      if (tmp___0 == 1) {
        return (level[0]);
      }
      match ++;
    }
  }
}
}

int main(int argc , char **argv ) 
{ color_styles cs ;
  piece_styles ps ;
  sound_styles ss ;
  identity *id ;
  AI_Players *ai ;
  Grid g___0[2] ;
  int renderstyle ;
  int flags___0 ;
  Uint32 time_now ;
  SDL_Event event ;
  char filespec[2048] ;
  char *tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;
  SDL_Surface __attribute__((__visibility__("default")))  *tmp___2 ;
  int tmp___3 ;
  TTF_Font __attribute__((__visibility__("default")))  *tmp___4 ;
  TTF_Font __attribute__((__visibility__("default")))  *tmp___5 ;
  TTF_Font __attribute__((__visibility__("default")))  *tmp___6 ;
  TTF_Font __attribute__((__visibility__("default")))  *tmp___7 ;
  int __attribute__((__visibility__("default")))  tmp___8 ;
  Uint32 __attribute__((__visibility__("default")))  tmp___9 ;
  Uint32 __attribute__((__visibility__("default")))  tmp___10 ;
  int p1 ;
  int p2 ;
  int retval ;
  char *tmp___11 ;
  char filespec___0[2048] ;
  char *tmp___12 ;

  {
  renderstyle = 0;
  umask(0U);
  printf((char const   */* __restrict  */)"%-14.14s| ", "main");
  printf((char const   */* __restrict  */)"\tWelcome to Alizarin Tetris (version %s - %s)\n",
         "1.0.6", "Delay");
  fflush(stdout);
  printf((char const   */* __restrict  */)"%-14.14s| ", "main");
  printf((char const   */* __restrict  */)"\t~~~~~~~~~~~~~~~~~~~~~~~~~~ (%s)\n",
         "Aug 19 2008");
  fflush(stdout);
  tmp = getenv("HOME");
  load_options(filespec);
  parse_options(argc, argv);
  tmp___0 = SDL_Init(32U);
  if (tmp___0) {
    Panic("main", "atris.c", (char *)"SDL_Init failed!");
  }
  atexit((void (*)(void))(& SDL_Quit));
  tmp___1 = TTF_Init();
  if (tmp___1 < (int __attribute__((__visibility__("default")))  )0) {
    Panic("main", "atris.c", (char *)"TTF_Init failed!");
  }
  atexit((void (*)(void))(& TTF_Quit));
  printf((char const   */* __restrict  */)"%-14.14s| ", "main");
  printf((char const   */* __restrict  */)"SDL initialized.\n");
  fflush(stdout);
  flags___0 = 805310465;
  if (Options.full_screen) {
    flags___0 = (int )((unsigned int )flags___0 | 2147483648U);
  }
  tmp___2 = SDL_SetVideoMode(640, 480, Options.bpp_wanted,
                             (unsigned int )flags___0);
  screen = (SDL_Surface *)tmp___2;
  if ((unsigned int )screen == (unsigned int )((void *)0)) {
    Panic("main", "atris.c", (char *)"Could not set 640x480 video mode");
  }
  printf((char const   */* __restrict  */)"%-14.14s| ", "main");
  printf((char const   */* __restrict  */)"Video Mode: %d x %d @ %d bpp\n",
         screen->w, screen->h, (screen->format)->BitsPerPixel);
  fflush(stdout);
  if ((int )(screen->format)->BitsPerPixel <= 8) {
    Panic("main", "atris.c", (char *)"You need >256 colors to play atris");
  }
  SDL_WM_SetCaption("Alizarin Tetris", (char const   *)((char *)((void *)0)));
  Network_Init();
  setup_colors(screen);
  setup_layers(screen);
  tmp___3 = chdir("/usr/local/games/atris");
  if (tmp___3) {
    printf((char const   */* __restrict  */)"%-14.14s| ", "main");
    printf((char const   */* __restrict  */)"WARNING: cannot change directory to [%s]\n",
           "/usr/local/games/atris");
    fflush(stdout);
    printf((char const   */* __restrict  */)"%-14.14s| ", "main");
    printf((char const   */* __restrict  */)"WARNING: playing in current directory instead\n");
    fflush(stdout);
  } else {
    printf((char const   */* __restrict  */)"%-14.14s| ", "main");
    printf((char const   */* __restrict  */)"Changing directory to [%s]\n",
           "/usr/local/games/atris");
    fflush(stdout);
  }
  tmp___4 = TTF_OpenFont("graphics/NewMediumNormal.ttf", 18);
  sfont = (TTF_Font *)tmp___4;
  tmp___5 = TTF_OpenFont("graphics/NewMediumNormal.ttf", 24);
  font = (TTF_Font *)tmp___5;
  tmp___6 = TTF_OpenFont("graphics/NewMediumNormal.ttf", 36);
  lfont = (TTF_Font *)tmp___6;
  tmp___7 = TTF_OpenFont("graphics/NewMediumNormal.ttf", 96);
  hfont = (TTF_Font *)tmp___7;
  if ((unsigned int )font == (unsigned int )((void *)0)) {
    Panic("main", "atris.c",
          (char *)"Couldn\'t open [graphics/NewMediumNormal.ttf].",
          "/usr/local/games/atris");
  }
  TTF_SetFontStyle(font, renderstyle);
  TTF_SetFontStyle(sfont, renderstyle);
  Score[1] = 0;
  Score[0] = Score[1];
  SDL_EnableUNICODE(1);
  ps = load_piece_styles();
  cs = load_color_styles(screen);
  ss = load_sound_styles(Options.sound_wanted);
  if (Options.named_color >= 0) {
    if (Options.named_color < cs.num_style) {
      cs.choice = Options.named_color;
    }
  }
  if (Options.named_piece >= 0) {
    if (Options.named_piece < ps.num_style) {
      ps.choice = Options.named_piece;
    }
  }
  if (Options.named_sound >= 0) {
    if (Options.named_sound < ss.num_style) {
      ss.choice = Options.named_sound;
    }
  }
  if (Options.named_game >= 0) {
    if (Options.named_game <= 5) {
      gametype = (enum __anonenum_GT_50 )Options.named_game;
    } else {
      gametype = (enum __anonenum_GT_50 )0;
    }
  } else {
    gametype = (enum __anonenum_GT_50 )0;
  }
  ai = AI_Players_Setup();
  id = load_identity_file();
  atris_xflame_setup();
  while (1) {
    tmp___8 = SDL_PollEvent(& event);
    if (! tmp___8) {
      break;
    }
  }
  draw_string((char *)"atris - 1.0.6", color_white, screen->w, 0,
              (1 << 2) | (1 << 3));
  draw_string((char *)"Welcome To", color_purple, screen->w / 2, screen->h / 2,
              ((1 | (1 << 3)) | (1 << 1)) | (1 << 6));
  draw_string((char *)"Alizarin Tetris", color_blue, screen->w / 2,
              screen->h / 2, (1 | (1 << 3)) | (1 << 5));
  tmp___9 = SDL_GetTicks();
  time_now = (unsigned int )tmp___9;
  while (1) {
    poll_and_flame(& event);
    tmp___10 = SDL_GetTicks();
    if (! (tmp___10 < (unsigned int __attribute__((__visibility__("default")))  )(time_now + 600U))) {
      break;
    }
  }
  clear_screen_to_flame();
  while (1) {
    SDL_EnableKeyRepeat(5000, 30);
    choose_gametype(& ps, & cs, & ss, ai);
    if ((int )gametype == 6) {
      break;
    } else {
      Options.named_game = (int )gametype;
    }
    Score[1] = 0;
    Score[0] = Score[1];
    SDL_EnableKeyRepeat(5000, 30);
    switch ((int )gametype) {
    case 0: 
    p1 = who_are_you(screen, & id, -1, 1);
    clear_screen_to_flame();
    if (p1 < 0) {
      break;
    }
    (id->p + p1)->level = play_SINGLE(cs, ps, ss, g___0, id->p + p1);
    clear_screen_to_flame();
    break;
    case 1: 
    p1 = who_are_you(screen, & id, -1, 1);
    clear_screen_to_flame();
    if (p1 < 0) {
      break;
    }
    retval = play_MARATHON(cs, ps, ss, g___0, id->p + p1);
    clear_screen_to_flame();
    SDL_EnableKeyRepeat(5000, 30);
    high_score_check(retval, Score[0]);
    clear_screen_to_flame();
    break;
    case 2: 
    p1 = who_are_you(screen, & id, -1, 1);
    clear_screen_to_flame();
    if (p1 < 0) {
      break;
    }
    p2 = pick_an_ai(screen, (char *)"As Your Opponent", ai);
    if (p2 < 0) {
      break;
    }
    (ai->player + p2)->delay_factor = pick_ai_factor(screen);
    clear_screen_to_flame();
    (id->p + p1)->level = play_SINGLE_VS_AI(cs, ps, ss, g___0, id->p + p1,
                                            ai->player + p2);
    clear_screen_to_flame();
    break;
    case 5: 
    p1 = pick_an_ai(screen, (char *)"As Player 1", ai);
    clear_screen_to_flame();
    if (p1 < 0) {
      break;
    }
    p2 = pick_an_ai(screen, (char *)"As Player 2", ai);
    clear_screen_to_flame();
    if (p2 < 0) {
      break;
    }
    play_AI_VS_AI(cs, ps, ss, g___0, ai->player + p1, ai->player + p2);
    clear_screen_to_flame();
    break;
    case 3: 
    p1 = who_are_you(screen, & id, -1, 1);
    clear_screen_to_flame();
    if (p1 < 0) {
      break;
    }
    p2 = who_are_you(screen, & id, p1, 2);
    clear_screen_to_flame();
    if (p2 < 0) {
      break;
    }
    play_TWO_PLAYERS(cs, ps, ss, g___0, id->p + p1, id->p + p2);
    clear_screen_to_flame();
    break;
    case 4: 
    p1 = who_are_you(screen, & id, -1, 1);
    clear_screen_to_flame();
    if (p1 < 0) {
      break;
    }
    tmp___11 = network_choice(screen);
    (id->p + p1)->level = play_NETWORK(cs, ps, ss, g___0, id->p + p1, tmp___11);
    clear_screen_to_flame();
    break;
    default: ;
    break;
    }
    save_identity_file(id, (char *)((void *)0), 0);
  }
  SDL_CloseAudio();
  TTF_CloseFont(sfont);
  TTF_CloseFont(font);
  TTF_CloseFont(lfont);
  TTF_CloseFont(hfont);
  Network_Quit();
  Options.named_color = cs.choice;
  Options.named_piece = ps.choice;
  Options.named_sound = ss.choice;
  tmp___12 = getenv("HOME");
  sprintf((char */* __restrict  */)(filespec___0),
          (char const   */* __restrict  */)"%s/.atrisrc", tmp___12);
  save_options(filespec___0);
  return (0);
}
}

extern  __attribute__((__nothrow__)) void *malloc(size_t __size )  __attribute__((__malloc__)) ;

extern void __attribute__((__visibility__("default")))  SDL_UpdateRects(SDL_Surface *screen ,
                                                                        int numrects ,
                                                                        SDL_Rect *rects ) ;

extern void __attribute__((__visibility__("default")))  SDL_GetRGB(Uint32 pixel ,
                                                                   SDL_PixelFormat *fmt ,
                                                                   Uint8 *r ,
                                                                   Uint8 *g ,
                                                                   Uint8 *b ) ;

extern int __attribute__((__visibility__("default")))  SDL_UpperBlit(SDL_Surface *src ,
                                                                     SDL_Rect *srcrect ,
                                                                     SDL_Surface *dst ,
                                                                     SDL_Rect *dstrect ) ;

extern int __attribute__((__visibility__("default")))  SDL_FillRect(SDL_Surface *dst ,
                                                                    SDL_Rect *dstrect ,
                                                                    Uint32 color ) ;

extern SDL_Surface __attribute__((__visibility__("default")))  *TTF_RenderText_Blended(TTF_Font *font ,
                                                                                       char const   *text ,
                                                                                       SDL_Color fg ) ;

ATButton *button(char *text , Uint32 face_color0 , Uint32 text_color0 ,
                 Uint32 face_color1 , Uint32 text_color1 , int x , int y ) ;

void show_button(ATButton *ab , int state ) ;

char check_button(ATButton *ab , int x , int y ) ;

ATButton *button(char *text , Uint32 face_color0 , Uint32 text_color0 ,
                 Uint32 face_color1 , Uint32 text_color1 , int x , int y ) 
{ SDL_Color sc ;
  ATButton *ab ;
  void *tmp ;
  SDL_Surface __attribute__((__visibility__("default")))  *tmp___0 ;
  SDL_Surface __attribute__((__visibility__("default")))  *tmp___1 ;

  {
  tmp = malloc(sizeof(ATButton ));
  ab = (ATButton *)tmp;
  if (! ab) {
    Panic("button", "button.c", (char *)"Failed assertion \"%s\" on line %d",
          "ab", 26);
  }
  ab->face_color[0] = face_color0;
  ab->text_color[0] = text_color0;
  ab->face_color[1] = face_color1;
  ab->text_color[1] = text_color1;
  SDL_GetRGB(text_color0, screen->format, & sc.r, & sc.g, & sc.b);
  tmp___0 = TTF_RenderText_Blended(font, (char const   *)text, sc);
  ab->bitmap[0] = (SDL_Surface *)tmp___0;
  if (! ab->bitmap[0]) {
    Panic("button", "button.c", (char *)"Failed assertion \"%s\" on line %d",
          "ab->bitmap[0]", 36);
  }
  SDL_GetRGB(text_color1, screen->format, & sc.r, & sc.g, & sc.b);
  tmp___1 = TTF_RenderText_Blended(font, (char const   *)text, sc);
  ab->bitmap[1] = (SDL_Surface *)tmp___1;
  if (! ab->bitmap[1]) {
    Panic("button", "button.c", (char *)"Failed assertion \"%s\" on line %d",
          "ab->bitmap[1]", 39);
  }
  ab->area.x = (short )x;
  ab->area.y = (short )y;
  ab->area.w = (unsigned short )((ab->bitmap[0])->w + 10);
  ab->area.h = (unsigned short )((ab->bitmap[0])->h + 10);
  return (ab);
}
}

void show_button(ATButton *ab , int state ) 
{ SDL_Rect *my_c ;
  SDL_Rect *my_c___0 ;
  SDL_Rect *my_c___1 ;

  {
  SDL_FillRect(screen, & ab->area, ab->text_color[state]);
  my_c = & ab->area;
  if (! my_c) {
    Panic("show_button", "button.c",
          (char *)"Failed assertion \"%s\" on line %d", "my_c", 54);
  }
  if (my_c) {
    if ((int )my_c->x < 0) {
      my_c->x = (short)0;
    }
    if ((int )my_c->y < 0) {
      my_c->y = (short)0;
    }
    if ((int )my_c->x + (int )my_c->w > 640) {
      my_c->w = (unsigned short )(640 - (int )my_c->x);
    }
    if ((int )my_c->y + (int )my_c->h > 480) {
      my_c->h = (unsigned short )(480 - (int )my_c->y);
    }
  }
  SDL_UpdateRects(screen, 1, & ab->area);
  ab->area.x = (short )((int )ab->area.x + 2);
  ab->area.y = (short )((int )ab->area.y + 2);
  ab->area.w = (unsigned short )((int )ab->area.w - 4);
  ab->area.h = (unsigned short )((int )ab->area.h - 4);
  SDL_FillRect(screen, & ab->area, ab->face_color[state]);
  my_c___0 = & ab->area;
  if (! my_c___0) {
    Panic("show_button", "button.c",
          (char *)"Failed assertion \"%s\" on line %d", "my_c", 58);
  }
  if (my_c___0) {
    if ((int )my_c___0->x < 0) {
      my_c___0->x = (short)0;
    }
    if ((int )my_c___0->y < 0) {
      my_c___0->y = (short)0;
    }
    if ((int )my_c___0->x + (int )my_c___0->w > 640) {
      my_c___0->w = (unsigned short )(640 - (int )my_c___0->x);
    }
    if ((int )my_c___0->y + (int )my_c___0->h > 480) {
      my_c___0->h = (unsigned short )(480 - (int )my_c___0->y);
    }
  }
  SDL_UpdateRects(screen, 1, & ab->area);
  ab->area.x = (short )((int )ab->area.x + 3);
  ab->area.y = (short )((int )ab->area.y + 3);
  ab->area.w = (unsigned short )((int )ab->area.w - 6);
  ab->area.h = (unsigned short )((int )ab->area.h - 6);
  SDL_UpperBlit(ab->bitmap[state], (SDL_Rect *)((void *)0), screen, & ab->area);
  ab->area.x = (short )((int )ab->area.x - 5);
  ab->area.y = (short )((int )ab->area.y - 5);
  ab->area.w = (unsigned short )((int )ab->area.w + 10);
  ab->area.h = (unsigned short )((int )ab->area.h + 10);
  my_c___1 = & ab->area;
  if (! my_c___1) {
    Panic("show_button", "button.c",
          (char *)"Failed assertion \"%s\" on line %d", "my_c", 65);
  }
  if (my_c___1) {
    if ((int )my_c___1->x < 0) {
      my_c___1->x = (short)0;
    }
    if ((int )my_c___1->y < 0) {
      my_c___1->y = (short)0;
    }
    if ((int )my_c___1->x + (int )my_c___1->w > 640) {
      my_c___1->w = (unsigned short )(640 - (int )my_c___1->x);
    }
    if ((int )my_c___1->y + (int )my_c___1->h > 480) {
      my_c___1->h = (unsigned short )(480 - (int )my_c___1->y);
    }
  }
  SDL_UpdateRects(screen, 1, & ab->area);
  return;
}
}

char check_button(ATButton *ab , int x , int y ) 
{ 

  {
  if ((int )ab->area.x <= x) {
    if (x <= (int )ab->area.x + (int )ab->area.w) {
      if ((int )ab->area.y <= y) {
        if (y <= (int )ab->area.y + (int )ab->area.h) {
          return ((char)1);
        } else {
          return ((char)0);
        }
      } else {
        return ((char)0);
      }
    } else {
      return ((char)0);
    }
  } else {
    return ((char)0);
  }
}
}

extern  __attribute__((__nothrow__)) void *memset(void *__s , int __c ,
                                                  size_t __n )  __attribute__((__nonnull__(1))) ;

extern SDL_RWops __attribute__((__visibility__("default")))  *SDL_RWFromFile(char const   *file ,
                                                                             char const   *mode ) ;

extern int __attribute__((__visibility__("default")))  SDL_SetColors(SDL_Surface *surface ,
                                                                     SDL_Color *colors ,
                                                                     int firstcolor ,
                                                                     int ncolors ) ;

extern Uint32 __attribute__((__visibility__("default")))  SDL_MapRGB(SDL_PixelFormat const   *format ,
                                                                     Uint8 r ,
                                                                     Uint8 g ,
                                                                     Uint8 b ) ;

extern SDL_Surface __attribute__((__visibility__("default")))  *SDL_CreateRGBSurface(Uint32 flags ,
                                                                                     int width ,
                                                                                     int height ,
                                                                                     int depth ,
                                                                                     Uint32 Rmask ,
                                                                                     Uint32 Gmask ,
                                                                                     Uint32 Bmask ,
                                                                                     Uint32 Amask ) ;

extern void __attribute__((__visibility__("default")))  SDL_FreeSurface(SDL_Surface *surface ) ;

extern SDL_Surface __attribute__((__visibility__("default")))  *SDL_LoadBMP_RW(SDL_RWops *src ,
                                                                               int freesrc ) ;

extern int __attribute__((__visibility__("default")))  SDL_SetColorKey(SDL_Surface *surface ,
                                                                       Uint32 flag ,
                                                                       Uint32 key ) ;

extern SDL_Surface __attribute__((__visibility__("default")))  *SDL_DisplayFormat(SDL_Surface *surface ) ;

void draw_play_piece(SDL_Surface *screen___0 , color_style *cs ,
                     play_piece *o_pp , int o_x , int o_y , int o_rot ,
                     play_piece *pp , int x , int y , int rot ) ;

void atris_run_flame(void) ;

struct layout_struct layout  ;

SDL_Surface *adjust_symbol[3]   = {(SDL_Surface *)((void *)0),
                                   (SDL_Surface *)((void *)0),
                                   (SDL_Surface *)((void *)0)};

void poll_and_flame(SDL_Event *ev ) 
{ int __attribute__((__visibility__("default")))  tmp ;

  {
  while (1) {
    tmp = SDL_PollEvent(ev);
    if (tmp) {
      break;
    }
    atris_run_flame();
  }
  return;
}
}

void clear_screen_to_flame(void) 
{ SDL_Rect all ;
  SDL_Rect *my_b ;
  SDL_Rect *my_d ;
  int __attribute__((__visibility__("default")))  tmp ;
  SDL_Rect *my_c ;

  {
  all.y = (short)0;
  all.x = all.y;
  all.w = (unsigned short )screen->w;
  all.h = (unsigned short )screen->h;
  SDL_FillRect(widget_layer, & all, int_black);
  SDL_FillRect(screen, & all, int_black);
  my_b = (SDL_Rect *)((void *)0);
  my_d = (SDL_Rect *)((void *)0);
  if (my_b) {
    if ((int )my_b->x < 0) {
      my_b->x = (short)0;
    }
    if ((int )my_b->y < 0) {
      my_b->y = (short)0;
    }
    if ((int )my_b->x + (int )my_b->w > 640) {
      my_b->w = (unsigned short )(640 - (int )my_b->x);
    }
    if ((int )my_b->y + (int )my_b->h > 480) {
      my_b->h = (unsigned short )(480 - (int )my_b->y);
    }
  }
  if (my_d) {
    if ((int )my_d->x < 0) {
      my_d->x = (short)0;
    }
    if ((int )my_d->y < 0) {
      my_d->y = (short)0;
    }
    if ((int )my_d->x + (int )my_d->w > 640) {
      my_d->w = (unsigned short )(640 - (int )my_d->x);
    }
    if ((int )my_d->y + (int )my_d->h > 480) {
      my_d->h = (unsigned short )(480 - (int )my_d->y);
    }
  }
  tmp = SDL_UpperBlit(flame_layer, my_b, screen, my_d);
  if (! (tmp == (int __attribute__((__visibility__("default")))  )0)) {
    Panic("clear_screen_to_flame", "display.c",
          (char *)"Failed assertion \"%s\" on line %d",
          "SDL_UpperBlit(flame_layer,my_b,screen,my_d) == 0", 73);
  }
  my_c = & all;
  if (! my_c) {
    Panic("clear_screen_to_flame", "display.c",
          (char *)"Failed assertion \"%s\" on line %d", "my_c", 74);
  }
  if (my_c) {
    if ((int )my_c->x < 0) {
      my_c->x = (short)0;
    }
    if ((int )my_c->y < 0) {
      my_c->y = (short)0;
    }
    if ((int )my_c->x + (int )my_c->w > 640) {
      my_c->w = (unsigned short )(640 - (int )my_c->x);
    }
    if ((int )my_c->y + (int )my_c->h > 480) {
      my_c->h = (unsigned short )(480 - (int )my_c->y);
    }
  }
  SDL_UpdateRects(screen, 1, & all);
  return;
}
}

void setup_colors(SDL_Surface *screen___0 ) 
{ int i ;
  Uint32 __attribute__((__visibility__("default")))  tmp ;
  Uint32 __attribute__((__visibility__("default")))  tmp___0 ;
  Uint32 __attribute__((__visibility__("default")))  tmp___1 ;
  Uint32 __attribute__((__visibility__("default")))  tmp___2 ;
  Uint32 __attribute__((__visibility__("default")))  tmp___3 ;
  Uint32 __attribute__((__visibility__("default")))  tmp___4 ;
  Uint32 __attribute__((__visibility__("default")))  tmp___5 ;
  Uint32 __attribute__((__visibility__("default")))  tmp___6 ;
  Uint32 __attribute__((__visibility__("default")))  tmp___7 ;
  Uint32 __attribute__((__visibility__("default")))  tmp___8 ;

  {
  i = 0;
  color_white.b = (unsigned char)255;
  color_white.g = color_white.b;
  color_white.r = color_white.g;
  color_white.unused = (unsigned char)0;
  color_black.unused = (unsigned char)0;
  color_black.b = color_black.unused;
  color_black.g = color_black.b;
  color_black.r = color_black.g;
  color_red.r = (unsigned char)255;
  color_red.unused = (unsigned char)0;
  color_red.b = color_red.unused;
  color_red.g = color_red.b;
  color_blue.b = (unsigned char)255;
  color_blue.unused = (unsigned char)0;
  color_blue.g = color_blue.unused;
  color_blue.r = color_blue.g;
  color_purple.b = (unsigned char)128;
  color_purple.r = (unsigned char)128;
  color_purple.g = (unsigned char)64;
  color_purple.unused = (unsigned char)0;
  tmp = SDL_MapRGB((SDL_PixelFormat const   *)screen___0->format,
                   (unsigned char)0, (unsigned char)0, (unsigned char)0);
  int_black = (unsigned int )tmp;
  while (1) {
    i ++;
    tmp___0 = SDL_MapRGB((SDL_PixelFormat const   *)screen___0->format,
                         (unsigned char )i, (unsigned char )i, (unsigned char )i);
    int_solid_black = (unsigned int )tmp___0;
    if (int_black == int_solid_black) {
      if (! (i < 255)) {
        break;
      }
    } else {
      break;
    }
  }
  if (i == 255) {
    printf((char const   */* __restrict  */)"%-14.14s| ", "setup_colors");
    printf((char const   */* __restrict  */)"*** Warning: transparency is compromised by RGB format.\n");
    fflush(stdout);
    tmp___1 = SDL_MapRGB((SDL_PixelFormat const   *)screen___0->format,
                         (unsigned char)1, (unsigned char)1, (unsigned char)1);
    int_solid_black = (unsigned int )tmp___1;
  } else {
    if (i != 1) {
      printf((char const   */* __restrict  */)"%-14.14s| ", "setup_colors");
      printf((char const   */* __restrict  */)"*** Note: First non-black color found at magnitude %d.\n",
             i);
      fflush(stdout);
    }
  }
  tmp___2 = SDL_MapRGB((SDL_PixelFormat const   *)screen___0->format,
                       (unsigned char)255, (unsigned char)255,
                       (unsigned char)255);
  int_white = (unsigned int )tmp___2;
  tmp___3 = SDL_MapRGB((SDL_PixelFormat const   *)screen___0->format,
                       (unsigned char)128, (unsigned char)128,
                       (unsigned char)128);
  int_grey = (unsigned int )tmp___3;
  tmp___4 = SDL_MapRGB((SDL_PixelFormat const   *)screen___0->format,
                       (unsigned char)0, (unsigned char)0, (unsigned char)255);
  int_blue = (unsigned int )tmp___4;
  tmp___5 = SDL_MapRGB((SDL_PixelFormat const   *)screen___0->format,
                       (unsigned char)0, (unsigned char)0, (unsigned char)0);
  int_med_blue = (unsigned int )tmp___5;
  tmp___6 = SDL_MapRGB((SDL_PixelFormat const   *)screen___0->format,
                       (unsigned char)0, (unsigned char)0, (unsigned char)128);
  int_dark_blue = (unsigned int )tmp___6;
  tmp___7 = SDL_MapRGB((SDL_PixelFormat const   *)screen___0->format,
                       (unsigned char)128, (unsigned char)64, (unsigned char)128);
  int_purple = (unsigned int )tmp___7;
  tmp___8 = SDL_MapRGB((SDL_PixelFormat const   *)screen___0->format,
                       (unsigned char)64, (unsigned char)32, (unsigned char)64);
  int_dark_purple = (unsigned int )tmp___8;
  return;
}
}

int draw_string(char *text , SDL_Color sc , int x , int y , int flags___0 ) 
{ SDL_Surface *text_surface ;
  SDL_Rect r ;
  SDL_Surface __attribute__((__visibility__("default")))  *tmp ;
  SDL_Surface __attribute__((__visibility__("default")))  *tmp___0 ;
  SDL_Surface __attribute__((__visibility__("default")))  *tmp___1 ;
  SDL_Rect *my_b ;
  SDL_Rect *my_d ;
  int __attribute__((__visibility__("default")))  tmp___2 ;
  SDL_Rect *my_b___0 ;
  SDL_Rect *my_d___0 ;
  int __attribute__((__visibility__("default")))  tmp___3 ;
  SDL_Rect *my_b___1 ;
  SDL_Rect *my_d___1 ;
  int __attribute__((__visibility__("default")))  tmp___4 ;
  SDL_Rect *my_c ;

  {
  if (flags___0 & (1 << 7)) {
    r.x = (short )((int )layout.grid[0].x + (int )layout.grid[0].w / 2);
    r.y = (short )((int )layout.grid[0].y + (int )layout.grid[0].h / 2);
  } else {
    r.x = (short )x;
    r.y = (short )y;
  }
  if (flags___0 & (1 << 5)) {
    tmp = TTF_RenderText_Blended(hfont, (char const   *)text, sc);
    text_surface = (SDL_Surface *)tmp;
    if (! text_surface) {
      Panic("draw_string", "display.c",
            (char *)"Failed assertion \"%s\" on line %d", "text_surface", 148);
    }
  } else {
    if (flags___0 & (1 << 6)) {
      tmp___0 = TTF_RenderText_Blended(lfont, (char const   *)text, sc);
      text_surface = (SDL_Surface *)tmp___0;
      if (! text_surface) {
        Panic("draw_string", "display.c",
              (char *)"Failed assertion \"%s\" on line %d", "text_surface", 150);
      }
    } else {
      tmp___1 = TTF_RenderText_Blended(font, (char const   *)text, sc);
      text_surface = (SDL_Surface *)tmp___1;
      if (! text_surface) {
        Panic("draw_string", "display.c",
              (char *)"Failed assertion \"%s\" on line %d", "text_surface", 152);
      }
    }
  }
  r.w = (unsigned short )text_surface->w;
  r.h = (unsigned short )text_surface->h;
  if (flags___0 & 1) {
    r.x = (short )((int )r.x - (int )r.w / 2);
  }
  if (flags___0 & (1 << 2)) {
    r.x = (short )((int )r.x - text_surface->w);
  }
  if (flags___0 & (1 << 1)) {
    r.y = (short )((int )r.y - (int )r.h);
  }
  if (flags___0 & (1 << 4)) {
    SDL_FillRect(widget_layer, & r, int_black);
    SDL_FillRect(screen, & r, int_black);
  }
  my_b = (SDL_Rect *)((void *)0);
  my_d = & r;
  if (my_b) {
    if ((int )my_b->x < 0) {
      my_b->x = (short)0;
    }
    if ((int )my_b->y < 0) {
      my_b->y = (short)0;
    }
    if ((int )my_b->x + (int )my_b->w > 640) {
      my_b->w = (unsigned short )(640 - (int )my_b->x);
    }
    if ((int )my_b->y + (int )my_b->h > 480) {
      my_b->h = (unsigned short )(480 - (int )my_b->y);
    }
  }
  if (my_d) {
    if ((int )my_d->x < 0) {
      my_d->x = (short)0;
    }
    if ((int )my_d->y < 0) {
      my_d->y = (short)0;
    }
    if ((int )my_d->x + (int )my_d->w > 640) {
      my_d->w = (unsigned short )(640 - (int )my_d->x);
    }
    if ((int )my_d->y + (int )my_d->h > 480) {
      my_d->h = (unsigned short )(480 - (int )my_d->y);
    }
  }
  tmp___2 = SDL_UpperBlit(text_surface, my_b, widget_layer, my_d);
  if (! (tmp___2 == (int __attribute__((__visibility__("default")))  )0)) {
    Panic("draw_string", "display.c",
          (char *)"Failed assertion \"%s\" on line %d",
          "SDL_UpperBlit(text_surface,my_b,widget_layer,my_d) == 0", 169);
  }
  my_b___0 = & r;
  my_d___0 = & r;
  if (my_b___0) {
    if ((int )my_b___0->x < 0) {
      my_b___0->x = (short)0;
    }
    if ((int )my_b___0->y < 0) {
      my_b___0->y = (short)0;
    }
    if ((int )my_b___0->x + (int )my_b___0->w > 640) {
      my_b___0->w = (unsigned short )(640 - (int )my_b___0->x);
    }
    if ((int )my_b___0->y + (int )my_b___0->h > 480) {
      my_b___0->h = (unsigned short )(480 - (int )my_b___0->y);
    }
  }
  if (my_d___0) {
    if ((int )my_d___0->x < 0) {
      my_d___0->x = (short)0;
    }
    if ((int )my_d___0->y < 0) {
      my_d___0->y = (short)0;
    }
    if ((int )my_d___0->x + (int )my_d___0->w > 640) {
      my_d___0->w = (unsigned short )(640 - (int )my_d___0->x);
    }
    if ((int )my_d___0->y + (int )my_d___0->h > 480) {
      my_d___0->h = (unsigned short )(480 - (int )my_d___0->y);
    }
  }
  tmp___3 = SDL_UpperBlit(flame_layer, my_b___0, screen, my_d___0);
  if (! (tmp___3 == (int __attribute__((__visibility__("default")))  )0)) {
    Panic("draw_string", "display.c",
          (char *)"Failed assertion \"%s\" on line %d",
          "SDL_UpperBlit(flame_layer,my_b,screen,my_d) == 0", 170);
  }
  my_b___1 = & r;
  my_d___1 = & r;
  if (my_b___1) {
    if ((int )my_b___1->x < 0) {
      my_b___1->x = (short)0;
    }
    if ((int )my_b___1->y < 0) {
      my_b___1->y = (short)0;
    }
    if ((int )my_b___1->x + (int )my_b___1->w > 640) {
      my_b___1->w = (unsigned short )(640 - (int )my_b___1->x);
    }
    if ((int )my_b___1->y + (int )my_b___1->h > 480) {
      my_b___1->h = (unsigned short )(480 - (int )my_b___1->y);
    }
  }
  if (my_d___1) {
    if ((int )my_d___1->x < 0) {
      my_d___1->x = (short)0;
    }
    if ((int )my_d___1->y < 0) {
      my_d___1->y = (short)0;
    }
    if ((int )my_d___1->x + (int )my_d___1->w > 640) {
      my_d___1->w = (unsigned short )(640 - (int )my_d___1->x);
    }
    if ((int )my_d___1->y + (int )my_d___1->h > 480) {
      my_d___1->h = (unsigned short )(480 - (int )my_d___1->y);
    }
  }
  tmp___4 = SDL_UpperBlit(widget_layer, my_b___1, screen, my_d___1);
  if (! (tmp___4 == (int __attribute__((__visibility__("default")))  )0)) {
    Panic("draw_string", "display.c",
          (char *)"Failed assertion \"%s\" on line %d",
          "SDL_UpperBlit(widget_layer,my_b,screen,my_d) == 0", 171);
  }
  if (flags___0 & (1 << 3)) {
    my_c = & r;
    if (! my_c) {
      Panic("draw_string", "display.c",
            (char *)"Failed assertion \"%s\" on line %d", "my_c", 173);
    }
    if (my_c) {
      if ((int )my_c->x < 0) {
        my_c->x = (short)0;
      }
      if ((int )my_c->y < 0) {
        my_c->y = (short)0;
      }
      if ((int )my_c->x + (int )my_c->w > 640) {
        my_c->w = (unsigned short )(640 - (int )my_c->x);
      }
      if ((int )my_c->y + (int )my_c->h > 480) {
        my_c->h = (unsigned short )(480 - (int )my_c->y);
      }
    }
    SDL_UpdateRects(screen, 1, & r);
  }
  SDL_FreeSurface(text_surface);
  return ((int )r.h);
}
}

int give_notice(char *s , int quit_possible ) 
{ SDL_Event event ;
  int __attribute__((__visibility__("default")))  tmp ;

  {
  while (1) {
    tmp = SDL_PollEvent(& event);
    if (! tmp) {
      break;
    }
  }
  if (s) {
    if (*(s + 0)) {
      draw_string(s, color_blue,
                  (int )layout.grid[0].x + (int )layout.grid[0].w / 2,
                  (int )layout.grid[0].y + 64, 1 | (1 << 3));
    }
  }
  if (quit_possible) {
    draw_string((char *)"Press \'Q\' to Quit", color_red,
                (int )layout.grid[0].x + (int )layout.grid[0].w / 2,
                (int )layout.grid[0].y + 128, 1 | (1 << 3));
  }
  draw_string((char *)"Press \'G\' to Go On", color_red,
              (int )layout.grid[0].x + (int )layout.grid[0].w / 2,
              ((int )layout.grid[0].y + 128) + 30, 1 | (1 << 3));
  while (1) {
    poll_and_flame(& event);
    if ((int )event.type == 2) {
      if ((int )event.key.keysym.sym == 113) {
        return (1);
      }
    }
    if ((int )event.type == 2) {
      if ((int )event.key.keysym.sym == 103) {
        return (0);
      }
    }
  }
}
}

static void load_adjust_symbols(void) 
{ SDL_Surface *bitmap ;
  SDL_RWops __attribute__((__visibility__("default")))  *tmp ;
  SDL_Surface __attribute__((__visibility__("default")))  *tmp___0 ;
  SDL_Surface __attribute__((__visibility__("default")))  *tmp___1 ;
  Uint32 __attribute__((__visibility__("default")))  tmp___2 ;
  SDL_RWops __attribute__((__visibility__("default")))  *tmp___3 ;
  SDL_Surface __attribute__((__visibility__("default")))  *tmp___4 ;
  SDL_Surface __attribute__((__visibility__("default")))  *tmp___5 ;
  Uint32 __attribute__((__visibility__("default")))  tmp___6 ;
  SDL_RWops __attribute__((__visibility__("default")))  *tmp___7 ;
  SDL_Surface __attribute__((__visibility__("default")))  *tmp___8 ;
  SDL_Surface __attribute__((__visibility__("default")))  *tmp___9 ;
  Uint32 __attribute__((__visibility__("default")))  tmp___10 ;

  {
  tmp = SDL_RWFromFile("graphics/Level-Up.bmp", "rb");
  tmp___0 = SDL_LoadBMP_RW((SDL_RWops *)tmp, 1);
  bitmap = (SDL_Surface *)tmp___0;
  if (! bitmap) {
    Panic("load_adjust_symbols", "display.c",
          (char *)"Could not load [graphics/Level-Up.bmp]");
  }
  if ((unsigned int )(bitmap->format)->palette != (unsigned int )((void *)0)) {
    SDL_SetColors(screen, ((bitmap->format)->palette)->colors, 0,
                  ((bitmap->format)->palette)->ncolors);
  }
  tmp___1 = SDL_DisplayFormat(bitmap);
  adjust_symbol[0] = (SDL_Surface *)tmp___1;
  if (! adjust_symbol[0]) {
    Panic("load_adjust_symbols", "display.c",
          (char *)"Can not convert [graphics/Level-Up.bmp] to hardware format");
  }
  tmp___2 = SDL_MapRGB((SDL_PixelFormat const   *)screen->format,
                       (unsigned char)0, (unsigned char)0, (unsigned char)0);
  SDL_SetColorKey(adjust_symbol[0], 4096U, (unsigned int )tmp___2);
  SDL_FreeSurface(bitmap);
  tmp___3 = SDL_RWFromFile("graphics/Level-Medium.bmp", "rb");
  tmp___4 = SDL_LoadBMP_RW((SDL_RWops *)tmp___3, 1);
  bitmap = (SDL_Surface *)tmp___4;
  if (! bitmap) {
    Panic("load_adjust_symbols", "display.c",
          (char *)"Could not load [graphics/Level-Medium.bmp]");
  }
  if ((unsigned int )(bitmap->format)->palette != (unsigned int )((void *)0)) {
    SDL_SetColors(screen, ((bitmap->format)->palette)->colors, 0,
                  ((bitmap->format)->palette)->ncolors);
  }
  tmp___5 = SDL_DisplayFormat(bitmap);
  adjust_symbol[1] = (SDL_Surface *)tmp___5;
  if (! adjust_symbol[1]) {
    Panic("load_adjust_symbols", "display.c",
          (char *)"Can not convert [graphics/Level-Medium.bmp] to hardware format");
  }
  tmp___6 = SDL_MapRGB((SDL_PixelFormat const   *)screen->format,
                       (unsigned char)0, (unsigned char)0, (unsigned char)0);
  SDL_SetColorKey(adjust_symbol[1], 4096U, (unsigned int )tmp___6);
  SDL_FreeSurface(bitmap);
  tmp___7 = SDL_RWFromFile("graphics/Level-Down.bmp", "rb");
  tmp___8 = SDL_LoadBMP_RW((SDL_RWops *)tmp___7, 1);
  bitmap = (SDL_Surface *)tmp___8;
  if (! bitmap) {
    Panic("load_adjust_symbols", "display.c",
          (char *)"Could not load [graphics/Level-Down.bmp]");
  }
  if ((unsigned int )(bitmap->format)->palette != (unsigned int )((void *)0)) {
    SDL_SetColors(screen, ((bitmap->format)->palette)->colors, 0,
                  ((bitmap->format)->palette)->ncolors);
  }
  tmp___9 = SDL_DisplayFormat(bitmap);
  adjust_symbol[2] = (SDL_Surface *)tmp___9;
  if (! adjust_symbol[2]) {
    Panic("load_adjust_symbols", "display.c",
          (char *)"Can not convert [graphics/Level-Down.bmp] to hardware format");
  }
  tmp___10 = SDL_MapRGB((SDL_PixelFormat const   *)screen->format,
                        (unsigned char)0, (unsigned char)0, (unsigned char)0);
  SDL_SetColorKey(adjust_symbol[2], 4096U, (unsigned int )tmp___10);
  SDL_FreeSurface(bitmap);
  if (! ((adjust_symbol[0])->h == (adjust_symbol[1])->h)) {
    Panic("load_adjust_symbols", "display.c",
          (char *)"Failed assertion \"%s\" on line %d",
          "adjust_symbol[0]->h == adjust_symbol[1]->h", 264);
  }
  if (! ((adjust_symbol[1])->h == (adjust_symbol[2])->h)) {
    Panic("load_adjust_symbols", "display.c",
          (char *)"Failed assertion \"%s\" on line %d",
          "adjust_symbol[1]->h == adjust_symbol[2]->h", 265);
  }
  return;
}
}

void draw_bordered_rect(SDL_Rect *orig , SDL_Rect *border , int thick ) 
{ SDL_Rect *my_b ;
  SDL_Rect *my_d ;
  int __attribute__((__visibility__("default")))  tmp ;
  SDL_Rect *my_c ;

  {
  if (thick > 0) {
    if (! (thick < 8)) {
      Panic("draw_bordered_rect", "display.c",
            (char *)"Failed assertion \"%s\" on line %d",
            "thick > 0 && thick < 8", 275);
    }
  } else {
    Panic("draw_bordered_rect", "display.c",
          (char *)"Failed assertion \"%s\" on line %d",
          "thick > 0 && thick < 8", 275);
  }
  border->x = (short )((int )orig->x - thick);
  border->y = (short )((int )orig->y - thick);
  border->w = (unsigned short )((int )orig->w + thick * 2);
  border->h = (unsigned short )((int )orig->h + thick * 2);
  SDL_FillRect(widget_layer, border, int_grey);
  SDL_FillRect(widget_layer, orig, int_solid_black);
  my_b = border;
  my_d = border;
  if (my_b) {
    if ((int )my_b->x < 0) {
      my_b->x = (short)0;
    }
    if ((int )my_b->y < 0) {
      my_b->y = (short)0;
    }
    if ((int )my_b->x + (int )my_b->w > 640) {
      my_b->w = (unsigned short )(640 - (int )my_b->x);
    }
    if ((int )my_b->y + (int )my_b->h > 480) {
      my_b->h = (unsigned short )(480 - (int )my_b->y);
    }
  }
  if (my_d) {
    if ((int )my_d->x < 0) {
      my_d->x = (short)0;
    }
    if ((int )my_d->y < 0) {
      my_d->y = (short)0;
    }
    if ((int )my_d->x + (int )my_d->w > 640) {
      my_d->w = (unsigned short )(640 - (int )my_d->x);
    }
    if ((int )my_d->y + (int )my_d->h > 480) {
      my_d->h = (unsigned short )(480 - (int )my_d->y);
    }
  }
  tmp = SDL_UpperBlit(widget_layer, my_b, screen, my_d);
  if (! (tmp == (int __attribute__((__visibility__("default")))  )0)) {
    Panic("draw_bordered_rect", "display.c",
          (char *)"Failed assertion \"%s\" on line %d",
          "SDL_UpperBlit(widget_layer,my_b,screen,my_d) == 0", 286);
  }
  my_c = border;
  if (! my_c) {
    Panic("draw_bordered_rect", "display.c",
          (char *)"Failed assertion \"%s\" on line %d", "my_c", 287);
  }
  if (my_c) {
    if ((int )my_c->x < 0) {
      my_c->x = (short)0;
    }
    if ((int )my_c->y < 0) {
      my_c->y = (short)0;
    }
    if ((int )my_c->x + (int )my_c->w > 640) {
      my_c->w = (unsigned short )(640 - (int )my_c->x);
    }
    if ((int )my_c->y + (int )my_c->h > 480) {
      my_c->h = (unsigned short )(480 - (int )my_c->y);
    }
  }
  SDL_UpdateRects(screen, 1, border);
  return;
}
}

void draw_pre_bordered_rect(SDL_Rect *border , int thick ) 
{ SDL_Rect orig ;
  SDL_Rect *my_b ;
  SDL_Rect *my_d ;
  int __attribute__((__visibility__("default")))  tmp ;
  SDL_Rect *my_c ;

  {
  if (thick > 0) {
    if (! (thick < 8)) {
      Panic("draw_pre_bordered_rect", "display.c",
            (char *)"Failed assertion \"%s\" on line %d",
            "thick > 0 && thick < 8", 300);
    }
  } else {
    Panic("draw_pre_bordered_rect", "display.c",
          (char *)"Failed assertion \"%s\" on line %d",
          "thick > 0 && thick < 8", 300);
  }
  orig.x = (short )((int )border->x + thick);
  orig.y = (short )((int )border->y + thick);
  orig.w = (unsigned short )((int )border->w - thick * 2);
  orig.h = (unsigned short )((int )border->h - thick * 2);
  SDL_FillRect(widget_layer, border, int_grey);
  SDL_FillRect(widget_layer, & orig, int_solid_black);
  my_b = border;
  my_d = border;
  if (my_b) {
    if ((int )my_b->x < 0) {
      my_b->x = (short)0;
    }
    if ((int )my_b->y < 0) {
      my_b->y = (short)0;
    }
    if ((int )my_b->x + (int )my_b->w > 640) {
      my_b->w = (unsigned short )(640 - (int )my_b->x);
    }
    if ((int )my_b->y + (int )my_b->h > 480) {
      my_b->h = (unsigned short )(480 - (int )my_b->y);
    }
  }
  if (my_d) {
    if ((int )my_d->x < 0) {
      my_d->x = (short)0;
    }
    if ((int )my_d->y < 0) {
      my_d->y = (short)0;
    }
    if ((int )my_d->x + (int )my_d->w > 640) {
      my_d->w = (unsigned short )(640 - (int )my_d->x);
    }
    if ((int )my_d->y + (int )my_d->h > 480) {
      my_d->h = (unsigned short )(480 - (int )my_d->y);
    }
  }
  tmp = SDL_UpperBlit(widget_layer, my_b, screen, my_d);
  if (! (tmp == (int __attribute__((__visibility__("default")))  )0)) {
    Panic("draw_pre_bordered_rect", "display.c",
          (char *)"Failed assertion \"%s\" on line %d",
          "SDL_UpperBlit(widget_layer,my_b,screen,my_d) == 0", 311);
  }
  my_c = border;
  if (! my_c) {
    Panic("draw_pre_bordered_rect", "display.c",
          (char *)"Failed assertion \"%s\" on line %d", "my_c", 312);
  }
  if (my_c) {
    if ((int )my_c->x < 0) {
      my_c->x = (short)0;
    }
    if ((int )my_c->y < 0) {
      my_c->y = (short)0;
    }
    if ((int )my_c->x + (int )my_c->w > 640) {
      my_c->w = (unsigned short )(640 - (int )my_c->x);
    }
    if ((int )my_c->y + (int )my_c->h > 480) {
      my_c->h = (unsigned short )(480 - (int )my_c->y);
    }
  }
  SDL_UpdateRects(screen, 1, border);
  return;
}
}

void setup_layers(SDL_Surface *screen___0 ) 
{ SDL_Rect all ;
  SDL_Surface __attribute__((__visibility__("default")))  *tmp ;
  SDL_Surface __attribute__((__visibility__("default")))  *tmp___0 ;
  Uint32 __attribute__((__visibility__("default")))  tmp___1 ;
  int __attribute__((__visibility__("default")))  tmp___2 ;
  Uint32 __attribute__((__visibility__("default")))  tmp___3 ;
  Uint32 __attribute__((__visibility__("default")))  tmp___4 ;

  {
  tmp = SDL_CreateRGBSurface(4097U, screen___0->w, screen___0->h, 8, 0U, 0U, 0U,
                             0U);
  flame_layer = (SDL_Surface *)tmp;
  tmp___0 = SDL_CreateRGBSurface(4097U, screen___0->w, screen___0->h,
                                 (int )(screen___0->format)->BitsPerPixel,
                                 (screen___0->format)->Rmask,
                                 (screen___0->format)->Gmask,
                                 (screen___0->format)->Bmask,
                                 (screen___0->format)->Amask);
  widget_layer = (SDL_Surface *)tmp___0;
  tmp___1 = SDL_MapRGB((SDL_PixelFormat const   *)widget_layer->format,
                       (unsigned char)0, (unsigned char)0, (unsigned char)0);
  tmp___2 = SDL_SetColorKey(widget_layer, 4096U, (unsigned int )tmp___1);
  if (tmp___2) {
    Panic("setup_layers", "display.c",
          (char *)"SDL_SetColorKey failed on the widget layer.");
  }
  tmp___3 = SDL_MapRGB((SDL_PixelFormat const   *)widget_layer->format,
                       (unsigned char)0, (unsigned char)0, (unsigned char)0);
  if (int_black != (unsigned int )tmp___3) {
    printf((char const   */* __restrict  */)"%-14.14s| ", "setup_layers");
    printf((char const   */* __restrict  */)"*** Warning: screen and widget layer have different RGB format.\n");
    fflush(stdout);
  }
  tmp___4 = SDL_MapRGB((SDL_PixelFormat const   *)flame_layer->format,
                       (unsigned char)0, (unsigned char)0, (unsigned char)0);
  if (int_black != (unsigned int )tmp___4) {
    printf((char const   */* __restrict  */)"%-14.14s| ", "setup_layers");
    printf((char const   */* __restrict  */)"*** Warning: screen and flame layer have different RGB format.\n");
    fflush(stdout);
  }
  all.y = (short)0;
  all.x = all.y;
  all.w = (unsigned short )screen___0->w;
  all.h = (unsigned short )screen___0->h;
  SDL_FillRect(widget_layer, & all, int_black);
  SDL_FillRect(flame_layer, & all, int_solid_black);
  return;
}
}

void draw_background(SDL_Surface *screen___0 , int blockWidth , Grid *g___0 ,
                     int *level , int *my_adj , int *their_adj , char **name ) 
{ char buf[1024] ;
  int i ;
  char buf___0[1024] ;
  int tmp ;
  int text_h ;
  int tmp___0 ;
  char buf___1[80] ;
  SDL_Rect *my_b ;
  SDL_Rect *my_d ;
  int __attribute__((__visibility__("default")))  tmp___1 ;
  SDL_Rect *my_b___0 ;
  SDL_Rect *my_d___0 ;
  int __attribute__((__visibility__("default")))  tmp___2 ;
  SDL_Rect *my_b___1 ;
  SDL_Rect *my_d___1 ;
  int __attribute__((__visibility__("default")))  tmp___3 ;
  SDL_Rect *my_b___2 ;
  SDL_Rect *my_d___2 ;
  int __attribute__((__visibility__("default")))  tmp___4 ;
  int text_h___0 ;
  int tmp___5 ;
  int text_h___1 ;
  int tmp___6 ;
  SDL_Rect dest ;
  SDL_Rect *my_b___3 ;
  SDL_Rect *my_d___3 ;
  int __attribute__((__visibility__("default")))  tmp___7 ;
  SDL_Rect *my_b___4 ;
  SDL_Rect *my_d___4 ;
  int __attribute__((__visibility__("default")))  tmp___8 ;
  SDL_Rect *my_c ;

  {
  if ((int )gametype == 4) {
    goto _L;
  } else {
    if ((int )gametype == 2) {
      goto _L;
    } else {
      if ((int )gametype == 3) {
        goto _L;
      } else {
        if ((int )gametype == 5) {
          _L: 
          if (! ((g___0 + 0)->w == (g___0 + 1)->w)) {
            Panic("draw_background", "display.c",
                  (char *)"Failed assertion \"%s\" on line %d",
                  "g[0].w == g[1].w", 365);
          }
          if (! ((g___0 + 0)->h == (g___0 + 1)->h)) {
            Panic("draw_background", "display.c",
                  (char *)"Failed assertion \"%s\" on line %d",
                  "g[0].h == g[1].h", 366);
          }
        }
      }
    }
  }
  memset((void *)(& layout), 0, sizeof(layout));
  if (! adjust_symbol[0]) {
    load_adjust_symbols();
  }
  if ((int )gametype == 4) {
    goto _L___0;
  } else {
    if ((int )gametype == 2) {
      goto _L___0;
    } else {
      if ((int )gametype == 3) {
        goto _L___0;
      } else {
        if ((int )gametype == 5) {
          _L___0: 
          layout.grid[0].x = (short )(((screen___0->w / 2 - (g___0 + 0)->w * blockWidth) - 5 * blockWidth) - 2);
          layout.grid[0].y = (short )((screen___0->h - (g___0 + 0)->h * blockWidth) / 2);
          layout.grid[0].w = (unsigned short )((g___0 + 0)->w * blockWidth);
          layout.grid[0].h = (unsigned short )((g___0 + 0)->h * blockWidth);
          layout.grid[1].y = (short )((screen___0->h - (g___0 + 0)->h * blockWidth) / 2);
          layout.grid[1].w = (unsigned short )((g___0 + 0)->w * blockWidth);
          layout.grid[1].h = (unsigned short )((g___0 + 0)->h * blockWidth);
          layout.grid[1].x = (short )(((screen___0->w / 2 - 4) + 5 * blockWidth) + 6);
          draw_bordered_rect(& layout.grid[1], & layout.grid_border[1], 2);
          (g___0 + 1)->board = layout.grid[1];
        } else {
          layout.grid[0].x = (short )((screen___0->w - (g___0 + 0)->w * blockWidth) / 2);
          layout.grid[0].y = (short )((screen___0->h - (g___0 + 0)->h * blockWidth) / 2);
          layout.grid[0].w = (unsigned short )((g___0 + 0)->w * blockWidth);
          layout.grid[0].h = (unsigned short )((g___0 + 0)->h * blockWidth);
        }
      }
    }
  }
  draw_bordered_rect(& layout.grid[0], & layout.grid_border[0], 2);
  (g___0 + 0)->board = layout.grid[0];
  i = 0;
  while (1) {
    if ((int )gametype == 4) {
      tmp = 1;
    } else {
      if ((int )gametype == 2) {
        tmp = 1;
      } else {
        if ((int )gametype == 3) {
          tmp = 1;
        } else {
          if ((int )gametype == 5) {
            tmp = 1;
          } else {
            tmp = 0;
          }
        }
      }
    }
    if (! (i < 1 + tmp)) {
      break;
    }
    layout.name[i].x = layout.grid[i].x;
    layout.name[i].y = (short )(((int )layout.grid[i].y + (int )layout.grid[i].h) + 2);
    layout.name[i].w = layout.grid[i].w;
    layout.name[i].h = (unsigned short )(screen___0->h - (int )layout.name[i].y);
    if ((int )gametype == 7) {
      SDL_FillRect(widget_layer, & layout.name[i], int_black);
      SDL_FillRect(screen___0, & layout.name[i], int_black);
      sprintf((char */* __restrict  */)(buf___0),
              (char const   */* __restrict  */)"Demo (%s)", *(name + i));
      draw_string(buf___0, color_blue,
                  (int )layout.grid_border[i].x + (int )layout.grid_border[i].w / 2,
                  (int )layout.grid_border[i].y + (int )layout.grid_border[i].h,
                  (1 | (1 << 4)) | (1 << 3));
    } else {
      draw_string(*(name + i), color_blue,
                  (int )layout.grid_border[i].x + (int )layout.grid_border[i].w / 2,
                  (int )layout.grid_border[i].y + (int )layout.grid_border[i].h,
                  1);
    }
    layout.score[i].x = layout.grid_border[i].x;
    layout.score[i].w = layout.grid_border[i].w;
    layout.score[i].y = (short)0;
    layout.score[i].h = (unsigned short )layout.grid_border[i].y;
    SDL_FillRect(widget_layer, & layout.score[i], int_black);
    SDL_FillRect(screen___0, & layout.score[i], int_black);
    sprintf((char */* __restrict  */)(buf),
            (char const   */* __restrict  */)"Level %d, Score:", *(level + i));
    draw_string(buf, color_blue, (int )layout.grid_border[i].x,
                (int )layout.grid_border[i].y, (1 << 1) | (1 << 4));
    layout.score[i].x = (short )((int )layout.grid_border[i].x + (int )layout.grid_border[i].w);
    layout.score[i].y = layout.grid_border[i].y;
    i ++;
  }
  if (! ((int )gametype == 7)) {
    if ((int )gametype == 4) {
      goto _L___1;
    } else {
      if ((int )gametype == 2) {
        goto _L___1;
      } else {
        if ((int )gametype == 3) {
          goto _L___1;
        } else {
          if ((int )gametype == 5) {
            _L___1: 
            draw_string((char *)"Time Left", color_blue, screen___0->w / 2,
                        (int )layout.score[0].y, 1 | (1 << 1));
            layout.time.x = (short )((screen___0->w - 80) / 2);
            layout.time.y = layout.score[0].y;
            layout.time.w = (unsigned short)80;
            layout.time.h = (unsigned short)28;
            draw_bordered_rect(& layout.time, & layout.time_border, 2);
          } else {
            tmp___0 = draw_string((char *)"Time Left", color_blue,
                                  screen___0->w / 10, screen___0->h / 5, 0);
            text_h = tmp___0;
            layout.time.x = (short )(screen___0->w / 10);
            layout.time.y = (short )(screen___0->h / 5 + text_h);
            layout.time.w = (unsigned short)80;
            layout.time.h = (unsigned short)28;
            draw_bordered_rect(& layout.time, & layout.time_border, 2);
          }
        }
      }
    }
  }
  if (! ((int )gametype == 7)) {
    if ((int )gametype == 5) {
      i = 0;
      while (i < 3) {
        layout.adjust[0].symbol[i].x = (short )((screen___0->w - (adjust_symbol[i])->w) / 2);
        layout.adjust[0].symbol[i].w = (unsigned short )(adjust_symbol[i])->w;
        layout.adjust[0].symbol[i].h = (unsigned short )(adjust_symbol[i])->h;
        layout.adjust[0].symbol[i].y = (short )(((int )layout.time_border.y + (int )layout.time_border.h) + i * (adjust_symbol[i])->h);
        my_b = (SDL_Rect *)((void *)0);
        my_d = & layout.adjust[0].symbol[i];
        if (my_b) {
          if ((int )my_b->x < 0) {
            my_b->x = (short)0;
          }
          if ((int )my_b->y < 0) {
            my_b->y = (short)0;
          }
          if ((int )my_b->x + (int )my_b->w > 640) {
            my_b->w = (unsigned short )(640 - (int )my_b->x);
          }
          if ((int )my_b->y + (int )my_b->h > 480) {
            my_b->h = (unsigned short )(480 - (int )my_b->y);
          }
        }
        if (my_d) {
          if ((int )my_d->x < 0) {
            my_d->x = (short)0;
          }
          if ((int )my_d->y < 0) {
            my_d->y = (short)0;
          }
          if ((int )my_d->x + (int )my_d->w > 640) {
            my_d->w = (unsigned short )(640 - (int )my_d->x);
          }
          if ((int )my_d->y + (int )my_d->h > 480) {
            my_d->h = (unsigned short )(480 - (int )my_d->y);
          }
        }
        tmp___1 = SDL_UpperBlit(adjust_symbol[i], my_b, widget_layer, my_d);
        if (! (tmp___1 == (int __attribute__((__visibility__("default")))  )0)) {
          Panic("draw_background", "display.c",
                (char *)"Failed assertion \"%s\" on line %d",
                "SDL_UpperBlit(adjust_symbol[i],my_b,widget_layer,my_d) == 0",
                488);
        }
        sprintf((char */* __restrict  */)(buf___1),
                (char const   */* __restrict  */)"%d", *(my_adj + i));
        draw_string(buf___1, color_red, (int )layout.adjust[0].symbol[i].x - 10,
                    (int )layout.adjust[0].symbol[i].y, (1 << 2) | (1 << 4));
        sprintf((char */* __restrict  */)(buf___1),
                (char const   */* __restrict  */)"%d", *(their_adj + i));
        draw_string(buf___1, color_red,
                    ((int )layout.adjust[0].symbol[i].x + (int )layout.adjust[0].symbol[i].w) + 10,
                    (int )layout.adjust[0].symbol[i].y, 1 << 4);
        i ++;
      }
    } else {
      if ((int )gametype == 4) {
        goto _L___2;
      } else {
        if ((int )gametype == 2) {
          goto _L___2;
        } else {
          if ((int )gametype == 3) {
            goto _L___2;
          } else {
            if ((int )gametype == 5) {
              _L___2: 
              i = 0;
              while (i < 3) {
                layout.adjust[0].symbol[i].w = (unsigned short )(adjust_symbol[i])->w;
                layout.adjust[0].symbol[i].h = (unsigned short )(adjust_symbol[i])->h;
                layout.adjust[0].symbol[i].x = (short )((screen___0->w - 3 * (adjust_symbol[i])->w) / 2);
                layout.adjust[0].symbol[i].y = (short )(((int )layout.time_border.y + (int )layout.time_border.h) + i * (adjust_symbol[i])->h);
                SDL_FillRect(widget_layer, & layout.adjust[0].symbol[i],
                             int_black);
                SDL_FillRect(screen___0, & layout.adjust[0].symbol[i], int_black);
                if (*(my_adj + i) != -1) {
                  my_b___0 = (SDL_Rect *)((void *)0);
                  my_d___0 = & layout.adjust[0].symbol[i];
                  if (my_b___0) {
                    if ((int )my_b___0->x < 0) {
                      my_b___0->x = (short)0;
                    }
                    if ((int )my_b___0->y < 0) {
                      my_b___0->y = (short)0;
                    }
                    if ((int )my_b___0->x + (int )my_b___0->w > 640) {
                      my_b___0->w = (unsigned short )(640 - (int )my_b___0->x);
                    }
                    if ((int )my_b___0->y + (int )my_b___0->h > 480) {
                      my_b___0->h = (unsigned short )(480 - (int )my_b___0->y);
                    }
                  }
                  if (my_d___0) {
                    if ((int )my_d___0->x < 0) {
                      my_d___0->x = (short)0;
                    }
                    if ((int )my_d___0->y < 0) {
                      my_d___0->y = (short)0;
                    }
                    if ((int )my_d___0->x + (int )my_d___0->w > 640) {
                      my_d___0->w = (unsigned short )(640 - (int )my_d___0->x);
                    }
                    if ((int )my_d___0->y + (int )my_d___0->h > 480) {
                      my_d___0->h = (unsigned short )(480 - (int )my_d___0->y);
                    }
                  }
                  tmp___2 = SDL_UpperBlit(adjust_symbol[*(my_adj + i)],
                                          my_b___0, widget_layer, my_d___0);
                  if (! (tmp___2 == (int __attribute__((__visibility__("default")))  )0)) {
                    Panic("draw_background", "display.c",
                          (char *)"Failed assertion \"%s\" on line %d",
                          "SDL_UpperBlit(adjust_symbol[my_adj[i]],my_b,widget_layer,my_d) == 0",
                          511);
                  }
                }
                layout.adjust[1].symbol[i].w = (unsigned short )(adjust_symbol[i])->w;
                layout.adjust[1].symbol[i].h = (unsigned short )(adjust_symbol[i])->h;
                layout.adjust[1].symbol[i].x = (short )(screen___0->w / 2 + (adjust_symbol[i])->w / 2);
                layout.adjust[1].symbol[i].y = (short )(((int )layout.time_border.y + (int )layout.time_border.h) + i * (adjust_symbol[i])->h);
                SDL_FillRect(widget_layer, & layout.adjust[1].symbol[i],
                             int_black);
                SDL_FillRect(screen___0, & layout.adjust[1].symbol[i], int_black);
                if (*(their_adj + i) != -1) {
                  my_b___1 = (SDL_Rect *)((void *)0);
                  my_d___1 = & layout.adjust[1].symbol[i];
                  if (my_b___1) {
                    if ((int )my_b___1->x < 0) {
                      my_b___1->x = (short)0;
                    }
                    if ((int )my_b___1->y < 0) {
                      my_b___1->y = (short)0;
                    }
                    if ((int )my_b___1->x + (int )my_b___1->w > 640) {
                      my_b___1->w = (unsigned short )(640 - (int )my_b___1->x);
                    }
                    if ((int )my_b___1->y + (int )my_b___1->h > 480) {
                      my_b___1->h = (unsigned short )(480 - (int )my_b___1->y);
                    }
                  }
                  if (my_d___1) {
                    if ((int )my_d___1->x < 0) {
                      my_d___1->x = (short)0;
                    }
                    if ((int )my_d___1->y < 0) {
                      my_d___1->y = (short)0;
                    }
                    if ((int )my_d___1->x + (int )my_d___1->w > 640) {
                      my_d___1->w = (unsigned short )(640 - (int )my_d___1->x);
                    }
                    if ((int )my_d___1->y + (int )my_d___1->h > 480) {
                      my_d___1->h = (unsigned short )(480 - (int )my_d___1->y);
                    }
                  }
                  tmp___3 = SDL_UpperBlit(adjust_symbol[*(their_adj + i)],
                                          my_b___1, widget_layer, my_d___1);
                  if (! (tmp___3 == (int __attribute__((__visibility__("default")))  )0)) {
                    Panic("draw_background", "display.c",
                          (char *)"Failed assertion \"%s\" on line %d",
                          "SDL_UpperBlit(adjust_symbol[their_adj[i]],my_b,widget_layer,my_d) == 0",
                          521);
                  }
                }
                i ++;
              }
            } else {
              i = 0;
              while (i < 3) {
                layout.adjust[0].symbol[i].w = (unsigned short )(adjust_symbol[i])->w;
                layout.adjust[0].symbol[i].h = (unsigned short )(adjust_symbol[i])->h;
                layout.adjust[0].symbol[i].x = (short )(((int )layout.grid_border[0].x + (int )layout.grid_border[0].w) + 2 * (adjust_symbol[i])->w);
                layout.adjust[0].symbol[i].y = (short )(((int )layout.time_border.y + (int )layout.time_border.h) + i * (adjust_symbol[i])->h);
                SDL_FillRect(widget_layer, & layout.adjust[0].symbol[i],
                             int_black);
                SDL_FillRect(screen___0, & layout.adjust[0].symbol[i], int_black);
                if (*(my_adj + i) != -1) {
                  my_b___2 = (SDL_Rect *)((void *)0);
                  my_d___2 = & layout.adjust[0].symbol[i];
                  if (my_b___2) {
                    if ((int )my_b___2->x < 0) {
                      my_b___2->x = (short)0;
                    }
                    if ((int )my_b___2->y < 0) {
                      my_b___2->y = (short)0;
                    }
                    if ((int )my_b___2->x + (int )my_b___2->w > 640) {
                      my_b___2->w = (unsigned short )(640 - (int )my_b___2->x);
                    }
                    if ((int )my_b___2->y + (int )my_b___2->h > 480) {
                      my_b___2->h = (unsigned short )(480 - (int )my_b___2->y);
                    }
                  }
                  if (my_d___2) {
                    if ((int )my_d___2->x < 0) {
                      my_d___2->x = (short)0;
                    }
                    if ((int )my_d___2->y < 0) {
                      my_d___2->y = (short)0;
                    }
                    if ((int )my_d___2->x + (int )my_d___2->w > 640) {
                      my_d___2->w = (unsigned short )(640 - (int )my_d___2->x);
                    }
                    if ((int )my_d___2->y + (int )my_d___2->h > 480) {
                      my_d___2->h = (unsigned short )(480 - (int )my_d___2->y);
                    }
                  }
                  tmp___4 = SDL_UpperBlit(adjust_symbol[*(my_adj + i)],
                                          my_b___2, widget_layer, my_d___2);
                  if (! (tmp___4 == (int __attribute__((__visibility__("default")))  )0)) {
                    Panic("draw_background", "display.c",
                          (char *)"Failed assertion \"%s\" on line %d",
                          "SDL_UpperBlit(adjust_symbol[my_adj[i]],my_b,widget_layer,my_d) == 0",
                          536);
                  }
                }
                i ++;
              }
            }
          }
        }
      }
    }
  }
  if (! ((int )gametype == 7)) {
    if ((int )gametype == 4) {
      goto _L___3;
    } else {
      if ((int )gametype == 2) {
        goto _L___3;
      } else {
        if ((int )gametype == 3) {
          goto _L___3;
        } else {
          if ((int )gametype == 5) {
            _L___3: 
            tmp___5 = draw_string((char *)"Next Piece", color_blue,
                                  screen___0->w / 2,
                                  (int )layout.adjust[0].symbol[2].y + (int )layout.adjust[0].symbol[2].h,
                                  1);
            text_h___0 = tmp___5;
            layout.next_piece[0].w = (unsigned short )(5 * blockWidth);
            layout.next_piece[0].h = (unsigned short )(5 * blockWidth);
            layout.next_piece[0].x = (short )(screen___0->w / 2 - 5 * blockWidth);
            layout.next_piece[0].y = (short )(((int )layout.adjust[0].symbol[2].y + (int )layout.adjust[0].symbol[2].h) + text_h___0);
            draw_bordered_rect(& layout.next_piece[0],
                               & layout.next_piece_border[0], 2);
            layout.next_piece[1].w = layout.next_piece[0].w;
            layout.next_piece[1].h = layout.next_piece[0].h;
            layout.next_piece[1].y = layout.next_piece[0].y;
            layout.next_piece[1].x = (short )(screen___0->w / 2);
            draw_bordered_rect(& layout.next_piece[1],
                               & layout.next_piece_border[1], 2);
          } else {
            tmp___6 = draw_string((char *)"Next Piece", color_blue,
                                  screen___0->w / 10, (2 * screen___0->h) / 5, 0);
            text_h___1 = tmp___6;
            layout.next_piece[0].w = (unsigned short )(5 * blockWidth);
            layout.next_piece[0].h = (unsigned short )(5 * blockWidth);
            layout.next_piece[0].x = (short )(screen___0->w / 10);
            layout.next_piece[0].y = (short )((2 * screen___0->h) / 5 + text_h___1);
            draw_bordered_rect(& layout.next_piece[0],
                               & layout.next_piece_border[0], 2);
          }
        }
      }
    }
  }
  if (! ((int )gametype == 7)) {
    if ((int )gametype == 4) {
      layout.pause.x = layout.next_piece_border[0].x;
      layout.pause.y = (short )((((int )layout.next_piece_border[0].h + (int )layout.next_piece_border[0].y) + 2) + (int )layout.next_piece_border[0].h / 3);
      layout.pause.w = (unsigned short )((int )layout.next_piece_border[0].w + (int )layout.next_piece[1].w);
      layout.pause.h = (unsigned short )((int )layout.next_piece_border[0].h / 3);
    } else {
      if ((int )gametype == 2) {
        layout.pause.x = layout.next_piece_border[0].x;
        layout.pause.y = (short )((((int )layout.next_piece_border[0].h + (int )layout.next_piece_border[0].y) + 2) + (int )layout.next_piece_border[0].h / 3);
        layout.pause.w = (unsigned short )((int )layout.next_piece_border[0].w + (int )layout.next_piece[1].w);
        layout.pause.h = (unsigned short )((int )layout.next_piece_border[0].h / 3);
      } else {
        if ((int )gametype == 3) {
          layout.pause.x = layout.next_piece_border[0].x;
          layout.pause.y = (short )((((int )layout.next_piece_border[0].h + (int )layout.next_piece_border[0].y) + 2) + (int )layout.next_piece_border[0].h / 3);
          layout.pause.w = (unsigned short )((int )layout.next_piece_border[0].w + (int )layout.next_piece[1].w);
          layout.pause.h = (unsigned short )((int )layout.next_piece_border[0].h / 3);
        } else {
          if ((int )gametype == 5) {
            layout.pause.x = layout.next_piece_border[0].x;
            layout.pause.y = (short )((((int )layout.next_piece_border[0].h + (int )layout.next_piece_border[0].y) + 2) + (int )layout.next_piece_border[0].h / 3);
            layout.pause.w = (unsigned short )((int )layout.next_piece_border[0].w + (int )layout.next_piece[1].w);
            layout.pause.h = (unsigned short )((int )layout.next_piece_border[0].h / 3);
          } else {
            layout.pause.x = layout.next_piece_border[0].x;
            layout.pause.y = (short )((((int )layout.next_piece_border[0].h + (int )layout.next_piece_border[0].y) + 2) + (int )layout.next_piece_border[0].h / 3);
            layout.pause.w = layout.next_piece_border[0].w;
            layout.pause.h = (unsigned short )((int )layout.next_piece_border[0].h / 3);
          }
        }
      }
    }
  }
  dest.x = (short)0;
  dest.y = (short)0;
  dest.w = (unsigned short )screen___0->w;
  dest.h = (unsigned short )screen___0->h;
  my_b___3 = (SDL_Rect *)((void *)0);
  my_d___3 = (SDL_Rect *)((void *)0);
  if (my_b___3) {
    if ((int )my_b___3->x < 0) {
      my_b___3->x = (short)0;
    }
    if ((int )my_b___3->y < 0) {
      my_b___3->y = (short)0;
    }
    if ((int )my_b___3->x + (int )my_b___3->w > 640) {
      my_b___3->w = (unsigned short )(640 - (int )my_b___3->x);
    }
    if ((int )my_b___3->y + (int )my_b___3->h > 480) {
      my_b___3->h = (unsigned short )(480 - (int )my_b___3->y);
    }
  }
  if (my_d___3) {
    if ((int )my_d___3->x < 0) {
      my_d___3->x = (short)0;
    }
    if ((int )my_d___3->y < 0) {
      my_d___3->y = (short)0;
    }
    if ((int )my_d___3->x + (int )my_d___3->w > 640) {
      my_d___3->w = (unsigned short )(640 - (int )my_d___3->x);
    }
    if ((int )my_d___3->y + (int )my_d___3->h > 480) {
      my_d___3->h = (unsigned short )(480 - (int )my_d___3->y);
    }
  }
  tmp___7 = SDL_UpperBlit(flame_layer, my_b___3, screen___0, my_d___3);
  if (! (tmp___7 == (int __attribute__((__visibility__("default")))  )0)) {
    Panic("draw_background", "display.c",
          (char *)"Failed assertion \"%s\" on line %d",
          "SDL_UpperBlit(flame_layer,my_b,screen,my_d) == 0", 600);
  }
  my_b___4 = (SDL_Rect *)((void *)0);
  my_d___4 = (SDL_Rect *)((void *)0);
  if (my_b___4) {
    if ((int )my_b___4->x < 0) {
      my_b___4->x = (short)0;
    }
    if ((int )my_b___4->y < 0) {
      my_b___4->y = (short)0;
    }
    if ((int )my_b___4->x + (int )my_b___4->w > 640) {
      my_b___4->w = (unsigned short )(640 - (int )my_b___4->x);
    }
    if ((int )my_b___4->y + (int )my_b___4->h > 480) {
      my_b___4->h = (unsigned short )(480 - (int )my_b___4->y);
    }
  }
  if (my_d___4) {
    if ((int )my_d___4->x < 0) {
      my_d___4->x = (short)0;
    }
    if ((int )my_d___4->y < 0) {
      my_d___4->y = (short)0;
    }
    if ((int )my_d___4->x + (int )my_d___4->w > 640) {
      my_d___4->w = (unsigned short )(640 - (int )my_d___4->x);
    }
    if ((int )my_d___4->y + (int )my_d___4->h > 480) {
      my_d___4->h = (unsigned short )(480 - (int )my_d___4->y);
    }
  }
  tmp___8 = SDL_UpperBlit(widget_layer, my_b___4, screen___0, my_d___4);
  if (! (tmp___8 == (int __attribute__((__visibility__("default")))  )0)) {
    Panic("draw_background", "display.c",
          (char *)"Failed assertion \"%s\" on line %d",
          "SDL_UpperBlit(widget_layer,my_b,screen,my_d) == 0", 601);
  }
  my_c = & dest;
  if (! my_c) {
    Panic("draw_background", "display.c",
          (char *)"Failed assertion \"%s\" on line %d", "my_c", 602);
  }
  if (my_c) {
    if ((int )my_c->x < 0) {
      my_c->x = (short)0;
    }
    if ((int )my_c->y < 0) {
      my_c->y = (short)0;
    }
    if ((int )my_c->x + (int )my_c->w > 640) {
      my_c->w = (unsigned short )(640 - (int )my_c->x);
    }
    if ((int )my_c->y + (int )my_c->h > 480) {
      my_c->h = (unsigned short )(480 - (int )my_c->y);
    }
  }
  SDL_UpdateRects(screen___0, 1, & dest);
  return;
}
}

void draw_pause(int on ) 
{ int i ;
  SDL_Rect *my_b ;
  SDL_Rect *my_d ;
  int __attribute__((__visibility__("default")))  tmp ;
  SDL_Rect *my_b___0 ;
  SDL_Rect *my_d___0 ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  SDL_Rect *my_b___1 ;
  SDL_Rect *my_d___1 ;
  int __attribute__((__visibility__("default")))  tmp___1 ;
  SDL_Rect *my_c ;
  SDL_Rect *my_b___2 ;
  SDL_Rect *my_d___2 ;
  int __attribute__((__visibility__("default")))  tmp___2 ;
  SDL_Rect *my_b___3 ;
  SDL_Rect *my_d___3 ;
  int __attribute__((__visibility__("default")))  tmp___3 ;

  {
  if (on) {
    draw_pre_bordered_rect(& layout.pause, 2);
    draw_string((char *)"* Paused *", color_blue,
                (int )layout.pause.x + (int )layout.pause.w / 2,
                (int )layout.pause.y, 1 | (1 << 3));
    i = 0;
    while (i < 2) {
      if (layout.grid[i].w) {
        my_b = & layout.grid[i];
        my_d = & layout.grid[i];
        if (my_b) {
          if ((int )my_b->x < 0) {
            my_b->x = (short)0;
          }
          if ((int )my_b->y < 0) {
            my_b->y = (short)0;
          }
          if ((int )my_b->x + (int )my_b->w > 640) {
            my_b->w = (unsigned short )(640 - (int )my_b->x);
          }
          if ((int )my_b->y + (int )my_b->h > 480) {
            my_b->h = (unsigned short )(480 - (int )my_b->y);
          }
        }
        if (my_d) {
          if ((int )my_d->x < 0) {
            my_d->x = (short)0;
          }
          if ((int )my_d->y < 0) {
            my_d->y = (short)0;
          }
          if ((int )my_d->x + (int )my_d->w > 640) {
            my_d->w = (unsigned short )(640 - (int )my_d->x);
          }
          if ((int )my_d->y + (int )my_d->h > 480) {
            my_d->h = (unsigned short )(480 - (int )my_d->y);
          }
        }
        tmp = SDL_UpperBlit(screen, my_b, widget_layer, my_d);
        if (! (tmp == (int __attribute__((__visibility__("default")))  )0)) {
          Panic("draw_pause", "display.c",
                (char *)"Failed assertion \"%s\" on line %d",
                "SDL_UpperBlit(screen,my_b,widget_layer,my_d) == 0", 624);
        }
        my_b___0 = & layout.next_piece[i];
        my_d___0 = & layout.next_piece[i];
        if (my_b___0) {
          if ((int )my_b___0->x < 0) {
            my_b___0->x = (short)0;
          }
          if ((int )my_b___0->y < 0) {
            my_b___0->y = (short)0;
          }
          if ((int )my_b___0->x + (int )my_b___0->w > 640) {
            my_b___0->w = (unsigned short )(640 - (int )my_b___0->x);
          }
          if ((int )my_b___0->y + (int )my_b___0->h > 480) {
            my_b___0->h = (unsigned short )(480 - (int )my_b___0->y);
          }
        }
        if (my_d___0) {
          if ((int )my_d___0->x < 0) {
            my_d___0->x = (short)0;
          }
          if ((int )my_d___0->y < 0) {
            my_d___0->y = (short)0;
          }
          if ((int )my_d___0->x + (int )my_d___0->w > 640) {
            my_d___0->w = (unsigned short )(640 - (int )my_d___0->x);
          }
          if ((int )my_d___0->y + (int )my_d___0->h > 480) {
            my_d___0->h = (unsigned short )(480 - (int )my_d___0->y);
          }
        }
        tmp___0 = SDL_UpperBlit(screen, my_b___0, widget_layer, my_d___0);
        if (! (tmp___0 == (int __attribute__((__visibility__("default")))  )0)) {
          Panic("draw_pause", "display.c",
                (char *)"Failed assertion \"%s\" on line %d",
                "SDL_UpperBlit(screen,my_b,widget_layer,my_d) == 0", 626);
        }
      }
      i ++;
    }
  } else {
    SDL_FillRect(widget_layer, & layout.pause, int_black);
    SDL_FillRect(screen, & layout.pause, int_black);
    my_b___1 = & layout.pause;
    my_d___1 = & layout.pause;
    if (my_b___1) {
      if ((int )my_b___1->x < 0) {
        my_b___1->x = (short)0;
      }
      if ((int )my_b___1->y < 0) {
        my_b___1->y = (short)0;
      }
      if ((int )my_b___1->x + (int )my_b___1->w > 640) {
        my_b___1->w = (unsigned short )(640 - (int )my_b___1->x);
      }
      if ((int )my_b___1->y + (int )my_b___1->h > 480) {
        my_b___1->h = (unsigned short )(480 - (int )my_b___1->y);
      }
    }
    if (my_d___1) {
      if ((int )my_d___1->x < 0) {
        my_d___1->x = (short)0;
      }
      if ((int )my_d___1->y < 0) {
        my_d___1->y = (short)0;
      }
      if ((int )my_d___1->x + (int )my_d___1->w > 640) {
        my_d___1->w = (unsigned short )(640 - (int )my_d___1->x);
      }
      if ((int )my_d___1->y + (int )my_d___1->h > 480) {
        my_d___1->h = (unsigned short )(480 - (int )my_d___1->y);
      }
    }
    tmp___1 = SDL_UpperBlit(flame_layer, my_b___1, screen, my_d___1);
    if (! (tmp___1 == (int __attribute__((__visibility__("default")))  )0)) {
      Panic("draw_pause", "display.c",
            (char *)"Failed assertion \"%s\" on line %d",
            "SDL_UpperBlit(flame_layer,my_b,screen,my_d) == 0", 632);
    }
    my_c = & layout.pause;
    if (! my_c) {
      Panic("draw_pause", "display.c",
            (char *)"Failed assertion \"%s\" on line %d", "my_c", 635);
    }
    if (my_c) {
      if ((int )my_c->x < 0) {
        my_c->x = (short)0;
      }
      if ((int )my_c->y < 0) {
        my_c->y = (short)0;
      }
      if ((int )my_c->x + (int )my_c->w > 640) {
        my_c->w = (unsigned short )(640 - (int )my_c->x);
      }
      if ((int )my_c->y + (int )my_c->h > 480) {
        my_c->h = (unsigned short )(480 - (int )my_c->y);
      }
    }
    SDL_UpdateRects(screen, 1, & layout.pause);
    i = 0;
    while (i < 2) {
      if (layout.grid[i].w) {
        my_b___2 = & layout.grid[i];
        my_d___2 = & layout.grid[i];
        if (my_b___2) {
          if ((int )my_b___2->x < 0) {
            my_b___2->x = (short)0;
          }
          if ((int )my_b___2->y < 0) {
            my_b___2->y = (short)0;
          }
          if ((int )my_b___2->x + (int )my_b___2->w > 640) {
            my_b___2->w = (unsigned short )(640 - (int )my_b___2->x);
          }
          if ((int )my_b___2->y + (int )my_b___2->h > 480) {
            my_b___2->h = (unsigned short )(480 - (int )my_b___2->y);
          }
        }
        if (my_d___2) {
          if ((int )my_d___2->x < 0) {
            my_d___2->x = (short)0;
          }
          if ((int )my_d___2->y < 0) {
            my_d___2->y = (short)0;
          }
          if ((int )my_d___2->x + (int )my_d___2->w > 640) {
            my_d___2->w = (unsigned short )(640 - (int )my_d___2->x);
          }
          if ((int )my_d___2->y + (int )my_d___2->h > 480) {
            my_d___2->h = (unsigned short )(480 - (int )my_d___2->y);
          }
        }
        tmp___2 = SDL_UpperBlit(widget_layer, my_b___2, screen, my_d___2);
        if (! (tmp___2 == (int __attribute__((__visibility__("default")))  )0)) {
          Panic("draw_pause", "display.c",
                (char *)"Failed assertion \"%s\" on line %d",
                "SDL_UpperBlit(widget_layer,my_b,screen,my_d) == 0", 640);
        }
        SDL_FillRect(widget_layer, & layout.grid[i], int_solid_black);
        my_b___3 = & layout.next_piece[i];
        my_d___3 = & layout.next_piece[i];
        if (my_b___3) {
          if ((int )my_b___3->x < 0) {
            my_b___3->x = (short)0;
          }
          if ((int )my_b___3->y < 0) {
            my_b___3->y = (short)0;
          }
          if ((int )my_b___3->x + (int )my_b___3->w > 640) {
            my_b___3->w = (unsigned short )(640 - (int )my_b___3->x);
          }
          if ((int )my_b___3->y + (int )my_b___3->h > 480) {
            my_b___3->h = (unsigned short )(480 - (int )my_b___3->y);
          }
        }
        if (my_d___3) {
          if ((int )my_d___3->x < 0) {
            my_d___3->x = (short)0;
          }
          if ((int )my_d___3->y < 0) {
            my_d___3->y = (short)0;
          }
          if ((int )my_d___3->x + (int )my_d___3->w > 640) {
            my_d___3->w = (unsigned short )(640 - (int )my_d___3->x);
          }
          if ((int )my_d___3->y + (int )my_d___3->h > 480) {
            my_d___3->h = (unsigned short )(480 - (int )my_d___3->y);
          }
        }
        tmp___3 = SDL_UpperBlit(widget_layer, my_b___3, screen, my_d___3);
        if (! (tmp___3 == (int __attribute__((__visibility__("default")))  )0)) {
          Panic("draw_pause", "display.c",
                (char *)"Failed assertion \"%s\" on line %d",
                "SDL_UpperBlit(widget_layer,my_b,screen,my_d) == 0", 644);
        }
        SDL_FillRect(widget_layer, & layout.next_piece[i], int_solid_black);
      }
      i ++;
    }
  }
  return;
}
}

void draw_clock(int seconds ) ;

static int old_seconds   = -111;

static SDL_Surface *digit[12]  ;

static int w   = -1;

static int h   = -1;

void draw_clock(int seconds ) 
{ char buf[16] ;
  int i ;
  int c ;
  SDL_Surface __attribute__((__visibility__("default")))  *tmp ;
  SDL_Surface __attribute__((__visibility__("default")))  *tmp___0 ;
  SDL_Surface __attribute__((__visibility__("default")))  *tmp___1 ;
  size_t tmp___2 ;
  size_t tmp___3 ;
  size_t tmp___4 ;
  SDL_Surface *to_blit ;
  SDL_Rect *my_b ;
  SDL_Rect *my_d ;
  int __attribute__((__visibility__("default")))  tmp___5 ;
  SDL_Rect *my_b___0 ;
  SDL_Rect *my_d___0 ;
  int __attribute__((__visibility__("default")))  tmp___6 ;
  SDL_Rect *my_b___1 ;
  SDL_Rect *my_d___1 ;
  int __attribute__((__visibility__("default")))  tmp___7 ;
  SDL_Rect *my_c ;

  {
  if (seconds == old_seconds) {
    return;
  } else {
    if ((int )gametype == 7) {
      return;
    }
  }
  if (old_seconds == -111) {
    i = 0;
    while (i < 10) {
      sprintf((char */* __restrict  */)(buf),
              (char const   */* __restrict  */)"%d", i);
      tmp = TTF_RenderText_Blended(font, (char const   *)(buf), color_blue);
      digit[i] = (SDL_Surface *)tmp;
      i ++;
    }
    sprintf((char */* __restrict  */)(buf), (char const   */* __restrict  */)":");
    tmp___0 = TTF_RenderText_Blended(font, (char const   *)(buf), color_red);
    digit[10] = (SDL_Surface *)tmp___0;
    sprintf((char */* __restrict  */)(buf), (char const   */* __restrict  */)"-");
    tmp___1 = TTF_RenderText_Blended(font, (char const   *)(buf), color_red);
    digit[11] = (SDL_Surface *)tmp___1;
    i = 0;
    while (i < 12) {
      if (! digit[i]) {
        Panic("draw_clock", "display.c",
              (char *)"Failed assertion \"%s\" on line %d", "digit[i]", 676);
      }
      if ((digit[i])->w > w) {
        w = (digit[i])->w;
      }
      if ((digit[i])->h > h) {
        h = (digit[i])->h;
      }
      i ++;
    }
  }
  old_seconds = seconds;
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)"%d:%02d", seconds / 60, seconds % 60);
  c = (int )layout.time.x;
  layout.time.w = (unsigned short )(w * 5);
  layout.time.h = (unsigned short )h;
  SDL_FillRect(widget_layer, & layout.time, int_solid_black);
  tmp___2 = strlen((char const   *)(buf));
  if (tmp___2 > 5U) {
    sprintf((char */* __restrict  */)(buf),
            (char const   */* __restrict  */)"----");
  }
  tmp___4 = strlen((char const   *)(buf));
  if (tmp___4 < 5U) {
    tmp___3 = strlen((char const   *)(buf));
    layout.time.x = (short )((unsigned int )layout.time.x + ((5U - tmp___3) * (unsigned int )w) / 2U);
  }
  i = 0;
  while (buf[i]) {
    if ((int )buf[i] >= 48) {
      if ((int )buf[i] <= 57) {
        to_blit = digit[(int )buf[i] - 48];
      } else {
        goto _L;
      }
    } else {
      _L: 
      if ((int )buf[i] == 58) {
        to_blit = digit[10];
      } else {
        if ((int )buf[i] == 45) {
          to_blit = digit[11];
        } else {
          Panic("draw_clock", "display.c",
                (char *)"unknown character in clock string [%s]", buf);
        }
      }
    }
    if (w > to_blit->w) {
      layout.time.x = (short )((int )layout.time.x + (w - to_blit->w) / 2);
    }
    layout.time.w = (unsigned short )to_blit->w;
    layout.time.h = (unsigned short )to_blit->h;
    my_b = (SDL_Rect *)((void *)0);
    my_d = & layout.time;
    if (my_b) {
      if ((int )my_b->x < 0) {
        my_b->x = (short)0;
      }
      if ((int )my_b->y < 0) {
        my_b->y = (short)0;
      }
      if ((int )my_b->x + (int )my_b->w > 640) {
        my_b->w = (unsigned short )(640 - (int )my_b->x);
      }
      if ((int )my_b->y + (int )my_b->h > 480) {
        my_b->h = (unsigned short )(480 - (int )my_b->y);
      }
    }
    if (my_d) {
      if ((int )my_d->x < 0) {
        my_d->x = (short)0;
      }
      if ((int )my_d->y < 0) {
        my_d->y = (short)0;
      }
      if ((int )my_d->x + (int )my_d->w > 640) {
        my_d->w = (unsigned short )(640 - (int )my_d->x);
      }
      if ((int )my_d->y + (int )my_d->h > 480) {
        my_d->h = (unsigned short )(480 - (int )my_d->y);
      }
    }
    tmp___5 = SDL_UpperBlit(to_blit, my_b, widget_layer, my_d);
    if (! (tmp___5 == (int __attribute__((__visibility__("default")))  )0)) {
      Panic("draw_clock", "display.c",
            (char *)"Failed assertion \"%s\" on line %d",
            "SDL_UpperBlit(to_blit,my_b,widget_layer,my_d) == 0", 720);
    }
    if (w > to_blit->w) {
      layout.time.x = (short )((int )layout.time.x - (w - to_blit->w) / 2);
    }
    layout.time.x = (short )((int )layout.time.x + w);
    i ++;
  }
  layout.time.x = (short )c;
  layout.time.w = (unsigned short )(w * 5);
  layout.time.h = (unsigned short )h;
  my_b___0 = & layout.time;
  my_d___0 = & layout.time;
  if (my_b___0) {
    if ((int )my_b___0->x < 0) {
      my_b___0->x = (short)0;
    }
    if ((int )my_b___0->y < 0) {
      my_b___0->y = (short)0;
    }
    if ((int )my_b___0->x + (int )my_b___0->w > 640) {
      my_b___0->w = (unsigned short )(640 - (int )my_b___0->x);
    }
    if ((int )my_b___0->y + (int )my_b___0->h > 480) {
      my_b___0->h = (unsigned short )(480 - (int )my_b___0->y);
    }
  }
  if (my_d___0) {
    if ((int )my_d___0->x < 0) {
      my_d___0->x = (short)0;
    }
    if ((int )my_d___0->y < 0) {
      my_d___0->y = (short)0;
    }
    if ((int )my_d___0->x + (int )my_d___0->w > 640) {
      my_d___0->w = (unsigned short )(640 - (int )my_d___0->x);
    }
    if ((int )my_d___0->y + (int )my_d___0->h > 480) {
      my_d___0->h = (unsigned short )(480 - (int )my_d___0->y);
    }
  }
  tmp___6 = SDL_UpperBlit(flame_layer, my_b___0, screen, my_d___0);
  if (! (tmp___6 == (int __attribute__((__visibility__("default")))  )0)) {
    Panic("draw_clock", "display.c",
          (char *)"Failed assertion \"%s\" on line %d",
          "SDL_UpperBlit(flame_layer,my_b,screen,my_d) == 0", 729);
  }
  my_b___1 = & layout.time;
  my_d___1 = & layout.time;
  if (my_b___1) {
    if ((int )my_b___1->x < 0) {
      my_b___1->x = (short)0;
    }
    if ((int )my_b___1->y < 0) {
      my_b___1->y = (short)0;
    }
    if ((int )my_b___1->x + (int )my_b___1->w > 640) {
      my_b___1->w = (unsigned short )(640 - (int )my_b___1->x);
    }
    if ((int )my_b___1->y + (int )my_b___1->h > 480) {
      my_b___1->h = (unsigned short )(480 - (int )my_b___1->y);
    }
  }
  if (my_d___1) {
    if ((int )my_d___1->x < 0) {
      my_d___1->x = (short)0;
    }
    if ((int )my_d___1->y < 0) {
      my_d___1->y = (short)0;
    }
    if ((int )my_d___1->x + (int )my_d___1->w > 640) {
      my_d___1->w = (unsigned short )(640 - (int )my_d___1->x);
    }
    if ((int )my_d___1->y + (int )my_d___1->h > 480) {
      my_d___1->h = (unsigned short )(480 - (int )my_d___1->y);
    }
  }
  tmp___7 = SDL_UpperBlit(widget_layer, my_b___1, screen, my_d___1);
  if (! (tmp___7 == (int __attribute__((__visibility__("default")))  )0)) {
    Panic("draw_clock", "display.c",
          (char *)"Failed assertion \"%s\" on line %d",
          "SDL_UpperBlit(widget_layer,my_b,screen,my_d) == 0", 730);
  }
  my_c = & layout.time;
  if (! my_c) {
    Panic("draw_clock", "display.c",
          (char *)"Failed assertion \"%s\" on line %d", "my_c", 731);
  }
  if (my_c) {
    if ((int )my_c->x < 0) {
      my_c->x = (short)0;
    }
    if ((int )my_c->y < 0) {
      my_c->y = (short)0;
    }
    if ((int )my_c->x + (int )my_c->w > 640) {
      my_c->w = (unsigned short )(640 - (int )my_c->x);
    }
    if ((int )my_c->y + (int )my_c->h > 480) {
      my_c->h = (unsigned short )(480 - (int )my_c->y);
    }
  }
  SDL_UpdateRects(screen, 1, & layout.time);
  return;
}
}

void draw_score(SDL_Surface *screen___0 , int i ) 
{ char buf[256] ;

  {
  sprintf((char */* __restrict  */)(buf), (char const   */* __restrict  */)"%d",
          Score[i]);
  draw_string(buf, color_red, (int )layout.score[i].x, (int )layout.score[i].y,
              (((1 << 2) | (1 << 4)) | (1 << 1)) | (1 << 3));
  return;
}
}

void draw_next_piece(SDL_Surface *screen___0 , piece_style *ps ,
                     color_style *cs , play_piece *cp , play_piece *np , int P ) 
{ int cp_right ;
  int cp_down ;
  int np_right ;
  int np_down ;

  {
  if ((int )gametype != 7) {
    cp_right = 5 - (cp->base)->dim;
    cp_down = 5 - (cp->base)->dim;
    np_right = 5 - (np->base)->dim;
    np_down = 5 - (np->base)->dim;
    draw_play_piece(screen___0, cs, cp,
                    (int )layout.next_piece[P].x + (cp_right * cs->w) / 2,
                    (int )layout.next_piece[P].y + (cp_down * cs->w) / 2, 0, np,
                    (int )layout.next_piece[P].x + (np_right * cs->w) / 2,
                    (int )layout.next_piece[P].y + (np_down * cs->w) / 2, 0);
  }
  return;
}
}

extern int select(int __nfds , fd_set * __restrict  __readfds ,
                  fd_set * __restrict  __writefds ,
                  fd_set * __restrict  __exceptfds ,
                  struct timeval * __restrict  __timeout ) ;

extern int __attribute__((__visibility__("default")))  SDL_WM_ToggleFullScreen(SDL_Surface *surface ) ;

play_piece generate_piece(piece_style *ps , color_style *cs , unsigned int seq ) ;

void add_garbage(Grid *g___0 ) ;

void draw_grid(SDL_Surface *screen___0 , color_style *cs , Grid *g___0 ,
               int draw ) ;

void draw_falling(SDL_Surface *screen___0 , int blockWidth , Grid *g___0 ,
                  int offset ) ;

void play_sound_unless_already_playing(sound_style *ss , int which , int delay ) ;

void stop_playing_sound(sound_style *ss , int which ) ;

void play_sound(sound_style *ss , int which , int delay ) ;

void stop_all_playing(void) ;

struct state_struct State[2]  ;

struct pos_struct pos[2]  ;

Grid distract_grid[2]  ;

void paste_on_board(play_piece *pp , int col , int row , int rot , Grid *g___0 ) 
{ int i ;
  int j ;
  int c ;
  int t_x ;
  int t_y ;

  {
  j = 0;
  while (j < (pp->base)->dim) {
    i = 0;
    while (i < (pp->base)->dim) {
      c = (int )*((pp->base)->bitmap[rot] + ((pp->base)->dim * j + i));
      if (c) {
        t_x = i + col;
        t_y = j + row;
        if (t_x < 0) {
          printf((char const   */* __restrict  */)"%-14.14s| ", "paste_on_board");
          printf((char const   */* __restrict  */)"Serious consistency failure: dropping pieces.\n");
          fflush(stdout);
          goto __Cont;
        } else {
          if (t_y < 0) {
            printf((char const   */* __restrict  */)"%-14.14s| ",
                   "paste_on_board");
            printf((char const   */* __restrict  */)"Serious consistency failure: dropping pieces.\n");
            fflush(stdout);
            goto __Cont;
          } else {
            if (t_x >= g___0->w) {
              printf((char const   */* __restrict  */)"%-14.14s| ",
                     "paste_on_board");
              printf((char const   */* __restrict  */)"Serious consistency failure: dropping pieces.\n");
              fflush(stdout);
              goto __Cont;
            } else {
              if (t_y >= g___0->h) {
                printf((char const   */* __restrict  */)"%-14.14s| ",
                       "paste_on_board");
                printf((char const   */* __restrict  */)"Serious consistency failure: dropping pieces.\n");
                fflush(stdout);
                goto __Cont;
              }
            }
          }
        }
        *(g___0->changed + (t_x + t_y * g___0->w)) = (unsigned char )((int )*(g___0->changed + (t_x + t_y * g___0->w)) | ((int )*(g___0->contents + (t_x + t_y * g___0->w)) != (int )pp->colormap[c]));
        *(g___0->contents + (t_x + t_y * g___0->w)) = pp->colormap[c];
        *(g___0->changed + (t_x + t_y * g___0->w)) = (unsigned char )((int )*(g___0->changed + (t_x + t_y * g___0->w)) | ((int )*(g___0->fall + (t_x + t_y * g___0->w)) != 1));
        *(g___0->fall + (t_x + t_y * g___0->w)) = (unsigned char)1;
        if (t_x > 0) {
          *(g___0->changed + ((t_x - 1) + t_y * g___0->w)) = (unsigned char)1;
        }
        if (t_y > 0) {
          *(g___0->changed + (t_x + (t_y - 1) * g___0->w)) = (unsigned char)1;
        }
        if (t_x < g___0->w - 1) {
          *(g___0->changed + ((t_x + 1) + t_y * g___0->w)) = (unsigned char)1;
        }
        if (t_y < g___0->h - 1) {
          *(g___0->changed + (t_x + (t_y + 1) * g___0->w)) = (unsigned char)1;
        }
      }
      __Cont: 
      i ++;
    }
    j ++;
  }
  return;
}
}

static void screen_to_exact_grid_coords(Grid *g___0 , int blockWidth ,
                                        int screen_x , int screen_y , int *row ,
                                        int *col ) 
{ 

  {
  screen_x -= (int )g___0->board.x;
  screen_y -= (int )g___0->board.y;
  if (! (screen_x % blockWidth == 0)) {
    Panic("screen_to_exact_grid_coords", "event.c",
          (char *)"Failed assertion \"%s\" on line %d",
          "screen_x % blockWidth == 0", 119);
  }
  if (! (screen_y % blockWidth == 0)) {
    Panic("screen_to_exact_grid_coords", "event.c",
          (char *)"Failed assertion \"%s\" on line %d",
          "screen_y % blockWidth == 0", 120);
  }
  *row = screen_y / blockWidth;
  *col = screen_x / blockWidth;
  return;
}
}

void screen_to_grid_coords(Grid *g___0 , int blockWidth , int screen_x ,
                           int screen_y , int *row , int *col ) 
{ 

  {
  screen_x -= (int )g___0->board.x;
  screen_y -= (int )g___0->board.y;
  if (screen_x < 0) {
    screen_x -= 19;
  }
  if (screen_y < 0) {
    screen_y -= 19;
  }
  *row = screen_y / blockWidth;
  *col = screen_x / blockWidth;
  return;
}
}

int valid_position(play_piece *pp , int col , int row , int rot , Grid *g___0 ) 
{ int i ;
  int j ;
  int t_x ;
  int t_y ;

  {
  j = 0;
  while (j < (pp->base)->dim) {
    i = 0;
    while (i < (pp->base)->dim) {
      if (*((pp->base)->bitmap[rot] + ((pp->base)->dim * j + i))) {
        t_x = i + col;
        t_y = j + row;
        if (t_x < 0) {
          return (0);
        } else {
          if (t_y < 0) {
            return (0);
          } else {
            if (t_x >= g___0->w) {
              return (0);
            } else {
              if (t_y >= g___0->h) {
                return (0);
              }
            }
          }
        }
        if (*(g___0->contents + (t_x + t_y * g___0->w))) {
          return (0);
        }
      }
      i ++;
    }
    j ++;
  }
  return (1);
}
}

int valid_screen_position(play_piece *pp , int blockWidth , Grid *g___0 ,
                          int rot , int screen_x , int screen_y ) 
{ int row ;
  int row2 ;
  int col ;
  int tmp ;
  int tmp___0 ;

  {
  screen_to_grid_coords(g___0, blockWidth, screen_x, screen_y, & row, & col);
  tmp = valid_position(pp, col, row, rot, g___0);
  if (! tmp) {
    return (0);
  }
  screen_to_grid_coords(g___0, blockWidth, screen_x, screen_y + 19, & row2,
                        & col);
  if (row == row2) {
    return (1);
  } else {
    tmp___0 = valid_position(pp, col, row2, rot, g___0);
    return (tmp___0);
  }
}
}

int tetris_event(int *delay , int count , SDL_Surface *screen___0 ,
                 piece_style *ps , color_style *cs , sound_style *ss ,
                 Grid *g___0 , int level , int fall_event_interval , int sock ,
                 int draw , int *blank , int *garbage , int P ) 
{ int i ;
  int x ;
  int y ;
  char msg ;
  char msg___0 ;
  char msg___1 ;
  int i___0 ;
  char msg___2 ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;

  {
  if (count == 1) {
    State[P].check_result = check_tetris(g___0);
    State[P].num_lines_cleared += State[P].check_result;
    if (State[P].check_result >= 3) {
      play_sound(ss, 2, 256);
    } else {
      i = 0;
      while (i < State[P].check_result) {
        play_sound(ss, 1, 256 + 6144 * i);
        i ++;
      }
    }
    *delay = 1;
    return (2);
  } else {
    if (count == 2) {
      if (sock) {
        msg = (char )'c';
        send(sock, (void const   *)(& msg), 1U, 0);
        send(sock, (void const   *)(g___0 + 0)->contents,
             (sizeof(*((g___0 + 0)->contents)) * (unsigned int )(g___0 + 0)->h) * (unsigned int )(g___0 + 0)->w,
             0);
      }
      draw_grid(screen___0, cs, g___0 + 0, draw);
      memcpy((void */* __restrict  */)((void *)g___0->temp),
             (void const   */* __restrict  */)((void const   *)g___0->fall),
             (unsigned int )(g___0->w * g___0->h) * sizeof(*(g___0->temp)));
      y = g___0->h - 1;
      while (y >= 0) {
        x = g___0->w - 1;
        while (x >= 0) {
          *(g___0->changed + (x + y * g___0->w)) = (unsigned char )((int )*(g___0->changed + (x + y * g___0->w)) | ((int )*(g___0->fall + (x + y * g___0->w)) != 254));
          *(g___0->fall + (x + y * g___0->w)) = (unsigned char)254;
          x --;
        }
        y --;
      }
      run_gravity(g___0 + 0);
      memset((void *)g___0->changed, 0,
             (unsigned int )(g___0->h * g___0->w) * sizeof(*(g___0->changed)));
      y = g___0->h - 1;
      while (y >= 0) {
        x = g___0->w - 1;
        while (x >= 0) {
          if ((int )*(g___0->temp + (x + y * g___0->w)) != (int )*(g___0->fall + (x + y * g___0->w))) {
            *(g___0->changed + (x + y * g___0->w)) = (unsigned char)1;
            if (x > 0) {
              *(g___0->changed + ((x - 1) + y * g___0->w)) = (unsigned char)1;
            }
            if (y > 0) {
              *(g___0->changed + (x + (y - 1) * g___0->w)) = (unsigned char)1;
            }
            if (x < g___0->w - 1) {
              *(g___0->changed + ((x + 1) + y * g___0->w)) = (unsigned char)1;
            }
            if (y < g___0->h - 1) {
              *(g___0->changed + (x + (y + 1) * g___0->w)) = (unsigned char)1;
            }
          }
          x --;
        }
        y --;
      }
      draw_grid(screen___0, cs, g___0 + 0, draw);
      tmp = determine_falling(g___0 + 0);
      if (tmp) {
        *delay = 1;
        return (3);
      } else {
        Score[P] += (State[P].num_lines_cleared * State[P].num_lines_cleared) * level;
        if (sock) {
          msg___0 = (char )'s';
          send(sock, (void const   *)(& msg___0), 1U, 0);
          send(sock, (void const   *)((char *)(& Score[P])), sizeof(Score[P]), 0);
          if (State[P].num_lines_cleared >= 5) {
            msg___1 = (char )'g';
            send(sock, (void const   *)(& msg___1), 1U, 0);
            State[P].num_lines_cleared -= 4;
          }
          if (State[P].num_lines_cleared >= 3) {
            i___0 = 3;
            while (i___0 <= State[P].num_lines_cleared) {
              msg___2 = (char )'b';
              send(sock, (void const   *)(& msg___2), 1U, 0);
              i___0 ++;
            }
          }
        } else {
          if (State[P].num_lines_cleared >= 5) {
            *garbage = 1;
            State[P].num_lines_cleared -= 4;
          }
          if (State[P].num_lines_cleared >= 3) {
            *blank = State[P].num_lines_cleared - 2;
          }
        }
        draw_score(screen___0, P);
        State[P].num_lines_cleared = 0;
        return (0);
      }
    } else {
      if (count >= 3) {
        if (count <= 22) {
          if (draw) {
            draw_falling(screen___0, cs->w, g___0 + 0, count - 2);
          }
          *delay = 4;
          return (count + 1);
        } else {
          goto _L;
        }
      } else {
        _L: 
        if (count == 23) {
          fall_down(g___0);
          draw_grid(screen___0, cs, g___0, draw);
          tmp___0 = run_gravity(g___0);
          if (tmp___0) {
            play_sound(ss, 0, 0);
          }
          *delay = 4;
          tmp___1 = determine_falling(g___0 + 0);
          if (tmp___1) {
            return (3);
          }
          tmp___2 = check_tetris(g___0);
          if (tmp___2) {
            return (1);
          } else {
            return (2);
          }
        }
      }
    }
  }
  return (0);
}
}

static void do_blank(SDL_Surface *screen___0 , sound_style **ss , Grid *g___0 ,
                     int P ) 
{ Uint32 __attribute__((__visibility__("default")))  tmp ;
  Uint32 __attribute__((__visibility__("default")))  tmp___0 ;
  SDL_Rect *my_c ;
  int i ;
  int j ;

  {
  play_sound(*(ss + P), 5, 1);
  if (State[P].draw) {
    tmp = SDL_GetTicks();
    State[P].next_draw = (unsigned int )(tmp + (unsigned int __attribute__((__visibility__("default")))  )1000);
    State[P].draw_timeout = 1000U;
    tmp___0 = SDL_MapRGB((SDL_PixelFormat const   *)screen___0->format,
                         (unsigned char)32, (unsigned char)32, (unsigned char)32);
    SDL_FillRect(screen___0, & (g___0 + P)->board, (unsigned int )tmp___0);
    my_c = & (g___0 + P)->board;
    if (! my_c) {
      Panic("do_blank", "event.c", (char *)"Failed assertion \"%s\" on line %d",
            "my_c", 342);
    }
    if (my_c) {
      if ((int )my_c->x < 0) {
        my_c->x = (short)0;
      }
      if ((int )my_c->y < 0) {
        my_c->y = (short)0;
      }
      if ((int )my_c->x + (int )my_c->w > 640) {
        my_c->w = (unsigned short )(640 - (int )my_c->x);
      }
      if ((int )my_c->y + (int )my_c->h > 480) {
        my_c->h = (unsigned short )(480 - (int )my_c->y);
      }
    }
    SDL_UpdateRects(screen___0, 1, & (g___0 + P)->board);
  } else {
    State[P].next_draw += 1000U;
    State[P].draw_timeout += 1000U;
  }
  j = 0;
  while (j < (g___0 + 0)->h) {
    i = 0;
    while (i < (g___0 + 0)->w) {
      *(distract_grid[P].changed + (i + j * distract_grid[P].w)) = (unsigned char)0;
      i ++;
    }
    j ++;
  }
  State[P].draw = 0;
  return;
}
}

static void bomb_fun(int x , int y , Grid *g___0 ) 
{ 

  {
  if (x < 0) {
    return;
  } else {
    if (y < 0) {
      return;
    } else {
      if (x >= g___0->w) {
        return;
      } else {
        if (y >= g___0->h) {
          return;
        }
      }
    }
  }
  *(g___0->changed + (x + y * g___0->w)) = (unsigned char )((int )*(g___0->changed + (x + y * g___0->w)) | ((int )*(g___0->contents + (x + y * g___0->w)) != 255));
  *(g___0->contents + (x + y * g___0->w)) = (unsigned char)255;
  return;
}
}

static int most_common   = 1;

static void colorkill_recurse(int x , int y , Grid *g___0 , int target_color ) 
{ 

  {
  if (x < 0) {
    return;
  } else {
    if (y < 0) {
      return;
    } else {
      if (x >= g___0->w) {
        return;
      } else {
        if (y >= g___0->h) {
          return;
        }
      }
    }
  }
  *(g___0->changed + (x + y * g___0->w)) = (unsigned char)1;
  if ((int )*(g___0->contents + (x + y * g___0->w)) != target_color) {
    return;
  }
  *(g___0->changed + (x + y * g___0->w)) = (unsigned char )((int )*(g___0->changed + (x + y * g___0->w)) | ((int )*(g___0->contents + (x + y * g___0->w)) != 255));
  *(g___0->contents + (x + y * g___0->w)) = (unsigned char)255;
  colorkill_recurse(x - 1, y, g___0, target_color);
  colorkill_recurse(x + 1, y, g___0, target_color);
  colorkill_recurse(x, y - 1, g___0, target_color);
  colorkill_recurse(x, y + 1, g___0, target_color);
  return;
}
}

static void colorkill_fun(int x , int y , Grid *g___0 ) 
{ int c ;

  {
  if (x < 0) {
    return;
  } else {
    if (y < 0) {
      return;
    } else {
      if (x >= g___0->w) {
        return;
      } else {
        if (y >= g___0->h) {
          return;
        }
      }
    }
  }
  *(g___0->changed + (x + y * g___0->w)) = (unsigned char)1;
  c = (int )*(g___0->contents + (x + y * g___0->w));
  if (c <= 1) {
    return;
  } else {
    if (c == 255) {
      return;
    }
  }
  *(g___0->changed + (x + y * g___0->w)) = (unsigned char )((int )*(g___0->changed + (x + y * g___0->w)) | ((int )*(g___0->contents + (x + y * g___0->w)) != 255));
  *(g___0->contents + (x + y * g___0->w)) = (unsigned char)255;
  colorkill_recurse(x - 1, y, g___0, c);
  colorkill_recurse(x + 1, y, g___0, c);
  colorkill_recurse(x, y - 1, g___0, c);
  colorkill_recurse(x, y + 1, g___0, c);
  return;
}
}

static void repaint_fun(int x , int y , Grid *g___0 ) 
{ int c ;

  {
  if (x < 0) {
    return;
  } else {
    if (y < 0) {
      return;
    } else {
      if (x >= g___0->w) {
        return;
      } else {
        if (y >= g___0->h) {
          return;
        }
      }
    }
  }
  *(g___0->changed + (x + y * g___0->w)) = (unsigned char)1;
  c = (int )*(g___0->contents + (x + y * g___0->w));
  if (c <= 1) {
    return;
  } else {
    if (c == most_common) {
      return;
    }
  }
  *(g___0->changed + (x + y * g___0->w)) = (unsigned char )((int )*(g___0->changed + (x + y * g___0->w)) | ((int )*(g___0->contents + (x + y * g___0->w)) != most_common));
  *(g___0->contents + (x + y * g___0->w)) = (unsigned char )most_common;
  repaint_fun(x - 1, y, g___0);
  repaint_fun(x + 1, y, g___0);
  repaint_fun(x, y - 1, g___0);
  repaint_fun(x, y + 1, g___0);
  return;
}
}

static void push_down(play_piece *pp , int col , int row , int rot ,
                      Grid *g___0 , void (*fun)(int  , int  , Grid * ) ) 
{ int i ;
  int j ;
  int c ;
  int place_y ;
  int look_y ;
  int t_x ;
  int t_y ;

  {
  j = 0;
  while (j < (pp->base)->dim) {
    i = 0;
    while (i < (pp->base)->dim) {
      c = (int )*((pp->base)->bitmap[rot] + ((pp->base)->dim * j + i));
      if (c) {
        t_x = i + col;
        t_y = j + row;
        if (t_x < 0) {
          goto __Cont;
        } else {
          if (t_y < 0) {
            goto __Cont;
          } else {
            if (t_x >= g___0->w) {
              goto __Cont;
            } else {
              if (t_y >= g___0->h) {
                goto __Cont;
              }
            }
          }
        }
        *(g___0->changed + (t_x + t_y * g___0->w)) = (unsigned char )((int )*(g___0->changed + (t_x + t_y * g___0->w)) | ((int )*(g___0->contents + (t_x + t_y * g___0->w)) != 255));
        *(g___0->contents + (t_x + t_y * g___0->w)) = (unsigned char)255;
        look_y = t_y + 1;
        if (look_y >= g___0->h) {
          goto __Cont;
        }
        if (! *(g___0->contents + (t_x + look_y * g___0->w))) {
          goto __Cont;
        }
        place_y = g___0->h - 1;
        while (1) {
          if (place_y > look_y) {
            if (! ((int )*(g___0->contents + (t_x + place_y * g___0->w)) != 0)) {
              break;
            }
          } else {
            break;
          }
          place_y --;
        }
        if (place_y == look_y) {
          goto __Cont;
        }
        if (place_y < 0) {
          goto __Cont;
        } else {
          if (place_y >= g___0->h) {
            goto __Cont;
          }
        }
        if (look_y < 0) {
          goto __Cont;
        } else {
          if (look_y >= g___0->h) {
            goto __Cont;
          }
        }
        *(g___0->changed + (t_x + place_y * g___0->w)) = (unsigned char )((int )*(g___0->changed + (t_x + place_y * g___0->w)) | ((int )*(g___0->contents + (t_x + place_y * g___0->w)) != (int )*(g___0->contents + (t_x + look_y * g___0->w))));
        *(g___0->contents + (t_x + place_y * g___0->w)) = *(g___0->contents + (t_x + look_y * g___0->w));
        *(g___0->changed + (t_x + look_y * g___0->w)) = (unsigned char )((int )*(g___0->changed + (t_x + look_y * g___0->w)) | ((int )*(g___0->contents + (t_x + look_y * g___0->w)) != 255));
        *(g___0->contents + (t_x + look_y * g___0->w)) = (unsigned char)255;
      }
      __Cont: 
      i ++;
    }
    j ++;
  }
  return;
}
}

static void find_on_board(play_piece *pp , int col , int row , int rot ,
                          Grid *g___0 , void (*fun)(int  , int  , Grid * ) ) 
{ int i ;
  int j ;
  int c ;
  int t_x ;
  int t_y ;
  int t_x___0 ;
  int t_y___0 ;

  {
  j = 0;
  while (j < (pp->base)->dim) {
    i = 0;
    while (i < (pp->base)->dim) {
      c = (int )*((pp->base)->bitmap[rot] + ((pp->base)->dim * j + i));
      if (c) {
        t_x = i + col;
        t_y = j + row;
        if (t_x < 0) {
          goto __Cont;
        } else {
          if (t_y < 0) {
            goto __Cont;
          } else {
            if (t_x >= g___0->w) {
              goto __Cont;
            } else {
              if (t_y >= g___0->h) {
                goto __Cont;
              }
            }
          }
        }
        *(g___0->changed + (t_x + t_y * g___0->w)) = (unsigned char )((int )*(g___0->changed + (t_x + t_y * g___0->w)) | ((int )*(g___0->contents + (t_x + t_y * g___0->w)) != 255));
        *(g___0->contents + (t_x + t_y * g___0->w)) = (unsigned char)255;
      }
      __Cont: 
      i ++;
    }
    j ++;
  }
  j = 0;
  while (j < (pp->base)->dim) {
    i = 0;
    while (i < (pp->base)->dim) {
      c = (int )*((pp->base)->bitmap[rot] + ((pp->base)->dim * j + i));
      if (c) {
        t_x___0 = i + col;
        t_y___0 = j + row;
        if (t_x___0 < 0) {
          goto __Cont___0;
        } else {
          if (t_y___0 < 0) {
            goto __Cont___0;
          } else {
            if (t_x___0 >= g___0->w) {
              goto __Cont___0;
            } else {
              if (t_y___0 >= g___0->h) {
                goto __Cont___0;
              }
            }
          }
        }
        (*fun)(t_x___0 - 1, t_y___0, g___0);
        (*fun)(t_x___0 + 1, t_y___0, g___0);
        (*fun)(t_x___0, t_y___0 - 1, g___0);
        (*fun)(t_x___0, t_y___0 + 1, g___0);
      }
      __Cont___0: 
      i ++;
    }
    j ++;
  }
  return;
}
}

static void most_common_color(Grid *g___0 ) 
{ int count[256] ;
  int x ;
  int y ;
  int c ;
  int max ;
  int max_count ;

  {
  memset((void *)(count), 0, sizeof(count));
  x = 0;
  while (x < g___0->w) {
    y = 0;
    while (y < g___0->h) {
      c = (int )*(g___0->contents + (x + y * g___0->w));
      if (c > 1) {
        (count[c]) ++;
      }
      y ++;
    }
    x ++;
  }
  max = 1;
  max_count = 0;
  x = 2;
  while (x < 256) {
    if (count[x] > max_count) {
      max = x;
      max_count = count[x];
    }
    x ++;
  }
  most_common = max;
  return;
}
}

void handle_special(play_piece *pp , int row , int col , int rot , Grid *g___0 ,
                    sound_style *ss ) 
{ 

  {
  switch ((int )pp->special) {
  case -1: 
  break;
  case 0: 
  find_on_board(pp, col, row, rot, g___0, & bomb_fun);
  if (ss) {
    play_sound(ss, 1, 256);
  }
  break;
  case 1: 
  most_common_color(g___0);
  find_on_board(pp, col, row, rot, g___0, & repaint_fun);
  if (ss) {
    play_sound(ss, 5, 256);
  }
  break;
  case 2: 
  push_down(pp, col, row, rot, g___0, & repaint_fun);
  if (ss) {
    play_sound(ss, 0, 512);
  }
  break;
  case 3: 
  find_on_board(pp, col, row, rot, g___0, & colorkill_fun);
  if (ss) {
    play_sound(ss, 1, 256);
  }
  break;
  }
  return;
}
}

static void do_pause(int paused , Uint32 tv_now , int *pause_begin_time ,
                     int *tv_start ) 
{ int i ;

  {
  draw_pause(paused);
  if (! paused) {
    *tv_start = (int )((unsigned int )*tv_start + (tv_now - (unsigned int )*pause_begin_time));
    i = 0;
    while (i < 2) {
      State[i].collide_time += tv_now - (unsigned int )*pause_begin_time;
      State[i].next_draw += tv_now - (unsigned int )*pause_begin_time;
      State[i].tv_next_fall += tv_now - (unsigned int )*pause_begin_time;
      State[i].tv_next_tetris += tv_now - (unsigned int )*pause_begin_time;
      State[i].tv_next_ai_think += tv_now - (unsigned int )*pause_begin_time;
      State[i].tv_next_ai_move += tv_now - (unsigned int )*pause_begin_time;
      i ++;
    }
  } else {
    *pause_begin_time = (int )tv_now;
  }
  return;
}
}

static int place_this_piece(int P , int blockWidth , Grid *g___0 ) 
{ int Y ;
  int R ;
  int tmp ;

  {
  pos[P].old_x = (int )(g___0 + P)->board.x + (int )(g___0 + P)->board.w / 2;
  pos[P].x = pos[P].old_x;
  Y = 0;
  while (Y >= -2) {
    R = 0;
    while (R <= 3) {
      pos[P].old_y = (int )(g___0 + P)->board.y + blockWidth * Y;
      pos[P].y = pos[P].old_y;
      pos[P].rot = R;
      pos[P].old_rot = pos[P].rot;
      tmp = valid_screen_position(& State[P].cp, blockWidth, g___0 + P,
                                  pos[P].rot, pos[P].x, pos[P].y);
      if (tmp) {
        return (0);
      }
      R ++;
    }
    Y --;
  }
  return (1);
}
}

int event_loop(SDL_Surface *screen___0 , piece_style *ps , color_style **cs ,
               sound_style **ss , Grid *g___0 , int *level , int sock ,
               int *seconds_remaining , int time_is_hard_limit , int *adjust ,
               int (*handle)(SDL_Event const   * ) , int seed , int p1 ,
               int p2 , AI_Player **AI ) 
{ SDL_Event event ;
  Uint32 tv_now ;
  Uint32 tv_start ;
  int NUM_PLAYER ;
  int NUM_KEYBOARD ;
  int last_seconds ;
  int minimum_fall_event_interval ;
  int paused ;
  Uint32 pause_begin_time ;
  int blockWidth ;
  int i ;
  int j ;
  int P ;
  int Q ;
  Uint32 __attribute__((__visibility__("default")))  tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  Uint16 tmp___4 ;
  Uint16 tmp___5 ;
  Uint16 tmp___6 ;
  Uint16 tmp___7 ;
  char msg ;
  Uint32 __attribute__((__visibility__("default")))  tmp___8 ;
  int i___0 ;
  int j___0 ;
  int delta ;
  int amt ;
  int i___1 ;
  int j___1 ;
  int try ;
  int we_fell ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int row ;
  int col ;
  int row___0 ;
  int col___0 ;
  char msg___0 ;
  int blank ;
  int garbage ;
  Uint32 __attribute__((__visibility__("default")))  tmp___12 ;
  int tmp___13 ;
  int x ;
  int y ;
  int count ;
  Uint32 __attribute__((__visibility__("default")))  tmp___14 ;
  int tmp___15 ;
  int row___1 ;
  int col___1 ;
  int row___2 ;
  int col___2 ;
  int tmp___16 ;
  Uint32 __attribute__((__visibility__("default")))  tmp___17 ;
  char msg___1 ;
  int ks ;
  int __attribute__((__visibility__("default")))  tmp___18 ;
  int tmp___19 ;
  int tmp___20 ;
  int tmp___21 ;
  int tmp___22 ;
  int tmp___23 ;
  int tmp___24 ;
  int tmp___25 ;
  int tmp___26 ;
  fd_set read_fds ;
  struct timeval timeout ;
  int retval ;
  int __d0 ;
  int __d1 ;
  char msg___2 ;
  Uint32 __attribute__((__visibility__("default")))  tmp___27 ;
  int i___2 ;
  int j___2 ;
  ssize_t tmp___28 ;
  char msg___3 ;
  char msg___4 ;
  Uint32 __attribute__((__visibility__("default")))  tmp___29 ;
  Uint32 least ;
  int row___3 ;
  int col___3 ;
  int row___4 ;
  int col___4 ;
  int __attribute__((__visibility__("default")))  tmp___30 ;
  int __attribute__((__visibility__("default")))  tmp___31 ;

  {
  NUM_PLAYER = 0;
  NUM_KEYBOARD = 0;
  last_seconds = -1;
  minimum_fall_event_interval = 100;
  paused = 0;
  pause_begin_time = 0U;
  blockWidth = (*(cs + 0))->w;
  SDL_EnableKeyRepeat(500 / Options.key_repeat_delay, 15);
  if ((int )gametype != 7) {
    stop_all_playing();
  }
  memset((void *)(pos), 0, sizeof(pos[0]) * 2U);
  memset((void *)(State), 0, sizeof(State[0]) * 2U);
  switch (p1) {
  case 0: 
  if (! (! handle)) {
    Panic("event_loop", "event.c", (char *)"Failed assertion \"%s\" on line %d",
          "!handle", 663);
  }
  break;
  case 1: 
  if (! (! handle)) {
    Panic("event_loop", "event.c", (char *)"Failed assertion \"%s\" on line %d",
          "!handle", 664);
  }
  NUM_PLAYER ++;
  NUM_KEYBOARD ++;
  break;
  case 2: 
  State[0].ai = 1;
  NUM_PLAYER ++;
  break;
  case 3: 
  Panic("event_loop", "event.c",
        (char *)"Cannot have player 1 over the network!");
  }
  switch (p2) {
  case 0: 
  break;
  case 1: 
  if (! (! handle)) {
    Panic("event_loop", "event.c", (char *)"Failed assertion \"%s\" on line %d",
          "!handle", 670);
  }
  NUM_PLAYER ++;
  NUM_KEYBOARD ++;
  break;
  case 2: 
  State[1].ai = 1;
  NUM_PLAYER ++;
  break;
  case 3: 
  if (! sock) {
    Panic("event_loop", "event.c", (char *)"Failed assertion \"%s\" on line %d",
          "sock", 672);
  }
  break;
  }
  if (NUM_PLAYER >= 1) {
    if (! (NUM_PLAYER <= 2)) {
      Panic("event_loop", "event.c",
            (char *)"Failed assertion \"%s\" on line %d",
            "NUM_PLAYER >= 1 && NUM_PLAYER <= 2", 674);
    }
  } else {
    Panic("event_loop", "event.c", (char *)"Failed assertion \"%s\" on line %d",
          "NUM_PLAYER >= 1 && NUM_PLAYER <= 2", 674);
  }
  tmp = SDL_GetTicks();
  tv_now = (unsigned int )tmp;
  tv_start = tv_now;
  tv_start += (unsigned int )(*seconds_remaining * 1000);
  P = 0;
  while (P < NUM_PLAYER) {
    State[P].falling = 1;
    State[P].fall_speed = 1;
    State[P].tetris_handling = 0;
    State[P].accept_input = 1;
    State[P].limbo = 0;
    State[P].draw = 1;
    State[P].other_in_limbo = 0;
    State[P].next_draw = 0U;
    State[P].limbo_sent = 0;
    State[P].cp = generate_piece(ps, *(cs + P), (unsigned int )seed);
    State[P].np = generate_piece(ps, *(cs + P), (unsigned int )(seed + 1));
    State[P].seed = seed + 2;
    State[P].ready_for_fast = 1;
    State[P].ready_for_rotate = 1;
    draw_next_piece(screen___0, ps, *(cs + P), & State[P].cp, & State[P].np, P);
    *(adjust + P) = -1;
    if (Options.faster_levels) {
      tmp___2 = *(level + P);
    } else {
      tmp___2 = (*(level + P) + 1) / 2;
    }
    if (tmp___2 <= 7) {
      if (Options.faster_levels) {
        tmp___0 = *(level + P);
      } else {
        tmp___0 = (*(level + P) + 1) / 2;
      }
      State[P].fall_event_interval = 45 - tmp___0 * 5;
    } else {
      if (Options.faster_levels) {
        tmp___1 = *(level + P);
      } else {
        tmp___1 = (*(level + P) + 1) / 2;
      }
      State[P].fall_event_interval = 16 - tmp___1;
    }
    if (State[P].fall_event_interval < 1) {
      State[P].fall_event_interval = 1;
    }
    if (State[P].fall_event_interval < minimum_fall_event_interval) {
      minimum_fall_event_interval = State[P].fall_event_interval;
    }
    State[P].tv_next_fall = tv_now + (unsigned int )State[P].fall_event_interval;
    tmp___3 = place_this_piece(P, blockWidth, g___0);
    if (tmp___3) {
      pos[P].old_x = (int )(g___0 + P)->board.x + (int )(g___0 + P)->board.w / 2;
      pos[P].x = pos[P].old_x;
      pos[P].old_y = (int )(g___0 + P)->board.y;
      pos[P].y = pos[P].old_y;
      pos[P].old_rot = 0;
      pos[P].rot = pos[P].old_rot;
    }
    if (State[P].ai) {
      State[P].tv_next_ai_think = tv_now;
      State[P].tv_next_ai_move = tv_now;
      if ((int )gametype == 7) {
        goto _L;
      } else {
        if ((int )gametype == 5) {
          goto _L;
        } else {
          if ((*(AI + P))->delay_factor == 0) {
            _L: 
            State[P].ai_interval = State[P].fall_event_interval;
            if (State[P].ai_interval > 15) {
              State[P].ai_interval = 15;
            }
          } else {
            if ((*(AI + P))->delay_factor < 1) {
              (*(AI + P))->delay_factor = 1;
            }
            if ((*(AI + P))->delay_factor > 100) {
              (*(AI + P))->delay_factor = 100;
            }
            State[P].ai_interval = (*(AI + P))->delay_factor;
          }
        }
      }
      State[P].ai_state = (*((*(AI + P))->reset))(State[P].ai_state, g___0 + P);
    }
    P ++;
  }
  distract_grid[0] = generate_board((g___0 + 0)->w, (g___0 + 0)->h,
                                    (g___0 + 0)->h - 2);
  distract_grid[0].board = (g___0 + 0)->board;
  SeedRandom((unsigned int )seed);
  i = 0;
  while (i < (g___0 + 0)->w) {
    j = 0;
    while (j < (g___0 + 0)->h) {
      tmp___4 = FastRandom((unsigned short )(*(cs + 0))->num_color);
      *(distract_grid[0].changed + (i + j * distract_grid[0].w)) = (unsigned char )((int )*(distract_grid[0].changed + (i + j * distract_grid[0].w)) | ((int )*(distract_grid[0].contents + (i + j * distract_grid[0].w)) != (int )tmp___4));
      tmp___5 = FastRandom((unsigned short )(*(cs + 0))->num_color);
      *(distract_grid[0].contents + (i + j * distract_grid[0].w)) = (unsigned char )tmp___5;
      j ++;
    }
    i ++;
  }
  if (NUM_PLAYER == 2) {
    distract_grid[1] = generate_board((g___0 + 1)->w, (g___0 + 1)->h,
                                      (g___0 + 1)->h - 2);
    distract_grid[1].board = (g___0 + 1)->board;
    i = 0;
    while (i < (g___0 + 1)->w) {
      j = 0;
      while (j < (g___0 + 1)->h) {
        tmp___6 = FastRandom((unsigned short )(*(cs + 1))->num_color);
        *(distract_grid[1].changed + (i + j * distract_grid[1].w)) = (unsigned char )((int )*(distract_grid[1].changed + (i + j * distract_grid[1].w)) | ((int )*(distract_grid[1].contents + (i + j * distract_grid[1].w)) != (int )tmp___6));
        tmp___7 = FastRandom((unsigned short )(*(cs + 1))->num_color);
        *(distract_grid[1].contents + (i + j * distract_grid[1].w)) = (unsigned char )tmp___7;
        j ++;
      }
      i ++;
    }
  }
  if (sock) {
    msg = (char )'c';
    send(sock, (void const   *)(& msg), 1U, 0);
    send(sock, (void const   *)(g___0 + 0)->contents,
         (sizeof(*((g___0 + 0)->contents)) * (unsigned int )(g___0 + 0)->h) * (unsigned int )(g___0 + 0)->w,
         0);
  }
  draw_clock(0);
  draw_grid(screen___0, *(cs + 0), g___0 + 0, 1);
  draw_score(screen___0, 0);
  if (NUM_PLAYER == 2) {
    draw_grid(screen___0, *(cs + 1), g___0 + 1, 1);
    draw_score(screen___0, 1);
  }
  if (sock) {
    draw_score(screen___0, 1);
  }
  P = 0;
  while (1) {
    if (NUM_PLAYER == 2) {
      P = ! P;
    }
    tmp___8 = SDL_GetTicks();
    tv_now = (unsigned int )tmp___8;
    if (tv_start >= tv_now) {
      *seconds_remaining = (int )((tv_start - tv_now) / 1000U);
    } else {
      *seconds_remaining = (int )(- ((tv_now - tv_start) / 1000U));
    }
    if (*seconds_remaining != last_seconds) {
      if (! paused) {
        last_seconds = *seconds_remaining;
        draw_clock(*seconds_remaining);
        if (last_seconds <= 30) {
          if (last_seconds >= 0) {
            play_sound_unless_already_playing(*(ss + 0), 6, 0);
            if (NUM_PLAYER == 2) {
              play_sound_unless_already_playing(*(ss + 1), 6, 0);
            }
          }
        }
      }
    }
    if (*seconds_remaining < 0) {
      if (time_is_hard_limit) {
        if (! paused) {
          play_sound(*(ss + 0), 4, 0);
          *(adjust + 0) = 2;
          if (NUM_PLAYER == 2) {
            play_sound(*(ss + 1), 4, 0);
            *(adjust + 1) = 2;
          }
          stop_playing_sound(*(ss + 0), 6);
          if (NUM_PLAYER == 2) {
            stop_playing_sound(*(ss + 1), 6);
          }
          return (0);
        }
      }
    }
    if (! State[P].draw) {
      if (tv_now > State[P].next_draw) {
        if (! paused) {
          State[P].draw = 1;
          i___0 = 0;
          while (i___0 < (g___0 + P)->w) {
            j___0 = 0;
            while (j___0 < (g___0 + P)->h) {
              *((g___0 + P)->changed + (i___0 + j___0 * (g___0 + P)->w)) = (unsigned char)1;
              if ((int )*((g___0 + P)->contents + (i___0 + j___0 * (g___0 + P)->w)) == 0) {
                *((g___0 + P)->changed + (i___0 + j___0 * (g___0 + P)->w)) = (unsigned char )((int )*((g___0 + P)->changed + (i___0 + j___0 * (g___0 + P)->w)) | ((int )*((g___0 + P)->contents + (i___0 + j___0 * (g___0 + P)->w)) != 255));
                *((g___0 + P)->contents + (i___0 + j___0 * (g___0 + P)->w)) = (unsigned char)255;
              }
              j___0 ++;
            }
            i___0 ++;
          }
          draw_grid(screen___0, *(cs + P), g___0 + P, 1);
        } else {
          goto _L___1;
        }
      } else {
        goto _L___1;
      }
    } else {
      _L___1: 
      if (! State[P].draw) {
        delta = (int )(State[P].next_draw - tv_now);
        amt = (int )((unsigned int )(g___0 + P)->h - (unsigned int )((g___0 + P)->h * delta) / State[P].draw_timeout);
        j___1 = amt - 1;
        if (j___1 < 0) {
          j___1 = 0;
        }
        i___1 = 0;
        while (i___1 < (g___0 + P)->w) {
          *(distract_grid[P].changed + (i___1 + j___1 * distract_grid[P].w)) = (unsigned char)1;
          i___1 ++;
        }
        draw_grid(screen___0, *(cs + P), & distract_grid[P], 1);
      }
    }
    if (State[P].falling) {
      if (tv_now >= State[P].tv_next_fall) {
        if (! paused) {
          we_fell = 0;
          while (1) {
            State[P].tv_next_fall += (unsigned int )State[P].fall_event_interval;
            if (! (State[P].tv_next_fall <= tv_now)) {
              break;
            }
          }
          try = State[P].fall_speed;
          while (try > 0) {
            tmp___9 = valid_screen_position(& State[P].cp, blockWidth,
                                            g___0 + P, pos[P].rot, pos[P].x,
                                            pos[P].y + try);
            if (tmp___9) {
              pos[P].y += try;
              State[P].fall_speed = try;
              try = 0;
              we_fell = 1;
            }
            try --;
          }
          if (! we_fell) {
            if (! State[P].collide_time) {
              if (Options.long_settle_delay) {
                tmp___10 = 400;
              } else {
                tmp___10 = 200;
              }
              State[P].collide_time = tv_now + (unsigned int )tmp___10;
              continue;
            }
            if (tv_now < State[P].collide_time) {
              continue;
            }
          } else {
            continue;
          }
          State[P].collide_time = 0U;
          play_sound(*(ss + P), 0, 0);
          while (1) {
            tmp___11 = valid_screen_position(& State[P].cp, blockWidth,
                                             g___0 + P, pos[P].rot, pos[P].x,
                                             pos[P].y);
            if (tmp___11) {
              break;
            } else {
              if (! (pos[P].y > 0)) {
                break;
              }
            }
            (pos[P].y) --;
          }
          if (State[P].draw) {
            draw_play_piece(screen___0, *(cs + P), & State[P].cp, pos[P].old_x,
                            pos[P].old_y, pos[P].old_rot, & State[P].cp,
                            pos[P].x, pos[P].y, pos[P].rot);
          }
          if ((int )State[P].cp.special != -1) {
            screen_to_exact_grid_coords(g___0 + P, blockWidth, pos[P].x,
                                        pos[P].y, & row, & col);
            handle_special(& State[P].cp, row, col, pos[P].rot, g___0 + P,
                           *(ss + P));
          } else {
            screen_to_exact_grid_coords(g___0 + P, blockWidth, pos[P].x,
                                        pos[P].y, & row___0, & col___0);
            paste_on_board(& State[P].cp, col___0, row___0, pos[P].rot,
                           g___0 + P);
          }
          if (sock) {
            msg___0 = (char )'c';
            send(sock, (void const   *)(& msg___0), 1U, 0);
            send(sock, (void const   *)(g___0 + P)->contents,
                 (sizeof(*((g___0 + P)->contents)) * (unsigned int )(g___0 + P)->h) * (unsigned int )(g___0 + P)->w,
                 0);
          }
          draw_grid(screen___0, *(cs + P), g___0 + P, State[P].draw);
          State[P].falling = 0;
          State[P].fall_speed = 0;
          State[P].tetris_handling = 1;
          State[P].accept_input = 0;
          State[P].tv_next_tetris = tv_now;
        }
      }
    }
    if (State[P].tetris_handling != 0) {
      if (tv_now >= State[P].tv_next_tetris) {
        if (! paused) {
          blank = 0;
          garbage = 0;
          State[P].tetris_handling = tetris_event(& State[P].tetris_event_interval,
                                                  State[P].tetris_handling,
                                                  screen___0, ps, *(cs + P),
                                                  *(ss + P), g___0 + P,
                                                  *(level + P),
                                                  minimum_fall_event_interval,
                                                  sock, State[P].draw, & blank,
                                                  & garbage, P);
          if (NUM_PLAYER == 2) {
            if (blank) {
              do_blank(screen___0, ss, g___0, ! P);
            }
            if (garbage) {
              add_garbage(g___0 + ! P);
              play_sound(*(ss + ! P), 5, 1);
              draw_grid(screen___0, *(cs + ! P), g___0 + ! P, State[! P].draw);
            }
          }
          tmp___12 = SDL_GetTicks();
          tv_now = (unsigned int )tmp___12;
          while (1) {
            State[P].tv_next_tetris += (unsigned int )State[P].tetris_event_interval;
            if (! (State[P].tv_next_tetris < tv_now)) {
              break;
            }
          }
          if (State[P].tetris_handling == 0) {
            State[P].cp = State[P].np;
            tmp___13 = State[P].seed;
            (State[P].seed) ++;
            State[P].np = generate_piece(ps, *(cs + P), (unsigned int )tmp___13);
            draw_next_piece(screen___0, ps, *(cs + P), & State[P].cp,
                            & State[P].np, P);
            tmp___15 = place_this_piece(P, blockWidth, g___0);
            if (tmp___15) {
              you_lose: 
              play_sound(*(ss + P), 4, 0);
              *(adjust + P) = 2;
              if (NUM_PLAYER == 2) {
                if (! sock) {
                  *(adjust + ! P) = 1;
                }
              }
              if (sock == 0) {
                stop_playing_sound(*(ss + 0), 6);
                if (NUM_PLAYER == 2) {
                  stop_playing_sound(*(ss + 1), 6);
                }
                return (0);
              }
              State[P].falling = 0;
              State[P].fall_speed = 0;
              State[P].tetris_handling = 0;
              State[P].accept_input = 0;
              State[P].limbo = 1;
            } else {
              count = 0;
              if (State[P].ai) {
                State[P].ai_state = (*((*(AI + P))->reset))(State[P].ai_state,
                                                            g___0 + P);
              }
              y = 0;
              while (y < g___0->h) {
                x = 0;
                while (x < g___0->w) {
                  if ((int )*((g___0 + P)->contents + (x + y * (g___0 + P)->w)) == 1) {
                    count ++;
                  }
                  x ++;
                }
                y ++;
              }
              if (count == 0) {
                you_win: 
                play_sound(*(ss + P), 3, 256);
                if (*seconds_remaining <= 0) {
                  *(adjust + P) = 1;
                  if (NUM_PLAYER == 2) {
                    if (! sock) {
                      *(adjust + ! P) = 2;
                    }
                  }
                } else {
                  *(adjust + P) = 0;
                  if (NUM_PLAYER == 2) {
                    if (! sock) {
                      *(adjust + ! P) = 1;
                    }
                  }
                }
                if (sock == 0) {
                  stop_playing_sound(*(ss + 0), 6);
                  if (NUM_PLAYER == 2) {
                    stop_playing_sound(*(ss + 1), 6);
                  }
                  return (0);
                }
                State[P].falling = 0;
                State[P].fall_speed = 0;
                State[P].tetris_handling = 0;
                State[P].accept_input = 0;
                State[P].limbo = 1;
              } else {
                State[P].falling = 1;
                State[P].fall_speed = 1;
                State[P].tetris_handling = 0;
                State[P].accept_input = 1;
                tmp___14 = SDL_GetTicks();
                State[P].tv_next_fall = (unsigned int )(tmp___14 + (unsigned int __attribute__((__visibility__("default")))  )State[P].fall_event_interval);
              }
            }
          }
        }
      }
    }
    if (State[P].ai) {
      if (tv_now >= State[P].tv_next_ai_think) {
        if (! paused) {
          screen_to_grid_coords(g___0 + P, blockWidth, pos[P].x, pos[P].y,
                                & row___1, & col___1);
          if (State[P].draw) {
            (*((*(AI + P))->think))(State[P].ai_state, g___0 + P, & State[P].cp,
                                    & State[P].np, col___1, row___1, pos[P].rot);
          }
          while (1) {
            State[P].tv_next_ai_think += (unsigned int )State[P].ai_interval;
            if (! (State[P].tv_next_ai_think < tv_now)) {
              break;
            }
          }
        }
      }
    }
    if (State[P].ai) {
      if (State[P].accept_input) {
        if (tv_now >= State[P].tv_next_ai_move) {
          if (! paused) {
            screen_to_grid_coords(g___0 + P, blockWidth, pos[P].x, pos[P].y,
                                  & row___2, & col___2);
            pos[P].move = (*((*(AI + P))->move))(State[P].ai_state, g___0 + P,
                                                 & State[P].cp, & State[P].np,
                                                 col___2, row___2, pos[P].rot);
            while (1) {
              State[P].tv_next_ai_move += (unsigned int )(State[P].ai_interval * 5);
              if (! (State[P].tv_next_ai_move < tv_now)) {
                break;
              }
            }
          }
        }
      }
    }
    tmp___18 = SDL_PollEvent(& event);
    if (tmp___18) {
      if (handle) {
        tmp___16 = (*handle)((SDL_Event const   *)(& event));
        if (tmp___16) {
          return (-1);
        }
      } else {
        switch ((int )event.type) {
        case 3: 
        if ((int )event.key.keysym.sym == 274) {
          State[1].ready_for_fast = 1;
          if (NUM_KEYBOARD == 1) {
            State[0].ready_for_fast = 1;
          }
        } else {
          if ((int )event.key.keysym.sym == 273) {
            State[1].ready_for_rotate = 1;
            if (NUM_KEYBOARD == 1) {
              State[0].ready_for_rotate = 1;
            }
          } else {
            if ((int )event.key.keysym.sym == 119) {
              State[0].ready_for_rotate = 1;
            } else {
              if ((int )event.key.keysym.sym == 115) {
                State[0].ready_for_fast = 1;
              } else {
                if ((int )event.key.keysym.sym == 49) {
                  P = 0;
                  goto you_win;
                } else {
                  if ((int )event.key.keysym.sym == 50) {
                    P = 0;
                    goto you_lose;
                  } else {
                    if ((int )event.key.keysym.sym == 51) {
                      P = 1;
                      goto you_win;
                    } else {
                      if ((int )event.key.keysym.sym == 52) {
                        P = 1;
                        goto you_lose;
                      } else {
                        if ((int )event.key.keysym.sym == 112) {
                          if ((int )gametype != 7) {
                            tmp___17 = SDL_GetTicks();
                            tv_now = (unsigned int )tmp___17;
                            paused = ! paused;
                            if (sock) {
                              msg___1 = (char )'p';
                              send(sock, (void const   *)(& msg___1), 1U, 0);
                            }
                            do_pause(paused, tv_now,
                                     (int *)(& pause_begin_time),
                                     (int *)(& tv_start));
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        break;
        case 2: 
        ks = (int )event.key.keysym.sym;
        Q = -1;
        if (ks == 273) {
          Q = 1;
        } else {
          if (ks == 274) {
            Q = 1;
          } else {
            if (ks == 275) {
              Q = 1;
            } else {
              if (ks == 276) {
                Q = 1;
              } else {
                if (ks == 119) {
                  Q = 0;
                } else {
                  if (ks == 115) {
                    Q = 0;
                  } else {
                    if (ks == 97) {
                      Q = 0;
                    } else {
                      if (ks == 100) {
                        Q = 0;
                      } else {
                        if (ks == 113) {
                          if (sock == 0) {
                            *(adjust + 0) = -1;
                            if (NUM_PLAYER == 2) {
                              *(adjust + 1) = -1;
                            }
                            stop_playing_sound(*(ss + 0), 6);
                            if (NUM_PLAYER == 2) {
                              stop_playing_sound(*(ss + 1), 6);
                            }
                            return (-1);
                          } else {
                            State[0].falling = 0;
                            State[0].fall_speed = 0;
                            State[0].tetris_handling = 0;
                            State[0].accept_input = 0;
                            State[0].limbo = 1;
                            *(adjust + 0) = 2;
                          }
                        } else {
                          if (ks == 13) {
                            if ((int )event.key.keysym.mod & 64) {
                              SDL_WM_ToggleFullScreen(screen___0);
                              break;
                            } else {
                              if ((int )event.key.keysym.mod & 128) {
                                SDL_WM_ToggleFullScreen(screen___0);
                                break;
                              } else {
                                break;
                              }
                            }
                          } else {
                            break;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if (NUM_KEYBOARD == 1) {
          Q = 0;
        } else {
          if (NUM_KEYBOARD < 1) {
            break;
          }
        }
        if (! (Q == 0)) {
          if (! (Q == 1)) {
            Panic("event_loop", "event.c",
                  (char *)"Failed assertion \"%s\" on line %d",
                  "Q == 0 || Q == 1", 1180);
          }
        }
        if ((int )event.key.keysym.sym != 274) {
          if ((int )event.key.keysym.sym != 115) {
            State[Q].fall_speed = 1;
          }
        }
        if (! State[Q].accept_input) {
          break;
        }
        switch ((int )event.key.keysym.sym) {
        case 273: 
        case 119: 
        if (State[Q].ready_for_rotate) {
          pos[Q].move = (enum __anonenum_Command_53 )3;
        }
        break;
        case 274: 
        case 115: 
        if (State[Q].ready_for_fast) {
          pos[Q].move = (enum __anonenum_Command_53 )4;
        }
        break;
        case 276: 
        case 97: 
        pos[Q].move = (enum __anonenum_Command_53 )1;
        break;
        case 275: 
        case 100: 
        pos[Q].move = (enum __anonenum_Command_53 )2;
        break;
        default: 
        Panic("event_loop", "event.c", (char *)"unknown keypress");
        }
        break;
        case 12: 
        printf((char const   */* __restrict  */)"%-14.14s| ", "event_loop");
        printf((char const   */* __restrict  */)"Window-manager exit request.\n");
        fflush(stdout);
        *(adjust + 0) = -1;
        if (NUM_PLAYER == 2) {
          *(adjust + 1) = -1;
        }
        stop_playing_sound(*(ss + 0), 6);
        if (NUM_PLAYER == 2) {
          stop_playing_sound(*(ss + 1), 6);
        }
        return (-1);
        case 13: 
        break;
        }
      }
    }
    Q = 0;
    while (Q < NUM_PLAYER) {
      switch ((int )pos[Q].move) {
      case 3: 
      State[Q].ready_for_rotate = 0;
      tmp___23 = valid_screen_position(& State[Q].cp, blockWidth, g___0 + Q,
                                       (pos[Q].rot + 1) % 4, pos[Q].x, pos[Q].y);
      if (tmp___23) {
        pos[Q].rot = (pos[Q].rot + 1) % 4;
        State[Q].collide_time = 0U;
      } else {
        tmp___22 = valid_screen_position(& State[Q].cp, blockWidth, g___0 + Q,
                                         (pos[Q].rot + 1) % 4,
                                         pos[Q].x - blockWidth, pos[Q].y);
        if (tmp___22) {
          pos[Q].rot = (pos[Q].rot + 1) % 4;
          pos[Q].x -= blockWidth;
          State[Q].collide_time = 0U;
        } else {
          tmp___21 = valid_screen_position(& State[Q].cp, blockWidth, g___0 + Q,
                                           (pos[Q].rot + 1) % 4,
                                           pos[Q].x + blockWidth, pos[Q].y);
          if (tmp___21) {
            pos[Q].rot = (pos[Q].rot + 1) % 4;
            pos[Q].x += blockWidth;
            State[Q].collide_time = 0U;
          } else {
            tmp___20 = valid_screen_position(& State[Q].cp, blockWidth,
                                             g___0 + Q, (pos[Q].rot + 1) % 4,
                                             pos[Q].x, pos[Q].y + blockWidth);
            if (tmp___20) {
              pos[Q].rot = (pos[Q].rot + 1) % 4;
              pos[Q].y += blockWidth;
              State[Q].collide_time = 0U;
            } else {
              if (Options.upward_rotation) {
                tmp___19 = valid_screen_position(& State[Q].cp, blockWidth,
                                                 g___0 + Q,
                                                 (pos[Q].rot + 1) % 4, pos[Q].x,
                                                 pos[Q].y - blockWidth);
                if (tmp___19) {
                  pos[Q].rot = (pos[Q].rot + 1) % 4;
                  pos[Q].y -= blockWidth;
                  State[Q].collide_time = 0U;
                }
              }
            }
          }
        }
      }
      pos[Q].move = (enum __anonenum_Command_53 )0;
      break;
      case 1: 
      i = 0;
      while (i < 10) {
        tmp___24 = valid_screen_position(& State[Q].cp, blockWidth, g___0 + Q,
                                         pos[Q].rot, pos[Q].x - blockWidth,
                                         pos[Q].y + i);
        if (tmp___24) {
          pos[Q].x -= blockWidth;
          pos[Q].y += i;
          State[Q].collide_time = 0U;
          break;
        }
        i ++;
      }
      pos[Q].move = (enum __anonenum_Command_53 )0;
      break;
      case 2: 
      i = 0;
      while (i < 10) {
        tmp___25 = valid_screen_position(& State[Q].cp, blockWidth, g___0 + Q,
                                         pos[Q].rot, pos[Q].x + blockWidth,
                                         pos[Q].y + i);
        if (tmp___25) {
          pos[Q].x += blockWidth;
          pos[Q].y += i;
          State[Q].collide_time = 0U;
          break;
        }
        i ++;
      }
      pos[Q].move = (enum __anonenum_Command_53 )0;
      break;
      case 4: 
      tmp___26 = valid_screen_position(& State[Q].cp, blockWidth, g___0 + Q,
                                       pos[Q].rot, pos[Q].x,
                                       pos[Q].y + blockWidth);
      if (tmp___26) {
        pos[Q].y += blockWidth;
      }
      State[Q].fall_speed = 20;
      State[Q].ready_for_fast = 0;
      pos[Q].move = (enum __anonenum_Command_53 )0;
      break;
      default: ;
      break;
      }
      Q ++;
    }
    if (State[P].falling) {
      if (! paused) {
        if (State[P].draw) {
          if (pos[P].old_x != pos[P].x) {
            draw_play_piece(screen___0, *(cs + P), & State[P].cp, pos[P].old_x,
                            pos[P].old_y, pos[P].old_rot, & State[P].cp,
                            pos[P].x, pos[P].y, pos[P].rot);
            pos[P].old_x = pos[P].x;
            pos[P].old_y = pos[P].y;
            pos[P].old_rot = pos[P].rot;
          } else {
            if (pos[P].old_y != pos[P].y) {
              draw_play_piece(screen___0, *(cs + P), & State[P].cp,
                              pos[P].old_x, pos[P].old_y, pos[P].old_rot,
                              & State[P].cp, pos[P].x, pos[P].y, pos[P].rot);
              pos[P].old_x = pos[P].x;
              pos[P].old_y = pos[P].y;
              pos[P].old_rot = pos[P].rot;
            } else {
              if (pos[P].old_rot != pos[P].rot) {
                draw_play_piece(screen___0, *(cs + P), & State[P].cp,
                                pos[P].old_x, pos[P].old_y, pos[P].old_rot,
                                & State[P].cp, pos[P].x, pos[P].y, pos[P].rot);
                pos[P].old_x = pos[P].x;
                pos[P].old_y = pos[P].y;
                pos[P].old_rot = pos[P].rot;
              }
            }
          }
        }
      }
    }
    if (sock) {
      timeout.tv_sec = 0L;
      timeout.tv_usec = 0L;
      if (! (P == 0)) {
        Panic("event_loop", "event.c",
              (char *)"Failed assertion \"%s\" on line %d", "P == 0", 1308);
      }
      while (1) {
        while (1) {
          __asm__  volatile   ("cld; rep; stosl": "=c" (__d0),
                               "=D" (__d1): "a" (0),
                               "0" (sizeof(fd_set ) / sizeof(__fd_mask )),
                               "1" (& read_fds.fds_bits[0]): "memory");
          break;
        }
        __asm__  volatile   ("btsl %1,%0": "=m" (read_fds.fds_bits[(unsigned int )sock / (8U * sizeof(__fd_mask ))]): "r" ((unsigned int )sock % (8U * sizeof(__fd_mask ))): "cc",
                             "memory");
        retval = select(sock + 1, (fd_set */* __restrict  */)(& read_fds),
                        (fd_set */* __restrict  */)((fd_set *)((void *)0)),
                        (fd_set */* __restrict  */)((fd_set *)((void *)0)),
                        (struct timeval */* __restrict  */)(& timeout));
        if (retval > 0) {
          tmp___28 = recv(sock, (void *)(& msg___2), 1U, 0);
          if (tmp___28 != 1) {
            printf((char const   */* __restrict  */)"%-14.14s| ", "event_loop");
            printf((char const   */* __restrict  */)"WARNING: Other player has left?\n");
            fflush(stdout);
            close(sock);
            sock = 0;
            retval = 0;
          } else {
            switch ((int )msg___2) {
            case 98: 
            do_blank(screen___0, ss, g___0, P);
            break;
            case 112: 
            paused = ! paused;
            tmp___27 = SDL_GetTicks();
            tv_now = (unsigned int )tmp___27;
            do_pause(paused, tv_now, (int *)(& pause_begin_time),
                     (int *)(& tv_start));
            break;
            case 2: 
            case 1: 
            case 0: 
            State[P].other_in_limbo = 1;
            *(adjust + ! P) = (int )msg___2;
            break;
            case 103: 
            add_garbage(g___0 + P);
            play_sound(*(ss + P), 5, 1);
            draw_grid(screen___0, *(cs + P), g___0 + P, State[P].draw);
            break;
            case 115: 
            recv(sock, (void *)((char *)(& Score[1])), sizeof(Score[1]), 0);
            draw_score(screen___0, 1);
            break;
            case 99: 
            memcpy((void */* __restrict  */)((void *)(g___0 + ! P)->temp),
                   (void const   */* __restrict  */)((void const   *)(g___0 + ! P)->contents),
                   (sizeof(*((g___0 + 0)->temp)) * (unsigned int )(g___0 + ! P)->w) * (unsigned int )(g___0 + ! P)->h);
            recv(sock, (void *)(g___0 + ! P)->contents,
                 (sizeof(*((g___0 + ! P)->contents)) * (unsigned int )(g___0 + ! P)->w) * (unsigned int )(g___0 + ! P)->h,
                 0);
            i___2 = 0;
            while (i___2 < (g___0 + ! P)->w) {
              j___2 = 0;
              while (j___2 < (g___0 + ! P)->h) {
                if ((int )*((g___0 + ! P)->contents + (i___2 + j___2 * (g___0 + ! P)->w)) != (int )*((g___0 + 1)->temp + (i___2 + j___2 * (g___0 + 1)->w))) {
                  *((g___0 + ! P)->changed + (i___2 + j___2 * (g___0 + ! P)->w)) = (unsigned char)1;
                  if (i___2 > 0) {
                    *((g___0 + ! P)->changed + ((i___2 - 1) + j___2 * (g___0 + ! P)->w)) = (unsigned char)1;
                  }
                  if (j___2 > 0) {
                    *((g___0 + ! P)->changed + (i___2 + (j___2 - 1) * (g___0 + ! P)->w)) = (unsigned char)1;
                  }
                  if (i___2 < (g___0 + ! P)->w - 1) {
                    *((g___0 + ! P)->changed + ((i___2 + 1) + j___2 * (g___0 + ! P)->w)) = (unsigned char)1;
                  }
                  if (i___2 < (g___0 + ! P)->h - 1) {
                    *((g___0 + ! P)->changed + (i___2 + (j___2 + 1) * (g___0 + ! P)->w)) = (unsigned char)1;
                  }
                  if ((int )*((g___0 + ! P)->contents + (i___2 + j___2 * (g___0 + ! P)->w)) == 0) {
                    *((g___0 + ! P)->changed + (i___2 + j___2 * (g___0 + ! P)->w)) = (unsigned char )((int )*((g___0 + ! P)->changed + (i___2 + j___2 * (g___0 + ! P)->w)) | ((int )*((g___0 + ! P)->contents + (i___2 + j___2 * (g___0 + ! P)->w)) != 255));
                    *((g___0 + ! P)->contents + (i___2 + j___2 * (g___0 + ! P)->w)) = (unsigned char)255;
                  }
                }
                j___2 ++;
              }
              i___2 ++;
            }
            draw_grid(screen___0, *(cs + ! P), g___0 + ! P, 1);
            break;
            default: ;
            break;
            }
          }
        }
        if (retval > 0) {
          if (State[P].limbo) {
            if (State[P].other_in_limbo) {
              break;
            }
          }
        } else {
          break;
        }
      }
      if (State[P].limbo) {
        if (State[P].other_in_limbo) {
          if (*(adjust + 0) != -1) {
            if (! (*(adjust + 1) != -1)) {
              Panic("event_loop", "event.c",
                    (char *)"Failed assertion \"%s\" on line %d",
                    "adjust[0] != -1 && adjust[1] != -1", 1382);
            }
          } else {
            Panic("event_loop", "event.c",
                  (char *)"Failed assertion \"%s\" on line %d",
                  "adjust[0] != -1 && adjust[1] != -1", 1382);
          }
          stop_playing_sound(*(ss + 0), 6);
          if (NUM_PLAYER == 2) {
            stop_playing_sound(*(ss + 1), 6);
          }
          return (0);
        } else {
          goto _L___5;
        }
      } else {
        _L___5: 
        if (State[P].limbo) {
          if (! State[P].other_in_limbo) {
            if (! State[P].limbo_sent) {
              msg___3 = (char )*(adjust + P);
              State[P].limbo_sent = 1;
              send(sock, (void const   *)(& msg___3), 1U, 0);
            } else {
              goto _L___4;
            }
          } else {
            goto _L___4;
          }
        } else {
          _L___4: 
          if (! State[P].limbo) {
            if (State[P].other_in_limbo) {
              if (*(adjust + ! P) == 0) {
                goto _L___2;
              } else {
                if (*(adjust + ! P) == 1) {
                  _L___2: 
                  if (*seconds_remaining > 0) {
                    *(adjust + P) = 1;
                  } else {
                    *(adjust + P) = 2;
                  }
                } else {
                  if (*(adjust + ! P) == 2) {
                    *(adjust + P) = 1;
                  }
                }
              }
              State[P].falling = 0;
              State[P].fall_speed = 0;
              State[P].tetris_handling = 0;
              State[P].accept_input = 0;
              State[P].limbo = 1;
              State[P].limbo_sent = 1;
              msg___4 = (char )*(adjust + P);
              send(sock, (void const   *)(& msg___4), 1U, 0);
              stop_playing_sound(*(ss + 0), 6);
              if (NUM_PLAYER == 2) {
                stop_playing_sound(*(ss + 1), 6);
              }
              return (0);
            }
          }
        }
      }
    }
    if (paused) {
      atris_run_flame();
    }
    tmp___29 = SDL_GetTicks();
    tv_now = (unsigned int )tmp___29;
    least = State[0].tv_next_fall;
    if (State[0].tetris_handling) {
      if (State[0].tv_next_tetris < least) {
        least = State[0].tv_next_tetris;
      }
    }
    if (State[0].ai) {
      if (State[0].tv_next_ai_think < least) {
        least = State[0].tv_next_ai_think;
      }
    }
    if (State[0].ai) {
      if (State[0].tv_next_ai_move < least) {
        least = State[0].tv_next_ai_move;
      }
    }
    if (NUM_PLAYER == 2) {
      if (State[1].tv_next_fall < least) {
        least = State[1].tv_next_tetris;
      }
      if (State[1].tetris_handling) {
        if (State[1].tv_next_tetris < least) {
          least = State[1].tv_next_tetris;
        }
      }
      if (State[1].ai) {
        if (State[1].tv_next_ai_think < least) {
          least = State[1].tv_next_ai_think;
        }
      }
      if (State[1].ai) {
        if (State[1].tv_next_ai_move < least) {
          least = State[1].tv_next_ai_move;
        }
      }
    }
    if (least >= tv_now + 4U) {
      tmp___31 = SDL_PollEvent((SDL_Event *)((void *)0));
      if (tmp___31) {
        goto _L___7;
      } else {
        if (State[0].ai) {
          goto _L___6;
        } else {
          if (State[1].ai) {
            _L___6: 
            SDL_Delay(1U);
            if (State[0].ai) {
              if (State[0].draw) {
                screen_to_grid_coords(g___0 + 0, blockWidth, pos[0].x, pos[0].y,
                                      & row___3, & col___3);
                (*((*(AI + 0))->think))(State[0].ai_state, g___0 + 0,
                                        & State[0].cp, & State[0].np, col___3,
                                        row___3, pos[0].rot);
              } else {
                SDL_Delay(1U);
              }
            } else {
              SDL_Delay(1U);
            }
            if (State[1].ai) {
              if (State[1].draw) {
                screen_to_grid_coords(g___0 + 1, blockWidth, pos[1].x, pos[1].y,
                                      & row___4, & col___4);
                (*((*(AI + 1))->think))(State[1].ai_state, g___0 + 1,
                                        & State[1].cp, & State[1].np, col___4,
                                        row___4, pos[1].rot);
              } else {
                SDL_Delay(1U);
              }
            } else {
              SDL_Delay(1U);
            }
          } else {
            SDL_Delay(2U);
          }
        }
      }
    } else {
      _L___7: 
      if (least > tv_now) {
        tmp___30 = SDL_PollEvent((SDL_Event *)((void *)0));
        if (! tmp___30) {
          SDL_Delay(least - tv_now);
        }
      }
    }
  }
}
}

extern  __attribute__((__nothrow__)) int rand(void) ;

extern  __attribute__((__nothrow__)) void srand(unsigned int __seed ) ;

static Uint32 randomSeed  ;

void SeedRandom(Uint32 Seed ) 
{ time_t tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  if (! Seed) {
    tmp = time((time_t *)((void *)0));
    srand((unsigned int )tmp);
    tmp___0 = rand();
    tmp___1 = rand();
    Seed = (unsigned int )((tmp___0 % 65535 << 16) | tmp___1 % 65535);
  }
  randomSeed = Seed;
  return;
}
}

Uint32 GetRandSeed(void) 
{ 

  {
  return (randomSeed);
}
}

Uint16 FastRandom(Uint16 range ) 
{ Uint16 result ;
  register Uint32 calc ;
  register Uint32 regD0 ;
  register Uint32 regD1 ;
  register Uint32 regD2 ;

  {
  calc = randomSeed;
  regD0 = 16807U;
  regD2 = regD0;
  regD0 *= calc & 65535U;
  regD1 = regD0;
  regD1 >>= 16;
  regD2 *= calc >> 16;
  regD2 += regD1;
  regD1 = regD2;
  regD1 += regD1;
  regD1 >>= 16;
  regD0 &= 65535U;
  regD0 -= 2147483647U;
  regD2 &= 32767U;
  regD2 = (regD2 << 16) + (regD2 >> 16);
  regD2 += regD1;
  regD0 += regD2;
  randomSeed = regD0;
  if ((regD0 & 65535U) == 32768U) {
    regD0 &= 4294901760U;
  }
  regD1 = (unsigned int )range;
  regD1 *= regD0 & 65535U;
  regD1 >>= 16;
  result = (unsigned short )regD1;
  return (result);
}
}

void play_all_sounds(sound_style *ss ) ;

void clear_radio(WalkRadio *wr ) ;

static int start_playing   = 0;

static sound_styles *_ss  ;

static color_styles *_cs  ;

static piece_styles *_ps  ;

static WalkRadioGroup *wrg   = (WalkRadioGroup *)((void *)0);

static GT _local_gametype  ;

static void updateMenu(int whichSubMenu , int choice ) 
{ 

  {
  *((wrg->wr + 5)->label + whichSubMenu) = *((wrg->wr + whichSubMenu)->label + choice);
  clear_radio(wrg->wr + 5);
  setup_radio(wrg->wr + 5);
  (wrg->wr + 5)->x = (screen->w / 3 - (int )(wrg->wr + 5)->area.w) / 2;
  (wrg->wr + 5)->y = (screen->h - (int )(wrg->wr + 5)->area.h) / 2;
  return;
}
}

char key_repeat_label[16]   = 
  {(char )'K', (char )'e', (char )'y', (char )' ', (char )'R', (char )'e',
   (char )'p', (char )'e', (char )'a', (char )'t', (char )':', (char )' ',
   (char )'1', (char )'6', (char )' ', (char )'\000'};

static void OptionsMenu_setup(void) 
{ 

  {
  *((wrg->wr + 4)->label + 0) = (char *)"Toggle Full Screen";
  if (Options.flame_wanted) {
    *((wrg->wr + 4)->label + 1) = (char *)"Background Flame: On";
  } else {
    *((wrg->wr + 4)->label + 1) = (char *)"Background Flame: Off";
  }
  if (Options.special_wanted) {
    *((wrg->wr + 4)->label + 2) = (char *)"Power Pieces: On";
  } else {
    *((wrg->wr + 4)->label + 2) = (char *)"Power Pieces: Off";
  }
  if (Options.faster_levels) {
    *((wrg->wr + 4)->label + 3) = (char *)"Double Difficulty: On";
  } else {
    *((wrg->wr + 4)->label + 3) = (char *)"Double Difficulty: Off";
  }
  if (Options.long_settle_delay) {
    *((wrg->wr + 4)->label + 4) = (char *)"Long Settle Delay: On";
  } else {
    *((wrg->wr + 4)->label + 4) = (char *)"Long Settle Delay: Off";
  }
  if (Options.upward_rotation) {
    *((wrg->wr + 4)->label + 5) = (char *)"Upward Rotation: On";
  } else {
    *((wrg->wr + 4)->label + 5) = (char *)"Upward Rotation: Off";
  }
  sprintf((char */* __restrict  */)(key_repeat_label),
          (char const   */* __restrict  */)"Key Repeat: %.2d",
          Options.key_repeat_delay);
  *((wrg->wr + 4)->label + 6) = key_repeat_label;
  return;
}
}

static int OptionsMenu_action(WalkRadio *wr ) 
{ 

  {
  switch (wr->defaultchoice) {
  case 0: 
  SDL_WM_ToggleFullScreen(screen);
  break;
  case 1: 
  Options.flame_wanted = ! Options.flame_wanted;
  break;
  case 2: 
  Options.special_wanted = ! Options.special_wanted;
  break;
  case 3: 
  Options.faster_levels = ! Options.faster_levels;
  break;
  case 4: 
  Options.long_settle_delay = ! Options.long_settle_delay;
  break;
  case 5: 
  Options.upward_rotation = ! Options.upward_rotation;
  break;
  case 6: 
  Options.key_repeat_delay = pick_key_repeat(screen);
  break;
  default: ;
  break;
  }
  OptionsMenu_setup();
  clear_radio(wrg->wr + 4);
  setup_radio(wrg->wr + 4);
  return (0);
}
}

static int ColorStyleMenu_action(WalkRadio *wr ) 
{ 

  {
  _cs->choice = wr->defaultchoice;
  updateMenu(0, wr->defaultchoice);
  return (1);
}
}

static int SoundStyleMenu_action(WalkRadio *wr ) 
{ 

  {
  _ss->choice = wr->defaultchoice;
  play_all_sounds(*(_ss->style + _ss->choice));
  updateMenu(1, wr->defaultchoice);
  return (1);
}
}

static int PieceStyleMenu_action(WalkRadio *wr ) 
{ 

  {
  _ps->choice = wr->defaultchoice;
  updateMenu(2, wr->defaultchoice);
  return (1);
}
}

static int GameMenu_action(WalkRadio *wr ) 
{ 

  {
  _local_gametype = (enum __anonenum_GT_50 )wr->defaultchoice;
  updateMenu(3, wr->defaultchoice);
  return (1);
}
}

static int MainMenu_action(WalkRadio *wr ) 
{ int i ;

  {
  switch (wr->defaultchoice) {
  case 0: 
  case 1: 
  case 2: 
  case 3: 
  case 4: 
  i = 0;
  while (i < 5) {
    if ((wrg->wr + i)->inactive == 0) {
      (wrg->wr + i)->inactive = 1;
      clear_radio(wrg->wr + i);
    }
    i ++;
  }
  (wrg->wr + wr->defaultchoice)->inactive = 0;
  wrg->cur = wr->defaultchoice;
  break;
  case 5: 
  start_playing = 1;
  gametype = _local_gametype;
  break;
  case 6: 
  start_playing = 1;
  gametype = (enum __anonenum_GT_50 )6;
  break;
  default: 
  printf((char const   */* __restrict  */)"%-14.14s| ", "MainMenu_action");
  printf((char const   */* __restrict  */)"Invalid menu choice %d.\n",
         wr->defaultchoice);
  fflush(stdout);
  }
  return (1);
}
}

static int menu_handler(SDL_Event const   *event ) 
{ int retval ;

  {
  if ((int const   )event->type == 2) {
    switch ((int )event->key.keysym.sym) {
    case 113: 
    start_playing = 1;
    gametype = (enum __anonenum_GT_50 )6;
    _local_gametype = gametype;
    return (1);
    case 13: 
    if ((int const   )event->key.keysym.mod & 64) {
      SDL_WM_ToggleFullScreen(screen);
      return (1);
    } else {
      if ((int const   )event->key.keysym.mod & 128) {
        SDL_WM_ToggleFullScreen(screen);
        return (1);
      }
    }
    default: ;
    break;
    }
  }
  retval = handle_radio_event(wrg, event);
  if (retval != -1) {
    return (1);
  }
  return (0);
}
}

static int play_MENU(color_styles cs , piece_styles ps , sound_styles ss ,
                     Grid *g___0 , int my_level , AI_Player *aip ) 
{ int curtimeleft ;
  int match ;
  int level[2] ;
  int adjustment[2] ;
  int my_adj[3] ;
  int result ;
  color_style *event_cs___0[2] ;
  sound_style *event_ss___0[2] ;
  AI_Player *event_ai___0[2] ;
  int i ;
  time_t tmp ;

  {
  adjustment[0] = -1;
  adjustment[1] = -1;
  level[0] = my_level;
  Score[1] = 0;
  Score[0] = Score[1];
  SeedRandom(0U);
  while (1) {
    curtimeleft = 300;
    my_adj[0] = 0;
    my_adj[1] = 1;
    my_adj[2] = 2;
    match = 0;
    while (1) {
      if (match < 3) {
        if (! (curtimeleft > 0)) {
          break;
        }
      } else {
        break;
      }
      *(g___0 + 0) = generate_board(10, 20, level[0]);
      draw_background(screen, (*(cs.style + 0))->w, g___0, level, my_adj,
                      (int *)((void *)0), & aip->name);
      i = 0;
      while (i < 6) {
        draw_radio(wrg->wr + i, i == wrg->cur);
        i ++;
      }
      event_cs___0[1] = *(cs.style + cs.choice);
      event_cs___0[0] = event_cs___0[1];
      event_ss___0[1] = *(ss.style + ss.choice);
      event_ss___0[0] = event_ss___0[1];
      event_ai___0[0] = aip;
      event_ai___0[1] = (AI_Player *)((void *)0);
      tmp = time((time_t *)((void *)0));
      result = event_loop(screen, *(ps.style + ps.choice), event_cs___0,
                          event_ss___0, g___0, level, 0, & curtimeleft, 1,
                          adjustment, & menu_handler, (int )tmp, 2, 0,
                          event_ai___0);
      if (result < 0) {
        return (-1);
      }
      my_adj[match] = adjustment[0];
      match ++;
    }
  }
}
}

int choose_gametype(piece_styles *ps , color_styles *cs , sound_styles *ss ,
                    AI_Players *ai ) 
{ int i ;
  void *tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;
  void *tmp___3 ;
  void *tmp___4 ;
  void *tmp___5 ;
  void *tmp___6 ;
  Grid g___0[2] ;
  Uint16 tmp___7 ;
  int tmp___8 ;

  {
  _local_gametype = gametype;
  if (! wrg) {
    tmp = calloc(sizeof(*wrg), 1U);
    wrg = (WalkRadioGroup *)tmp;
    if (! wrg) {
      Panic("choose_gametype", "gamemenu.c",
            (char *)"Out of Memory:\n\tcannot callocate %d bytes for wrg",
            sizeof(*wrg));
    }
    wrg->n = 6;
    tmp___0 = calloc((unsigned int )wrg->n * sizeof(*(wrg->wr)), 1U);
    wrg->wr = (WalkRadio *)tmp___0;
    if (! wrg->wr) {
      Panic("choose_gametype", "gamemenu.c",
            (char *)"Out of Memory:\n\tcannot callocate %d bytes for wrg->wr",
            (unsigned int )wrg->n * sizeof(*(wrg->wr)));
    }
    wrg->cur = 5;
    (wrg->wr + 2)->n = ps->num_style;
    tmp___1 = malloc(sizeof(char *) * (unsigned int )ps->num_style);
    (wrg->wr + 2)->label = (char **)tmp___1;
    if (! (wrg->wr + 2)->label) {
      Panic("choose_gametype", "gamemenu.c",
            (char *)"Out of Memory:\n\tcannot allocate %d bytes for wrg->wr[PieceStyleMenu].label",
            sizeof(char *) * (unsigned int )ps->num_style);
    }
    i = 0;
    while (i < ps->num_style) {
      *((wrg->wr + 2)->label + i) = (*(ps->style + i))->name;
      i ++;
    }
    (wrg->wr + 2)->defaultchoice = ps->choice;
    (wrg->wr + 2)->action = & PieceStyleMenu_action;
    (wrg->wr + 0)->n = cs->num_style;
    tmp___2 = malloc(sizeof(char *) * (unsigned int )cs->num_style);
    (wrg->wr + 0)->label = (char **)tmp___2;
    if (! (wrg->wr + 0)->label) {
      Panic("choose_gametype", "gamemenu.c",
            (char *)"Out of Memory:\n\tcannot allocate %d bytes for wrg->wr[ColorStyleMenu].label",
            sizeof(char *) * (unsigned int )cs->num_style);
    }
    i = 0;
    while (i < cs->num_style) {
      *((wrg->wr + 0)->label + i) = (*(cs->style + i))->name;
      i ++;
    }
    (wrg->wr + 0)->defaultchoice = cs->choice;
    (wrg->wr + 0)->action = & ColorStyleMenu_action;
    (wrg->wr + 1)->n = ss->num_style;
    tmp___3 = malloc(sizeof(char *) * (unsigned int )ss->num_style);
    (wrg->wr + 1)->label = (char **)tmp___3;
    if (! (wrg->wr + 1)->label) {
      Panic("choose_gametype", "gamemenu.c",
            (char *)"Out of Memory:\n\tcannot allocate %d bytes for wrg->wr[SoundStyleMenu].label",
            sizeof(char *) * (unsigned int )ss->num_style);
    }
    i = 0;
    while (i < ss->num_style) {
      *((wrg->wr + 1)->label + i) = (*(ss->style + i))->name;
      i ++;
    }
    (wrg->wr + 1)->defaultchoice = ss->choice;
    (wrg->wr + 1)->action = & SoundStyleMenu_action;
    _ss = ss;
    _cs = cs;
    _ps = ps;
    (wrg->wr + 3)->n = 6;
    tmp___4 = malloc(sizeof(char *) * (unsigned int )(wrg->wr + 3)->n);
    (wrg->wr + 3)->label = (char **)tmp___4;
    if (! (wrg->wr + 3)->label) {
      Panic("choose_gametype", "gamemenu.c",
            (char *)"Out of Memory:\n\tcannot allocate %d bytes for wrg->wr[GameMenu].label",
            sizeof(char *) * (unsigned int )(wrg->wr + 3)->n);
    }
    *((wrg->wr + 3)->label + 0) = (char *)"Solo Normal Game";
    *((wrg->wr + 3)->label + 1) = (char *)"Solo Scoring Marathon";
    *((wrg->wr + 3)->label + 2) = (char *)"Solo vs. Computer";
    *((wrg->wr + 3)->label + 3) = (char *)"2 Players @ 1 Keyboard";
    *((wrg->wr + 3)->label + 4) = (char *)"2 Players, Use Network";
    *((wrg->wr + 3)->label + 5) = (char *)"Computer vs. Computer";
    (wrg->wr + 3)->defaultchoice = 0;
    (wrg->wr + 3)->action = & GameMenu_action;
    (wrg->wr + 4)->n = 7;
    tmp___5 = malloc(sizeof(char *) * (unsigned int )(wrg->wr + 4)->n);
    (wrg->wr + 4)->label = (char **)tmp___5;
    if (! (wrg->wr + 4)->label) {
      Panic("choose_gametype", "gamemenu.c",
            (char *)"Out of Memory:\n\tcannot allocate %d bytes for wrg->wr[OptionsMenu].label",
            sizeof(char *) * (unsigned int )(wrg->wr + 4)->n);
    }
    OptionsMenu_setup();
    (wrg->wr + 4)->defaultchoice = 0;
    (wrg->wr + 4)->action = & OptionsMenu_action;
    (wrg->wr + 5)->n = 7;
    tmp___6 = malloc(sizeof(char *) * (unsigned int )(wrg->wr + 5)->n);
    (wrg->wr + 5)->label = (char **)tmp___6;
    if (! (wrg->wr + 5)->label) {
      Panic("choose_gametype", "gamemenu.c",
            (char *)"Out of Memory:\n\tcannot allocate %d bytes for wrg->wr[MainMenu].label",
            sizeof(char *) * (unsigned int )(wrg->wr + 5)->n);
    }
    *((wrg->wr + 5)->label + 0) = *((wrg->wr + 0)->label + (wrg->wr + 0)->defaultchoice);
    *((wrg->wr + 5)->label + 1) = *((wrg->wr + 1)->label + (wrg->wr + 1)->defaultchoice);
    *((wrg->wr + 5)->label + 2) = *((wrg->wr + 2)->label + (wrg->wr + 2)->defaultchoice);
    *((wrg->wr + 5)->label + 3) = *((wrg->wr + 3)->label + (int )_local_gametype);
    *((wrg->wr + 5)->label + 4) = (char *)"Special Options";
    *((wrg->wr + 5)->label + 5) = (char *)"Play!";
    *((wrg->wr + 5)->label + 6) = (char *)"Quit";
    (wrg->wr + 5)->defaultchoice = 5;
    (wrg->wr + 5)->action = & MainMenu_action;
    i = 0;
    while (i < 6) {
      setup_radio(wrg->wr + i);
      i ++;
    }
    (wrg->wr + 0)->x = 2 * (screen->w / 3) + (screen->w / 3 - (int )(wrg->wr + 0)->area.w) / 2;
    (wrg->wr + 0)->y = (screen->h - (int )(wrg->wr + 0)->area.h) / 2;
    (wrg->wr + 0)->inactive = 1;
    (wrg->wr + 1)->x = 2 * (screen->w / 3) + (screen->w / 3 - (int )(wrg->wr + 1)->area.w) / 2;
    (wrg->wr + 1)->y = (screen->h - (int )(wrg->wr + 1)->area.h) / 2;
    (wrg->wr + 1)->inactive = 1;
    (wrg->wr + 4)->x = 2 * (screen->w / 3) + (screen->w / 3 - (int )(wrg->wr + 4)->area.w) / 2;
    (wrg->wr + 4)->y = (screen->h - (int )(wrg->wr + 4)->area.h) / 2;
    (wrg->wr + 4)->inactive = 1;
    (wrg->wr + 2)->x = 2 * (screen->w / 3) + (screen->w / 3 - (int )(wrg->wr + 2)->area.w) / 2;
    (wrg->wr + 2)->y = (screen->h - (int )(wrg->wr + 2)->area.h) / 2;
    (wrg->wr + 2)->inactive = 1;
    (wrg->wr + 3)->x = 2 * (screen->w / 3) + (screen->w / 3 - (int )(wrg->wr + 3)->area.w) / 2;
    (wrg->wr + 3)->y = (screen->h - (int )(wrg->wr + 3)->area.h) / 2;
    (wrg->wr + 3)->inactive = 1;
    (wrg->wr + 5)->x = (screen->w / 3 - (int )(wrg->wr + 5)->area.w) / 2;
    (wrg->wr + 5)->y = (screen->h - (int )(wrg->wr + 5)->area.h) / 2;
    (wrg->wr + 5)->inactive = 0;
  }
  clear_screen_to_flame();
  SDL_EnableKeyRepeat(5000, 300);
  start_playing = 0;
  while (1) {
    gametype = (enum __anonenum_GT_50 )7;
    tmp___7 = FastRandom((unsigned short )ai->n);
    if (Options.faster_levels) {
      tmp___8 = 5;
    } else {
      tmp___8 = 10;
    }
    play_MENU(*cs, *ps, *ss, g___0, tmp___8, ai->player + (int )tmp___7);
    if (start_playing) {
      return (0);
    }
  }
}
}

void cleanup_grid(Grid *g___0 ) 
{ int x ;
  int y ;

  {
  y = g___0->h - 1;
  while (y >= 0) {
    x = g___0->w - 1;
    while (x >= 0) {
      if ((int )*(g___0->contents + (x + y * g___0->w)) == 255) {
        *(g___0->changed + (x + y * g___0->w)) = (unsigned char )((int )*(g___0->changed + (x + y * g___0->w)) | ((int )*(g___0->contents + (x + y * g___0->w)) != 0));
        *(g___0->contents + (x + y * g___0->w)) = (unsigned char)0;
      }
      x --;
    }
    y --;
  }
  return;
}
}

Grid generate_board(int w___1 , int h___1 , int level ) 
{ int i ;
  int j ;
  int r ;
  Grid retval ;
  void *tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;
  int start_garbage ;
  Uint16 tmp___3 ;

  {
  retval.w = w___1;
  retval.h = h___1;
  tmp = calloc((unsigned int )(w___1 * h___1) * sizeof(*(retval.contents)), 1U);
  retval.contents = (unsigned char *)tmp;
  if (! retval.contents) {
    Panic("generate_board", "grid.c",
          (char *)"Out of Memory:\n\tcannot callocate %d bytes for retval.contents",
          (unsigned int )(w___1 * h___1) * sizeof(*(retval.contents)));
  }
  tmp___0 = calloc((unsigned int )(w___1 * h___1) * sizeof(*(retval.fall)), 1U);
  retval.fall = (unsigned char *)tmp___0;
  if (! retval.fall) {
    Panic("generate_board", "grid.c",
          (char *)"Out of Memory:\n\tcannot callocate %d bytes for retval.fall",
          (unsigned int )(w___1 * h___1) * sizeof(*(retval.fall)));
  }
  tmp___1 = calloc((unsigned int )(w___1 * h___1) * sizeof(*(retval.changed)),
                   1U);
  retval.changed = (unsigned char *)tmp___1;
  if (! retval.changed) {
    Panic("generate_board", "grid.c",
          (char *)"Out of Memory:\n\tcannot callocate %d bytes for retval.changed",
          (unsigned int )(w___1 * h___1) * sizeof(*(retval.changed)));
  }
  tmp___2 = calloc((unsigned int )(w___1 * h___1) * sizeof(*(retval.temp)), 1U);
  retval.temp = (unsigned char *)tmp___2;
  if (! retval.temp) {
    Panic("generate_board", "grid.c",
          (char *)"Out of Memory:\n\tcannot callocate %d bytes for retval.temp",
          (unsigned int )(w___1 * h___1) * sizeof(*(retval.temp)));
  }
  if (level) {
    if (Options.faster_levels) {
      level = level;
    } else {
      level /= 2;
    }
    start_garbage = (h___1 - level) - 2;
    if (start_garbage < 2) {
      start_garbage = 2;
    } else {
      if (start_garbage >= h___1) {
        start_garbage = h___1 - 1;
      }
    }
    j = start_garbage;
    while (j < h___1) {
      r = 0;
      while (r < w___1 / 2) {
        while (1) {
          tmp___3 = FastRandom((unsigned short )w___1);
          i = (int )tmp___3;
          if (! ((int )*(retval.contents + (i + j * retval.w)) == 1)) {
            break;
          }
        }
        *(retval.changed + (i + j * retval.w)) = (unsigned char )((int )*(retval.changed + (i + j * retval.w)) | ((int )*(retval.contents + (i + j * retval.w)) != 1));
        *(retval.contents + (i + j * retval.w)) = (unsigned char)1;
        r ++;
      }
      j ++;
    }
  }
  return (retval);
}
}

void add_garbage(Grid *g___0 ) 
{ int i ;
  int j ;
  Uint16 tmp ;

  {
  j = 0;
  while (j < g___0->h - 1) {
    i = 0;
    while (i < g___0->w) {
      *(g___0->changed + (i + j * g___0->w)) = (unsigned char )((int )*(g___0->changed + (i + j * g___0->w)) | ((int )*(g___0->contents + (i + j * g___0->w)) != (int )*(g___0->contents + (i + (j + 1) * g___0->w))));
      *(g___0->contents + (i + j * g___0->w)) = *(g___0->contents + (i + (j + 1) * g___0->w));
      *(g___0->changed + (i + j * g___0->w)) = (unsigned char )((int )*(g___0->changed + (i + j * g___0->w)) | ((int )*(g___0->fall + (i + j * g___0->w)) != 1));
      *(g___0->fall + (i + j * g___0->w)) = (unsigned char)1;
      if ((int )*(g___0->contents + (i + j * g___0->w)) == 0) {
        *(g___0->changed + (i + j * g___0->w)) = (unsigned char )((int )*(g___0->changed + (i + j * g___0->w)) | ((int )*(g___0->contents + (i + j * g___0->w)) != 255));
        *(g___0->contents + (i + j * g___0->w)) = (unsigned char)255;
      }
      *(g___0->changed + (i + j * g___0->w)) = (unsigned char)1;
      i ++;
    }
    j ++;
  }
  j = g___0->h - 1;
  i = 0;
  while (i < g___0->w) {
    tmp = FastRandom((unsigned short)100);
    if ((int )tmp < 50) {
      *(g___0->changed + (i + j * g___0->w)) = (unsigned char )((int )*(g___0->changed + (i + j * g___0->w)) | ((int )*(g___0->contents + (i + j * g___0->w)) != 1));
      *(g___0->contents + (i + j * g___0->w)) = (unsigned char)1;
      if (*(g___0->contents + (i + (j - 1) * g___0->w))) {
        if ((int )*(g___0->contents + (i + (j - 1) * g___0->w)) != 255) {
          *(g___0->changed + (i + (j - 1) * g___0->w)) = (unsigned char )((int )*(g___0->changed + (i + (j - 1) * g___0->w)) | ((int )*(g___0->contents + (i + (j - 1) * g___0->w)) != 1));
          *(g___0->contents + (i + (j - 1) * g___0->w)) = (unsigned char)1;
        }
      }
    } else {
      *(g___0->changed + (i + j * g___0->w)) = (unsigned char )((int )*(g___0->changed + (i + j * g___0->w)) | ((int )*(g___0->contents + (i + j * g___0->w)) != 255));
      *(g___0->contents + (i + j * g___0->w)) = (unsigned char)255;
    }
    *(g___0->changed + (i + j * g___0->w)) = (unsigned char )((int )*(g___0->changed + (i + j * g___0->w)) | ((int )*(g___0->fall + (i + j * g___0->w)) != 1));
    *(g___0->fall + (i + j * g___0->w)) = (unsigned char)1;
    *(g___0->changed + (i + j * g___0->w)) = (unsigned char)1;
    i ++;
  }
  j = 0;
  while (j < g___0->h) {
    i = 0;
    while (i < g___0->w) {
      if (! *(g___0->changed + (i + j * g___0->w))) {
        Panic("add_garbage", "grid.c",
              (char *)"Failed assertion \"%s\" on line %d",
              "((*g).changed[(i) + ((j)*((*g).w))])", 104);
      }
      if (! ((int )*(g___0->fall + (i + j * g___0->w)) == 1)) {
        Panic("add_garbage", "grid.c",
              (char *)"Failed assertion \"%s\" on line %d",
              "((*g).fall[(i) + ((j)*((*g).w))]) == 1", 105);
      }
      i ++;
    }
    j ++;
  }
  return;
}
}

void draw_grid(SDL_Surface *screen___0 , color_style *cs , Grid *g___0 ,
               int draw ) 
{ SDL_Rect r ;
  SDL_Rect s ;
  int i ;
  int j ;
  int mini ;
  int minj ;
  int maxi ;
  int maxj ;
  int c ;
  SDL_Rect *my_b ;
  SDL_Rect *my_d ;
  int __attribute__((__visibility__("default")))  tmp ;
  int fall ;
  int that_precolor ;
  int tmp___0 ;
  int that_fall ;
  int tmp___1 ;
  SDL_Rect *my_b___0 ;
  SDL_Rect *my_d___0 ;
  int __attribute__((__visibility__("default")))  tmp___2 ;
  SDL_Rect *my_b___1 ;
  SDL_Rect *my_d___1 ;
  int __attribute__((__visibility__("default")))  tmp___3 ;
  SDL_Rect *my_b___2 ;
  SDL_Rect *my_d___2 ;
  int __attribute__((__visibility__("default")))  tmp___4 ;
  SDL_Rect *my_b___3 ;
  SDL_Rect *my_d___3 ;
  int __attribute__((__visibility__("default")))  tmp___5 ;
  SDL_Rect *my_c ;

  {
  mini = 20;
  minj = 20;
  maxi = -1;
  maxj = -1;
  j = g___0->h - 1;
  while (j >= 0) {
    i = g___0->w - 1;
    while (i >= 0) {
      c = (int )*(g___0->contents + (i + j * g___0->w));
      if (draw) {
        if (c) {
          if (c != 255) {
            if (*(g___0->changed + (i + j * g___0->w))) {
              if (i < mini) {
                mini = i;
              }
              if (j < minj) {
                minj = j;
              }
              if (i > maxi) {
                maxi = i;
              }
              if (j > maxj) {
                maxj = j;
              }
              s.x = (short )((int )g___0->board.x + i * cs->w);
              s.y = (short )((int )g___0->board.y + j * cs->h);
              s.w = (unsigned short )cs->w;
              s.h = (unsigned short )cs->h;
              my_b = (SDL_Rect *)((void *)0);
              my_d = & s;
              if (my_b) {
                if ((int )my_b->x < 0) {
                  my_b->x = (short)0;
                }
                if ((int )my_b->y < 0) {
                  my_b->y = (short)0;
                }
                if ((int )my_b->x + (int )my_b->w > 640) {
                  my_b->w = (unsigned short )(640 - (int )my_b->x);
                }
                if ((int )my_b->y + (int )my_b->h > 480) {
                  my_b->h = (unsigned short )(480 - (int )my_b->y);
                }
              }
              if (my_d) {
                if ((int )my_d->x < 0) {
                  my_d->x = (short)0;
                }
                if ((int )my_d->y < 0) {
                  my_d->y = (short)0;
                }
                if ((int )my_d->x + (int )my_d->w > 640) {
                  my_d->w = (unsigned short )(640 - (int )my_d->x);
                }
                if ((int )my_d->y + (int )my_d->h > 480) {
                  my_d->h = (unsigned short )(480 - (int )my_d->y);
                }
              }
              tmp = SDL_UpperBlit(*(cs->color + c), my_b, screen___0, my_d);
              if (! (tmp == (int __attribute__((__visibility__("default")))  )0)) {
                Panic("draw_grid", "grid.c",
                      (char *)"Failed assertion \"%s\" on line %d",
                      "SDL_UpperBlit(cs->color[c],my_b,screen,my_d) == 0", 139);
              }
              fall = (int )*(g___0->fall + (i + j * g___0->w));
              if (j == 0) {
                tmp___0 = 0;
              } else {
                tmp___0 = (int )*(g___0->contents + (i + (j - 1) * g___0->w));
              }
              that_precolor = tmp___0;
              if (j == 0) {
                tmp___1 = -1;
              } else {
                tmp___1 = (int )*(g___0->fall + (i + (j - 1) * g___0->w));
              }
              that_fall = tmp___1;
              if (that_precolor != c) {
                goto _L;
              } else {
                if (that_fall != fall) {
                  _L: 
                  r.x = (short )((int )g___0->board.x + i * cs->w);
                  r.y = (short )((int )g___0->board.y + j * cs->h);
                  r.h = (unsigned short )(edge[0])->h;
                  r.w = (unsigned short )(edge[0])->w;
                  my_b___0 = (SDL_Rect *)((void *)0);
                  my_d___0 = & r;
                  if (my_b___0) {
                    if ((int )my_b___0->x < 0) {
                      my_b___0->x = (short)0;
                    }
                    if ((int )my_b___0->y < 0) {
                      my_b___0->y = (short)0;
                    }
                    if ((int )my_b___0->x + (int )my_b___0->w > 640) {
                      my_b___0->w = (unsigned short )(640 - (int )my_b___0->x);
                    }
                    if ((int )my_b___0->y + (int )my_b___0->h > 480) {
                      my_b___0->h = (unsigned short )(480 - (int )my_b___0->y);
                    }
                  }
                  if (my_d___0) {
                    if ((int )my_d___0->x < 0) {
                      my_d___0->x = (short)0;
                    }
                    if ((int )my_d___0->y < 0) {
                      my_d___0->y = (short)0;
                    }
                    if ((int )my_d___0->x + (int )my_d___0->w > 640) {
                      my_d___0->w = (unsigned short )(640 - (int )my_d___0->x);
                    }
                    if ((int )my_d___0->y + (int )my_d___0->h > 480) {
                      my_d___0->h = (unsigned short )(480 - (int )my_d___0->y);
                    }
                  }
                  tmp___2 = SDL_UpperBlit(edge[0], my_b___0, screen___0,
                                          my_d___0);
                  if (! (tmp___2 == (int __attribute__((__visibility__("default")))  )0)) {
                    Panic("draw_grid", "grid.c",
                          (char *)"Failed assertion \"%s\" on line %d",
                          "SDL_UpperBlit(edge[0],my_b,screen,my_d) == 0", 155);
                  }
                }
              }
              if (i == 0) {
                that_precolor = 0;
              } else {
                that_precolor = (int )*(g___0->contents + ((i - 1) + j * g___0->w));
              }
              if (i == 0) {
                that_fall = -1;
              } else {
                that_fall = (int )*(g___0->fall + ((i - 1) + j * g___0->w));
              }
              if (that_precolor != c) {
                goto _L___0;
              } else {
                if (that_fall != fall) {
                  _L___0: 
                  r.x = (short )((int )g___0->board.x + i * cs->w);
                  r.y = (short )((int )g___0->board.y + j * cs->h);
                  r.h = (unsigned short )(edge[1])->h;
                  r.w = (unsigned short )(edge[1])->w;
                  my_b___1 = (SDL_Rect *)((void *)0);
                  my_d___1 = & r;
                  if (my_b___1) {
                    if ((int )my_b___1->x < 0) {
                      my_b___1->x = (short)0;
                    }
                    if ((int )my_b___1->y < 0) {
                      my_b___1->y = (short)0;
                    }
                    if ((int )my_b___1->x + (int )my_b___1->w > 640) {
                      my_b___1->w = (unsigned short )(640 - (int )my_b___1->x);
                    }
                    if ((int )my_b___1->y + (int )my_b___1->h > 480) {
                      my_b___1->h = (unsigned short )(480 - (int )my_b___1->y);
                    }
                  }
                  if (my_d___1) {
                    if ((int )my_d___1->x < 0) {
                      my_d___1->x = (short)0;
                    }
                    if ((int )my_d___1->y < 0) {
                      my_d___1->y = (short)0;
                    }
                    if ((int )my_d___1->x + (int )my_d___1->w > 640) {
                      my_d___1->w = (unsigned short )(640 - (int )my_d___1->x);
                    }
                    if ((int )my_d___1->y + (int )my_d___1->h > 480) {
                      my_d___1->h = (unsigned short )(480 - (int )my_d___1->y);
                    }
                  }
                  tmp___3 = SDL_UpperBlit(edge[1], my_b___1, screen___0,
                                          my_d___1);
                  if (! (tmp___3 == (int __attribute__((__visibility__("default")))  )0)) {
                    Panic("draw_grid", "grid.c",
                          (char *)"Failed assertion \"%s\" on line %d",
                          "SDL_UpperBlit(edge[1],my_b,screen,my_d) == 0", 169);
                  }
                }
              }
              if (j == g___0->h - 1) {
                that_precolor = 0;
              } else {
                that_precolor = (int )*(g___0->contents + (i + (j + 1) * g___0->w));
              }
              if (j == g___0->h - 1) {
                that_fall = -1;
              } else {
                that_fall = (int )*(g___0->fall + (i + (j + 1) * g___0->w));
              }
              if (that_precolor != c) {
                goto _L___1;
              } else {
                if (that_fall != fall) {
                  _L___1: 
                  r.x = (short )((int )g___0->board.x + i * cs->w);
                  r.y = (short )(((int )g___0->board.y + (j + 1) * cs->h) - (edge[2])->h);
                  r.h = (unsigned short )(edge[2])->h;
                  r.w = (unsigned short )(edge[2])->w;
                  my_b___2 = (SDL_Rect *)((void *)0);
                  my_d___2 = & r;
                  if (my_b___2) {
                    if ((int )my_b___2->x < 0) {
                      my_b___2->x = (short)0;
                    }
                    if ((int )my_b___2->y < 0) {
                      my_b___2->y = (short)0;
                    }
                    if ((int )my_b___2->x + (int )my_b___2->w > 640) {
                      my_b___2->w = (unsigned short )(640 - (int )my_b___2->x);
                    }
                    if ((int )my_b___2->y + (int )my_b___2->h > 480) {
                      my_b___2->h = (unsigned short )(480 - (int )my_b___2->y);
                    }
                  }
                  if (my_d___2) {
                    if ((int )my_d___2->x < 0) {
                      my_d___2->x = (short)0;
                    }
                    if ((int )my_d___2->y < 0) {
                      my_d___2->y = (short)0;
                    }
                    if ((int )my_d___2->x + (int )my_d___2->w > 640) {
                      my_d___2->w = (unsigned short )(640 - (int )my_d___2->x);
                    }
                    if ((int )my_d___2->y + (int )my_d___2->h > 480) {
                      my_d___2->h = (unsigned short )(480 - (int )my_d___2->y);
                    }
                  }
                  tmp___4 = SDL_UpperBlit(edge[2], my_b___2, screen___0,
                                          my_d___2);
                  if (! (tmp___4 == (int __attribute__((__visibility__("default")))  )0)) {
                    Panic("draw_grid", "grid.c",
                          (char *)"Failed assertion \"%s\" on line %d",
                          "SDL_UpperBlit(edge[2],my_b,screen,my_d) == 0", 184);
                  }
                }
              }
              if (i == g___0->w - 1) {
                that_precolor = 0;
              } else {
                that_precolor = (int )*(g___0->contents + ((i + 1) + j * g___0->w));
              }
              if (i == g___0->w - 1) {
                that_fall = -1;
              } else {
                that_fall = (int )*(g___0->fall + ((i + 1) + j * g___0->w));
              }
              if (that_precolor != c) {
                goto _L___2;
              } else {
                if (that_fall != fall) {
                  _L___2: 
                  r.x = (short )(((int )g___0->board.x + (i + 1) * cs->w) - (edge[3])->w);
                  r.y = (short )((int )g___0->board.y + j * cs->h);
                  r.h = (unsigned short )(edge[3])->h;
                  r.w = (unsigned short )(edge[3])->w;
                  my_b___3 = (SDL_Rect *)((void *)0);
                  my_d___3 = & r;
                  if (my_b___3) {
                    if ((int )my_b___3->x < 0) {
                      my_b___3->x = (short)0;
                    }
                    if ((int )my_b___3->y < 0) {
                      my_b___3->y = (short)0;
                    }
                    if ((int )my_b___3->x + (int )my_b___3->w > 640) {
                      my_b___3->w = (unsigned short )(640 - (int )my_b___3->x);
                    }
                    if ((int )my_b___3->y + (int )my_b___3->h > 480) {
                      my_b___3->h = (unsigned short )(480 - (int )my_b___3->y);
                    }
                  }
                  if (my_d___3) {
                    if ((int )my_d___3->x < 0) {
                      my_d___3->x = (short)0;
                    }
                    if ((int )my_d___3->y < 0) {
                      my_d___3->y = (short)0;
                    }
                    if ((int )my_d___3->x + (int )my_d___3->w > 640) {
                      my_d___3->w = (unsigned short )(640 - (int )my_d___3->x);
                    }
                    if ((int )my_d___3->y + (int )my_d___3->h > 480) {
                      my_d___3->h = (unsigned short )(480 - (int )my_d___3->y);
                    }
                  }
                  tmp___5 = SDL_UpperBlit(edge[3], my_b___3, screen___0,
                                          my_d___3);
                  if (! (tmp___5 == (int __attribute__((__visibility__("default")))  )0)) {
                    Panic("draw_grid", "grid.c",
                          (char *)"Failed assertion \"%s\" on line %d",
                          "SDL_UpperBlit(edge[3],my_b,screen,my_d) == 0", 199);
                  }
                }
              }
              *(g___0->changed + (i + j * g___0->w)) = (unsigned char)0;
            } else {
              goto _L___5;
            }
          } else {
            goto _L___5;
          }
        } else {
          goto _L___5;
        }
      } else {
        _L___5: 
        if (c == 255) {
          if (i < mini) {
            mini = i;
          }
          if (j < minj) {
            minj = j;
          }
          if (i > maxi) {
            maxi = i;
          }
          if (j > maxj) {
            maxj = j;
          }
          if (draw) {
            s.x = (short )((int )g___0->board.x + i * cs->w);
            s.y = (short )((int )g___0->board.y + j * cs->h);
            s.w = (unsigned short )cs->w;
            s.h = (unsigned short )cs->h;
            SDL_FillRect(screen___0, & s, int_solid_black);
            *(g___0->changed + (i + j * g___0->w)) = (unsigned char )((int )*(g___0->changed + (i + j * g___0->w)) | ((int )*(g___0->contents + (i + j * g___0->w)) != 0));
            *(g___0->contents + (i + j * g___0->w)) = (unsigned char)0;
            *(g___0->changed + (i + j * g___0->w)) = (unsigned char)0;
          } else {
            *(g___0->changed + (i + j * g___0->w)) = (unsigned char )((int )*(g___0->changed + (i + j * g___0->w)) | ((int )*(g___0->contents + (i + j * g___0->w)) != 0));
            *(g___0->contents + (i + j * g___0->w)) = (unsigned char)0;
          }
        }
      }
      i --;
    }
    j --;
  }
  s.x = (short )((int )g___0->board.x + mini * cs->w);
  s.y = (short )((int )g___0->board.y + minj * cs->h);
  s.w = (unsigned short )(((maxi - mini) + 1) * cs->w);
  s.h = (unsigned short )(((maxj - minj) + 1) * cs->h);
  if (draw) {
    if (maxi > -1) {
      my_c = & s;
      if (! my_c) {
        Panic("draw_grid", "grid.c",
              (char *)"Failed assertion \"%s\" on line %d", "my_c", 225);
      }
      if (my_c) {
        if ((int )my_c->x < 0) {
          my_c->x = (short)0;
        }
        if ((int )my_c->y < 0) {
          my_c->y = (short)0;
        }
        if ((int )my_c->x + (int )my_c->w > 640) {
          my_c->w = (unsigned short )(640 - (int )my_c->x);
        }
        if ((int )my_c->y + (int )my_c->h > 480) {
          my_c->h = (unsigned short )(480 - (int )my_c->y);
        }
      }
      SDL_UpdateRects(screen___0, 1, & s);
    }
  }
  return;
}
}

void draw_falling(SDL_Surface *screen___0 , int blockWidth , Grid *g___0 ,
                  int offset ) 
{ SDL_Rect s ;
  SDL_Rect r ;
  int i ;
  int j ;
  int mini ;
  int minj ;
  int maxi ;
  int maxj ;
  int cj ;
  int c ;
  SDL_Rect *my_b ;
  SDL_Rect *my_d ;
  int __attribute__((__visibility__("default")))  tmp ;
  SDL_Rect *my_b___0 ;
  SDL_Rect *my_d___0 ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  SDL_Rect *my_c ;

  {
  mini = 100000;
  minj = 100000;
  maxi = -1;
  maxj = -1;
  memset((void *)g___0->temp, 0,
         (sizeof(*(g___0->temp)) * (unsigned int )g___0->w) * (unsigned int )g___0->h);
  j = 0;
  while (j < g___0->h) {
    i = 0;
    while (i < g___0->w) {
      c = (int )*(g___0->contents + (i + j * g___0->w));
      if (c) {
        if ((int )*(g___0->fall + (i + j * g___0->w)) == 0) {
          if ((int )*(g___0->temp + (i + j * g___0->w)) == 0) {
            cj = j;
            while (1) {
              if (*(g___0->contents + (i + cj * g___0->w))) {
                if (*(g___0->fall + (i + cj * g___0->w))) {
                  if ((int )*(g___0->temp + (i + cj * g___0->w)) == 0) {
                    if (! (cj < g___0->h)) {
                      break;
                    }
                  } else {
                    break;
                  }
                } else {
                  break;
                }
              } else {
                break;
              }
              *(g___0->temp + (i + cj * g___0->w)) = (unsigned char)1;
              cj ++;
            }
            s.x = (short )((int )g___0->board.x + i * blockWidth);
            s.y = (short )((((int )g___0->board.y + j * blockWidth) + offset) - 1);
            s.w = (unsigned short )blockWidth;
            s.h = (unsigned short )(blockWidth * ((cj - j) + 1));
            r.x = (short )((int )g___0->board.x + i * blockWidth);
            r.y = (short )(((int )g___0->board.y + j * blockWidth) + offset);
            r.w = (unsigned short )blockWidth;
            r.h = (unsigned short )(blockWidth * ((cj - j) + 1));
            my_b = & s;
            my_d = & r;
            if (my_b) {
              if ((int )my_b->x < 0) {
                my_b->x = (short)0;
              }
              if ((int )my_b->y < 0) {
                my_b->y = (short)0;
              }
              if ((int )my_b->x + (int )my_b->w > 640) {
                my_b->w = (unsigned short )(640 - (int )my_b->x);
              }
              if ((int )my_b->y + (int )my_b->h > 480) {
                my_b->h = (unsigned short )(480 - (int )my_b->y);
              }
            }
            if (my_d) {
              if ((int )my_d->x < 0) {
                my_d->x = (short)0;
              }
              if ((int )my_d->y < 0) {
                my_d->y = (short)0;
              }
              if ((int )my_d->x + (int )my_d->w > 640) {
                my_d->w = (unsigned short )(640 - (int )my_d->x);
              }
              if ((int )my_d->y + (int )my_d->h > 480) {
                my_d->h = (unsigned short )(480 - (int )my_d->y);
              }
            }
            tmp = SDL_UpperBlit(screen___0, my_b, screen___0, my_d);
            if (! (tmp == (int __attribute__((__visibility__("default")))  )0)) {
              Panic("draw_falling", "grid.c",
                    (char *)"Failed assertion \"%s\" on line %d",
                    "SDL_UpperBlit(screen,my_b,screen,my_d) == 0", 272);
            }
            if ((int )s.x < mini) {
              mini = (int )s.x;
            }
            if ((int )s.y < minj) {
              minj = (int )s.y;
            }
            if ((int )s.x + (int )s.w > maxi) {
              maxi = (int )s.x + (int )s.w;
            }
            if ((int )s.y + (int )s.h > maxj) {
              maxj = (int )s.y + (int )s.h;
            }
            if (j == 0) {
              goto _L;
            } else {
              if ((int )*(g___0->fall + (i + (j - 1) * g___0->w)) == 1) {
                goto _L;
              } else {
                if ((int )*(g___0->contents + (i + (j - 1) * g___0->w)) == 0) {
                  _L: 
                  s.h = (unsigned short)1;
                  my_b___0 = & s;
                  my_d___0 = & s;
                  if (my_b___0) {
                    if ((int )my_b___0->x < 0) {
                      my_b___0->x = (short)0;
                    }
                    if ((int )my_b___0->y < 0) {
                      my_b___0->y = (short)0;
                    }
                    if ((int )my_b___0->x + (int )my_b___0->w > 640) {
                      my_b___0->w = (unsigned short )(640 - (int )my_b___0->x);
                    }
                    if ((int )my_b___0->y + (int )my_b___0->h > 480) {
                      my_b___0->h = (unsigned short )(480 - (int )my_b___0->y);
                    }
                  }
                  if (my_d___0) {
                    if ((int )my_d___0->x < 0) {
                      my_d___0->x = (short)0;
                    }
                    if ((int )my_d___0->y < 0) {
                      my_d___0->y = (short)0;
                    }
                    if ((int )my_d___0->x + (int )my_d___0->w > 640) {
                      my_d___0->w = (unsigned short )(640 - (int )my_d___0->x);
                    }
                    if ((int )my_d___0->y + (int )my_d___0->h > 480) {
                      my_d___0->h = (unsigned short )(480 - (int )my_d___0->y);
                    }
                  }
                  tmp___0 = SDL_UpperBlit(widget_layer, my_b___0, screen___0,
                                          my_d___0);
                  if (! (tmp___0 == (int __attribute__((__visibility__("default")))  )0)) {
                    Panic("draw_falling", "grid.c",
                          (char *)"Failed assertion \"%s\" on line %d",
                          "SDL_UpperBlit(widget_layer,my_b,screen,my_d) == 0",
                          283);
                  }
                }
              }
            }
          }
        }
      }
      i ++;
    }
    j ++;
  }
  s.x = (short )mini;
  s.y = (short )minj;
  s.w = (unsigned short )((maxi - mini) + 1);
  s.h = (unsigned short )((maxj - minj) + 1);
  if (maxi > -1) {
    my_c = & s;
    if (! my_c) {
      Panic("draw_falling", "grid.c",
            (char *)"Failed assertion \"%s\" on line %d", "my_c", 294);
    }
    if (my_c) {
      if ((int )my_c->x < 0) {
        my_c->x = (short)0;
      }
      if ((int )my_c->y < 0) {
        my_c->y = (short)0;
      }
      if ((int )my_c->x + (int )my_c->w > 640) {
        my_c->w = (unsigned short )(640 - (int )my_c->x);
      }
      if ((int )my_c->y + (int )my_c->h > 480) {
        my_c->h = (unsigned short )(480 - (int )my_c->y);
      }
    }
    SDL_UpdateRects(screen___0, 1, & s);
  }
  return;
}
}

void fall_down(Grid *g___0 ) 
{ int x ;
  int y ;

  {
  y = g___0->h - 1;
  while (y >= 1) {
    x = 0;
    while (x < g___0->w) {
      if ((int )*(g___0->fall + (x + (y - 1) * g___0->w)) == 0) {
        if (*(g___0->contents + (x + (y - 1) * g___0->w))) {
          if (! ((int )*(g___0->contents + (x + y * g___0->w)) == 0)) {
            if (! ((int )*(g___0->contents + (x + y * g___0->w)) == 255)) {
              Panic("fall_down", "grid.c",
                    (char *)"Failed assertion \"%s\" on line %d",
                    "((*g).contents[(x) + ((y)*((*g).w))]) == 0 || ((*g).contents[(x) + ((y)*((*g).w))]) == 255",
                    311);
            }
          }
          *(g___0->changed + (x + y * g___0->w)) = (unsigned char )((int )*(g___0->changed + (x + y * g___0->w)) | ((int )*(g___0->contents + (x + y * g___0->w)) != (int )*(g___0->contents + (x + (y - 1) * g___0->w))));
          *(g___0->contents + (x + y * g___0->w)) = *(g___0->contents + (x + (y - 1) * g___0->w));
          *(g___0->changed + (x + (y - 1) * g___0->w)) = (unsigned char )((int )*(g___0->changed + (x + (y - 1) * g___0->w)) | ((int )*(g___0->contents + (x + (y - 1) * g___0->w)) != 255));
          *(g___0->contents + (x + (y - 1) * g___0->w)) = (unsigned char)255;
          *(g___0->changed + (x + y * g___0->w)) = (unsigned char )((int )*(g___0->changed + (x + y * g___0->w)) | ((int )*(g___0->fall + (x + y * g___0->w)) != 0));
          *(g___0->fall + (x + y * g___0->w)) = (unsigned char)0;
        }
      }
      x ++;
    }
    y --;
  }
  return;
}
}

int determine_falling(Grid *g___0 ) 
{ int x ;
  int y ;

  {
  y = 0;
  while (y < g___0->h) {
    x = 0;
    while (x < g___0->w) {
      if (*(g___0->contents + (x + y * g___0->w))) {
        if ((int )*(g___0->fall + (x + y * g___0->w)) == 0) {
          return (1);
        }
      }
      x ++;
    }
    y ++;
  }
  return (0);
}
}

int run_gravity(Grid *g___0 ) 
{ int falling_pieces_settled ;
  int x ;
  int y ;
  int c ;
  int f___0 ;
  int X ;
  int Y ;
  int YY ;
  int S ;
  int lowest_y ;
  int garbage_on_row[21] ;
  char UP_QUEUE[2000] ;
  char UP_POS ;
  int c___0 ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;

  {
  lowest_y = 0;
  UP_POS = (char)0;
  falling_pieces_settled = 0;
  y = 0;
  while (y < g___0->h) {
    garbage_on_row[y] = 0;
    x = 0;
    while (x < g___0->w) {
      c___0 = (int )*(g___0->contents + (x + y * g___0->w));
      if (! lowest_y) {
        if (c___0) {
          lowest_y = y;
        }
      }
      if (c___0 == 1) {
        garbage_on_row[y] = 1;
      }
      if ((int )*(g___0->fall + (x + y * g___0->w)) == 1) {
        *(g___0->changed + (x + y * g___0->w)) = (unsigned char )((int )*(g___0->changed + (x + y * g___0->w)) | ((int )*(g___0->fall + (x + y * g___0->w)) != 254));
        *(g___0->fall + (x + y * g___0->w)) = (unsigned char)254;
      }
      x ++;
    }
    y ++;
  }
  garbage_on_row[20] = 1;
  y = g___0->h - 1;
  while (y >= lowest_y) {
    x = 0;
    while (x < g___0->w) {
      c = (int )*(g___0->contents + (x + y * g___0->w));
      if (! c) {
        goto __Cont;
      } else {
        if (c != 1) {
          if (y < g___0->h - 1) {
            goto __Cont;
          } else {
            goto _L;
          }
        } else {
          _L: 
          if (c == 1) {
            if (! garbage_on_row[y + 1]) {
              garbage_on_row[y] = 0;
              goto __Cont;
            }
          }
        }
      }
      f___0 = (int )*(g___0->fall + (x + y * g___0->w));
      if (f___0 == 1) {
        goto __Cont;
      } else {
        if (f___0 == 0) {
          falling_pieces_settled = 1;
        }
      }
      if (y >= 1) {
        Y = y;
        while (1) {
          c = (int )*(g___0->contents + (x + Y * g___0->w));
          if (c) {
            if (! ((int )*(g___0->fall + (x + Y * g___0->w)) != 1)) {
              break;
            }
          } else {
            break;
          }
          f___0 = (int )*(g___0->fall + (x + Y * g___0->w));
          if (f___0 == 0) {
            falling_pieces_settled = 1;
          }
          *(g___0->changed + (x + Y * g___0->w)) = (unsigned char )((int )*(g___0->changed + (x + Y * g___0->w)) | ((int )*(g___0->fall + (x + Y * g___0->w)) != 1));
          *(g___0->fall + (x + Y * g___0->w)) = (unsigned char)1;
          if (x >= 1) {
            if ((int )*(g___0->contents + ((x - 1) + Y * g___0->w)) == c) {
              if ((int )*(g___0->fall + ((x - 1) + Y * g___0->w)) != 1) {
                UP_QUEUE[(int )UP_POS * 3] = (char )(x - 1);
                UP_QUEUE[(int )UP_POS * 3 + 1] = (char )Y;
                if (f___0 == 0) {
                  tmp = 1;
                } else {
                  if (c == 1) {
                    tmp = 1;
                  } else {
                    tmp = 0;
                  }
                }
                UP_QUEUE[(int )UP_POS * 3 + 2] = (char )tmp;
                UP_POS = (char )((int )UP_POS + 1);
              }
            }
          }
          if (x < g___0->w - 1) {
            if ((int )*(g___0->contents + ((x + 1) + Y * g___0->w)) == c) {
              if ((int )*(g___0->fall + ((x + 1) + Y * g___0->w)) != 1) {
                UP_QUEUE[(int )UP_POS * 3] = (char )(x + 1);
                UP_QUEUE[(int )UP_POS * 3 + 1] = (char )Y;
                if (f___0 == 0) {
                  tmp___0 = 1;
                } else {
                  if (c == 1) {
                    tmp___0 = 1;
                  } else {
                    tmp___0 = 0;
                  }
                }
                UP_QUEUE[(int )UP_POS * 3 + 2] = (char )tmp___0;
                UP_POS = (char )((int )UP_POS + 1);
              }
            }
          }
          if (Y < g___0->h - 1) {
            if ((int )*(g___0->contents + (x + (Y + 1) * g___0->w)) == c) {
              if ((int )*(g___0->fall + (x + (Y + 1) * g___0->w)) != 1) {
                UP_QUEUE[(int )UP_POS * 3] = (char )x;
                UP_QUEUE[(int )UP_POS * 3 + 1] = (char )(Y + 1);
                if (f___0 == 0) {
                  tmp___1 = 1;
                } else {
                  if (c == 1) {
                    tmp___1 = 1;
                  } else {
                    tmp___1 = 0;
                  }
                }
                UP_QUEUE[(int )UP_POS * 3 + 2] = (char )tmp___1;
                UP_POS = (char )((int )UP_POS + 1);
              }
            }
          }
          Y --;
        }
      } else {
        *(g___0->changed + (x + y * g___0->w)) = (unsigned char )((int )*(g___0->changed + (x + y * g___0->w)) | ((int )*(g___0->fall + (x + y * g___0->w)) != 1));
        *(g___0->fall + (x + y * g___0->w)) = (unsigned char)1;
      }
      while ((int )UP_POS > 0) {
        UP_POS = (char )((int )UP_POS - 1);
        X = (int )UP_QUEUE[(int )UP_POS * 3];
        Y = (int )UP_QUEUE[(int )UP_POS * 3 + 1];
        S = (int )UP_QUEUE[(int )UP_POS * 3 + 2];
        c = (int )*(g___0->contents + (X + Y * g___0->w));
        if (! c) {
          Panic("run_gravity", "grid.c",
                (char *)"Failed assertion \"%s\" on line %d", "c", 454);
        }
        f___0 = (int )*(g___0->fall + (X + Y * g___0->w));
        if (f___0 == 1) {
          continue;
        } else {
          if (f___0 == 0) {
            if (! S) {
              continue;
            }
          }
        }
        if (Y >= 1) {
          YY = Y;
          while (1) {
            c = (int )*(g___0->contents + (X + YY * g___0->w));
            if (c) {
              if (! ((int )*(g___0->fall + (X + YY * g___0->w)) != 1)) {
                break;
              }
            } else {
              break;
            }
            f___0 = (int )*(g___0->fall + (X + YY * g___0->w));
            if (f___0 == 0) {
              falling_pieces_settled = 1;
            }
            *(g___0->changed + (X + YY * g___0->w)) = (unsigned char )((int )*(g___0->changed + (X + YY * g___0->w)) | ((int )*(g___0->fall + (X + YY * g___0->w)) != 1));
            *(g___0->fall + (X + YY * g___0->w)) = (unsigned char)1;
            if (X >= 1) {
              if ((int )*(g___0->contents + ((X - 1) + YY * g___0->w)) == c) {
                if ((int )*(g___0->fall + ((X - 1) + YY * g___0->w)) != 1) {
                  UP_QUEUE[(int )UP_POS * 3] = (char )(X - 1);
                  UP_QUEUE[(int )UP_POS * 3 + 1] = (char )YY;
                  if (f___0 == 0) {
                    tmp___2 = 1;
                  } else {
                    if (c == 1) {
                      tmp___2 = 1;
                    } else {
                      tmp___2 = 0;
                    }
                  }
                  UP_QUEUE[(int )UP_POS * 3 + 2] = (char )tmp___2;
                  UP_POS = (char )((int )UP_POS + 1);
                }
              }
            }
            if (X < g___0->w - 1) {
              if ((int )*(g___0->contents + ((X + 1) + YY * g___0->w)) == c) {
                if ((int )*(g___0->fall + ((X + 1) + YY * g___0->w)) != 1) {
                  UP_QUEUE[(int )UP_POS * 3] = (char )(X + 1);
                  UP_QUEUE[(int )UP_POS * 3 + 1] = (char )YY;
                  if (f___0 == 0) {
                    tmp___3 = 1;
                  } else {
                    if (c == 1) {
                      tmp___3 = 1;
                    } else {
                      tmp___3 = 0;
                    }
                  }
                  UP_QUEUE[(int )UP_POS * 3 + 2] = (char )tmp___3;
                  UP_POS = (char )((int )UP_POS + 1);
                }
              }
            }
            if (YY < g___0->h - 1) {
              if ((int )*(g___0->contents + (X + (YY + 1) * g___0->w)) == c) {
                if ((int )*(g___0->fall + (X + (YY + 1) * g___0->w)) != 1) {
                  UP_QUEUE[(int )UP_POS * 3] = (char )X;
                  UP_QUEUE[(int )UP_POS * 3 + 1] = (char )(YY + 1);
                  if (f___0 == 0) {
                    tmp___4 = 1;
                  } else {
                    if (c == 1) {
                      tmp___4 = 1;
                    } else {
                      tmp___4 = 0;
                    }
                  }
                  UP_QUEUE[(int )UP_POS * 3 + 2] = (char )tmp___4;
                  UP_POS = (char )((int )UP_POS + 1);
                }
              }
            }
            YY --;
          }
        } else {
          *(g___0->changed + (X + Y * g___0->w)) = (unsigned char )((int )*(g___0->changed + (X + Y * g___0->w)) | ((int )*(g___0->fall + (X + Y * g___0->w)) != 1));
          *(g___0->fall + (X + Y * g___0->w)) = (unsigned char)1;
        }
      }
      __Cont: 
      x ++;
    }
    y --;
  }
  y = g___0->h - 1;
  while (y >= 0) {
    x = 0;
    while (x < g___0->w) {
      if ((int )*(g___0->fall + (x + y * g___0->w)) == 254) {
        *(g___0->fall + (x + y * g___0->w)) = (unsigned char)0;
      }
      x ++;
    }
    y --;
  }
  return (falling_pieces_settled);
}
}

int check_tetris(Grid *g___0 ) 
{ int tetris_count ;
  int x ;
  int y ;
  int c ;

  {
  tetris_count = 0;
  y = g___0->h - 1;
  while (y >= 0) {
    c = 0;
    x = 0;
    while (x < g___0->w) {
      if (*(g___0->contents + (x + y * g___0->w))) {
        c ++;
      }
      x ++;
    }
    if (c == g___0->w) {
      tetris_count ++;
      x = 0;
      while (x < g___0->w) {
        *(g___0->changed + (x + y * g___0->w)) = (unsigned char )((int )*(g___0->changed + (x + y * g___0->w)) | ((int )*(g___0->contents + (x + y * g___0->w)) != 255));
        *(g___0->contents + (x + y * g___0->w)) = (unsigned char)255;
        x ++;
      }
    }
    y --;
  }
  return (tetris_count);
}
}

extern  __attribute__((__nothrow__)) size_t strftime(char * __restrict  __s ,
                                                     size_t __maxsize ,
                                                     char const   * __restrict  __format ,
                                                     struct tm  const  * __restrict  __tp ) ;

extern  __attribute__((__nothrow__)) struct tm *localtime(time_t const   *__timer ) ;

static char loaded   = (char)0;

static int high_scores[10]  ;

static char *high_names[10]  ;

static char *high_dates[10]  ;

static SDL_Rect hs  ;

static SDL_Rect hs_border  ;

static int score_height  ;

static void prep_hs_bg(void) 
{ 

  {
  hs.x = (short )(screen->w / 20);
  hs.y = (short )(screen->h / 20);
  hs.w = (unsigned short )((9 * screen->w) / 10);
  hs.h = (unsigned short )((18 * screen->h) / 20);
  draw_bordered_rect(& hs, & hs_border, 2);
  return;
}
}

static void save_high_scores(void) 
{ FILE *fout ;
  int i ;
  int *tmp ;
  char *tmp___0 ;

  {
  if (! loaded) {
    return;
  }
  fout = fopen((char const   */* __restrict  */)"Atris.Scores",
               (char const   */* __restrict  */)"wt");
  if (! fout) {
    printf((char const   */* __restrict  */)"%-14.14s| ", "save_high_scores");
    tmp = __errno_location();
    tmp___0 = strerror(*tmp);
    printf((char const   */* __restrict  */)"Unable to write High Score file [Atris.Scores]: %s\n",
           tmp___0);
    fflush(stdout);
    return;
  }
  fprintf((FILE */* __restrict  */)fout,
          (char const   */* __restrict  */)"# Alizarin Tetris High Score File\n");
  i = 0;
  while (i < 10) {
    fprintf((FILE */* __restrict  */)fout,
            (char const   */* __restrict  */)"%04d|%s|%s\n", high_scores[i],
            high_dates[i], high_names[i]);
    i ++;
  }
  fclose(fout);
  return;
}
}

static void load_high_scores(void) 
{ FILE *fin ;
  int i ;
  char buf[2048] ;
  char *tmp___8 ;
  char *tmp___18 ;
  char *p ;
  char *q ;
  int tmp___19 ;
  int tmp___20 ;
  char *tmp___22 ;
  char *tmp___24 ;
  char *tmp___26 ;
  char *tmp___28 ;
  char *tmp___38 ;
  char *tmp___48 ;
  int tmp___49 ;

  {
  i = 0;
  if (! loaded) {
    i = 0;
    while (i < 10) {
      tmp___8 = __strdup("No one yet...");
      high_names[i] = tmp___8;
      if (! high_names[i]) {
        Panic("load_high_scores", "highscore.c",
              (char *)"Failed assertion \"%s\" on line %d", "high_names[i]", 90);
      }
      tmp___18 = __strdup("Never");
      high_dates[i] = tmp___18;
      if (! high_dates[i]) {
        Panic("load_high_scores", "highscore.c",
              (char *)"Failed assertion \"%s\" on line %d", "high_dates[i]", 91);
      }
      high_scores[i] = 0;
      i ++;
    }
    loaded = (char)1;
  }
  fin = fopen((char const   */* __restrict  */)"Atris.Scores",
              (char const   */* __restrict  */)"r");
  if (fin) {
    i = 0;
    while (1) {
      tmp___49 = feof(fin);
      if (tmp___49) {
        break;
      } else {
        if (! (i < 10)) {
          break;
        }
      }
      while (1) {
        fgets((char */* __restrict  */)(buf), (int )sizeof(buf),
              (FILE */* __restrict  */)fin);
        tmp___19 = feof(fin);
        if (tmp___19) {
          break;
        } else {
          if (! ((int )buf[0] == 10)) {
            if (! ((int )buf[0] == 35)) {
              break;
            }
          }
        }
      }
      tmp___20 = feof(fin);
      if (tmp___20) {
        break;
      }
      tmp___24 = __builtin_strchr(buf, '\n');
      if (tmp___24) {
        tmp___22 = __builtin_strchr(buf, '\n');
        *tmp___22 = (char)0;
      }
      sscanf((char const   */* __restrict  */)((char const   *)(buf)),
             (char const   */* __restrict  */)"%d", & high_scores[i]);
      tmp___26 = __builtin_strchr(buf, '|');
      p = tmp___26;
      if (! p) {
        break;
      }
      p ++;
      tmp___28 = __builtin_strchr(p, '|');
      q = tmp___28;
      if (! q) {
        break;
      }
      free((void *)high_dates[i]);
      high_dates[i] = (char *)((void *)0);
      free((void *)high_names[i]);
      high_names[i] = (char *)((void *)0);
      *q = (char)0;
      tmp___38 = __strdup((char const   *)p);
      high_dates[i] = tmp___38;
      if (! high_dates[i]) {
        Panic("load_high_scores", "highscore.c",
              (char *)"Failed assertion \"%s\" on line %d", "high_dates[i]", 121);
      }
      q ++;
      tmp___48 = __strdup((char const   *)q);
      high_names[i] = tmp___48;
      if (! high_names[i]) {
        Panic("load_high_scores", "highscore.c",
              (char *)"Failed assertion \"%s\" on line %d", "high_names[i]", 123);
      }
      i ++;
    }
    fclose(fin);
  }
  return;
}
}

static void show_high_scores(void) 
{ char buf[256] ;
  int i ;
  int base ;
  int delta ;

  {
  if (! loaded) {
    load_high_scores();
  }
  prep_hs_bg();
  draw_string((char *)"Alizarin Tetris High Scores", color_purple,
              screen->w / 2, (int )hs.y, ((1 << 6) | (1 << 3)) | 1);
  base = (int )hs.y + 60;
  i = 0;
  while (i < 10) {
    sprintf((char */* __restrict  */)(buf),
            (char const   */* __restrict  */)"%-2d)", i + 1);
    delta = draw_string(buf, color_blue, (3 * screen->w) / 40, base, 1 << 3);
    score_height = delta + 3;
    sprintf((char */* __restrict  */)(buf),
            (char const   */* __restrict  */)"%-20s", high_names[i]);
    draw_string(buf, color_red, (3 * screen->w) / 20, base, 1 << 3);
    sprintf((char */* __restrict  */)(buf),
            (char const   */* __restrict  */)"%.4d", high_scores[i]);
    draw_string(buf, color_blue, (11 * screen->w) / 20, base, 1 << 3);
    sprintf((char */* __restrict  */)(buf),
            (char const   */* __restrict  */)"%s", high_dates[i]);
    draw_string(buf, color_red, (7 * screen->w) / 10, base, 1 << 3);
    base += score_height;
    i ++;
  }
  return;
}
}

static int is_high_score(int score ) 
{ 

  {
  if (! loaded) {
    load_high_scores();
  }
  return (score >= high_scores[9]);
}
}

static void update_high_scores(int score ) 
{ unsigned int i ;
  unsigned int j ;
  char buf[256] ;
  struct tm  const  *tm ;
  time_t t ;
  int tmp ;
  struct tm *tmp___0 ;
  char *tmp___10 ;

  {
  tmp = is_high_score(score);
  if (! tmp) {
    return;
  }
  if (! loaded) {
    load_high_scores();
  }
  i = 0U;
  while (i < 10U) {
    if (score >= high_scores[i]) {
      prep_hs_bg();
      free((void *)high_names[9]);
      high_names[9] = (char *)((void *)0);
      free((void *)high_dates[9]);
      high_dates[9] = (char *)((void *)0);
      j = 9U;
      while (j > i) {
        high_scores[j] = high_scores[j - 1U];
        high_names[j] = high_names[j - 1U];
        high_dates[j] = high_dates[j - 1U];
        j --;
      }
      t = time((time_t *)((void *)0));
      tmp___0 = localtime((time_t const   *)(& t));
      tm = (struct tm  const  *)tmp___0;
      strftime((char */* __restrict  */)(buf), sizeof(buf),
               (char const   */* __restrict  */)"%b %d %H:%M",
               (struct tm  const  */* __restrict  */)tm);
      tmp___10 = __strdup((char const   *)(buf));
      high_dates[i] = tmp___10;
      high_scores[i] = score;
      high_names[i] = (char *)" ";
      show_high_scores();
      draw_string((char *)"Enter your name!", color_purple, screen->w / 2,
                  ((int )hs.y + (int )hs.h) - 10, (1 | (1 << 1)) | (1 << 3));
      high_names[i] = input_string(screen, (3 * screen->w) / 20,
                                   (int )((unsigned int )((int )hs.y + 60) + (unsigned int )score_height * i),
                                   1);
      break;
    }
    i ++;
  }
  save_high_scores();
  return;
}
}

void high_score_check(int level , int new_score ) 
{ SDL_Event event ;
  int __attribute__((__visibility__("default")))  tmp ;
  char buf[256] ;
  int tmp___0 ;

  {
  clear_screen_to_flame();
  if (level < 0) {
    return;
  }
  while (1) {
    tmp = SDL_PollEvent(& event);
    if (! tmp) {
      break;
    }
    poll_and_flame(& event);
  }
  tmp___0 = is_high_score(new_score);
  if (tmp___0) {
    update_high_scores(new_score);
    show_high_scores();
  } else {
    show_high_scores();
    sprintf((char */* __restrict  */)(buf),
            (char const   */* __restrict  */)"Your score: %d", new_score);
    draw_string(buf, color_purple, screen->w / 2,
                ((int )hs.y + (int )hs.h) - 10, (1 | (1 << 1)) | (1 << 3));
  }
  while (1) {
    poll_and_flame(& event);
    if (! ((int )event.type != 2)) {
      break;
    }
  }
  return;
}
}

extern unsigned short const   **__ctype_b_loc(void)  __attribute__((__const__)) ;

extern void rewind(FILE *__stream ) ;

char *input_string(SDL_Surface *screen___0 , int x , int y , int opaque ) 
{ int pos___0 ;
  char c ;
  char retval[1024] ;
  SDL_Surface *text ;
  SDL_Surface *ctext ;
  SDL_Color tc ;
  SDL_Color cc ;
  SDL_Rect rect ;
  SDL_Event event ;
  Uint32 text_color ;
  Uint32 cursor_color ;
  Uint32 our_black ;
  Uint32 tmp ;
  SDL_Surface __attribute__((__visibility__("default")))  *tmp___0 ;
  int changed ;
  int blink ;
  Uint32 flip_when ;
  Uint32 __attribute__((__visibility__("default")))  tmp___1 ;
  SDL_Surface __attribute__((__visibility__("default")))  *tmp___2 ;
  SDL_Rect *my_c ;
  SDL_Rect *my_c___0 ;
  Uint32 __attribute__((__visibility__("default")))  tmp___3 ;
  Uint32 __attribute__((__visibility__("default")))  tmp___4 ;
  char *tmp___14 ;
  SDL_Rect *my_c___1 ;
  SDL_Rect *my_c___2 ;
  int tmp___15 ;
  unsigned short const   **tmp___16 ;
  unsigned short const   **tmp___17 ;
  unsigned short const   **tmp___18 ;
  unsigned short const   **tmp___19 ;
  int __attribute__((__visibility__("default")))  tmp___20 ;

  {
  text_color = int_blue;
  cursor_color = int_purple;
  if (opaque) {
    tmp = int_solid_black;
  } else {
    tmp = int_black;
  }
  our_black = tmp;
  memset((void *)(retval), 0, sizeof(retval));
  retval[0] = (char )' ';
  pos___0 = 1;
  SDL_GetRGB(text_color, screen___0->format, & tc.r, & tc.g, & tc.b);
  SDL_GetRGB(cursor_color, screen___0->format, & cc.r, & cc.g, & cc.b);
  tmp___0 = TTF_RenderText_Blended(font, "_", cc);
  ctext = (SDL_Surface *)tmp___0;
  if (! ctext) {
    Panic("input_string", "identity.c",
          (char *)"Failed assertion \"%s\" on line %d", "ctext", 47);
  }
  while (1) {
    changed = 0;
    blink = 1;
    tmp___1 = SDL_GetTicks();
    flip_when = (unsigned int )tmp___1;
    tmp___2 = TTF_RenderText_Blended(font, (char const   *)(retval), tc);
    text = (SDL_Surface *)tmp___2;
    if (! text) {
      Panic("input_string", "identity.c",
            (char *)"Failed assertion \"%s\" on line %d", "text", 55);
    }
    rect.x = (short )x;
    rect.y = (short )y;
    rect.w = (unsigned short )text->w;
    rect.h = (unsigned short )text->h;
    SDL_UpperBlit(text, (SDL_Rect *)((void *)0), widget_layer, & rect);
    SDL_UpperBlit(text, (SDL_Rect *)((void *)0), screen___0, & rect);
    my_c = & rect;
    if (! my_c) {
      Panic("input_string", "identity.c",
            (char *)"Failed assertion \"%s\" on line %d", "my_c", 65);
    }
    if (my_c) {
      if ((int )my_c->x < 0) {
        my_c->x = (short)0;
      }
      if ((int )my_c->y < 0) {
        my_c->y = (short)0;
      }
      if ((int )my_c->x + (int )my_c->w > 640) {
        my_c->w = (unsigned short )(640 - (int )my_c->x);
      }
      if ((int )my_c->y + (int )my_c->h > 480) {
        my_c->h = (unsigned short )(480 - (int )my_c->y);
      }
    }
    SDL_UpdateRects(screen___0, 1, & rect);
    rect.x = (short )((int )rect.x + (int )rect.w);
    rect.w = (unsigned short )ctext->w;
    rect.h = (unsigned short )ctext->h;
    changed = 0;
    while (! changed) {
      tmp___4 = SDL_GetTicks();
      if (tmp___4 > (unsigned int __attribute__((__visibility__("default")))  )flip_when) {
        if (blink) {
          SDL_UpperBlit(ctext, (SDL_Rect *)((void *)0), screen___0, & rect);
          SDL_UpperBlit(ctext, (SDL_Rect *)((void *)0), widget_layer, & rect);
        } else {
          SDL_FillRect(widget_layer, & rect, our_black);
          SDL_FillRect(screen___0, & rect, our_black);
          SDL_UpperBlit(flame_layer, & rect, screen___0, & rect);
          SDL_UpperBlit(widget_layer, & rect, screen___0, & rect);
        }
        my_c___0 = & rect;
        if (! my_c___0) {
          Panic("input_string", "identity.c",
                (char *)"Failed assertion \"%s\" on line %d", "my_c", 83);
        }
        if (my_c___0) {
          if ((int )my_c___0->x < 0) {
            my_c___0->x = (short)0;
          }
          if ((int )my_c___0->y < 0) {
            my_c___0->y = (short)0;
          }
          if ((int )my_c___0->x + (int )my_c___0->w > 640) {
            my_c___0->w = (unsigned short )(640 - (int )my_c___0->x);
          }
          if ((int )my_c___0->y + (int )my_c___0->h > 480) {
            my_c___0->h = (unsigned short )(480 - (int )my_c___0->y);
          }
        }
        SDL_UpdateRects(screen___0, 1, & rect);
        tmp___3 = SDL_GetTicks();
        flip_when = (unsigned int )(tmp___3 + (unsigned int __attribute__((__visibility__("default")))  )400);
        blink = ! blink;
      }
      tmp___20 = SDL_PollEvent(& event);
      if (tmp___20) {
        if ((int )event.type == 2) {
          changed = 1;
          switch ((int )event.key.keysym.sym) {
          case 13: 
          tmp___14 = __strdup((char const   *)(retval + 1));
          return (tmp___14);
          case 8: 
          if (pos___0 > 1) {
            pos___0 --;
          }
          retval[pos___0] = (char)0;
          rect.x = (short )x;
          rect.w = (unsigned short )(text->w + ctext->w);
          SDL_FillRect(widget_layer, & rect, our_black);
          SDL_FillRect(screen___0, & rect, our_black);
          SDL_UpperBlit(flame_layer, & rect, screen___0, & rect);
          SDL_UpperBlit(widget_layer, & rect, screen___0, & rect);
          my_c___1 = & rect;
          if (! my_c___1) {
            Panic("input_string", "identity.c",
                  (char *)"Failed assertion \"%s\" on line %d", "my_c", 104);
          }
          if (my_c___1) {
            if ((int )my_c___1->x < 0) {
              my_c___1->x = (short)0;
            }
            if ((int )my_c___1->y < 0) {
              my_c___1->y = (short)0;
            }
            if ((int )my_c___1->x + (int )my_c___1->w > 640) {
              my_c___1->w = (unsigned short )(640 - (int )my_c___1->x);
            }
            if ((int )my_c___1->y + (int )my_c___1->h > 480) {
              my_c___1->h = (unsigned short )(480 - (int )my_c___1->y);
            }
          }
          SDL_UpdateRects(screen___0, 1, & rect);
          break;
          default: 
          c = (char )event.key.keysym.unicode;
          if ((int )c == 0) {
            break;
          }
          SDL_FillRect(widget_layer, & rect, our_black);
          SDL_FillRect(screen___0, & rect, our_black);
          SDL_UpperBlit(flame_layer, & rect, screen___0, & rect);
          SDL_UpperBlit(widget_layer, & rect, screen___0, & rect);
          my_c___2 = & rect;
          if (! my_c___2) {
            Panic("input_string", "identity.c",
                  (char *)"Failed assertion \"%s\" on line %d", "my_c", 115);
          }
          if (my_c___2) {
            if ((int )my_c___2->x < 0) {
              my_c___2->x = (short)0;
            }
            if ((int )my_c___2->y < 0) {
              my_c___2->y = (short)0;
            }
            if ((int )my_c___2->x + (int )my_c___2->w > 640) {
              my_c___2->w = (unsigned short )(640 - (int )my_c___2->x);
            }
            if ((int )my_c___2->y + (int )my_c___2->h > 480) {
              my_c___2->h = (unsigned short )(480 - (int )my_c___2->y);
            }
          }
          SDL_UpdateRects(screen___0, 1, & rect);
          tmp___16 = __ctype_b_loc();
          if ((int const   )*(*tmp___16 + (int )c) & 1024) {
            tmp___15 = pos___0;
            pos___0 ++;
            retval[tmp___15] = c;
          } else {
            tmp___17 = __ctype_b_loc();
            if ((int const   )*(*tmp___17 + (int )c) & 2048) {
              tmp___15 = pos___0;
              pos___0 ++;
              retval[tmp___15] = c;
            } else {
              tmp___18 = __ctype_b_loc();
              if ((int const   )*(*tmp___18 + (int )c) & 8192) {
                tmp___15 = pos___0;
                pos___0 ++;
                retval[tmp___15] = c;
              } else {
                tmp___19 = __ctype_b_loc();
                if ((int const   )*(*tmp___19 + (int )c) & 4) {
                  tmp___15 = pos___0;
                  pos___0 ++;
                  retval[tmp___15] = c;
                }
              }
            }
          }
          break;
          }
        }
      } else {
        atris_run_flame();
      }
    }
    SDL_FreeSurface(text);
  }
}
}

identity *load_identity_file(void) 
{ identity *retval ;
  char buf[2048] ;
  FILE *fin ;
  FILE *tmp ;
  int count ;
  int i ;
  void *tmp___0 ;
  void *tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  char *tmp___5 ;
  char *tmp___7 ;
  int tmp___8 ;
  void *tmp___9 ;
  char *p ;
  int tmp___10 ;
  int tmp___11 ;
  char *tmp___13 ;
  char *tmp___15 ;
  char *tmp___17 ;
  char *tmp___27 ;
  int tmp___28 ;

  {
  tmp = fopen((char const   */* __restrict  */)"Atris.Players",
              (char const   */* __restrict  */)"rt");
  fin = tmp;
  count = 0;
  if (! fin) {
    printf((char const   */* __restrict  */)"%-14.14s| ", "load_identity_file");
    printf((char const   */* __restrict  */)"fopen(%s)\n", "Atris.Players");
    fflush(stdout);
    printf((char const   */* __restrict  */)"%-14.14s| ", "load_identity_file");
    printf((char const   */* __restrict  */)"Cannot open Identity File.\n");
    fflush(stdout);
    tmp___0 = calloc(sizeof(identity ), 1U);
    retval = (identity *)tmp___0;
    if (! retval) {
      Panic("load_identity_file", "identity.c",
            (char *)"Out of Memory:\n\tcannot callocate %d bytes for retval",
            sizeof(identity ));
    }
    return (retval);
  }
  tmp___1 = calloc(sizeof(identity ), 1U);
  retval = (identity *)tmp___1;
  if (! retval) {
    Panic("load_identity_file", "identity.c",
          (char *)"Out of Memory:\n\tcannot callocate %d bytes for retval",
          sizeof(identity ));
  }
  while (1) {
    tmp___8 = feof(fin);
    if (tmp___8) {
      break;
    }
    while (1) {
      fgets((char */* __restrict  */)(buf), (int )sizeof(buf),
            (FILE */* __restrict  */)fin);
      tmp___2 = feof(fin);
      if (tmp___2) {
        break;
      } else {
        if (! ((int )buf[0] == 10)) {
          if (! ((int )buf[0] == 35)) {
            break;
          }
        }
      }
    }
    tmp___3 = feof(fin);
    if (tmp___3) {
      break;
    }
    tmp___7 = __builtin_strchr(buf, '\n');
    if (tmp___7) {
      tmp___5 = __builtin_strchr(buf, '\n');
      *tmp___5 = (char)0;
    }
    count ++;
  }
  rewind(fin);
  retval->n = count;
  if (! (! count)) {
    tmp___9 = calloc(sizeof(person ) * (unsigned int )count, 1U);
    retval->p = (person *)tmp___9;
    if (! retval->p) {
      Panic("load_identity_file", "identity.c",
            (char *)"Out of Memory:\n\tcannot callocate %d bytes for retval->p",
            sizeof(person ) * (unsigned int )count);
    }
    i = 0;
    while (1) {
      tmp___28 = feof(fin);
      if (tmp___28) {
        break;
      }
      while (1) {
        fgets((char */* __restrict  */)(buf), (int )sizeof(buf),
              (FILE */* __restrict  */)fin);
        tmp___10 = feof(fin);
        if (tmp___10) {
          break;
        } else {
          if (! ((int )buf[0] == 10)) {
            if (! ((int )buf[0] == 35)) {
              break;
            }
          }
        }
      }
      tmp___11 = feof(fin);
      if (tmp___11) {
        break;
      }
      tmp___15 = __builtin_strchr(buf, '\n');
      if (tmp___15) {
        tmp___13 = __builtin_strchr(buf, '\n');
        *tmp___13 = (char)0;
      }
      sscanf((char const   */* __restrict  */)((char const   *)(buf)),
             (char const   */* __restrict  */)"%d", & (retval->p + i)->level);
      tmp___17 = __builtin_strchr(buf, ' ');
      p = tmp___17;
      if (! p) {
        (retval->p + i)->name = (char *)"-garbled-";
      } else {
        tmp___27 = __strdup((char const   *)(p + 1));
        (retval->p + i)->name = tmp___27;
      }
      i ++;
    }
  }
  fclose(fin);
  printf((char const   */* __restrict  */)"%-14.14s| ", "load_identity_file");
  printf((char const   */* __restrict  */)"Identity File [%s] loaded (%d players).\n",
         "Atris.Players", count);
  fflush(stdout);
  return (retval);
}
}

void save_identity_file(identity *id , char *new_name , int new_level ) 
{ FILE *fin ;
  FILE *tmp ;
  int i ;

  {
  tmp = fopen((char const   */* __restrict  */)"Atris.Players",
              (char const   */* __restrict  */)"wt");
  fin = tmp;
  if (! fin) {
    printf((char const   */* __restrict  */)"%-14.14s| ", "save_identity_file");
    printf((char const   */* __restrict  */)"fopen(%s): cannot write Identity File.\n",
           "Atris.Players");
    fflush(stdout);
    return;
  }
  fprintf((FILE */* __restrict  */)fin,
          (char const   */* __restrict  */)"# Alizarin Tetris Identity File\n#\n# Format:\n#[level] [name] (no space before level, one space after)\n");
  i = 0;
  while (i < id->n) {
    fprintf((FILE */* __restrict  */)fin,
            (char const   */* __restrict  */)"%d %s\n", (id->p + i)->level,
            (id->p + i)->name);
    i ++;
  }
  if (new_name) {
    fprintf((FILE */* __restrict  */)fin,
            (char const   */* __restrict  */)"%d %s\n", new_level, new_name);
  }
  fclose(fin);
  return;
}
}

static int network_choice_action(WalkRadio *wr ) 
{ char *tmp ;

  {
  if (wr->defaultchoice == 0) {
    clear_screen_to_flame();
    draw_string((char *)"Who is the Server?", color_blue, screen->w / 2,
                screen->h / 2, (1 << 2) | (1 << 3));
    tmp = input_string(screen, screen->w / 2, screen->h / 2, 0);
    wr->data = (void *)tmp;
  } else {
    if (wr->data) {
      free(wr->data);
      wr->data = (void *)0;
    } else {
      wr->data = (void *)0;
    }
  }
  return (1);
}
}

static WalkRadioGroup *wrg___0   = (WalkRadioGroup *)((void *)0);

char *network_choice(SDL_Surface *screen___0 ) 
{ SDL_Event event ;
  int retval ;

  {
  if (! wrg___0) {
    wrg___0 = create_single_wrg(2);
    *((wrg___0->wr + 0)->label + 0) = (char *)"I am the Client. I will specify a server.";
    *((wrg___0->wr + 0)->label + 1) = (char *)"I will be the Server.";
    setup_radio(wrg___0->wr + 0);
    (wrg___0->wr + 0)->x = (screen___0->w - (int )(wrg___0->wr + 0)->area.w) / 2;
    (wrg___0->wr + 0)->y = (screen___0->h - (int )(wrg___0->wr + 0)->area.h) / 2;
    (wrg___0->wr + 0)->action = & network_choice_action;
  }
  clear_screen_to_flame();
  draw_string((char *)"Who is the Server?", color_blue, screen___0->w / 2,
              (wrg___0->wr + 0)->y, (1 | (1 << 3)) | (1 << 1));
  draw_radio(wrg___0->wr + 0, 1);
  while (1) {
    poll_and_flame(& event);
    retval = handle_radio_event(wrg___0, (SDL_Event const   *)(& event));
    if (retval != -1) {
      return ((char *)(wrg___0->wr + 0)->data);
    }
  }
}
}

static void new_player(SDL_Surface *screen___0 , identity **id ) 
{ char *new_name ;
  char *new_level ;
  int level ;
  size_t tmp ;

  {
  clear_screen_to_flame();
  draw_string((char *)"Enter your name:", color_blue, screen___0->w / 2,
              screen___0->h / 2, (1 << 4) | (1 << 2));
  new_name = input_string(screen___0, screen___0->w / 2, screen___0->h / 2, 0);
  tmp = strlen((char const   *)new_name);
  if (tmp) {
    clear_screen_to_flame();
    draw_string((char *)"Welcome ", color_purple, screen___0->w / 2,
                screen___0->h / 2, (((1 << 4) | (1 << 2)) | (1 << 6)) | (1 << 1));
    draw_string(new_name, color_purple, screen___0->w / 2, screen___0->h / 2,
                ((1 << 4) | (1 << 6)) | (1 << 1));
    draw_string((char *)"Starting level (2-10):", color_blue, screen___0->w / 2,
                screen___0->h / 2, (1 << 4) | (1 << 2));
    new_level = input_string(screen___0, screen___0->w / 2, screen___0->h / 2, 0);
    level = 0;
    sscanf((char const   */* __restrict  */)((char const   *)new_level),
           (char const   */* __restrict  */)"%d", & level);
    if (level < 2) {
      level = 2;
    }
    if (level > 10) {
      level = 10;
    }
    save_identity_file(*id, new_name, level);
    *id = load_identity_file();
    free((void *)new_level);
  }
  free((void *)new_name);
  return;
}
}

int who_are_you(SDL_Surface *screen___0 , identity **id , int taken , int p ) 
{ WalkRadioGroup *wrg___1 ;
  int i ;
  int retval ;
  SDL_Event event ;
  char buf[1024] ;
  char *tmp___8 ;

  {
  wrg___1 = (WalkRadioGroup *)((void *)0);
  restart: 
  wrg___1 = create_single_wrg((*id)->n + 2);
  i = 0;
  while (i < (*id)->n) {
    if (i == taken) {
      sprintf((char */* __restrict  */)(buf),
              (char const   */* __restrict  */)"%s (already taken!)",
              ((*id)->p + i)->name);
    } else {
      sprintf((char */* __restrict  */)(buf),
              (char const   */* __restrict  */)"%s (Level %d)",
              ((*id)->p + i)->name, ((*id)->p + i)->level);
    }
    tmp___8 = __strdup((char const   *)(buf));
    *((wrg___1->wr + 0)->label + i) = tmp___8;
    i ++;
  }
  *((wrg___1->wr + 0)->label + (*id)->n) = (char *)"-- New Player --";
  *((wrg___1->wr + 0)->label + ((*id)->n + 1)) = (char *)"-- Cancel --";
  setup_radio(wrg___1->wr + 0);
  (wrg___1->wr + 0)->x = (screen___0->w - (int )(wrg___1->wr + 0)->area.w) / 2;
  (wrg___1->wr + 0)->y = (screen___0->h - (int )(wrg___1->wr + 0)->area.h) / 2;
  (wrg___1->wr + 0)->action = (int (*)(struct _WalkRadio * ))((void *)0);
  clear_screen_to_flame();
  if (p == 1) {
    draw_string((char *)"Left = A  Rotate = W  Right = D  Drop = S", color_blue,
                screen___0->w / 2, 0, 1 | (1 << 3));
    draw_string((char *)"Player 1: Who Are You?", color_blue, screen___0->w / 2,
                (wrg___1->wr + 0)->y - 30, 1 | (1 << 3));
  } else {
    draw_string((char *)"Use the Arrow keys. Rotate = Up  Drop = Down",
                color_blue, screen___0->w / 2, 0, 1 | (1 << 3));
    draw_string((char *)"Player 2: Who Are You?", color_blue, screen___0->w / 2,
                (wrg___1->wr + 0)->y - 30, 1 | (1 << 3));
  }
  draw_radio(wrg___1->wr + 0, 1);
  while (1) {
    poll_and_flame(& event);
    retval = handle_radio_event(wrg___1, (SDL_Event const   *)(& event));
    if (retval == -1) {
      continue;
    } else {
      if (retval == taken) {
        continue;
      }
    }
    if (retval == (*id)->n) {
      new_player(screen___0, id);
      goto restart;
    }
    if (retval == (*id)->n + 1) {
      return (-1);
    }
    return (retval);
  }
  return (0);
}
}

extern  __attribute__((__nothrow__,
__noreturn__)) void __assert_fail(char const   *__assertion ,
                                  char const   *__file , unsigned int __line ,
                                  char const   *__function ) ;

ATMenu *menu(int nButtons , char **strings , int defaultchoice ,
             Uint32 face_color0 , Uint32 text_color0 , Uint32 face_color1 ,
             Uint32 text_color1 , int x , int y ) ;

void show_menu(ATMenu *am ) ;

int check_menu(ATMenu *am , int x , int y ) ;

void delete_menu(ATMenu *am ) ;

int check_radio(WalkRadio *wr , int x , int y ) ;

ATMenu *menu(int nButtons , char **strings , int defaultchoice ,
             Uint32 face_color0 , Uint32 text_color0 , Uint32 face_color1 ,
             Uint32 text_color1 , int x , int y ) 
{ int i ;
  int yp ;
  ATMenu *am ;
  void *tmp ;
  void *tmp___0 ;
  void *tmp___1 ;

  {
  tmp = malloc(sizeof(ATMenu ));
  am = (ATMenu *)tmp;
  if (! am) {
    __assert_fail("am", "menu.c", 24U, "menu");
  }
  tmp___0 = malloc((unsigned int )nButtons * sizeof(ATButton *));
  am->buttons = (ATButton **)tmp___0;
  if (! am->buttons) {
    __assert_fail("am->buttons", "menu.c", 28U, "menu");
  }
  tmp___1 = malloc((unsigned int )nButtons * sizeof(char ));
  am->clicked = (char *)tmp___1;
  if (! am->clicked) {
    __assert_fail("am->clicked", "menu.c", 29U, "menu");
  }
  am->nButtons = nButtons;
  am->x = x;
  am->y = y;
  am->defaultchoice = defaultchoice;
  yp = y;
  if (! (nButtons >= 0)) {
    Panic("menu", "menu.c", (char *)"Failed assertion \"%s\" on line %d",
          "nButtons >= 0", 36);
  }
  i = 0;
  while (i < nButtons) {
    *(am->buttons + i) = button(*(strings + i), face_color0, text_color0,
                                face_color1, text_color1, x, yp);
    yp += (int )(*(am->buttons + i))->area.h;
    *(am->clicked + i) = (char)0;
    i ++;
  }
  am->w = (int )(*(am->buttons + 0))->area.w;
  am->h = ((int )(*(am->buttons + (nButtons - 1)))->area.y - (int )(*(am->buttons + 0))->area.y) + (int )(*(am->buttons + (nButtons - 1)))->area.h;
  if (defaultchoice >= 0) {
    *(am->clicked + defaultchoice) = (char)1;
  }
  return (am);
}
}

void show_menu(ATMenu *am ) 
{ int i ;

  {
  i = 0;
  while (i < am->nButtons) {
    show_button(*(am->buttons + i), (int )*(am->clicked + i));
    i ++;
  }
  return;
}
}

int check_menu(ATMenu *am , int x , int y ) 
{ int i ;
  int j ;
  char tmp ;

  {
  i = 0;
  while (i < am->nButtons) {
    tmp = check_button(*(am->buttons + i), x, y);
    if (tmp) {
      if (*(am->clicked + i)) {
        *(am->clicked + i) = (char)0;
        *(am->clicked + am->defaultchoice) = (char)1;
        show_button(*(am->buttons + am->defaultchoice),
                    (int )*(am->clicked + am->defaultchoice));
      } else {
        j = 0;
        while (j < am->nButtons) {
          if (i != j) {
            if (*(am->clicked + j)) {
              *(am->clicked + j) = (char)0;
              show_button(*(am->buttons + j), (int )*(am->clicked + j));
            }
          }
          j ++;
        }
        *(am->clicked + i) = (char)1;
      }
      show_button(*(am->buttons + i), (int )*(am->clicked + i));
      printf((char const   */* __restrict  */)"%-14.14s| ", "check_menu");
      printf((char const   */* __restrict  */)"Button %d was clicked.\n", i);
      fflush(stdout);
      return (i);
    }
    i ++;
  }
  return (-1);
}
}

void delete_menu(ATMenu *am ) 
{ int i ;

  {
  i = 0;
  while (i < am->nButtons) {
    free((void *)*(am->buttons + i));
    *(am->buttons + i) = (ATButton *)((void *)0);
    i ++;
  }
  free((void *)am);
  am = (ATMenu *)((void *)0);
  return;
}
}

void setup_radio(WalkRadio *wr ) 
{ int i ;
  int our_height ;
  void *tmp ;
  void *tmp___0 ;
  SDL_Color sc ;
  SDL_Surface __attribute__((__visibility__("default")))  *tmp___1 ;
  SDL_Surface __attribute__((__visibility__("default")))  *tmp___2 ;

  {
  wr->face_color[0] = int_solid_black;
  wr->face_color[1] = int_dark_blue;
  wr->text_color[0] = int_purple;
  wr->text_color[1] = int_white;
  wr->border_color[0] = int_solid_black;
  wr->border_color[1] = int_grey;
  tmp = malloc(sizeof(SDL_Surface *) * (unsigned int )wr->n);
  wr->bitmap0 = (SDL_Surface **)tmp;
  if (! wr->bitmap0) {
    Panic("setup_radio", "menu.c", (char *)"Failed assertion \"%s\" on line %d",
          "wr->bitmap0", 139);
  }
  tmp___0 = malloc(sizeof(SDL_Surface *) * (unsigned int )wr->n);
  wr->bitmap1 = (SDL_Surface **)tmp___0;
  if (! wr->bitmap1) {
    Panic("setup_radio", "menu.c", (char *)"Failed assertion \"%s\" on line %d",
          "wr->bitmap1", 140);
  }
  wr->w = 0;
  wr->h = 0;
  i = 0;
  while (i < wr->n) {
    SDL_GetRGB(wr->text_color[0], screen->format, & sc.r, & sc.g, & sc.b);
    tmp___1 = TTF_RenderText_Blended(sfont, (char const   *)*(wr->label + i), sc);
    *(wr->bitmap0 + i) = (SDL_Surface *)tmp___1;
    if (! *(wr->bitmap0 + i)) {
      Panic("setup_radio", "menu.c",
            (char *)"Failed assertion \"%s\" on line %d", "wr->bitmap0[i]", 149);
    }
    SDL_GetRGB(wr->text_color[1], screen->format, & sc.r, & sc.g, & sc.b);
    tmp___2 = TTF_RenderText_Blended(sfont, (char const   *)*(wr->label + i), sc);
    *(wr->bitmap1 + i) = (SDL_Surface *)tmp___2;
    if (! *(wr->bitmap1 + i)) {
      Panic("setup_radio", "menu.c",
            (char *)"Failed assertion \"%s\" on line %d", "wr->bitmap1[i]", 153);
    }
    if ((*(wr->bitmap0 + i))->w + 4 > wr->w) {
      wr->w = (*(wr->bitmap0 + i))->w + 4;
    }
    if ((*(wr->bitmap0 + i))->h > wr->h) {
      wr->h = (*(wr->bitmap0 + i))->h;
    }
    i ++;
  }
  wr->w += 5;
  wr->h += 10;
  wr->area.w = (unsigned short )(wr->w + 8);
  our_height = 12;
  if (wr->n < our_height) {
    our_height = wr->n;
  }
  wr->area.h = (unsigned short )(wr->h * our_height + 8);
  return;
}
}

int check_radio(WalkRadio *wr , int x , int y ) 
{ int start ;
  int stop ;
  int c ;

  {
  if (wr->inactive) {
    return (0);
  }
  if (x >= (int )wr->area.x) {
    if (x <= (int )wr->area.x + (int )wr->area.w) {
      if (y >= (int )wr->area.y) {
        if (y <= (int )wr->area.y + (int )wr->area.h) {
          if (wr->n < 12) {
            start = 0;
            stop = wr->n;
          } else {
            start = wr->defaultchoice - 6;
            if (start < 0) {
              start = 0;
            }
            stop = start + 12;
            if (stop > wr->n) {
              start -= stop - wr->n;
              stop = wr->n;
            }
          }
          c = (y - (int )wr->area.y) / wr->h;
          c += start;
          if (c < 0) {
            c = 0;
          }
          if (c >= wr->n) {
            c = wr->n - 1;
          }
          wr->defaultchoice = c;
          return (1);
        }
      }
    }
  }
  return (0);
}
}

void clear_radio(WalkRadio *wr ) 
{ SDL_Rect *my_c ;

  {
  SDL_FillRect(widget_layer, & wr->area, int_black);
  SDL_FillRect(screen, & wr->area, int_black);
  SDL_UpperBlit(flame_layer, & wr->area, screen, & wr->area);
  SDL_UpperBlit(widget_layer, & wr->area, screen, & wr->area);
  my_c = & wr->area;
  if (! my_c) {
    Panic("clear_radio", "menu.c", (char *)"Failed assertion \"%s\" on line %d",
          "my_c", 219);
  }
  if (my_c) {
    if ((int )my_c->x < 0) {
      my_c->x = (short)0;
    }
    if ((int )my_c->y < 0) {
      my_c->y = (short)0;
    }
    if ((int )my_c->x + (int )my_c->w > 640) {
      my_c->w = (unsigned short )(640 - (int )my_c->x);
    }
    if ((int )my_c->y + (int )my_c->h > 480) {
      my_c->h = (unsigned short )(480 - (int )my_c->y);
    }
  }
  SDL_UpdateRects(screen, 1, & wr->area);
  return;
}
}

void draw_radio(WalkRadio *wr , int state ) 
{ int start ;
  int stop ;
  int i ;
  SDL_Rect draw ;
  int on ;
  SDL_Rect text ;
  SDL_Rect *my_b ;
  SDL_Rect *my_d ;
  int __attribute__((__visibility__("default")))  tmp ;
  SDL_Rect *my_b___0 ;
  SDL_Rect *my_d___0 ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  SDL_Rect *my_c ;

  {
  if (wr->inactive) {
    return;
  }
  wr->area.x = (short )wr->x;
  wr->area.y = (short )wr->y;
  SDL_FillRect(widget_layer, & wr->area, wr->border_color[state]);
  if (wr->n < 12) {
    start = 0;
    stop = wr->n;
  } else {
    start = wr->defaultchoice - 6;
    if (start < 0) {
      start = 0;
    }
    stop = start + 12;
    if (stop > wr->n) {
      start -= stop - wr->n;
      stop = wr->n;
    }
  }
  draw.x = (short )(wr->x + 4);
  draw.y = (short )(wr->y + 4);
  draw.w = (unsigned short )wr->w;
  draw.h = (unsigned short )wr->h;
  i = start;
  while (i < stop) {
    on = wr->defaultchoice == i;
    SDL_FillRect(widget_layer, & draw, wr->text_color[on]);
    draw.x = (short )((int )draw.x + 2);
    draw.y = (short )((int )draw.y + 2);
    draw.w = (unsigned short )((int )draw.w - 4);
    draw.h = (unsigned short )((int )draw.h - 4);
    if (state) {
      SDL_FillRect(widget_layer, & draw, wr->face_color[on]);
    } else {
      if (on) {
        SDL_FillRect(widget_layer, & draw, wr->face_color[on]);
      } else {
        SDL_FillRect(widget_layer, & draw, wr->border_color[on]);
      }
    }
    draw.x = (short )((int )draw.x + 3);
    draw.y = (short )((int )draw.y + 3);
    draw.w = (unsigned short )((int )draw.w - 6);
    draw.h = (unsigned short )((int )draw.h - 6);
    text.x = draw.x;
    text.y = draw.y;
    text.w = (unsigned short )(*(wr->bitmap0 + i))->w;
    text.h = (unsigned short )(*(wr->bitmap0 + i))->h;
    text.x = (short )((int )text.x + ((int )draw.w - (int )text.w) / 2);
    if (on) {
      my_b = (SDL_Rect *)((void *)0);
      my_d = & text;
      if (my_b) {
        if ((int )my_b->x < 0) {
          my_b->x = (short)0;
        }
        if ((int )my_b->y < 0) {
          my_b->y = (short)0;
        }
        if ((int )my_b->x + (int )my_b->w > 640) {
          my_b->w = (unsigned short )(640 - (int )my_b->x);
        }
        if ((int )my_b->y + (int )my_b->h > 480) {
          my_b->h = (unsigned short )(480 - (int )my_b->y);
        }
      }
      if (my_d) {
        if ((int )my_d->x < 0) {
          my_d->x = (short)0;
        }
        if ((int )my_d->y < 0) {
          my_d->y = (short)0;
        }
        if ((int )my_d->x + (int )my_d->w > 640) {
          my_d->w = (unsigned short )(640 - (int )my_d->x);
        }
        if ((int )my_d->y + (int )my_d->h > 480) {
          my_d->h = (unsigned short )(480 - (int )my_d->y);
        }
      }
      tmp = SDL_UpperBlit(*(wr->bitmap1 + i), my_b, widget_layer, my_d);
      if (! (tmp == (int __attribute__((__visibility__("default")))  )0)) {
        Panic("draw_radio", "menu.c",
              (char *)"Failed assertion \"%s\" on line %d",
              "SDL_UpperBlit(wr->bitmap1[i],my_b,widget_layer,my_d) == 0", 278);
      }
    } else {
      my_b___0 = (SDL_Rect *)((void *)0);
      my_d___0 = & text;
      if (my_b___0) {
        if ((int )my_b___0->x < 0) {
          my_b___0->x = (short)0;
        }
        if ((int )my_b___0->y < 0) {
          my_b___0->y = (short)0;
        }
        if ((int )my_b___0->x + (int )my_b___0->w > 640) {
          my_b___0->w = (unsigned short )(640 - (int )my_b___0->x);
        }
        if ((int )my_b___0->y + (int )my_b___0->h > 480) {
          my_b___0->h = (unsigned short )(480 - (int )my_b___0->y);
        }
      }
      if (my_d___0) {
        if ((int )my_d___0->x < 0) {
          my_d___0->x = (short)0;
        }
        if ((int )my_d___0->y < 0) {
          my_d___0->y = (short)0;
        }
        if ((int )my_d___0->x + (int )my_d___0->w > 640) {
          my_d___0->w = (unsigned short )(640 - (int )my_d___0->x);
        }
        if ((int )my_d___0->y + (int )my_d___0->h > 480) {
          my_d___0->h = (unsigned short )(480 - (int )my_d___0->y);
        }
      }
      tmp___0 = SDL_UpperBlit(*(wr->bitmap0 + i), my_b___0, widget_layer,
                              my_d___0);
      if (! (tmp___0 == (int __attribute__((__visibility__("default")))  )0)) {
        Panic("draw_radio", "menu.c",
              (char *)"Failed assertion \"%s\" on line %d",
              "SDL_UpperBlit(wr->bitmap0[i],my_b,widget_layer,my_d) == 0", 280);
      }
    }
    draw.x = (short )((int )draw.x - 5);
    draw.y = (short )((int )draw.y - 5);
    draw.w = (unsigned short )((int )draw.w + 10);
    draw.h = (unsigned short )((int )draw.h + 10);
    draw.y = (short )((int )draw.y + (int )draw.h);
    i ++;
  }
  SDL_UpperBlit(flame_layer, & wr->area, screen, & wr->area);
  SDL_UpperBlit(widget_layer, & wr->area, screen, & wr->area);
  my_c = & wr->area;
  if (! my_c) {
    Panic("draw_radio", "menu.c", (char *)"Failed assertion \"%s\" on line %d",
          "my_c", 289);
  }
  if (my_c) {
    if ((int )my_c->x < 0) {
      my_c->x = (short)0;
    }
    if ((int )my_c->y < 0) {
      my_c->y = (short)0;
    }
    if ((int )my_c->x + (int )my_c->w > 640) {
      my_c->w = (unsigned short )(640 - (int )my_c->x);
    }
    if ((int )my_c->y + (int )my_c->h > 480) {
      my_c->h = (unsigned short )(480 - (int )my_c->y);
    }
  }
  SDL_UpdateRects(screen, 1, & wr->area);
  return;
}
}

WalkRadioGroup *create_single_wrg(int n ) 
{ WalkRadioGroup *wrg___1 ;
  void *tmp ;
  void *tmp___0 ;
  void *tmp___1 ;

  {
  tmp = calloc(sizeof(*wrg___1), 1U);
  wrg___1 = (WalkRadioGroup *)tmp;
  if (! wrg___1) {
    Panic("create_single_wrg", "menu.c",
          (char *)"Out of Memory:\n\tcannot callocate %d bytes for wrg",
          sizeof(*wrg___1));
  }
  wrg___1->n = 1;
  tmp___0 = calloc((unsigned int )wrg___1->n * sizeof(*(wrg___1->wr)), 1U);
  wrg___1->wr = (WalkRadio *)tmp___0;
  if (! wrg___1->wr) {
    Panic("create_single_wrg", "menu.c",
          (char *)"Out of Memory:\n\tcannot callocate %d bytes for wrg->wr",
          (unsigned int )wrg___1->n * sizeof(*(wrg___1->wr)));
  }
  (wrg___1->wr + 0)->n = n;
  tmp___1 = calloc((unsigned int )(wrg___1->wr + 0)->n * sizeof(*((wrg___1->wr + 0)->label)),
                   1U);
  (wrg___1->wr + 0)->label = (char **)tmp___1;
  if (! (wrg___1->wr + 0)->label) {
    Panic("create_single_wrg", "menu.c",
          (char *)"Out of Memory:\n\tcannot callocate %d bytes for wrg->wr[0].label",
          (unsigned int )(wrg___1->wr + 0)->n * sizeof(*((wrg___1->wr + 0)->label)));
  }
  return (wrg___1);
}
}

int handle_radio_event(WalkRadioGroup *wrg___1 , SDL_Event const   *ev ) 
{ int i ;
  int ret ;
  int tmp ;

  {
  if ((int const   )ev->type == 5) {
    i = 0;
    while (i < wrg___1->n) {
      tmp = check_radio(wrg___1->wr + i, (int )ev->button.x, (int )ev->button.y);
      if (tmp) {
        if (i != wrg___1->cur) {
          draw_radio(wrg___1->wr + wrg___1->cur, 0);
        }
        draw_radio(wrg___1->wr + i, 1);
        if ((wrg___1->wr + i)->action) {
          ret = (*((wrg___1->wr + i)->action))(wrg___1->wr + i);
          return (ret);
        } else {
          return ((wrg___1->wr + i)->defaultchoice);
        }
      }
      i ++;
    }
  } else {
    if ((int const   )ev->type == 2) {
      switch ((int )ev->key.keysym.sym) {
      case 13: 
      if ((wrg___1->wr + wrg___1->cur)->action) {
        ret = (*((wrg___1->wr + wrg___1->cur)->action))(wrg___1->wr + wrg___1->cur);
        return (ret);
      } else {
        return ((wrg___1->wr + wrg___1->cur)->defaultchoice);
      }
      return (1);
      case 273: 
      ((wrg___1->wr + wrg___1->cur)->defaultchoice) --;
      if ((wrg___1->wr + wrg___1->cur)->defaultchoice < 0) {
        (wrg___1->wr + wrg___1->cur)->defaultchoice = (wrg___1->wr + wrg___1->cur)->n - 1;
      }
      draw_radio(wrg___1->wr + wrg___1->cur, 1);
      return (-1);
      break;
      case 274: 
      ((wrg___1->wr + wrg___1->cur)->defaultchoice) ++;
      if ((wrg___1->wr + wrg___1->cur)->defaultchoice >= (wrg___1->wr + wrg___1->cur)->n) {
        (wrg___1->wr + wrg___1->cur)->defaultchoice = 0;
      }
      draw_radio(wrg___1->wr + wrg___1->cur, 1);
      return (-1);
      case 276: 
      draw_radio(wrg___1->wr + wrg___1->cur, 0);
      while (1) {
        (wrg___1->cur) --;
        if (wrg___1->cur < 0) {
          wrg___1->cur = wrg___1->n - 1;
        }
        if (! (wrg___1->wr + wrg___1->cur)->inactive) {
          break;
        }
      }
      draw_radio(wrg___1->wr + wrg___1->cur, 1);
      return (-1);
      case 275: 
      draw_radio(wrg___1->wr + wrg___1->cur, 0);
      while (1) {
        (wrg___1->cur) ++;
        if (wrg___1->cur >= wrg___1->n) {
          wrg___1->cur = 0;
        }
        if (! (wrg___1->wr + wrg___1->cur)->inactive) {
          break;
        }
      }
      draw_radio(wrg___1->wr + wrg___1->cur, 1);
      return (-1);
      default: ;
      return (-1);
      }
    }
  }
  return (-1);
}
}

extern int fcntl(int __fd , int __cmd  , ...) ;

extern  __attribute__((__nothrow__)) int socket(int __domain , int __type ,
                                                int __protocol ) ;

extern  __attribute__((__nothrow__)) int bind(int __fd ,
                                              struct sockaddr  const  * __restrict  __addr ,
                                              socklen_t __len ) ;

extern int connect(int __fd , struct sockaddr  const  * __restrict  __addr ,
                   socklen_t __len ) ;

extern  __attribute__((__nothrow__)) int setsockopt(int __fd , int __level ,
                                                    int __optname ,
                                                    void const   *__optval ,
                                                    socklen_t __optlen ) ;

extern  __attribute__((__nothrow__)) int listen(int __fd , int __n ) ;

extern int accept(int __fd , struct sockaddr * __restrict  __addr ,
                  socklen_t * __restrict  __addr_len ) ;

extern struct hostent *gethostbyaddr(void const   *__addr , __socklen_t __len ,
                                     int __type ) ;

extern struct hostent *gethostbyname(char const   *__name ) ;

char *error_msg   = (char *)((void *)0);

static struct sockaddr_in addr  ;

static struct hostent *host  ;

static int sockListen   = 0;

static int addrLen  ;

int Server_AwaitConnection(int port ) 
{ int val1 ;
  struct linger val2 ;
  int sock ;
  register unsigned int __v ;
  register unsigned int __x ;
  register unsigned short __v___0 ;
  register unsigned short __x___0 ;
  int *tmp ;
  int *tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int *tmp___3 ;
  int tmp___4 ;
  int *tmp___5 ;
  int tmp___6 ;
  fd_set read_fds ;
  struct timeval timeout ;
  int retval ;
  int __d0 ;
  int __d1 ;
  int *tmp___7 ;
  int *tmp___8 ;
  int *tmp___9 ;
  int tmp___10 ;

  {
  if (sockListen == 0) {
    memset((void *)(& addr), 0, sizeof(addr));
    addr.sin_family = (unsigned short)2;
    __x = 0U;
    __asm__  ("rorw $8, %w0;"
              "rorl $16, %0;"
              "rorw $8, %w0": "=r" (__v): "0" (__x): "cc");
    addr.sin_addr.s_addr = __v;
    __x___0 = (unsigned short )port;
    __asm__  ("rorw $8, %w0": "=r" (__v___0): "0" (__x___0): "cc");
    addr.sin_port = __v___0;
    sockListen = socket(2, 1, 0);
    error_msg = (char *)0;
    if (sockListen < 0) {
      printf((char const   */* __restrict  */)"%-14.14s| ",
             "Server_AwaitConnection");
      tmp = __errno_location();
      error_msg = strerror(*tmp);
      printf((char const   */* __restrict  */)"unable to create socket: %s\n",
             error_msg);
      fflush(stdout);
      return (-1);
    }
    val1 = 1;
    tmp___1 = fcntl(sockListen, 4, 2048);
    if (tmp___1) {
      printf((char const   */* __restrict  */)"%-14.14s| ",
             "Server_AwaitConnection");
      tmp___0 = __errno_location();
      error_msg = strerror(*tmp___0);
      printf((char const   */* __restrict  */)"unable to make socket non-blocking: %s\n",
             error_msg);
      fflush(stdout);
      return (-1);
    }
    tmp___2 = setsockopt(sockListen, 1, 2, (void const   *)((void *)(& val1)),
                         sizeof(val1));
    if (tmp___2) {
      printf((char const   */* __restrict  */)"%-14.14s| ",
             "Server_AwaitConnection");
      printf((char const   */* __restrict  */)"WARNING: setsockopt(...,SO_REUSEADDR) failed. You may have to wait a\n\tfew minutes before you can try to be the server again.\n");
      fflush(stdout);
    }
    tmp___4 = bind(sockListen,
                   (struct sockaddr  const  */* __restrict  */)((struct sockaddr  const  *)((struct sockaddr *)(& addr))),
                   sizeof(addr));
    if (tmp___4) {
      printf((char const   */* __restrict  */)"%-14.14s| ",
             "Server_AwaitConnection");
      tmp___3 = __errno_location();
      error_msg = strerror(*tmp___3);
      printf((char const   */* __restrict  */)"unable to bind socket (for listening): %s\n",
             error_msg);
      fflush(stdout);
      return (-1);
    }
    tmp___6 = listen(sockListen, 16);
    if (tmp___6) {
      printf((char const   */* __restrict  */)"%-14.14s| ",
             "Server_AwaitConnection");
      tmp___5 = __errno_location();
      error_msg = strerror(*tmp___5);
      printf((char const   */* __restrict  */)"unable to listen on socket: %s\n",
             error_msg);
      fflush(stdout);
      return (-1);
    }
    addrLen = (int )sizeof(addr);
    printf((char const   */* __restrict  */)"%-14.14s| ",
           "Server_AwaitConnection");
    printf((char const   */* __restrict  */)"accepting connections on port %d, socketfd %d\n",
           port, sockListen);
    fflush(stdout);
  }
  timeout.tv_sec = 0L;
  timeout.tv_usec = 0L;
  while (1) {
    __asm__  volatile   ("cld; rep; stosl": "=c" (__d0), "=D" (__d1): "a" (0),
                         "0" (sizeof(fd_set ) / sizeof(__fd_mask )),
                         "1" (& read_fds.fds_bits[0]): "memory");
    break;
  }
  __asm__  volatile   ("btsl %1,%0": "=m" (read_fds.fds_bits[(unsigned int )sockListen / (8U * sizeof(__fd_mask ))]): "r" ((unsigned int )sockListen % (8U * sizeof(__fd_mask ))): "cc",
                       "memory");
  retval = select(sockListen + 1, (fd_set */* __restrict  */)(& read_fds),
                  (fd_set */* __restrict  */)((fd_set *)((void *)0)),
                  (fd_set */* __restrict  */)((fd_set *)((void *)0)),
                  (struct timeval */* __restrict  */)(& timeout));
  if (retval <= 0) {
    return (-1);
  }
  sock = accept(sockListen,
                (struct sockaddr */* __restrict  */)((struct sockaddr *)(& addr)),
                (socklen_t */* __restrict  */)((socklen_t *)(& addrLen)));
  if (sock < 0) {
    tmp___8 = __errno_location();
    if (*tmp___8 == 11) {
      return (-1);
    } else {
      tmp___9 = __errno_location();
      if (*tmp___9 == 11) {
        return (-1);
      } else {
        printf((char const   */* __restrict  */)"%-14.14s| ",
               "Server_AwaitConnection");
        tmp___7 = __errno_location();
        error_msg = strerror(*tmp___7);
        printf((char const   */* __restrict  */)"unable to accept on listening socket: %s\n",
               error_msg);
        fflush(stdout);
        return (-1);
      }
    }
  }
  val2.l_onoff = 0;
  val2.l_linger = 0;
  tmp___10 = setsockopt(sock, 1, 13, (void const   *)((void *)(& val2)),
                        sizeof(val2));
  if (tmp___10) {
    printf((char const   */* __restrict  */)"%-14.14s| ",
           "Server_AwaitConnection");
    printf((char const   */* __restrict  */)"WARNING: setsockopt(...,SO_LINGER) failed. You may have to wait a few\n\tminutes before you can try to be the server again.\n");
    fflush(stdout);
  }
  host = gethostbyaddr((void const   *)((void *)(& addr.sin_addr)),
                       sizeof(struct in_addr ), 2);
  if (! host) {
    printf((char const   */* __restrict  */)"%-14.14s| ",
           "Server_AwaitConnection");
    printf((char const   */* __restrict  */)"connection from some unresolvable IP address, socketfd %d.\n",
           sock);
    fflush(stdout);
  } else {
    printf((char const   */* __restrict  */)"%-14.14s| ",
           "Server_AwaitConnection");
    printf((char const   */* __restrict  */)"connection from %s, socketfd %d.\n",
           host->h_name, sock);
    fflush(stdout);
  }
  return (sock);
}
}

int Client_Connect(char *hoststr , int lport ) 
{ struct sockaddr_in addr___0 ;
  struct hostent *host___0 ;
  int mySock ;
  short port ;
  int retval ;
  register unsigned short __v ;
  register unsigned short __x ;
  int *tmp ;
  int *tmp___0 ;

  {
  port = (short )lport;
  error_msg = (char *)((void *)0);
  host___0 = gethostbyname((char const   *)hoststr);
  if (! host___0) {
    printf((char const   */* __restrict  */)"%-14.14s| ", "Client_Connect");
    printf((char const   */* __restrict  */)"unable to resolve [%s]: unknown hostname\n",
           hoststr);
    fflush(stdout);
    error_msg = (char *)"unknown hostname";
    return (-1);
  }
  printf((char const   */* __restrict  */)"%-14.14s| ", "Client_Connect");
  printf((char const   */* __restrict  */)"connecting to %s:%d ...\n",
         host___0->h_name, port);
  fflush(stdout);
  memset((void *)(& addr___0), 0, sizeof(addr___0));
  addr___0.sin_family = (unsigned short)2;
  memcpy((void */* __restrict  */)((void *)(& addr___0.sin_addr)),
         (void const   */* __restrict  */)((void const   *)*(host___0->h_addr_list + 0)),
         (unsigned int )host___0->h_length);
  __x = (unsigned short )port;
  __asm__  ("rorw $8, %w0": "=r" (__v): "0" (__x): "cc");
  addr___0.sin_port = __v;
  mySock = socket(2, 1, 0);
  if (mySock < 0) {
    printf((char const   */* __restrict  */)"%-14.14s| ", "Client_Connect");
    tmp = __errno_location();
    error_msg = strerror(*tmp);
    printf((char const   */* __restrict  */)"unable to create socket: %s\n",
           error_msg);
    fflush(stdout);
    return (-1);
  }
  retval = connect(mySock,
                   (struct sockaddr  const  */* __restrict  */)((struct sockaddr  const  *)((struct sockaddr *)(& addr___0))),
                   sizeof(addr___0));
  if (retval < 0) {
    printf((char const   */* __restrict  */)"%-14.14s| ", "Client_Connect");
    tmp___0 = __errno_location();
    error_msg = strerror(*tmp___0);
    printf((char const   */* __restrict  */)"unable to connect: %s\n", error_msg);
    fflush(stdout);
    close(mySock);
    return (-1);
  }
  printf((char const   */* __restrict  */)"%-14.14s| ", "Client_Connect");
  printf((char const   */* __restrict  */)"connected to %s:%d, socketfd %d.\n",
         host___0->h_name, port, mySock);
  fflush(stdout);
  return (mySock);
}
}

int Network_Init(void) 
{ 

  {
  return (0);
}
}

void Network_Quit(void) 
{ 

  {
  return;
}
}

extern  __attribute__((__nothrow__)) char *strstr(char const   *__haystack ,
                                                  char const   *__needle )  __attribute__((__pure__,
__nonnull__(1,2))) ;

extern DIR *opendir(char const   *__name )  __attribute__((__nonnull__(1))) ;

extern int closedir(DIR *__dirp )  __attribute__((__nonnull__(1))) ;

extern struct dirent *readdir(DIR *__dirp )  __attribute__((__nonnull__(1))) ;

extern int fscanf(FILE * __restrict  __stream ,
                  char const   * __restrict  __format  , ...) ;

extern int __attribute__((__visibility__("default")))  SDL_SetAlpha(SDL_Surface *surface ,
                                                                    Uint32 flag ,
                                                                    Uint8 alpha ) ;

static piece_style *load_piece_style(char const   *filename ) 
{ piece_style *retval ;
  char buf[2048] ;
  FILE *fin ;
  FILE *tmp ;
  int i ;
  void *tmp___0 ;
  int tmp___1 ;
  char *tmp___3 ;
  char *tmp___5 ;
  char *tmp___15 ;
  int tmp___16 ;
  void *tmp___17 ;
  int x ;
  int y ;
  int rot ;
  int counter ;
  int tmp___18 ;
  size_t tmp___19 ;
  void *tmp___20 ;
  int tmp___22 ;
  int tmp___23 ;

  {
  tmp = fopen((char const   */* __restrict  */)filename,
              (char const   */* __restrict  */)"rt");
  fin = tmp;
  if (! fin) {
    printf((char const   */* __restrict  */)"%-14.14s| ", "load_piece_style");
    printf((char const   */* __restrict  */)"fopen(%s)\n", filename);
    fflush(stdout);
    return ((piece_style *)((void *)0));
  }
  tmp___0 = calloc(sizeof(piece_style ), 1U);
  retval = (piece_style *)tmp___0;
  if (! retval) {
    Panic("load_piece_style", "piece.c",
          (char *)"Out of Memory:\n\tcannot callocate %d bytes for retval",
          sizeof(piece_style ));
  }
  fgets((char */* __restrict  */)(buf), (int )sizeof(buf),
        (FILE */* __restrict  */)fin);
  tmp___1 = feof(fin);
  if (tmp___1) {
    printf((char const   */* __restrict  */)"%-14.14s| ", "load_piece_style");
    printf((char const   */* __restrict  */)"unexpected EOF after name in [%s]\n",
           filename);
    fflush(stdout);
    free((void *)retval);
    return ((piece_style *)((void *)0));
  }
  tmp___5 = __builtin_strchr(buf, '\n');
  if (tmp___5) {
    tmp___3 = __builtin_strchr(buf, '\n');
    *tmp___3 = (char)0;
  }
  tmp___15 = __strdup((char const   *)(buf));
  retval->name = tmp___15;
  tmp___16 = fscanf((FILE */* __restrict  */)fin,
                    (char const   */* __restrict  */)"%d", & retval->num_piece);
  if (tmp___16 != 1) {
    printf((char const   */* __restrict  */)"%-14.14s| ", "load_piece_style");
    printf((char const   */* __restrict  */)"malformed piece count in [%s]\n",
           filename);
    fflush(stdout);
    free((void *)retval->name);
    free((void *)retval);
    return ((piece_style *)((void *)0));
  }
  tmp___17 = calloc((unsigned int )retval->num_piece * sizeof(piece ), 1U);
  retval->shape = (piece *)tmp___17;
  if (! retval->shape) {
    Panic("load_piece_style", "piece.c",
          (char *)"Out of Memory:\n\tcannot callocate %d bytes for retval->shape",
          (unsigned int )retval->num_piece * sizeof(piece ));
  }
  i = 0;
  while (i < retval->num_piece) {
    while (1) {
      fgets((char */* __restrict  */)(buf), (int )sizeof(buf),
            (FILE */* __restrict  */)fin);
      tmp___18 = feof(fin);
      if (tmp___18) {
        Panic("load_piece_style", "piece.c",
              (char *)"unexpected EOF in [%s], before piece %d", filename, i + 1);
      }
      if (! ((int )buf[0] == 10)) {
        break;
      }
    }
    tmp___19 = strlen((char const   *)(buf));
    (retval->shape + i)->dim = (int )(tmp___19 - 1U);
    if ((retval->shape + i)->dim <= 0) {
      Panic("load_piece_style", "piece.c",
            (char *)"piece %d malformed height/width in [%s]", i, filename);
    }
    rot = 0;
    while (rot < 4) {
      tmp___20 = malloc((unsigned int )((retval->shape + i)->dim * (retval->shape + i)->dim));
      (retval->shape + i)->bitmap[rot] = (unsigned char *)tmp___20;
      if (! (retval->shape + i)->bitmap[rot]) {
        Panic("load_piece_style", "piece.c",
              (char *)"Out of Memory:\n\tcannot allocate %d bytes for retval->shape[i].bitmap[rot]",
              (retval->shape + i)->dim * (retval->shape + i)->dim);
      }
      rot ++;
    }
    counter = 1;
    y = 0;
    while (y < (retval->shape + i)->dim) {
      x = 0;
      while (x < (retval->shape + i)->dim) {
        if ((int )buf[x] != 46) {
          tmp___22 = counter;
          counter ++;
          *((retval->shape + i)->bitmap[0] + ((retval->shape + i)->dim * y + x)) = (unsigned char )tmp___22;
        } else {
          *((retval->shape + i)->bitmap[0] + ((retval->shape + i)->dim * y + x)) = (unsigned char)0;
        }
        x ++;
      }
      if (y != (retval->shape + i)->dim - 1) {
        while (1) {
          fgets((char */* __restrict  */)(buf), (int )sizeof(buf),
                (FILE */* __restrict  */)fin);
          tmp___23 = feof(fin);
          if (tmp___23) {
            Panic("load_piece_style", "piece.c",
                  (char *)"unexpected EOF in [%s]", filename);
          }
          if (! ((int )buf[0] == 10)) {
            break;
          }
        }
      }
      y ++;
    }
    (retval->shape + i)->num_color = counter - 1;
    rot = 1;
    while (rot < 4) {
      y = 0;
      while (y < (retval->shape + i)->dim) {
        x = 0;
        while (x < (retval->shape + i)->dim) {
          *((retval->shape + i)->bitmap[rot] + ((retval->shape + i)->dim * y + x)) = *((retval->shape + i)->bitmap[rot - 1] + ((retval->shape + i)->dim * x + (((retval->shape + i)->dim - 1) - y)));
          x ++;
        }
        y ++;
      }
      rot ++;
    }
    i ++;
  }
  printf((char const   */* __restrict  */)"%-14.14s| ", "load_piece_style");
  printf((char const   */* __restrict  */)"Piece Style [%s] loaded (%d pieces).\n",
         retval->name, retval->num_piece);
  fflush(stdout);
  return (retval);
}
}

static int piece_Select(struct dirent  const  *d ) 
{ char *tmp ;
  size_t tmp___0 ;
  char *tmp___1 ;

  {
  tmp = strstr((char const   *)(d->d_name), ".Piece");
  if (tmp) {
    tmp___0 = strlen((char const   *)(d->d_name));
    tmp___1 = strstr((char const   *)(d->d_name), ".Piece");
    if ((int )tmp___0 == (tmp___1 - (char *)(d->d_name)) + 6) {
      return (1);
    } else {
      return (0);
    }
  } else {
    return (0);
  }
}
}

piece_styles load_piece_styles(void) 
{ piece_styles retval ;
  int i ;
  DIR *my_dir ;
  char filespec[2048] ;
  struct dirent *this_file ;
  struct dirent *tmp ;
  int tmp___0 ;
  int j ;
  void *tmp___1 ;
  struct dirent *this_file___0 ;
  struct dirent *tmp___2 ;
  int tmp___3 ;
  char *tmp___4 ;

  {
  i = 0;
  memset((void *)(& retval), 0, sizeof(retval));
  my_dir = opendir("styles");
  if (my_dir) {
    while (1) {
      tmp = readdir(my_dir);
      this_file = tmp;
      if (! this_file) {
        break;
      }
      tmp___0 = piece_Select((struct dirent  const  *)this_file);
      if (tmp___0) {
        i ++;
      }
    }
    closedir(my_dir);
  } else {
    Panic("load_piece_styles", "piece.c",
          (char *)"Cannot read directory [styles/]");
  }
  my_dir = opendir("styles");
  if (my_dir) {
    if (i > 0) {
      tmp___1 = calloc(sizeof(*(retval.style)) * (unsigned int )i, 1U);
      retval.style = (piece_style **)tmp___1;
      if (! retval.style) {
        Panic("load_piece_styles", "piece.c",
              (char *)"Out of Memory:\n\tcannot callocate %d bytes for retval.style",
              sizeof(*(retval.style)) * (unsigned int )i);
      }
      retval.num_style = i;
      j = 0;
      while (j < i) {
        tmp___2 = readdir(my_dir);
        this_file___0 = tmp___2;
        tmp___3 = piece_Select((struct dirent  const  *)this_file___0);
        if (! tmp___3) {
          continue;
        }
        sprintf((char */* __restrict  */)(filespec),
                (char const   */* __restrict  */)"styles/%s",
                this_file___0->d_name);
        *(retval.style + j) = load_piece_style((char const   *)(filespec));
        tmp___4 = strstr((char const   *)(*(retval.style + j))->name, "Default");
        if (tmp___4) {
          retval.choice = j;
        }
        j ++;
      }
      closedir(my_dir);
      return (retval);
    } else {
      Panic("load_piece_styles", "piece.c",
            (char *)"No piece styles [styles/*.Piece] found.\n");
    }
  } else {
    Panic("load_piece_styles", "piece.c",
          (char *)"Cannot read directory [styles/]");
  }
  return (retval);
}
}

static color_style *load_color_style(SDL_Surface *screen___0 ,
                                     char const   *filename ) 
{ color_style *retval ;
  char buf[2048] ;
  FILE *fin ;
  FILE *tmp ;
  int i ;
  void *tmp___0 ;
  int tmp___1 ;
  char *tmp___3 ;
  char *tmp___5 ;
  char *tmp___15 ;
  int tmp___16 ;
  void *tmp___17 ;
  SDL_Surface *imagebmp ;
  int tmp___18 ;
  int tmp___19 ;
  char *tmp___21 ;
  char *tmp___23 ;
  SDL_RWops __attribute__((__visibility__("default")))  *tmp___24 ;
  SDL_Surface __attribute__((__visibility__("default")))  *tmp___25 ;
  SDL_Surface __attribute__((__visibility__("default")))  *tmp___26 ;

  {
  tmp = fopen((char const   */* __restrict  */)filename,
              (char const   */* __restrict  */)"rt");
  fin = tmp;
  if (! fin) {
    printf((char const   */* __restrict  */)"%-14.14s| ", "load_color_style");
    printf((char const   */* __restrict  */)"fopen(%s)\n", filename);
    fflush(stdout);
    return ((color_style *)((void *)0));
  }
  tmp___0 = calloc(sizeof(*retval), 1U);
  retval = (color_style *)tmp___0;
  if (! retval) {
    Panic("load_color_style", "piece.c",
          (char *)"Out of Memory:\n\tcannot callocate %d bytes for retval",
          sizeof(*retval));
  }
  fgets((char */* __restrict  */)(buf), (int )sizeof(buf),
        (FILE */* __restrict  */)fin);
  tmp___1 = feof(fin);
  if (tmp___1) {
    printf((char const   */* __restrict  */)"%-14.14s| ", "load_color_style");
    printf((char const   */* __restrict  */)"unexpected EOF after name in [%s]\n",
           filename);
    fflush(stdout);
    free((void *)retval);
    return ((color_style *)((void *)0));
  }
  tmp___5 = __builtin_strchr(buf, '\n');
  if (tmp___5) {
    tmp___3 = __builtin_strchr(buf, '\n');
    *tmp___3 = (char)0;
  }
  tmp___15 = __strdup((char const   *)(buf));
  retval->name = tmp___15;
  tmp___16 = fscanf((FILE */* __restrict  */)fin,
                    (char const   */* __restrict  */)"%d\n", & retval->num_color);
  if (tmp___16 != 1) {
    printf((char const   */* __restrict  */)"%-14.14s| ", "load_color_style");
    printf((char const   */* __restrict  */)"malformed color count in [%s]\n",
           filename);
    fflush(stdout);
    free((void *)retval->name);
    free((void *)retval);
    return ((color_style *)((void *)0));
  }
  tmp___17 = malloc((unsigned int )(retval->num_color + 1) * sizeof(*(retval->color + 0)));
  retval->color = (SDL_Surface **)tmp___17;
  if (! retval->color) {
    Panic("load_color_style", "piece.c",
          (char *)"Out of Memory:\n\tcannot allocate %d bytes for retval->color",
          (unsigned int )(retval->num_color + 1) * sizeof(*(retval->color + 0)));
  }
  i = 1;
  while (i <= retval->num_color) {
    while (1) {
      buf[0] = (char)0;
      fgets((char */* __restrict  */)(buf), (int )sizeof(buf),
            (FILE */* __restrict  */)fin);
      tmp___18 = feof(fin);
      if (tmp___18) {
        break;
      } else {
        if (! ((int )buf[0] == 10)) {
          if (! ((int )buf[0] == 35)) {
            break;
          }
        }
      }
    }
    tmp___19 = feof(fin);
    if (tmp___19) {
      Panic("load_color_style", "piece.c",
            (char *)"unexpected EOF in color style [%s]", retval->name);
    }
    tmp___23 = __builtin_strchr(buf, '\n');
    if (tmp___23) {
      tmp___21 = __builtin_strchr(buf, '\n');
      *tmp___21 = (char)0;
    }
    tmp___24 = SDL_RWFromFile((char const   *)(buf), "rb");
    tmp___25 = SDL_LoadBMP_RW((SDL_RWops *)tmp___24, 1);
    imagebmp = (SDL_Surface *)tmp___25;
    if (! imagebmp) {
      Panic("load_color_style", "piece.c",
            (char *)"cannot load [%s] in color style [%s]", buf, retval->name);
    }
    if ((unsigned int )(imagebmp->format)->palette != (unsigned int )((void *)0)) {
      SDL_SetColors(screen___0, ((imagebmp->format)->palette)->colors, 0,
                    ((imagebmp->format)->palette)->ncolors);
    }
    tmp___26 = SDL_DisplayFormat(imagebmp);
    *(retval->color + i) = (SDL_Surface *)tmp___26;
    SDL_FreeSurface(imagebmp);
    if (! *(retval->color + i)) {
      Panic("load_color_style", "piece.c",
            (char *)"could not convert [%s] in color style [%s]", buf,
            retval->name);
    }
    if (i == 1) {
      retval->h = (*(retval->color + i))->h;
      retval->w = (*(retval->color + i))->w;
    } else {
      if (retval->h != (*(retval->color + i))->h) {
        Panic("load_color_style", "piece.c",
              (char *)"[%s] has the wrong size in color style [%s]", buf,
              retval->name);
      } else {
        if (retval->w != (*(retval->color + i))->w) {
          Panic("load_color_style", "piece.c",
                (char *)"[%s] has the wrong size in color style [%s]", buf,
                retval->name);
        }
      }
    }
    i ++;
  }
  *(retval->color + 0) = *(retval->color + 1);
  printf((char const   */* __restrict  */)"%-14.14s| ", "load_color_style");
  printf((char const   */* __restrict  */)"Color Style [%s] loaded (%d colors).\n",
         retval->name, retval->num_color);
  fflush(stdout);
  return (retval);
}
}

static int color_Select(struct dirent  const  *d ) 
{ char *tmp ;
  size_t tmp___0 ;
  char *tmp___1 ;

  {
  tmp = strstr((char const   *)(d->d_name), ".Color");
  if (tmp) {
    tmp___0 = strlen((char const   *)(d->d_name));
    tmp___1 = strstr((char const   *)(d->d_name), ".Color");
    if ((int )tmp___0 == (tmp___1 - (char *)(d->d_name)) + 6) {
      return (1);
    } else {
      return (0);
    }
  } else {
    return (0);
  }
}
}

static void load_special(void) 
{ int i ;
  char *filename[6] ;
  void *tmp ;
  SDL_Surface *imagebmp ;
  SDL_RWops __attribute__((__visibility__("default")))  *tmp___0 ;
  SDL_Surface __attribute__((__visibility__("default")))  *tmp___1 ;
  SDL_Surface __attribute__((__visibility__("default")))  *tmp___2 ;

  {
  filename[0] = (char *)"graphics/Special-Bomb.bmp";
  filename[1] = (char *)"graphics/Special-Drip.bmp";
  filename[2] = (char *)"graphics/Special-DownArrow.bmp";
  filename[3] = (char *)"graphics/Special-Skull.bmp";
  filename[4] = (char *)"graphics/Special-X.bmp";
  filename[5] = (char *)"graphics/Special-YinYang.bmp";
  special_style.name = (char *)"Special Pieces";
  special_style.num_color = 6;
  tmp = malloc(6U * sizeof(SDL_Surface *));
  special_style.color = (SDL_Surface **)tmp;
  if (! special_style.color) {
    Panic("load_special", "piece.c",
          (char *)"Out of Memory:\n\tcannot allocate %d bytes for special_style.color",
          6U * sizeof(SDL_Surface *));
  }
  special_style.w = 20;
  special_style.h = 20;
  i = 0;
  while (i < 6) {
    tmp___0 = SDL_RWFromFile((char const   *)filename[i], "rb");
    tmp___1 = SDL_LoadBMP_RW((SDL_RWops *)tmp___0, 1);
    imagebmp = (SDL_Surface *)tmp___1;
    if (! imagebmp) {
      Panic("load_special", "piece.c",
            (char *)"cannot load [%s], a required special piece", filename[i]);
    }
    if ((unsigned int )(imagebmp->format)->palette != (unsigned int )((void *)0)) {
      SDL_SetColors(screen, ((imagebmp->format)->palette)->colors, 0,
                    ((imagebmp->format)->palette)->ncolors);
    }
    tmp___2 = SDL_DisplayFormat(imagebmp);
    *(special_style.color + i) = (SDL_Surface *)tmp___2;
    SDL_FreeSurface(imagebmp);
    if (! *(special_style.color + i)) {
      Panic("load_special", "piece.c",
            (char *)"could not convert [%s], a required special piece",
            filename[i]);
    }
    i ++;
  }
  return;
}
}

static void load_edges(void) 
{ int i ;
  char *filename[4] ;
  SDL_Surface *imagebmp ;
  SDL_RWops __attribute__((__visibility__("default")))  *tmp ;
  SDL_Surface __attribute__((__visibility__("default")))  *tmp___0 ;
  SDL_Surface __attribute__((__visibility__("default")))  *tmp___1 ;

  {
  filename[0] = (char *)"graphics/Horiz-Light.bmp";
  filename[1] = (char *)"graphics/Vert-Light.bmp";
  filename[2] = (char *)"graphics/Horiz-Dark.bmp";
  filename[3] = (char *)"graphics/Vert-Dark.bmp";
  i = 0;
  while (i < 4) {
    tmp = SDL_RWFromFile((char const   *)filename[i], "rb");
    tmp___0 = SDL_LoadBMP_RW((SDL_RWops *)tmp, 1);
    imagebmp = (SDL_Surface *)tmp___0;
    if (! imagebmp) {
      Panic("load_edges", "piece.c",
            (char *)"cannot load [%s], a required edge", filename[i]);
    }
    if ((unsigned int )(imagebmp->format)->palette != (unsigned int )((void *)0)) {
      SDL_SetColors(screen, ((imagebmp->format)->palette)->colors, 0,
                    ((imagebmp->format)->palette)->ncolors);
    }
    tmp___1 = SDL_DisplayFormat(imagebmp);
    edge[i] = (SDL_Surface *)tmp___1;
    SDL_FreeSurface(imagebmp);
    if (! edge[i]) {
      Panic("load_edges", "piece.c",
            (char *)"could not convert [%s], a required edge", filename[i]);
    }
    SDL_SetAlpha(edge[i], 81920U, (unsigned char)48);
    i ++;
  }
  return;
}
}

color_styles load_color_styles(SDL_Surface *screen___0 ) 
{ color_styles retval ;
  int i ;
  DIR *my_dir ;
  char filespec[2048] ;
  struct dirent *this_file ;
  struct dirent *tmp ;
  int tmp___0 ;
  int j ;
  void *tmp___1 ;
  struct dirent *this_file___0 ;
  struct dirent *tmp___2 ;
  int tmp___3 ;
  char *tmp___4 ;

  {
  i = 0;
  load_edges();
  load_special();
  memset((void *)(& retval), 0, sizeof(retval));
  my_dir = opendir("styles");
  if (my_dir) {
    while (1) {
      tmp = readdir(my_dir);
      this_file = tmp;
      if (! this_file) {
        break;
      }
      tmp___0 = color_Select((struct dirent  const  *)this_file);
      if (tmp___0) {
        i ++;
      }
    }
    closedir(my_dir);
  } else {
    Panic("load_color_styles", "piece.c",
          (char *)"Cannot read directory [styles/]");
  }
  my_dir = opendir("styles");
  if (my_dir) {
    if (i > 0) {
      tmp___1 = calloc(sizeof(*(retval.style)) * (unsigned int )i, 1U);
      retval.style = (color_style **)tmp___1;
      if (! retval.style) {
        Panic("load_color_styles", "piece.c",
              (char *)"Out of Memory:\n\tcannot callocate %d bytes for retval.style",
              sizeof(*(retval.style)) * (unsigned int )i);
      }
      retval.num_style = i;
      j = 0;
      while (j < i) {
        tmp___2 = readdir(my_dir);
        this_file___0 = tmp___2;
        tmp___3 = color_Select((struct dirent  const  *)this_file___0);
        if (! tmp___3) {
          continue;
        }
        sprintf((char */* __restrict  */)(filespec),
                (char const   */* __restrict  */)"styles/%s",
                this_file___0->d_name);
        *(retval.style + j) = load_color_style(screen___0,
                                               (char const   *)(filespec));
        tmp___4 = strstr((char const   *)(*(retval.style + j))->name, "Default");
        if (tmp___4) {
          retval.choice = j;
        }
        j ++;
      }
      closedir(my_dir);
      return (retval);
    } else {
      Panic("load_color_styles", "piece.c",
            (char *)"No piece styles [styles/*.Color] found.\n");
    }
  } else {
    Panic("load_color_styles", "piece.c",
          (char *)"Cannot read directory [styles/]");
  }
  return (retval);
}
}

play_piece generate_piece(piece_style *ps , color_style *cs , unsigned int seq ) 
{ unsigned int p ;
  unsigned int q ;
  unsigned int r ;
  unsigned int c ;
  play_piece retval ;
  Uint16 tmp ;
  Uint16 tmp___0 ;
  Uint16 tmp___1 ;
  Uint16 tmp___2 ;
  Uint16 tmp___3 ;
  Uint16 tmp___4 ;

  {
  SeedRandom(seq);
  tmp = FastRandom((unsigned short )ps->num_piece);
  p = (unsigned int )tmp;
  tmp___0 = FastRandom((unsigned short )(cs->num_color - 1));
  q = (unsigned int )(2 + (int )tmp___0);
  tmp___1 = FastRandom((unsigned short )(cs->num_color - 1));
  r = (unsigned int )(2 + (int )tmp___1);
  retval.base = ps->shape + p;
  retval.special = (enum __anonenum_special_type_51 )-1;
  if (Options.special_wanted) {
    tmp___3 = FastRandom((unsigned short)10000);
    if ((int )tmp___3 < 2000) {
      tmp___2 = FastRandom((unsigned short)4);
      switch ((int )tmp___2) {
      case 0: 
      retval.special = (enum __anonenum_special_type_51 )0;
      break;
      case 1: 
      retval.special = (enum __anonenum_special_type_51 )1;
      break;
      case 2: 
      retval.special = (enum __anonenum_special_type_51 )2;
      break;
      case 3: 
      retval.special = (enum __anonenum_special_type_51 )3;
      break;
      }
    }
  }
  if ((int )retval.special != -1) {
    c = 1U;
    while (c <= (unsigned int )(ps->shape + p)->num_color) {
      retval.colormap[c] = (unsigned char )retval.special;
      c ++;
    }
  } else {
    c = 1U;
    while (c <= (unsigned int )(ps->shape + p)->num_color) {
      tmp___4 = FastRandom((unsigned short)100);
      if ((int )tmp___4 < 25) {
        retval.colormap[c] = (unsigned char )q;
      } else {
        retval.colormap[c] = (unsigned char )r;
      }
      if (! ((int )retval.colormap[c] > 1)) {
        Panic("generate_piece", "piece.c",
              (char *)"Failed assertion \"%s\" on line %d",
              "retval.colormap[c] > 1", 483);
      }
      c ++;
    }
  }
  return (retval);
}
}

void draw_play_piece(SDL_Surface *screen___0 , color_style *cs ,
                     play_piece *o_pp , int o_x , int o_y , int o_rot ,
                     play_piece *pp , int x , int y , int rot ) 
{ SDL_Rect dstrect ;
  int i ;
  int j ;
  int w___1 ;
  int h___1 ;
  int what ;
  SDL_Rect *my_b ;
  SDL_Rect *my_d ;
  int __attribute__((__visibility__("default")))  tmp ;
  int this_precolor ;
  int this_color ;
  SDL_Rect *my_b___0 ;
  SDL_Rect *my_d___0 ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  int that_precolor ;
  int tmp___1 ;
  SDL_Rect *my_b___1 ;
  SDL_Rect *my_d___1 ;
  int __attribute__((__visibility__("default")))  tmp___2 ;
  SDL_Rect *my_b___2 ;
  SDL_Rect *my_d___2 ;
  int __attribute__((__visibility__("default")))  tmp___3 ;
  SDL_Rect *my_b___3 ;
  SDL_Rect *my_d___3 ;
  int __attribute__((__visibility__("default")))  tmp___4 ;
  SDL_Rect *my_b___4 ;
  SDL_Rect *my_d___4 ;
  int __attribute__((__visibility__("default")))  tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  SDL_Rect *my_c ;

  {
  if ((int )pp->special != -1) {
    cs = & special_style;
  }
  w___1 = cs->w;
  h___1 = cs->h;
  j = 0;
  while (j < (o_pp->base)->dim) {
    i = 0;
    while (i < (o_pp->base)->dim) {
      what = (int )*((o_pp->base)->bitmap[o_rot] + ((o_pp->base)->dim * j + i));
      if (what) {
        dstrect.x = (short )(o_x + i * w___1);
        dstrect.y = (short )(o_y + j * h___1);
        dstrect.w = (unsigned short )w___1;
        dstrect.h = (unsigned short )h___1;
        my_b = & dstrect;
        my_d = & dstrect;
        if (my_b) {
          if ((int )my_b->x < 0) {
            my_b->x = (short)0;
          }
          if ((int )my_b->y < 0) {
            my_b->y = (short)0;
          }
          if ((int )my_b->x + (int )my_b->w > 640) {
            my_b->w = (unsigned short )(640 - (int )my_b->x);
          }
          if ((int )my_b->y + (int )my_b->h > 480) {
            my_b->h = (unsigned short )(480 - (int )my_b->y);
          }
        }
        if (my_d) {
          if ((int )my_d->x < 0) {
            my_d->x = (short)0;
          }
          if ((int )my_d->y < 0) {
            my_d->y = (short)0;
          }
          if ((int )my_d->x + (int )my_d->w > 640) {
            my_d->w = (unsigned short )(640 - (int )my_d->x);
          }
          if ((int )my_d->y + (int )my_d->h > 480) {
            my_d->h = (unsigned short )(480 - (int )my_d->y);
          }
        }
        tmp = SDL_UpperBlit(widget_layer, my_b, screen___0, my_d);
        if (! (tmp == (int __attribute__((__visibility__("default")))  )0)) {
          Panic("draw_play_piece", "piece.c",
                (char *)"Failed assertion \"%s\" on line %d",
                "SDL_UpperBlit(widget_layer,my_b,screen,my_d) == 0", 521);
        }
      }
      i ++;
    }
    j ++;
  }
  j = 0;
  while (j < (pp->base)->dim) {
    i = 0;
    while (i < (pp->base)->dim) {
      this_precolor = (int )*((pp->base)->bitmap[rot] + ((pp->base)->dim * j + i));
      if (this_precolor) {
        this_color = (int )pp->colormap[this_precolor];
        dstrect.x = (short )(x + i * w___1);
        dstrect.y = (short )(y + j * h___1);
        dstrect.w = (unsigned short )w___1;
        dstrect.h = (unsigned short )h___1;
        my_b___0 = (SDL_Rect *)((void *)0);
        my_d___0 = & dstrect;
        if (my_b___0) {
          if ((int )my_b___0->x < 0) {
            my_b___0->x = (short)0;
          }
          if ((int )my_b___0->y < 0) {
            my_b___0->y = (short)0;
          }
          if ((int )my_b___0->x + (int )my_b___0->w > 640) {
            my_b___0->w = (unsigned short )(640 - (int )my_b___0->x);
          }
          if ((int )my_b___0->y + (int )my_b___0->h > 480) {
            my_b___0->h = (unsigned short )(480 - (int )my_b___0->y);
          }
        }
        if (my_d___0) {
          if ((int )my_d___0->x < 0) {
            my_d___0->x = (short)0;
          }
          if ((int )my_d___0->y < 0) {
            my_d___0->y = (short)0;
          }
          if ((int )my_d___0->x + (int )my_d___0->w > 640) {
            my_d___0->w = (unsigned short )(640 - (int )my_d___0->x);
          }
          if ((int )my_d___0->y + (int )my_d___0->h > 480) {
            my_d___0->h = (unsigned short )(480 - (int )my_d___0->y);
          }
        }
        tmp___0 = SDL_UpperBlit(*(cs->color + this_color), my_b___0, screen___0,
                                my_d___0);
        if (! (tmp___0 == (int __attribute__((__visibility__("default")))  )0)) {
          Panic("draw_play_piece", "piece.c",
                (char *)"Failed assertion \"%s\" on line %d",
                "SDL_UpperBlit(cs->color[this_color],my_b,screen,my_d) == 0",
                534);
        }
        if ((int )pp->special == -1) {
          if (j == 0) {
            tmp___1 = 0;
          } else {
            tmp___1 = (int )*((pp->base)->bitmap[rot] + ((pp->base)->dim * (j - 1) + i));
          }
          that_precolor = tmp___1;
          if (that_precolor == 0) {
            goto _L;
          } else {
            if ((int )pp->colormap[that_precolor] != this_color) {
              _L: 
              dstrect.x = (short )(x + i * w___1);
              dstrect.y = (short )(y + j * h___1);
              dstrect.h = (unsigned short )(edge[0])->h;
              dstrect.w = (unsigned short )(edge[0])->w;
              my_b___1 = (SDL_Rect *)((void *)0);
              my_d___1 = & dstrect;
              if (my_b___1) {
                if ((int )my_b___1->x < 0) {
                  my_b___1->x = (short)0;
                }
                if ((int )my_b___1->y < 0) {
                  my_b___1->y = (short)0;
                }
                if ((int )my_b___1->x + (int )my_b___1->w > 640) {
                  my_b___1->w = (unsigned short )(640 - (int )my_b___1->x);
                }
                if ((int )my_b___1->y + (int )my_b___1->h > 480) {
                  my_b___1->h = (unsigned short )(480 - (int )my_b___1->y);
                }
              }
              if (my_d___1) {
                if ((int )my_d___1->x < 0) {
                  my_d___1->x = (short)0;
                }
                if ((int )my_d___1->y < 0) {
                  my_d___1->y = (short)0;
                }
                if ((int )my_d___1->x + (int )my_d___1->w > 640) {
                  my_d___1->w = (unsigned short )(640 - (int )my_d___1->x);
                }
                if ((int )my_d___1->y + (int )my_d___1->h > 480) {
                  my_d___1->h = (unsigned short )(480 - (int )my_d___1->y);
                }
              }
              tmp___2 = SDL_UpperBlit(edge[0], my_b___1, screen___0, my_d___1);
              if (! (tmp___2 == (int __attribute__((__visibility__("default")))  )0)) {
                Panic("draw_play_piece", "piece.c",
                      (char *)"Failed assertion \"%s\" on line %d",
                      "SDL_UpperBlit(edge[0],my_b,screen,my_d) == 0", 548);
              }
            }
          }
          if (i == 0) {
            that_precolor = 0;
          } else {
            that_precolor = (int )*((pp->base)->bitmap[rot] + ((pp->base)->dim * j + (i - 1)));
          }
          if (that_precolor == 0) {
            goto _L___0;
          } else {
            if ((int )pp->colormap[that_precolor] != this_color) {
              _L___0: 
              dstrect.x = (short )(x + i * w___1);
              dstrect.y = (short )(y + j * h___1);
              dstrect.h = (unsigned short )(edge[1])->h;
              dstrect.w = (unsigned short )(edge[1])->w;
              my_b___2 = (SDL_Rect *)((void *)0);
              my_d___2 = & dstrect;
              if (my_b___2) {
                if ((int )my_b___2->x < 0) {
                  my_b___2->x = (short)0;
                }
                if ((int )my_b___2->y < 0) {
                  my_b___2->y = (short)0;
                }
                if ((int )my_b___2->x + (int )my_b___2->w > 640) {
                  my_b___2->w = (unsigned short )(640 - (int )my_b___2->x);
                }
                if ((int )my_b___2->y + (int )my_b___2->h > 480) {
                  my_b___2->h = (unsigned short )(480 - (int )my_b___2->y);
                }
              }
              if (my_d___2) {
                if ((int )my_d___2->x < 0) {
                  my_d___2->x = (short)0;
                }
                if ((int )my_d___2->y < 0) {
                  my_d___2->y = (short)0;
                }
                if ((int )my_d___2->x + (int )my_d___2->w > 640) {
                  my_d___2->w = (unsigned short )(640 - (int )my_d___2->x);
                }
                if ((int )my_d___2->y + (int )my_d___2->h > 480) {
                  my_d___2->h = (unsigned short )(480 - (int )my_d___2->y);
                }
              }
              tmp___3 = SDL_UpperBlit(edge[1], my_b___2, screen___0, my_d___2);
              if (! (tmp___3 == (int __attribute__((__visibility__("default")))  )0)) {
                Panic("draw_play_piece", "piece.c",
                      (char *)"Failed assertion \"%s\" on line %d",
                      "SDL_UpperBlit(edge[1],my_b,screen,my_d) == 0", 561);
              }
            }
          }
          if (j == (pp->base)->dim - 1) {
            that_precolor = 0;
          } else {
            that_precolor = (int )*((pp->base)->bitmap[rot] + ((pp->base)->dim * (j + 1) + i));
          }
          if (that_precolor == 0) {
            goto _L___1;
          } else {
            if ((int )pp->colormap[that_precolor] != this_color) {
              _L___1: 
              dstrect.x = (short )(x + i * w___1);
              dstrect.y = (short )((y + (j + 1) * h___1) - (edge[2])->h);
              dstrect.h = (unsigned short )(edge[2])->h;
              dstrect.w = (unsigned short )(edge[2])->w;
              my_b___3 = (SDL_Rect *)((void *)0);
              my_d___3 = & dstrect;
              if (my_b___3) {
                if ((int )my_b___3->x < 0) {
                  my_b___3->x = (short)0;
                }
                if ((int )my_b___3->y < 0) {
                  my_b___3->y = (short)0;
                }
                if ((int )my_b___3->x + (int )my_b___3->w > 640) {
                  my_b___3->w = (unsigned short )(640 - (int )my_b___3->x);
                }
                if ((int )my_b___3->y + (int )my_b___3->h > 480) {
                  my_b___3->h = (unsigned short )(480 - (int )my_b___3->y);
                }
              }
              if (my_d___3) {
                if ((int )my_d___3->x < 0) {
                  my_d___3->x = (short)0;
                }
                if ((int )my_d___3->y < 0) {
                  my_d___3->y = (short)0;
                }
                if ((int )my_d___3->x + (int )my_d___3->w > 640) {
                  my_d___3->w = (unsigned short )(640 - (int )my_d___3->x);
                }
                if ((int )my_d___3->y + (int )my_d___3->h > 480) {
                  my_d___3->h = (unsigned short )(480 - (int )my_d___3->y);
                }
              }
              tmp___4 = SDL_UpperBlit(edge[2], my_b___3, screen___0, my_d___3);
              if (! (tmp___4 == (int __attribute__((__visibility__("default")))  )0)) {
                Panic("draw_play_piece", "piece.c",
                      (char *)"Failed assertion \"%s\" on line %d",
                      "SDL_UpperBlit(edge[2],my_b,screen,my_d) == 0", 574);
              }
            }
          }
          if (i == (pp->base)->dim - 1) {
            that_precolor = 0;
          } else {
            that_precolor = (int )*((pp->base)->bitmap[rot] + ((pp->base)->dim * j + (i + 1)));
          }
          if (that_precolor == 0) {
            goto _L___2;
          } else {
            if ((int )pp->colormap[that_precolor] != this_color) {
              _L___2: 
              dstrect.x = (short )((x + (i + 1) * w___1) - (edge[3])->w);
              dstrect.y = (short )(y + j * h___1);
              dstrect.h = (unsigned short )(edge[3])->h;
              dstrect.w = (unsigned short )(edge[3])->w;
              my_b___4 = (SDL_Rect *)((void *)0);
              my_d___4 = & dstrect;
              if (my_b___4) {
                if ((int )my_b___4->x < 0) {
                  my_b___4->x = (short)0;
                }
                if ((int )my_b___4->y < 0) {
                  my_b___4->y = (short)0;
                }
                if ((int )my_b___4->x + (int )my_b___4->w > 640) {
                  my_b___4->w = (unsigned short )(640 - (int )my_b___4->x);
                }
                if ((int )my_b___4->y + (int )my_b___4->h > 480) {
                  my_b___4->h = (unsigned short )(480 - (int )my_b___4->y);
                }
              }
              if (my_d___4) {
                if ((int )my_d___4->x < 0) {
                  my_d___4->x = (short)0;
                }
                if ((int )my_d___4->y < 0) {
                  my_d___4->y = (short)0;
                }
                if ((int )my_d___4->x + (int )my_d___4->w > 640) {
                  my_d___4->w = (unsigned short )(640 - (int )my_d___4->x);
                }
                if ((int )my_d___4->y + (int )my_d___4->h > 480) {
                  my_d___4->h = (unsigned short )(480 - (int )my_d___4->y);
                }
              }
              tmp___5 = SDL_UpperBlit(edge[3], my_b___4, screen___0, my_d___4);
              if (! (tmp___5 == (int __attribute__((__visibility__("default")))  )0)) {
                Panic("draw_play_piece", "piece.c",
                      (char *)"Failed assertion \"%s\" on line %d",
                      "SDL_UpperBlit(edge[3],my_b,screen,my_d) == 0", 586);
              }
            }
          }
        }
      }
      i ++;
    }
    j ++;
  }
  if (o_x < x) {
    dstrect.x = (short )o_x;
  } else {
    dstrect.x = (short )x;
  }
  if ((int )dstrect.x > 0) {
    dstrect.x = dstrect.x;
  } else {
    dstrect.x = (short)0;
  }
  if (o_x + (o_pp->base)->dim * cs->w > x + (pp->base)->dim * cs->w) {
    tmp___6 = o_x + (o_pp->base)->dim * cs->w;
  } else {
    tmp___6 = x + (pp->base)->dim * cs->w;
  }
  dstrect.w = (unsigned short )(tmp___6 - (int )dstrect.x);
  if ((int )dstrect.w < screen___0->w - (int )dstrect.x) {
    dstrect.w = dstrect.w;
  } else {
    dstrect.w = (unsigned short )(screen___0->w - (int )dstrect.x);
  }
  if (o_y < y) {
    dstrect.y = (short )o_y;
  } else {
    dstrect.y = (short )y;
  }
  if ((int )dstrect.y > 0) {
    dstrect.y = dstrect.y;
  } else {
    dstrect.y = (short)0;
  }
  if (o_y + (o_pp->base)->dim * cs->h > y + (pp->base)->dim * cs->h) {
    tmp___7 = o_y + (o_pp->base)->dim * cs->h;
  } else {
    tmp___7 = y + (pp->base)->dim * cs->h;
  }
  dstrect.h = (unsigned short )(tmp___7 - (int )dstrect.y);
  if ((int )dstrect.h < screen___0->h - (int )dstrect.y) {
    dstrect.h = dstrect.h;
  } else {
    dstrect.h = (unsigned short )(screen___0->h - (int )dstrect.y);
  }
  my_c = & dstrect;
  if (! my_c) {
    Panic("draw_play_piece", "piece.c",
          (char *)"Failed assertion \"%s\" on line %d", "my_c", 605);
  }
  if (my_c) {
    if ((int )my_c->x < 0) {
      my_c->x = (short)0;
    }
    if ((int )my_c->y < 0) {
      my_c->y = (short)0;
    }
    if ((int )my_c->x + (int )my_c->w > 640) {
      my_c->w = (unsigned short )(640 - (int )my_c->x);
    }
    if ((int )my_c->y + (int )my_c->h > 480) {
      my_c->h = (unsigned short )(480 - (int )my_c->y);
    }
  }
  SDL_UpdateRects(screen___0, 1, & dstrect);
  return;
}
}

extern  __attribute__((__nothrow__)) int strncasecmp(char const   *__s1 ,
                                                     char const   *__s2 ,
                                                     size_t __n )  __attribute__((__pure__,
__nonnull__(1,2))) ;

extern int __attribute__((__visibility__("default")))  SDL_OpenAudio(SDL_AudioSpec *desired ,
                                                                     SDL_AudioSpec *obtained ) ;

extern void __attribute__((__visibility__("default")))  SDL_PauseAudio(int pause_on ) ;

extern SDL_AudioSpec __attribute__((__visibility__("default")))  *SDL_LoadWAV_RW(SDL_RWops *src ,
                                                                                 int freesrc ,
                                                                                 SDL_AudioSpec *spec ,
                                                                                 Uint8 **audio_buf ,
                                                                                 Uint32 *audio_len ) ;

extern void __attribute__((__visibility__("default")))  SDL_MixAudio(Uint8 *dst ,
                                                                     Uint8 const   *src ,
                                                                     Uint32 len ,
                                                                     int volume ) ;

extern void __attribute__((__visibility__("default")))  SDL_LockAudio(void) ;

extern void __attribute__((__visibility__("default")))  SDL_UnlockAudio(void) ;

extern int __attribute__((__visibility__("default")))  SDL_InitSubSystem(Uint32 flags ) ;

samples_to_be_played current  ;

char *sound_name[7]   = {(char *)"thud", (char *)"clear1", (char *)"clear4",
                         (char *)"levelup", (char *)"leveldown",
                         (char *)"garbage1", (char *)"clock"};

static void fill_audio(void *udata , Uint8 *stream , int len ) 
{ int i ;
  int diff ;
  int to_play ;

  {
  i = 0;
  while (i < 32) {
    if (current.sample[i].in_use) {
      if (current.sample[i].delay >= len) {
        current.sample[i].delay -= len;
      } else {
        if (current.sample[i].delay > 0) {
          if (current.sample[i].delay < len) {
            diff = len - current.sample[i].delay;
            if ((unsigned int )diff + current.sample[i].pos >= current.sample[i].len) {
              diff = (int )(current.sample[i].len - current.sample[i].pos);
              current.sample[i].in_use = 0;
            }
            current.sample[i].delay = 0;
            SDL_MixAudio(stream + current.sample[i].delay,
                         (Uint8 const   *)current.sample[i].audio_data,
                         (unsigned int )diff, 128);
            current.sample[i].audio_data += diff;
            current.sample[i].pos += (unsigned int )diff;
          } else {
            goto _L;
          }
        } else {
          _L: 
          to_play = len;
          if (! (current.sample[i].delay == 0)) {
            Panic("fill_audio", "sound.c",
                  (char *)"Failed assertion \"%s\" on line %d",
                  "current.sample[i].delay == 0", 67);
          }
          if ((unsigned int )to_play + current.sample[i].pos >= current.sample[i].len) {
            to_play = (int )(current.sample[i].len - current.sample[i].pos);
            current.sample[i].in_use = 0;
          }
          SDL_MixAudio(stream, (Uint8 const   *)current.sample[i].audio_data,
                       (unsigned int )to_play, 128);
          current.sample[i].audio_data += to_play;
          current.sample[i].pos += (unsigned int )to_play;
        }
      }
    }
    i ++;
  }
  return;
}
}

void play_sound_unless_already_playing(sound_style *ss , int which , int delay ) 
{ int i ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___4 ;
  int tmp___7 ;
  int tmp___8 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___14 ;
  int tmp___17 ;
  int tmp___18 ;

  {
  if (ss->WAV[which].audio_len == 0U) {
    if (0) {
      __s1_len = strlen((char const   *)ss->name);
      __s2_len = strlen("No Sound");
      if (! ((unsigned int )((void const   *)(ss->name + 1)) - (unsigned int )((void const   *)ss->name) == 1U)) {
        goto _L___0;
      } else {
        if (__s1_len >= 4U) {
          _L___0: 
          if (! ((unsigned int )((void const   *)("No Sound" + 1)) - (unsigned int )((void const   *)"No Sound") == 1U)) {
            tmp___8 = 1;
          } else {
            if (__s2_len >= 4U) {
              tmp___8 = 1;
            } else {
              tmp___8 = 0;
            }
          }
        } else {
          tmp___8 = 0;
        }
      }
      if (tmp___8) {
        tmp___4 = __builtin_strcmp((char const   *)ss->name, "No Sound");
      } else {
        tmp___7 = __builtin_strcmp((char const   *)ss->name, "No Sound");
        tmp___4 = tmp___7;
      }
    } else {
      tmp___7 = __builtin_strcmp((char const   *)ss->name, "No Sound");
      tmp___4 = tmp___7;
    }
    if (tmp___4) {
      printf((char const   */* __restrict  */)"%-14.14s| ",
             "play_sound_unless_already_playing");
      printf((char const   */* __restrict  */)"No [%s] sound in Sound Style [%s]\n",
             sound_name[which], ss->name);
      fflush(stdout);
    }
    return;
  }
  i = 0;
  while (i < 32) {
    if (current.sample[i].in_use != 0) {
      if (0) {
        __s1_len___0 = strlen((char const   *)current.sample[i].filename);
        __s2_len___0 = strlen((char const   *)ss->WAV[which].filename);
        if (! ((unsigned int )((void const   *)(current.sample[i].filename + 1)) - (unsigned int )((void const   *)current.sample[i].filename) == 1U)) {
          goto _L___2;
        } else {
          if (__s1_len___0 >= 4U) {
            _L___2: 
            if (! ((unsigned int )((void const   *)(ss->WAV[which].filename + 1)) - (unsigned int )((void const   *)ss->WAV[which].filename) == 1U)) {
              tmp___18 = 1;
            } else {
              if (__s2_len___0 >= 4U) {
                tmp___18 = 1;
              } else {
                tmp___18 = 0;
              }
            }
          } else {
            tmp___18 = 0;
          }
        }
        if (tmp___18) {
          tmp___14 = __builtin_strcmp((char const   *)current.sample[i].filename,
                                      (char const   *)ss->WAV[which].filename);
        } else {
          tmp___17 = __builtin_strcmp((char const   *)current.sample[i].filename,
                                      (char const   *)ss->WAV[which].filename);
          tmp___14 = tmp___17;
        }
      } else {
        tmp___17 = __builtin_strcmp((char const   *)current.sample[i].filename,
                                    (char const   *)ss->WAV[which].filename);
        tmp___14 = tmp___17;
      }
      if (! tmp___14) {
        return;
      }
    }
    i ++;
  }
  i = 0;
  while (i < 32) {
    if (current.sample[i].in_use == 0) {
      SDL_LockAudio();
      current.sample[i].in_use = 1;
      current.sample[i].delay = delay;
      current.sample[i].len = ss->WAV[which].audio_len;
      current.sample[i].pos = 0U;
      current.sample[i].audio_data = ss->WAV[which].audio_buf;
      current.sample[i].filename = ss->WAV[which].filename;
      SDL_UnlockAudio();
      return;
    }
    i ++;
  }
  printf((char const   */* __restrict  */)"%-14.14s| ",
         "play_sound_unless_already_playing");
  printf((char const   */* __restrict  */)"No room in the mixer for sound %d\n",
         which);
  fflush(stdout);
  return;
}
}

void stop_playing_sound(sound_style *ss , int which ) 
{ int i ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___4 ;
  int tmp___7 ;
  int tmp___8 ;

  {
  i = 0;
  while (i < 32) {
    if (current.sample[i].in_use != 0) {
      if (0) {
        __s1_len = strlen((char const   *)current.sample[i].filename);
        __s2_len = strlen((char const   *)ss->WAV[which].filename);
        if (! ((unsigned int )((void const   *)(current.sample[i].filename + 1)) - (unsigned int )((void const   *)current.sample[i].filename) == 1U)) {
          goto _L___0;
        } else {
          if (__s1_len >= 4U) {
            _L___0: 
            if (! ((unsigned int )((void const   *)(ss->WAV[which].filename + 1)) - (unsigned int )((void const   *)ss->WAV[which].filename) == 1U)) {
              tmp___8 = 1;
            } else {
              if (__s2_len >= 4U) {
                tmp___8 = 1;
              } else {
                tmp___8 = 0;
              }
            }
          } else {
            tmp___8 = 0;
          }
        }
        if (tmp___8) {
          tmp___4 = __builtin_strcmp((char const   *)current.sample[i].filename,
                                     (char const   *)ss->WAV[which].filename);
        } else {
          tmp___7 = __builtin_strcmp((char const   *)current.sample[i].filename,
                                     (char const   *)ss->WAV[which].filename);
          tmp___4 = tmp___7;
        }
      } else {
        tmp___7 = __builtin_strcmp((char const   *)current.sample[i].filename,
                                   (char const   *)ss->WAV[which].filename);
        tmp___4 = tmp___7;
      }
      if (! tmp___4) {
        current.sample[i].in_use = 0;
      }
    }
    i ++;
  }
  return;
}
}

void play_sound(sound_style *ss , int which , int delay ) 
{ int i ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___4 ;
  int tmp___7 ;
  int tmp___8 ;

  {
  if (ss->WAV[which].audio_len == 0U) {
    if (0) {
      __s1_len = strlen((char const   *)ss->name);
      __s2_len = strlen("No Sound");
      if (! ((unsigned int )((void const   *)(ss->name + 1)) - (unsigned int )((void const   *)ss->name) == 1U)) {
        goto _L___0;
      } else {
        if (__s1_len >= 4U) {
          _L___0: 
          if (! ((unsigned int )((void const   *)("No Sound" + 1)) - (unsigned int )((void const   *)"No Sound") == 1U)) {
            tmp___8 = 1;
          } else {
            if (__s2_len >= 4U) {
              tmp___8 = 1;
            } else {
              tmp___8 = 0;
            }
          }
        } else {
          tmp___8 = 0;
        }
      }
      if (tmp___8) {
        tmp___4 = __builtin_strcmp((char const   *)ss->name, "No Sound");
      } else {
        tmp___7 = __builtin_strcmp((char const   *)ss->name, "No Sound");
        tmp___4 = tmp___7;
      }
    } else {
      tmp___7 = __builtin_strcmp((char const   *)ss->name, "No Sound");
      tmp___4 = tmp___7;
    }
    if (tmp___4) {
      printf((char const   */* __restrict  */)"%-14.14s| ", "play_sound");
      printf((char const   */* __restrict  */)"No [%s] sound in Sound Style [%s]\n",
             sound_name[which], ss->name);
      fflush(stdout);
    }
    return;
  }
  i = 0;
  while (i < 32) {
    if (current.sample[i].in_use == 0) {
      SDL_LockAudio();
      current.sample[i].in_use = 1;
      current.sample[i].delay = delay;
      current.sample[i].len = ss->WAV[which].audio_len;
      current.sample[i].pos = 0U;
      current.sample[i].audio_data = ss->WAV[which].audio_buf;
      current.sample[i].filename = ss->WAV[which].filename;
      SDL_UnlockAudio();
      return;
    }
    i ++;
  }
  printf((char const   */* __restrict  */)"%-14.14s| ", "play_sound");
  printf((char const   */* __restrict  */)"No room in the mixer for sound %d\n",
         which);
  fflush(stdout);
  return;
}
}

void stop_all_playing(void) 
{ int i ;

  {
  i = 0;
  while (i < 32) {
    current.sample[i].in_use = 0;
    i ++;
  }
  return;
}
}

void play_all_sounds(sound_style *ss ) 
{ int i ;
  int delay ;

  {
  delay = 0;
  i = 0;
  while (i < 7) {
    if (i == 6) {
      goto __Cont;
    }
    play_sound(ss, i, delay);
    delay = (int )((unsigned int )delay + (ss->WAV[i].audio_len + 6144U));
    __Cont: 
    i ++;
  }
  return;
}
}

static sound_style *load_sound_style(char const   *filename ) 
{ sound_style *retval ;
  char buf[2048] ;
  FILE *fin ;
  FILE *tmp ;
  int ok ;
  int count ;
  void *tmp___0 ;
  char *tmp___2 ;
  char *tmp___4 ;
  char *tmp___14 ;
  int i ;
  int tmp___15 ;
  int tmp___16 ;
  char *tmp___18 ;
  char *tmp___20 ;
  char *p ;
  char *tmp___22 ;
  char __attribute__((__visibility__("default")))  *tmp___23 ;
  SDL_RWops __attribute__((__visibility__("default")))  *tmp___24 ;
  SDL_AudioSpec __attribute__((__visibility__("default")))  *tmp___25 ;
  char *tmp___35 ;
  size_t tmp___36 ;
  int tmp___37 ;
  int tmp___38 ;

  {
  tmp = fopen((char const   */* __restrict  */)filename,
              (char const   */* __restrict  */)"rt");
  fin = tmp;
  count = 0;
  if (! fin) {
    printf((char const   */* __restrict  */)"%-14.14s| ", "load_sound_style");
    printf((char const   */* __restrict  */)"fopen(%s)\n", filename);
    fflush(stdout);
    return ((sound_style *)((void *)0));
  }
  tmp___0 = calloc(sizeof(sound_style ), 1U);
  retval = (sound_style *)tmp___0;
  if (! retval) {
    Panic("load_sound_style", "sound.c",
          (char *)"Out of Memory:\n\tcannot callocate %d bytes for retval",
          sizeof(sound_style ));
  }
  fgets((char */* __restrict  */)(buf), (int )sizeof(buf),
        (FILE */* __restrict  */)fin);
  tmp___4 = __builtin_strchr(buf, '\n');
  if (tmp___4) {
    tmp___2 = __builtin_strchr(buf, '\n');
    *tmp___2 = (char)0;
  }
  tmp___14 = __strdup((char const   *)(buf));
  retval->name = tmp___14;
  while (1) {
    tmp___38 = feof(fin);
    if (tmp___38) {
      break;
    }
    while (1) {
      fgets((char */* __restrict  */)(buf), (int )sizeof(buf),
            (FILE */* __restrict  */)fin);
      tmp___15 = feof(fin);
      if (tmp___15) {
        break;
      } else {
        if (! ((int )buf[0] == 10)) {
          if (! ((int )buf[0] == 35)) {
            break;
          }
        }
      }
    }
    tmp___16 = feof(fin);
    if (tmp___16) {
      break;
    }
    tmp___20 = __builtin_strchr(buf, '\n');
    if (tmp___20) {
      tmp___18 = __builtin_strchr(buf, '\n');
      *tmp___18 = (char)0;
    }
    ok = 0;
    i = 0;
    while (i < 7) {
      tmp___36 = strlen((char const   *)sound_name[i]);
      tmp___37 = strncasecmp((char const   *)(buf),
                             (char const   *)sound_name[i], tmp___36);
      if (! tmp___37) {
        tmp___22 = __builtin_strchr(buf, ' ');
        p = tmp___22;
        if (! p) {
          printf((char const   */* __restrict  */)"%-14.14s| ",
                 "load_sound_style");
          printf((char const   */* __restrict  */)"malformed input line [%s] in [%s]\n",
                 buf, filename);
          fflush(stdout);
          return ((sound_style *)((void *)0));
        }
        p ++;
        tmp___24 = SDL_RWFromFile((char const   *)p, "rb");
        tmp___25 = SDL_LoadWAV_RW((SDL_RWops *)tmp___24, 1,
                                  & retval->WAV[i].spec,
                                  & retval->WAV[i].audio_buf,
                                  & retval->WAV[i].audio_len);
        if (! tmp___25) {
          tmp___23 = SDL_GetError();
          Panic("load_sound_style", "sound.c",
                (char *)"Couldn\'t open %s [%s] in [%s]: %s", sound_name[i], p,
                filename, tmp___23);
        }
        tmp___35 = __strdup(filename);
        retval->WAV[i].filename = tmp___35;
        count ++;
        ok = 1;
      }
      i ++;
    }
    if (! ok) {
      printf((char const   */* __restrict  */)"%-14.14s| ", "load_sound_style");
      printf((char const   */* __restrict  */)"unknown sound name [%s] in [%s]\nvalid names:",
             buf, filename);
      fflush(stdout);
      i = 0;
      while (i < 7) {
        printf((char const   */* __restrict  */)" %s", sound_name[i]);
        i ++;
      }
      printf((char const   */* __restrict  */)"\n");
      return ((sound_style *)((void *)0));
    }
  }
  printf((char const   */* __restrict  */)"%-14.14s| ", "load_sound_style");
  printf((char const   */* __restrict  */)"Sound Style [%s] loaded (%d/%d sounds).\n",
         retval->name, count, 7);
  fflush(stdout);
  return (retval);
}
}

static int sound_Select(struct dirent  const  *d ) 
{ char *tmp ;
  size_t tmp___0 ;
  char *tmp___1 ;

  {
  tmp = strstr((char const   *)(d->d_name), ".Sound");
  if (tmp) {
    tmp___0 = strlen((char const   *)(d->d_name));
    tmp___1 = strstr((char const   *)(d->d_name), ".Sound");
    if ((int )tmp___0 == (tmp___1 - (char *)(d->d_name)) + 6) {
      return (1);
    } else {
      return (0);
    }
  } else {
    return (0);
  }
}
}

sound_styles load_sound_styles(int sound_wanted ) 
{ sound_styles retval ;
  SDL_AudioSpec wanted ;
  DIR *my_dir ;
  int i ;
  char __attribute__((__visibility__("default")))  *tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  char __attribute__((__visibility__("default")))  *tmp___1 ;
  int __attribute__((__visibility__("default")))  tmp___2 ;
  struct dirent *this_file ;
  struct dirent *tmp___3 ;
  int tmp___4 ;
  int j ;
  void *tmp___5 ;
  char filespec[1024] ;
  struct dirent *this_file___0 ;
  struct dirent *tmp___6 ;
  int tmp___7 ;
  char *tmp___8 ;
  void *tmp___9 ;
  void *tmp___10 ;
  void *tmp___11 ;

  {
  i = 0;
  memset((void *)(& retval), 0, sizeof(retval));
  if (! sound_wanted) {
    goto nosound;
  }
  tmp___0 = SDL_InitSubSystem(16U);
  if (tmp___0) {
    printf((char const   */* __restrict  */)"%-14.14s| ", "load_sound_styles");
    tmp = SDL_GetError();
    printf((char const   */* __restrict  */)"Couldn\'t initialize audio subsystem: %s\n",
           tmp);
    fflush(stdout);
    goto nosound;
  }
  memset((void *)(& current), 0, sizeof(current));
  wanted.freq = 11025;
  wanted.format = (unsigned short)8;
  wanted.channels = (unsigned char)1;
  wanted.samples = (unsigned short)512;
  wanted.callback = & fill_audio;
  wanted.userdata = (void *)0;
  tmp___2 = SDL_OpenAudio(& wanted, (SDL_AudioSpec *)((void *)0));
  if (tmp___2 < (int __attribute__((__visibility__("default")))  )0) {
    printf((char const   */* __restrict  */)"%-14.14s| ", "load_sound_styles");
    tmp___1 = SDL_GetError();
    printf((char const   */* __restrict  */)"Couldn\'t open audio: %s\n",
           tmp___1);
    fflush(stdout);
    goto nosound;
  }
  my_dir = opendir("sounds");
  if (my_dir) {
    while (1) {
      tmp___3 = readdir(my_dir);
      this_file = tmp___3;
      if (! this_file) {
        break;
      }
      tmp___4 = sound_Select((struct dirent  const  *)this_file);
      if (tmp___4) {
        i ++;
      }
    }
    closedir(my_dir);
  } else {
    printf((char const   */* __restrict  */)"%-14.14s| ", "load_sound_styles");
    printf((char const   */* __restrict  */)"Cannot read directory [sounds/]: atris-sounds not found!\n");
    fflush(stdout);
    goto nosound;
  }
  my_dir = opendir("sounds");
  if (my_dir) {
    if (i >= 0) {
      tmp___5 = calloc(sizeof(*(retval.style)) * (unsigned int )i + 1U, 1U);
      retval.style = (sound_style **)tmp___5;
      if (! retval.style) {
        Panic("load_sound_styles", "sound.c",
              (char *)"Out of Memory:\n\tcannot callocate %d bytes for retval.style",
              sizeof(*(retval.style)) * (unsigned int )i + 1U);
      }
      retval.num_style = i + 1;
      j = 0;
      while (j < i) {
        tmp___6 = readdir(my_dir);
        this_file___0 = tmp___6;
        tmp___7 = sound_Select((struct dirent  const  *)this_file___0);
        if (! tmp___7) {
          continue;
        }
        sprintf((char */* __restrict  */)(filespec),
                (char const   */* __restrict  */)"sounds/%s",
                this_file___0->d_name);
        *(retval.style + j) = load_sound_style((char const   *)(filespec));
        tmp___8 = strstr((char const   *)(*(retval.style + j))->name, "Default");
        if (tmp___8) {
          retval.choice = j;
        }
        j ++;
      }
      closedir(my_dir);
      tmp___9 = calloc(sizeof(sound_style ), 1U);
      *(retval.style + i) = (sound_style *)tmp___9;
      if (! *(retval.style + i)) {
        Panic("load_sound_styles", "sound.c",
              (char *)"Out of Memory:\n\tcannot callocate %d bytes for retval.style[i]",
              sizeof(sound_style ));
      }
      (*(retval.style + i))->name = (char *)"No Sound";
      SDL_PauseAudio(0);
      return (retval);
    } else {
      Panic("load_sound_styles", "sound.c",
            (char *)"No sound styles [sounds/*.Sound] found.\n");
    }
  } else {
    Panic("load_sound_styles", "sound.c",
          (char *)"Cannot read directory [sounds/]");
  }
  printf((char const   */* __restrict  */)"%-14.14s| ", "load_sound_styles");
  printf((char const   */* __restrict  */)"No sound styles [sounds/*.Sound] found.\n");
  fflush(stdout);
  nosound: 
  retval.num_style = 1;
  tmp___10 = malloc(sizeof(*(retval.style)));
  retval.style = (sound_style **)tmp___10;
  if (! retval.style) {
    Panic("load_sound_styles", "sound.c",
          (char *)"Out of Memory:\n\tcannot allocate %d bytes for retval.style",
          sizeof(*(retval.style)));
  }
  tmp___11 = calloc(sizeof(sound_style ), 1U);
  *(retval.style + 0) = (sound_style *)tmp___11;
  if (! *(retval.style + 0)) {
    Panic("load_sound_styles", "sound.c",
          (char *)"Out of Memory:\n\tcannot callocate %d bytes for retval.style[0]",
          sizeof(sound_style ));
  }
  (*(retval.style + 0))->name = (char *)"No Sound";
  return (retval);
}
}

extern int __attribute__((__visibility__("default")))  SDL_Flip(SDL_Surface *screen ) ;

extern int __attribute__((__visibility__("default")))  SDL_LockSurface(SDL_Surface *surface ) ;

extern void __attribute__((__visibility__("default")))  SDL_UnlockSurface(SDL_Surface *surface ) ;

int powerof(unsigned int n ) 
{ int p ;

  {
  if (n <= 1U) {
    p = 0;
  } else {
    if (n <= 2U) {
      p = 1;
    } else {
      if (n <= 4U) {
        p = 2;
      } else {
        if (n <= 8U) {
          p = 3;
        } else {
          if (n <= 16U) {
            p = 4;
          } else {
            if (n <= 32U) {
              p = 5;
            } else {
              if (n <= 64U) {
                p = 6;
              } else {
                if (n <= 128U) {
                  p = 7;
                } else {
                  if (n <= 256U) {
                    p = 8;
                  } else {
                    if (n <= 512U) {
                      p = 9;
                    } else {
                      if (n <= 1024U) {
                        p = 10;
                      } else {
                        if (n <= 2048U) {
                          p = 11;
                        } else {
                          if (n <= 4096U) {
                            p = 12;
                          } else {
                            if (n <= 8192U) {
                              p = 13;
                            } else {
                              if (n <= 16384U) {
                                p = 14;
                              } else {
                                if (n <= 32768U) {
                                  p = 15;
                                } else {
                                  if (n <= 65536U) {
                                    p = 16;
                                  } else {
                                    if (n <= 131072U) {
                                      p = 17;
                                    } else {
                                      if (n <= 262144U) {
                                        p = 18;
                                      } else {
                                        if (n <= 524288U) {
                                          p = 19;
                                        } else {
                                          if (n <= 1048576U) {
                                            p = 20;
                                          } else {
                                            if (n <= 2097152U) {
                                              p = 21;
                                            } else {
                                              if (n <= 4194304U) {
                                                p = 22;
                                              } else {
                                                if (n <= 8388608U) {
                                                  p = 23;
                                                } else {
                                                  if (n <= 16777216U) {
                                                    p = 24;
                                                  } else {
                                                    if (n <= 33554432U) {
                                                      p = 25;
                                                    } else {
                                                      if (n <= 67108864U) {
                                                        p = 26;
                                                      } else {
                                                        if (n <= 134217728U) {
                                                          p = 27;
                                                        } else {
                                                          if (n <= 268435456U) {
                                                            p = 28;
                                                          } else {
                                                            if (n <= 536870912U) {
                                                              p = 29;
                                                            } else {
                                                              if (n <= 1073741824U) {
                                                                p = 30;
                                                              } else {
                                                                if (n <= 2147483648U) {
                                                                  p = 31;
                                                                } else {
                                                                  p = 32;
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return (p);
}
}

static void SetFlamePalette(struct globaldata *gb , int f___0 , int *ctab___0 ) 
{ int r ;
  int g___0 ;
  int b ;
  int i ;
  SDL_Color cmap[300] ;
  Uint32 __attribute__((__visibility__("default")))  tmp ;

  {
  b = 0;
  g___0 = b;
  r = g___0;
  i = 0;
  while (1) {
    if (! (r != 255)) {
      if (! (g___0 != 255)) {
        if (! (b != 255)) {
          break;
        }
      }
    }
    r = i * 3;
    g___0 = (i - 80) * 3;
    b = (i - 160) * 3;
    if (r < 0) {
      r = 0;
    }
    if (r > 255) {
      r = 255;
    }
    if (g___0 < 0) {
      g___0 = 0;
    }
    if (g___0 > 255) {
      g___0 = 255;
    }
    if (b < 0) {
      b = 0;
    }
    if (b > 255) {
      b = 255;
    }
    cmap[i].r = (unsigned char )r;
    cmap[i].g = (unsigned char )g___0;
    cmap[i].b = (unsigned char )b;
    i ++;
  }
  SDL_SetColors(gb->screen, cmap, 0, i);
  i = 0;
  while (i < 300) {
    r = i * 3;
    g___0 = (i - 80) * 3;
    b = (i - 160) * 3;
    if (r < 0) {
      r = 0;
    }
    if (r > 255) {
      r = 255;
    }
    if (g___0 < 0) {
      g___0 = 0;
    }
    if (g___0 > 255) {
      g___0 = 255;
    }
    if (b < 0) {
      b = 0;
    }
    if (b > 255) {
      b = 255;
    }
    tmp = SDL_MapRGB((SDL_PixelFormat const   *)(gb->screen)->format,
                     (unsigned char )r, (unsigned char )g___0, (unsigned char )b);
    *(ctab___0 + i) = (int )tmp;
    i ++;
  }
  return;
}
}

static void XFSetRandomFlameBase(int *f___0 , int w___1 , int ws___0 ,
                                 int h___1 ) 
{ int x ;
  int y ;
  int *ptr ;
  Uint16 tmp ;

  {
  SeedRandom(0U);
  y = h___1 - 1;
  x = 0;
  while (x < w___1) {
    ptr = (f___0 + (y << ws___0)) + x;
    tmp = FastRandom((unsigned short)300);
    *ptr = (int )tmp;
    x ++;
  }
  return;
}
}

static void XFModifyFlameBase(int *f___0 , int w___1 , int ws___0 , int h___1 ) 
{ int x ;
  int y ;
  int *ptr ;
  int val ;
  Uint16 tmp ;

  {
  y = h___1 - 1;
  x = 0;
  while (x < w___1) {
    ptr = (f___0 + (y << ws___0)) + x;
    tmp = FastRandom((unsigned short)5);
    *ptr += (int )tmp - 2;
    val = *ptr;
    if (val > 300) {
      *ptr = 0;
    }
    if (val < 0) {
      *ptr = 0;
    }
    x ++;
  }
  return;
}
}

static void XFProcessFlame(int *f___0 , int w___1 , int ws___0 , int h___1 ,
                           int *ff ) 
{ int x ;
  int y ;
  int *ptr ;
  int *p ;
  int tmp ;
  int val ;

  {
  y = h___1 - 1;
  while (y >= 2) {
    x = 1;
    while (x < w___1 - 1) {
      ptr = (f___0 + (y << ws___0)) + x;
      val = *ptr;
      if (val > 300) {
        *ptr = 300;
      }
      val = *ptr;
      if (val > 0) {
        tmp = val * 78 >> 8;
        p = ptr - (2 << ws___0);
        *p += tmp >> 1;
        p = ptr - (1 << ws___0);
        *p += tmp;
        tmp = val * 26 >> 8;
        p = (ptr - (1 << ws___0)) - 1;
        *p += tmp;
        p = (ptr - (1 << ws___0)) + 1;
        *p += tmp;
        p = ptr - 1;
        *p += tmp >> 1;
        p = ptr + 1;
        *p += tmp >> 1;
        p = (ff + (y << ws___0)) + x;
        *p = val;
        if (y < h___1 - 1) {
          *ptr = val * 68 >> 8;
        }
      }
      x ++;
    }
    y --;
  }
  return;
}
}

static void XFDrawFlameBLOK(struct globaldata *g___0 , int *f___0 , int w___1 ,
                            int ws___0 , int h___1 , int *ctab___0 ) 
{ int x ;
  int y ;
  int *ptr ;
  int xx ;
  int yy ;
  int cl ;
  int cl1 ;
  int cl2 ;
  int cl3 ;
  int cl4 ;
  unsigned char *cptr ;
  unsigned char *im ;
  unsigned char *p ;
  int __attribute__((__visibility__("default")))  tmp ;

  {
  tmp = SDL_LockSurface(g___0->screen);
  if (tmp < (int __attribute__((__visibility__("default")))  )0) {
    return;
  }
  im = (unsigned char *)(g___0->screen)->pixels;
  y = 0;
  while (y < h___1 - 1) {
    x = 0;
    while (x < w___1 - 1) {
      xx = x << 1;
      yy = y << 1;
      ptr = (f___0 + (y << ws___0)) + x;
      cl = *ptr;
      cl1 = cl;
      ptr = ((f___0 + (y << ws___0)) + x) + 1;
      cl2 = *ptr;
      ptr = ((f___0 + ((y + 1) << ws___0)) + x) + 1;
      cl3 = *ptr;
      ptr = (f___0 + ((y + 1) << ws___0)) + x;
      cl4 = *ptr;
      cptr = (im + yy * (int )(g___0->screen)->pitch) + xx;
      *cptr = (unsigned char )*(ctab___0 + cl % 300);
      p = cptr + 1;
      *p = (unsigned char )*(ctab___0 + ((cl1 + cl2) >> 1) % 300);
      p = (cptr + 1) + (int )(g___0->screen)->pitch;
      *p = (unsigned char )*(ctab___0 + ((cl1 + cl3) >> 1) % 300);
      p = cptr + (int )(g___0->screen)->pitch;
      *p = (unsigned char )*(ctab___0 + ((cl1 + cl4) >> 1) % 300);
      x ++;
    }
    y ++;
  }
  SDL_UnlockSurface(g___0->screen);
  SDL_Flip(g___0->screen);
  return;
}
}

static void XFUpdate(struct globaldata *g___0 ) 
{ int i ;

  {
  if (((g___0->screen)->flags & 1073741824U) == 1073741824U) {
    SDL_Flip(g___0->screen);
  } else {
    i = 0;
    while (i < g___0->nrects) {
      SDL_UpperBlit(flame_layer, g___0->rects + i, screen, g___0->rects + i);
      SDL_UpperBlit(widget_layer, g___0->rects + i, screen, g___0->rects + i);
      i ++;
    }
    SDL_UpdateRects(screen, g___0->nrects, g___0->rects);
  }
  return;
}
}

static void XFDrawFlameLACE(struct globaldata *g___0 , int *f___0 , int w___1 ,
                            int ws___0 , int h___1 , int *ctab___0 ) 
{ int x ;
  int y ;
  int *ptr ;
  int xx ;
  int yy ;
  int cl ;
  int cl1 ;
  int cl2 ;
  int cl3 ;
  int cl4 ;
  unsigned char *cptr ;
  unsigned char *im ;
  unsigned char *p ;
  int __attribute__((__visibility__("default")))  tmp ;

  {
  tmp = SDL_LockSurface(g___0->screen);
  if (tmp < (int __attribute__((__visibility__("default")))  )0) {
    return;
  }
  im = (unsigned char *)(g___0->screen)->pixels;
  y = 0;
  while (y < h___1 - 1) {
    x = 0;
    while (x < w___1 - 1) {
      xx = x << 1;
      yy = y << 1;
      ptr = (f___0 + (y << ws___0)) + x;
      cl = *ptr;
      cl1 = cl;
      ptr = ((f___0 + (y << ws___0)) + x) + 1;
      cl2 = *ptr;
      ptr = ((f___0 + ((y + 1) << ws___0)) + x) + 1;
      cl3 = *ptr;
      ptr = (f___0 + ((y + 1) << ws___0)) + x;
      cl4 = *ptr;
      cptr = (im + yy * (int )(g___0->screen)->pitch) + xx;
      *cptr = (unsigned char )*(ctab___0 + cl % 300);
      p = cptr + 1;
      *p = (unsigned char )*(ctab___0 + ((cl1 + cl2) >> 1) % 300);
      p = (cptr + 1) + (int )(g___0->screen)->pitch;
      *p = (unsigned char )*(ctab___0 + ((cl1 + cl3) >> 1) % 300);
      p = cptr + (int )(g___0->screen)->pitch;
      *p = (unsigned char )*(ctab___0 + ((cl1 + cl4) >> 1) % 300);
      x ++;
    }
    y ++;
  }
  SDL_UnlockSurface(g___0->screen);
  w___1 <<= 1;
  h___1 <<= 1;
  g___0->nrects = 0;
  y = 0;
  while (y < h___1 - 1) {
    (g___0->rects + g___0->nrects)->x = (short)0;
    (g___0->rects + g___0->nrects)->y = (short )y;
    (g___0->rects + g___0->nrects)->w = (unsigned short )w___1;
    (g___0->rects + g___0->nrects)->h = (unsigned short)1;
    (g___0->nrects) ++;
    y += 4;
  }
  XFUpdate(g___0);
  g___0->nrects = 0;
  y = 2;
  while (y < h___1 - 1) {
    (g___0->rects + g___0->nrects)->x = (short)0;
    (g___0->rects + g___0->nrects)->y = (short )y;
    (g___0->rects + g___0->nrects)->w = (unsigned short )w___1;
    (g___0->rects + g___0->nrects)->h = (unsigned short)1;
    (g___0->nrects) ++;
    y += 4;
  }
  XFUpdate(g___0);
  g___0->nrects = 0;
  y = 1;
  while (y < h___1 - 1) {
    (g___0->rects + g___0->nrects)->x = (short)0;
    (g___0->rects + g___0->nrects)->y = (short )y;
    (g___0->rects + g___0->nrects)->w = (unsigned short )w___1;
    (g___0->rects + g___0->nrects)->h = (unsigned short)1;
    (g___0->nrects) ++;
    y += 4;
  }
  XFUpdate(g___0);
  g___0->nrects = 0;
  y = 3;
  while (y < h___1 - 1) {
    (g___0->rects + g___0->nrects)->x = (short)0;
    (g___0->rects + g___0->nrects)->y = (short )y;
    (g___0->rects + g___0->nrects)->w = (unsigned short )w___1;
    (g___0->rects + g___0->nrects)->h = (unsigned short)1;
    (g___0->nrects) ++;
    y += 4;
  }
  XFUpdate(g___0);
  return;
}
}

static void XFDrawFlame(struct globaldata *g___0 , int *f___0 , int w___1 ,
                        int ws___0 , int h___1 , int *ctab___0 ) 
{ int x ;
  int y ;
  int *ptr ;
  int xx ;
  int yy ;
  int cl ;
  int cl1 ;
  int cl2 ;
  int cl3 ;
  int cl4 ;
  unsigned char *cptr ;
  unsigned char *im ;
  unsigned char *p ;
  int __attribute__((__visibility__("default")))  tmp ;

  {
  tmp = SDL_LockSurface(g___0->screen);
  if (tmp < (int __attribute__((__visibility__("default")))  )0) {
    return;
  }
  im = (unsigned char *)(g___0->screen)->pixels;
  y = 0;
  while (y < h___1 - 1) {
    x = 0;
    while (x < w___1 - 1) {
      xx = x << 1;
      yy = y << 1;
      ptr = (f___0 + (y << ws___0)) + x;
      cl = *ptr;
      cl1 = cl;
      ptr = ((f___0 + (y << ws___0)) + x) + 1;
      cl2 = *ptr;
      ptr = ((f___0 + ((y + 1) << ws___0)) + x) + 1;
      cl3 = *ptr;
      ptr = (f___0 + ((y + 1) << ws___0)) + x;
      cl4 = *ptr;
      cptr = (im + yy * (int )(g___0->screen)->pitch) + xx;
      *cptr = (unsigned char )*(ctab___0 + cl % 300);
      p = cptr + 1;
      *p = (unsigned char )*(ctab___0 + ((cl1 + cl2) >> 1) % 300);
      p = (cptr + 1) + (int )(g___0->screen)->pitch;
      *p = (unsigned char )*(ctab___0 + ((cl1 + cl3) >> 1) % 300);
      p = cptr + (int )(g___0->screen)->pitch;
      *p = (unsigned char )*(ctab___0 + ((cl1 + cl4) >> 1) % 300);
      x ++;
    }
    y ++;
  }
  SDL_UnlockSurface(g___0->screen);
  w___1 <<= 1;
  h___1 <<= 1;
  g___0->nrects = 0;
  y = 0;
  while (y < h___1 - 1) {
    (g___0->rects + g___0->nrects)->x = (short)0;
    (g___0->rects + g___0->nrects)->y = (short )y;
    (g___0->rects + g___0->nrects)->w = (unsigned short )w___1;
    (g___0->rects + g___0->nrects)->h = (unsigned short)1;
    (g___0->nrects) ++;
    y += 2;
  }
  XFUpdate(g___0);
  g___0->nrects = 0;
  y = 1;
  while (y < h___1 - 1) {
    (g___0->rects + g___0->nrects)->x = (short)0;
    (g___0->rects + g___0->nrects)->y = (short )y;
    (g___0->rects + g___0->nrects)->w = (unsigned short )w___1;
    (g___0->rects + g___0->nrects)->h = (unsigned short)1;
    (g___0->nrects) ++;
    y += 2;
  }
  XFUpdate(g___0);
  return;
}
}

static int *flame  ;

static int flamesize  ;

static int ws  ;

static int flamewidth  ;

static int flameheight  ;

static int *flame2  ;

static struct globaldata *g  ;

static int w___0  ;

static int h___0  ;

static int f  ;

static int *ctab  ;

void atris_run_flame(void) 
{ 

  {
  if (! Options.flame_wanted) {
    return;
  }
  XFModifyFlameBase(flame, w___0 >> 1, ws, h___0 >> 1);
  XFProcessFlame(flame, w___0 >> 1, ws, h___0 >> 1, flame2);
  if (f & 32) {
    XFDrawFlameBLOK(g, flame2, w___0 >> 1, ws, h___0 >> 1, ctab);
  } else {
    if (f & 64) {
      XFDrawFlameLACE(g, flame2, w___0 >> 1, ws, h___0 >> 1, ctab);
    } else {
      XFDrawFlame(g, flame2, w___0 >> 1, ws, h___0 >> 1, ctab);
    }
  }
  return;
}
}

static int Xflame(struct globaldata *_g , int _w , int _h , int _f , int *_ctab ) 
{ void *tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;

  {
  g = _g;
  w___0 = _w;
  h___0 = _h;
  f = _f;
  ctab = _ctab;
  flamewidth = w___0 >> 1;
  flameheight = h___0 >> 1;
  ws = powerof((unsigned int )flamewidth);
  flamesize = (int )((unsigned int )((1 << ws) * flameheight) * sizeof(int ));
  tmp = malloc((unsigned int )flamesize);
  flame = (int *)tmp;
  if (! flame) {
    return (0);
  }
  memset((void *)flame, 0, (unsigned int )flamesize);
  tmp___0 = malloc((unsigned int )flamesize);
  flame2 = (int *)tmp___0;
  if (! flame2) {
    return (0);
  }
  memset((void *)flame2, 0, (unsigned int )flamesize);
  if (f & 32) {
    g->rects = (SDL_Rect *)((void *)0);
  } else {
    if (f & 64) {
      tmp___1 = malloc((unsigned int )(h___0 >> 2) * sizeof(SDL_Rect ));
      g->rects = (SDL_Rect *)tmp___1;
      if (! g->rects) {
        return (0);
      }
    } else {
      tmp___2 = malloc((unsigned int )(h___0 >> 1) * sizeof(SDL_Rect ));
      g->rects = (SDL_Rect *)tmp___2;
      if (! g->rects) {
        return (0);
      }
    }
  }
  XFSetRandomFlameBase(flame, w___0 >> 1, ws, h___0 >> 1);
  return (0);
}
}

static struct globaldata glob  ;

static int flags  ;

static int colortab[300]  ;

void atris_xflame_setup(void) 
{ 

  {
  memset((void *)(& glob), 0, sizeof(glob));
  glob.flags |= 536870912U;
  glob.screen = flame_layer;
  SetFlamePalette(& glob, flags, colortab);
  Xflame(& glob, (glob.screen)->w, (glob.screen)->h, flags, colortab);
  return;
}
}

