#include "quantum.h"

/* Default layout */
#define KEYMAP( \
	K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013,       \
	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113,       \
	K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213,       \
	K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312,             \
	K400, K401, K402,             K405,             K408, K409, K410, K411, K412, K413  \
) { \
	{ K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013 }, \
	{ K100,  K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113 }, \
	{ K200,  K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  K213 }, \
	{ K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  K312,  KC_NO  }, \
	{ K400,  K401,  K402,  KC_NO, KC_NO, K405,  KC_NO, KC_NO, K408,  K409,  K410,  K411,  K412,  K413 }  \
}



enum terrazzo_matrix_effects {
    TERRAZZO_NONE = 0,
// --------------------------------------
// -----Begin led effect enum macros-----
#define TERRAZZO_EFFECT(name, ...) TERRAZZO_EFFECT_##name,
#include "65knobs_effects/65knobs_effects.inc"
#undef TERRAZZO_EFFECT
    // --------------------------------------
    // -----End led effect enum macros-------
    // All new effects go above this line
    TERRAZZO_EFFECT_MAX
};

enum terrazzo_keycodes {
    TZ_NXT = SAFE_RANGE,
    TZ_PRV,
    TZ_OFF
};

void terrazzo_render(void);
void terrazzo_set_pixel(uint8_t x, uint8_t y, uint8_t value);
void terrazzo_draw_at(uint8_t x, uint8_t y, uint8_t width, uint8_t height, uint8_t image[]);
void terrazzo_scroll_pixel(bool clockwise);
void terrazzo_step_mode(void);
void terrazzo_step_mode_reverse(void);
void terrazzo_mode_off(void);
