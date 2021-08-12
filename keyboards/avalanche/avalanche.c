#include "avalanche.h"
#include <avr/power.h>

void keyboard_pre_init_user(void) {
	clock_prescale_set(clock_div_2);
}