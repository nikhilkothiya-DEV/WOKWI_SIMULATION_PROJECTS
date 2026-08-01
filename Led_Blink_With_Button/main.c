bool led_status = false; 

void setup() {
  pinMode(2, INPUT_PULLUP);
  pinMode(12, OUTPUT);
}

void loop() {
  int button_state = digitalRead(2);

  if (button_state == LOW) {
    led_status = !led_status; 
    digitalWrite(12, led_status); 
    delay(300); 
  }
  
}