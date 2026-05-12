#include <avr/io.h>
#include <util/delay.h>

int main(void){
  DDRB |= (1 << PB5);    //Set PB5 as output (Arduino LED)

  while(1){
    PORTB ^= (1 << PB5);   //Toggle LED
    _delay_ms(500);
  }
}
