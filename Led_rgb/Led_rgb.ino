const int red = 3;
const int green = 2;
const int blue = 1;
void setup() {
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
  digitalWrite(red,LOW);
  digitalWrite(green,LOW);
  digitalWrite(blue,LOW);
}

void loop() {
  digitalWrite(blue,HIGH);
 
}
