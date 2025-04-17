/*
 * app.c
 *
 *  Created on: Apr 17, 2025
 *      Author: max
 */

#include "app.h"
#include "OnBoardTest.h"

void app_main(void) {
	// Init
	OnBoardTest_init();

	// Loop
	for (;;){
		OnBoardTest_loop();
	}
}

