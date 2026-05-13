#ifndef GPIO_DRIVER_H
#define GPIO_DRIVER_H

#include <stdint.h>

/* configure pin direction: output*/
void gpio_config_output(volatile uint8_t *ddr, uint8_t pin);

/* configure pin direction: inpput*/
void gpio_config_input(volatile uint8_t *ddr, uint8_t pin);

/* configure pin direction: input with internal pull-up active*/
void gpio_config_input_pullup(volatile uint8_t *ddr, volatile uint8_t *port, uint8_t pin);

/* set pin HIGH*/
void gpio_set_pin(volatile uint8_t *port, uint8_t pin);

/* clear pin */
void gpio_clear_pin(volatile uint8_t *port, uint8_t pin);

/* toggle pin */
void gpio_toggle_pin(volatile uint8_t *port, uint8_t pin);

/* read pin */
uint8_t gpio_read_pin(volatile uint8_t *pin_reg, uint8_t pin);

#endif 
