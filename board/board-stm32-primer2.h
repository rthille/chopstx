#define FLASH_PAGE_SIZE 2048

#define STM32_PLLXTPRE                  STM32_PLLXTPRE_DIV1
#define STM32_PLLMUL_VALUE              6
#define STM32_HSECLK                    12000000

#define GPIO_LED_BASE   GPIOE_BASE
#define GPIO_LED_CLEAR_TO_EMIT          0
#define GPIO_USB_BASE   GPIOD_BASE
#define GPIO_USB_CLEAR_TO_ENABLE        3
#define GPIO_OTHER_BASE GPIOA_BASE

/*
 * Port A setup.
 * PA0  - input with pull-up.  AN0
 * PA1  - input with pull-up.  AN1
 * PA11 - Push Pull output 10MHz 0 default (until USB enabled) (USBDM) 
 * PA12 - Push Pull output 10MHz 0 default (until USB enabled) (USBDP)
 * ------------------------ Default
 * PAx  - input with pull-up
 */
#define VAL_GPIO_OTHER_ODR            0xFFFFE7FF
#define VAL_GPIO_OTHER_CRL            0x88888888      /*  PA7...PA0 */
#define VAL_GPIO_OTHER_CRH            0x88811888      /* PA15...PA8 */

/*
 * Port D setup.
 * PD3  - Push pull output 50MHz (USB 1:ON 0:OFF)
 * ------------------------ Default
 * PDx  - input with pull-up
 */
#define VAL_GPIO_USB_ODR            0xFFFFFFFF
#define VAL_GPIO_USB_CRL            0x88883888      /*  PD7...PD0 */
#define VAL_GPIO_USB_CRH            0x88888888      /* PD15...PD8 */

/*
 * Port E setup.
 * PE0  - Push pull output   (LED 1:ON 0:OFF)
 * PE1  - Push pull output   (LED 1:ON 0:OFF)
 * ------------------------ Default
 * PEx  - input with pull-up
 */
#define VAL_GPIO_LED_ODR            0xFFFFFFFF
#define VAL_GPIO_LED_CRL            0x88888833      /*  PE7...PE0 */
#define VAL_GPIO_LED_CRH            0x88888888      /* PE15...PE8 */

#define RCC_ENR_IOP_EN \
	(RCC_APB2ENR_IOPAEN | RCC_APB2ENR_IOPDEN | RCC_APB2ENR_IOPEEN)
#define RCC_RSTR_IOP_RST \
	(RCC_APB2RSTR_IOPARST | RCC_APB2RSTR_IOPDRST | RCC_APB2RSTR_IOPERST)

/* NeuG settings for ADC2 is default (PA0: Analog IN0, PA1: Analog IN1).  */
