void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}
int c=0;
void loop() {
  // put your main code here, to run repeatedly:
 int d=analogRead(A0);
 if(d>600)
 c++;
 Serial.println(c);
 delay(500);
}
