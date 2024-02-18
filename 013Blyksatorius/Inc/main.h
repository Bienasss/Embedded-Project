/*
 * main.h
 *
 *  Created on: Feb 15, 2024
 *      Author: Benas
 */

#ifndef MAIN_H_
#define MAIN_H_

#include <stdint.h>

#define ADDR_RCC_AHB1ENR	((RCC_AHB1ENR *) 0x40023830)
#define ADDR_GPIOD_MODER 	((GPIOx_MODER *)0x40020C00)
#define ADDR_GPIOD_ODR 		((GPIOx_ODR *)0x40020C14)
#define ADDR_GPIOD_IDR 		((GPIOx_IDR *)0x40020C10)
#define ADDR_GPIOD_PUPDR 	((GPIOx_PUPDR *)0x40020C0C)

#define STATE_ENABLED 		(1)
#define STATE_DISABLED 		(0)


#define ERROR_CYCLE 		(100000)
#define DIT_CYCLE 			(250000)
#define DAH_CYCLE 			(750000)
#define WORD_CYCLE	 		(1000000)

#define STATE_LOW 			(0)
#define STATE_HIGH 			(1)

#define LED_OFF 			(0)
#define LED_ON 				(1)

#define MODE_OUTPUT 		(1)
#define MODE_INPUT 			(0)


typedef struct{
	uint32_t gpioa_en		:1;
	uint32_t gpiob_en		:1;
	uint32_t gpioc_en		:1;
	uint32_t gpiod_en		:1;
	uint32_t gpioe_en		:1;
	uint32_t gpiof_en		:1;
	uint32_t gpiog_en		:1;
	uint32_t gpioh_en		:1;
	uint32_t gpioi_en		:1;

	uint32_t reserved_0		:3;

	uint32_t crc_en			:1;

	uint32_t reserved_1		:5;

	uint32_t bkpsram_en		:1;

	uint32_t reserved_2		:1;

	uint32_t ccdataram_en	:1;
	uint32_t dma1_en		:1;
	uint32_t dma2_en		:1;

	uint32_t reserved_3		:2;

	uint32_t ethmac_en		:1;
	uint32_t ethmactx_en	:1;
	uint32_t ethmacrx_en	:1;
	uint32_t ethmacptp_en	:1;
	uint32_t otghs_en		:1;
	uint32_t otghsulpi_en	:1;

	uint32_t reserved_4		:1;
}RCC_AHB1ENR;

typedef struct{
	uint32_t moder_0	:2;
	uint32_t moder_1	:2;
	uint32_t moder_2	:2;
	uint32_t moder_3	:2;
	uint32_t moder_4	:2;
	uint32_t moder_5	:2;
	uint32_t moder_6	:2;
	uint32_t moder_7	:2;
	uint32_t moder_8	:2;
	uint32_t moder_9	:2;
	uint32_t moder_10	:2;
	uint32_t moder_11	:2;
	uint32_t moder_12	:2;
	uint32_t moder_13	:2;
	uint32_t moder_14	:2;
	uint32_t moder_15	:2;
}GPIOx_MODER;

typedef struct{
	uint32_t pupdr_0	:2;
	uint32_t pupdr_1	:2;
	uint32_t pupdr_2	:2;
	uint32_t pupdr_3	:2;
	uint32_t pupdr_4	:2;
	uint32_t pupdr_5	:2;
	uint32_t pupdr_6	:2;
	uint32_t pupdr_7	:2;
	uint32_t pupdr_8	:2;
	uint32_t pupdr_9	:2;
	uint32_t pupdr_10	:2;
	uint32_t pupdr_11	:2;
	uint32_t pupdr_12	:2;
	uint32_t pupdr_13	:2;
	uint32_t pupdr_14	:2;
	uint32_t pupdr_15	:2;
}GPIOx_PUPDR;

typedef struct{
	uint32_t odr_0		:1;
	uint32_t odr_1		:1;
	uint32_t odr_2		:1;
	uint32_t odr_3		:1;
	uint32_t odr_4		:1;
	uint32_t odr_5		:1;
	uint32_t odr_6		:1;
	uint32_t odr_7		:1;
	uint32_t odr_8		:1;
	uint32_t odr_9		:1;
	uint32_t odr_10		:1;
	uint32_t odr_11		:1;
	uint32_t odr_12		:1;
	uint32_t odr_13		:1;
	uint32_t odr_14		:1;
	uint32_t odr_15		:1;
	uint32_t reserved	:16;
}GPIOx_ODR;

typedef struct{
	uint32_t idr_0		:1;
	uint32_t idr_1		:1;
	uint32_t idr_2		:1;
	uint32_t idr_3		:1;
	uint32_t idr_4		:1;
	uint32_t idr_5		:1;
	uint32_t idr_6		:1;
	uint32_t idr_7		:1;
	uint32_t idr_8		:1;
	uint32_t idr_9		:1;
	uint32_t idr_10		:1;
	uint32_t idr_11		:1;
	uint32_t idr_12		:1;
	uint32_t idr_13		:1;
	uint32_t idr_14		:1;
	uint32_t idr_15		:1;
	uint32_t reserved	:16;
}GPIOx_IDR;


#endif /* MAIN_H_ */
