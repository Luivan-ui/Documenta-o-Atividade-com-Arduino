int led = 13; //Saída do Led a ser aceso.
int botao = 12; //Entrada do botão de controle.
int tempo = 1000; //Tempo de delay padrão.
void setup() { //Configuração das portas de saída e entrada.
  pinMode(led, OUTPUT); 
  pinMode(botao, INPUT_PULLUP);

}

  void loop() {
    int i = 0; 
    if(digitalRead(botao) == LOW ){ //Condição que verifica o acionamento do botão.
      for(i = 0; i < 3; i++){ //Laço que permite o acionamento ordenado do led.
      digitalWrite(led, HIGH);
      delay(tempo/ 5);
      digitalWrite(led, LOW);
      delay(tempo /5);
      }
      delay(tempo - 100); //Ultimo acionamento do led de forma lenta.
    digitalWrite(led, HIGH);
    delay(tempo + 500);
    digitalWrite(led, LOW);
    delay(tempo + 500);
     }
  
  }
