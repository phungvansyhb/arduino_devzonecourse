
void setup() {

  for(int i = 1 ; i<9 ; i++){
      pinMode(i , OUTPUT);
    }
  
}

void loop() {
    int i = 0;
    while(i<9){
      digitalWrite(i , HIGH);
      delay(1000);
      i++;
      }
    while(i>0){
      digitalWrite(i,LOW);
      delay(1000);
      i--;
      }
}
