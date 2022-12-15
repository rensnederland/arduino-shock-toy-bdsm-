//made by rens hoffman.
//use at your own risk!!!!!! 
//for questions mail (hoffmannrens@gmail.com)

int t1 = 6; \\ out point

void setup() {
  pinMode(t1, OUTPUT);

} 
\\ shock pattern below
void p0() {
delay(10);
}

  void p1() {
  digitalWrite(t1, HIGH);
  delayMicroseconds(1000);
  digitalWrite(t1, LOW);
  delayMicroseconds(1000);

  }
  void  p2() {
  digitalWrite(t1, HIGH);
  delayMicroseconds(100);
  digitalWrite(t1, LOW);
  delayMicroseconds(50);

}
 void  p3() {
  digitalWrite(t1, HIGH);
  delayMicroseconds(10);
  digitalWrite(t1, LOW);
  delayMicroseconds(5);
 }

void loop () {
\\program routine below

p1();
 delay(10);

p2(); 
delay(5);

p3();
delay(5);

p0();
delay(100);

}
