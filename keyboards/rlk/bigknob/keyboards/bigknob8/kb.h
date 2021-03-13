#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	K00, K01, K02, \
	     K11, K12,  \
	     K21, K22,  \
	     K31, K32  \
) { \
	{ K00,   K01,   K02 }, \
	{ KC_NO, K11,   K12 },  \
	{ KC_NO, K21,   K22 },  \
	{ KC_NO, K31,   K32 }  \
}

#endif