/*
 * flasher.h
 *
 *  Created on: Feb 15, 2024
 *      Author: Benas
 */

#ifndef FLASHER_H_
#define FLASHER_H_

#include "main.h"

void dit_delay(){
	for(uint32_t i = 1; i <= DIT_CYCLE; i++);
}
void dah_delay(){
	for(uint32_t i = 1; i <= DAH_CYCLE; i++);
}
void word_delay(){
	for(uint32_t i = 1; i <= WORD_CYCLE; i++);
}
void dit(GPIOx_ODR *pGpiodOutReg){
	pGpiodOutReg->odr_12 = 1;
	for(uint32_t i = 1; i <= DIT_CYCLE; i++);
	pGpiodOutReg->odr_12 = 0;
}
void dah(GPIOx_ODR *pGpiodOutReg){
	pGpiodOutReg->odr_12 = 1;
	for(uint32_t i = 1; i <= DAH_CYCLE; i++);
	pGpiodOutReg->odr_12 = 0;
}
void blue_dah(GPIOx_ODR volatile *pGpiodOutReg){
	pGpiodOutReg->odr_15 = 1;
	for(uint32_t i = 1; i <= DAH_CYCLE; i++);
	pGpiodOutReg->odr_15 = 0;
}
void err_flash(GPIOx_ODR *pGpiodOutReg){
		pGpiodOutReg->odr_12 = 1;
		for(uint32_t i = 1; i <= ERROR_CYCLE; i++);
		pGpiodOutReg->odr_12 = 0;
		pGpiodOutReg->odr_13 = 1;
		for(uint32_t i = 1; i <= ERROR_CYCLE; i++);
		pGpiodOutReg->odr_13 = 0;
		pGpiodOutReg->odr_14 = 1;
		for(uint32_t i = 1; i <= ERROR_CYCLE; i++);
		pGpiodOutReg->odr_14= 0;
		pGpiodOutReg->odr_15 = 1;
		for(uint32_t i = 1; i <= ERROR_CYCLE; i++);
		pGpiodOutReg->odr_15 = 0;
}
void reset_flash(GPIOx_ODR *pGpiodOutReg){
		pGpiodOutReg->odr_14 = 1;
		for(uint32_t i = 1; i <= ERROR_CYCLE; i++);
		pGpiodOutReg->odr_14= 0;
		for(uint32_t i = 1; i <= ERROR_CYCLE; i++);
		pGpiodOutReg->odr_14 = 1;
		for(uint32_t i = 1; i <= ERROR_CYCLE; i++);
		pGpiodOutReg->odr_14= 0;
		for(uint32_t i = 1; i <= ERROR_CYCLE; i++);
		pGpiodOutReg->odr_14 = 1;
		for(uint32_t i = 1; i <= ERROR_CYCLE; i++);
		pGpiodOutReg->odr_14= 0;
		for(uint32_t i = 1; i <= ERROR_CYCLE; i++);
}


#endif /* FLASHER_H_ */
