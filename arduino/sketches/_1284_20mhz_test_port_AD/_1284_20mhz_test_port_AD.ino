
void setup() {
  DDRA = 255;
  DDRD = 255;
}

void loop() {
  for(int i = 0;i<=255;i++){
    PORTD =   PORTA = i;
  }
}





