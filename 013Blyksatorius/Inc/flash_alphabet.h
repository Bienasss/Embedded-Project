/*
 * flash_alphabet.h
 *
 *  Created on: Feb 15, 2024
 *      Author: Benas
 */

#ifndef FLASH_ALPHABET_H_
#define FLASH_ALPHABET_H_

#include "flasher.h"

void flash_A(GPIOx_ODR *pGpiodOutReg){
	dit(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dah_delay();
}
void flash_B(GPIOx_ODR *pGpiodOutReg){
	dah(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dah_delay();
}
void flash_C(GPIOx_ODR *pGpiodOutReg){
	dah(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dah_delay();
}
void flash_D(GPIOx_ODR *pGpiodOutReg){
	dah(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dah_delay();
}
void flash_E(GPIOx_ODR *pGpiodOutReg){
	dit(pGpiodOutReg);
	dah_delay();
}
void flash_F(GPIOx_ODR *pGpiodOutReg){
	dit(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dah_delay();
}
void flash_G(GPIOx_ODR *pGpiodOutReg){
	dah(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dah_delay();
}
void flash_H(GPIOx_ODR *pGpiodOutReg){
	dit(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dah_delay();
}
void flash_I(GPIOx_ODR *pGpiodOutReg){
	dit(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dah_delay();
}
void flash_J(GPIOx_ODR *pGpiodOutReg){
	dit(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dah_delay();
}
void flash_K(GPIOx_ODR *pGpiodOutReg){
	dah(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dah_delay();
}
void flash_L(GPIOx_ODR *pGpiodOutReg){
	dit(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dah_delay();
}
void flash_M(GPIOx_ODR *pGpiodOutReg){
	dah(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dah_delay();
}
void flash_N(GPIOx_ODR *pGpiodOutReg){
	dah(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dah_delay();
}
void flash_O(GPIOx_ODR *pGpiodOutReg){
	dah(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dah_delay();
}
void flash_P(GPIOx_ODR *pGpiodOutReg){
	dit(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dah_delay();
}
void flash_Q(GPIOx_ODR *pGpiodOutReg){
	dah(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dah_delay();
}
void flash_R(GPIOx_ODR *pGpiodOutReg){
	dit(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dah_delay();
}
void flash_S(GPIOx_ODR *pGpiodOutReg){
	dit(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dah_delay();
}
void flash_T(GPIOx_ODR *pGpiodOutReg){
	dah(pGpiodOutReg);
	dah_delay();
}
void flash_U(GPIOx_ODR *pGpiodOutReg){
	dit(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dah_delay();
}
void flash_V(GPIOx_ODR *pGpiodOutReg){
	dit(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dah_delay();
}
void flash_W(GPIOx_ODR *pGpiodOutReg){
	dit(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dah_delay();
}
void flash_X(GPIOx_ODR *pGpiodOutReg){
	dah(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dah_delay();
}
void flash_Y(GPIOx_ODR *pGpiodOutReg){
	dah(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dah_delay();
}
void flash_Z(GPIOx_ODR *pGpiodOutReg){
	dah(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dah_delay();
}
void flash_1(GPIOx_ODR *pGpiodOutReg){
	dit(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dah_delay();
}
void flash_2(GPIOx_ODR *pGpiodOutReg){
	dit(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dah_delay();
}
void flash_3(GPIOx_ODR *pGpiodOutReg){
	dit(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dah_delay();
}
void flash_4(GPIOx_ODR *pGpiodOutReg){
	dit(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dah_delay();
}
void flash_5(GPIOx_ODR *pGpiodOutReg){
	dit(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dah_delay();
}
void flash_6(GPIOx_ODR *pGpiodOutReg){
	dah(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dah_delay();
}
void flash_7(GPIOx_ODR *pGpiodOutReg){
	dah(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dah_delay();
}
void flash_8(GPIOx_ODR *pGpiodOutReg){
	dah(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dah_delay();
}
void flash_9(GPIOx_ODR *pGpiodOutReg){
	dah(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dit_delay();
	dit(pGpiodOutReg);
	dah_delay();
}
void flash_0(GPIOx_ODR *pGpiodOutReg){
	dah(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dit_delay();
	dah(pGpiodOutReg);
	dah_delay();
}

#endif /* FLASH_ALPHABET_H_ */
