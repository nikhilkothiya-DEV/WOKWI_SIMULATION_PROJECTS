void setup() {
}

void loop() {
  uint8_t  A = 1;
  uint8_t B = 2;
  printf("A AND B IS : %d %d \n", A ,B );
  uint8_t temp;
  uint8_t *ptra = &A;
  uint8_t *ptrb = &B;
  temp = *ptra;
  *ptra = *ptrb;
  *ptrb = temp ;
  printf("A IS : %d \n", *ptra);
  printf("B IS : %d \n ", *ptrb);


 
  delay(10000);
}
