const int ldrchoco= A0;
const int ldrveg = A1;
const int ldrchili = A2;
const int ldrcrisps = A3;
void setup() {
  Serial.begin(9600);
  pinMode(ldrchoco, INPUT);
  pinMode(ldrveg, INPUT);
  pinMode(ldrchili,INPUT);
  pinMode(ldrcrisps,INPUT);
}
void loop() {
  int valuechoco = analogRead(ldrchoco);
  int valueveg = analogRead(ldrveg);
  int valuechili = analogRead(ldrchili);
  int valuecrisps = analogRead(ldrcrisps);
  if (valuechoco >= 300) {
    Serial.print("A");
    delay(500);
  }
  else if (valueveg >=300) {
    Serial.print("B");
    delay(500);
  }
  else if (valuechili >=300){
    Serial.print("C");
    delay(500);
  }
  else if (valuecrisps >=300){
    Serial.print("D");
    delay(500);
  }
}
