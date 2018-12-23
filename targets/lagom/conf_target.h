#pragma once

#define CONF_I2C_SLAVE_MODULE			SERCOM2

#define CONF_UART_MODULE				SERCOM3
#define CONF_UART_SERCOM_MUX_SETTING	USART_RX_1_TX_0_XCK_1
#define CONF_UART_SERCOM_PINMUX_PAD0	PINMUX_PA22C_SERCOM3_PAD0
#define CONF_UART_SERCOM_PINMUX_PAD1	PINMUX_PA23C_SERCOM3_PAD1
#define CONF_UART_SERCOM_PINMUX_PAD2	PINMUX_UNUSED
#define CONF_UART_SERCOM_PINMUX_PAD3	PINMUX_UNUSED

#define PWM_MODULE						TC1
#define PWM_OUT_PIN						PIN_PA11E_TC1_WO1
#define PWM_OUT_MUX						MUX_PA11E_TC1_WO1
#define PWM_CHANNEL						TC_COMPARE_CAPTURE_CHANNEL_1

#define NUM_OF_COLS						5
#define NUM_OF_ROWS						7
#define NUM_OF_BTNS						7