void setup() {
  DDRC |= (1 << 0);
  DDRD |= (1 << 4);
  DDRB |= (1 << 3);
}

void loop() {
 PORTC |= (1 << 0);
 PORTB |= (1 << 3);
 PORTD |= (1 << 4);
 delay(1000);
 PORTC &= ~(1<<0);
 PORTB &= ~(1<<3);
 PORTD &= ~(1<<4);
 delay(1000);

}
