#define s A0
#define b A1
void setup() {
  // put your setup code here, to run once:
  pinMode(s, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(b, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(s)){
    digitalWrite(LED_BUILTIN, LOW);
    digitalWrite(b, HIGH);
    delay(250);
  }
  else{
    digitalWrite(LED_BUILTIN, HIGH);
    digitalWrite(b, LOW);
    delay(3000);
  }
}
