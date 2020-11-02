int led = 13;
int button = A4;
int buttonState = 0;
int flag = 0;
int flaga = 0;
void setup(){
  pinMode(led,OUTPUT);
  pinMode(button,INPUT);
}
void loop(){
  
buttonState = digitalRead(button);

if(buttonState == HIGH && flag == 0){
  flag = 1;
  digitalWrite(led,HIGH);
}
else if(buttonState == HIGH && flag == 1){
  digitalWrite(led,LOW);
  flag = 0;
}
delay(200);

}
