#include "gpio_driver.h"

/* 
	These are placeholder registers (GPIO_PORT). 
	They will later be replaced with real registers
*/

//static uint8_t GPIO_PORT; 

/* configure pin direction: output*/
void gpio_config_output(volatile uint8_t *ddr, uint8_t pin)
{
	*ddr |= (1 << pin); 
}

/* configure pin direction: input*/
void gpio_config_input(volatile uint8_t *ddr, uint8_t pin)
{
	*ddr &= ~(1 << pin); 
}

/* configure pin direction: input with internal pull-up active*/
void gpio_config_input_pullup(volatile uint8_t *ddr, volatile uint8_t *port, uint8_t pin)
{
	*ddr &= ~(1 << pin); 
	*port |= (1 << pin);
}


/* set pin HIGH */
void gpio_set_pin(volatile uint8_t *port, uint8_t pin)
{
	*port |= (1 << pin);
}

/* Set pin LOW */
void gpio_clear_pin(volatile uint8_t *port, uint8_t pin)
{
	*port &= ~(1 << pin);
}

/* toggle pin */
void gpio_toggle_pin(volatile uint8_t *port, uint8_t pin)
{
	*port ^= (1 << pin);
}

/* read pin state */
uint8_t gpio_read_pin(volatile uint8_t *pin_reg, uint8_t pin)
{
	return((*pin_reg >> pin) & 1);
}