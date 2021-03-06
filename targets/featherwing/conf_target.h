#pragma once

#define CONF_I2C_SLAVE_MODULE			SERCOM2

#define CONF_UART_MODULE				SERCOM3
#define CONF_UART_SERCOM_MUX_SETTING	USART_RX_1_TX_0_XCK_1
#define CONF_UART_SERCOM_PINMUX_PAD0	PINMUX_PA22C_SERCOM3_PAD0
#define CONF_UART_SERCOM_PINMUX_PAD1	PINMUX_PA23C_SERCOM3_PAD1
#define CONF_UART_SERCOM_PINMUX_PAD2	PINMUX_UNUSED
#define CONF_UART_SERCOM_PINMUX_PAD3	PINMUX_UNUSED

#define PWM1_MODULE						TC5
#define PWM1_OUT_PIN					PIN_PB10F_TC5_WO0
#define PWM1_OUT_MUX					MUX_PB10F_TC5_WO0
#define PWM1_CHANNEL					TC_COMPARE_CAPTURE_CHANNEL_0

#define PWM2_MODULE						TC5
#define PWM2_OUT_PIN					PIN_PA25F_TC5_WO1
#define PWM2_OUT_MUX					MUX_PA25F_TC5_WO1
#define PWM2_CHANNEL					TC_COMPARE_CAPTURE_CHANNEL_1

#define PIN_GPIO0						PIN_PA24
#define EIC_GPIO0						12
#define PIN_GPIO1						PIN_PA10
#define EIC_GPIO1						10
#define PIN_GPIO2						PIN_PB23
#define EIC_GPIO2						7
#define PIN_GPIO3						PIN_PA27
#define EIC_GPIO3						15
#define PIN_GPIO4						PIN_PA28
#define EIC_GPIO4						8
#define PIN_GPIO5						PIN_PB02
#define EIC_GPIO5						2
#define PIN_GPIO6						PIN_PB03
#define EIC_GPIO6						3

#define NUM_OF_COLS						5
#define NUM_OF_ROWS						7
#define NUM_OF_BTNS						9
