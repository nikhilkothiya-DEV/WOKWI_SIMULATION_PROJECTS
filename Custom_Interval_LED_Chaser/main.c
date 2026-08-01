void setup() {
  DDRB |= (1 << 5) | (1 << 4); 
  DDRD |= (1 << 5) | (1 << 2); 
}

void loop() {
  for (int count = 0; count <= 15; count++) {
    
    
    PORTB |= (1 << 5);

    
    if ((count > 0 && count % 2 == 0) || count == 15) {
      PORTB |= (1 << 4);
    } else {
      PORTB &= ~(1 << 4);
    }

    
    if ((count > 0 && count % 3 == 0) || count == 15) {
      PORTD |= (1 << 5);
    } else {
      PORTD &= ~(1 << 5);
    }

   
    if ((count > 0 && count % 4 == 0) || count == 15) {
      PORTD |= (1 << 2);
    } else {
      PORTD &= ~(1 << 2);
    }

    delay(1000); 
  }
}