//programa que envia sinal alto para a saída 7,
//aguarda 1 segundo e envia sinal baixo para saída 7,
void setup() {
  // put your setup code here, to run once:
pinMode(7,OUTPUT)

}

void loop() {
  //envia sinal alto
digitalWrite(7,OUTPUT)
delay(1000);
digitalWrite(7,LOW)
delay(1000);
}
