#include <avr/io.h>
#include <util/delay.h>
#include "gpio_driver.h"

int main(void){
  //DDRB |= (1 << PB5);    //Set PB5 as output (Arduino LED)
  gpio_config_output(&DDRB, PB5);

  while(1){
    //PORTB ^= (1 << PB5);   //Toggle LED
    gpio_toggle_pin(&PORTB, PB5);
    _delay_ms(500);
  }
}
