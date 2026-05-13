#include <avr/io.h>
#include <util/delay.h>
#include "gpio_driver.h"

volatile uint8_t button_state;

int main(void){
	gpio_config_output(&DDRB, PB5);
	gpio_config_input_pullup(&DDRB, &PORTB, PB4);

	while(1){
		
		button_state = gpio_read_pin(&PINB, PB4);
		if(button_state == 0){
			gpio_toggle_pin(&PORTB, PB5);
			_delay_ms(100);
		}
		else{
			gpio_toggle_pin(&PORTB, PB5);
			_delay_ms(500);
		}
	}
}
			