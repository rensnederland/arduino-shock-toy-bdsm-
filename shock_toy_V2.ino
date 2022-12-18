//made by rens hoffman.
//use at your own risk!!!!!!
//for questions mail (hoffmannrens@gmail.com)

int t1 = 11; // out point

#include <Keypad.h>
#include <Arduino.h>

int switchState = 0;
int prevswitchState = 0;

int keypad;
int keymap;

const byte ROWS = 4;
const byte COLS = 4;

char keyMatrix[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'b'},
  {'7', '8', '9', 'c'},
  {'*', '0', '#', 'd'},
};

byte rowPins[ROWS] = {9, 8, 7, 6};
byte colPins[COLS] = {A5, A4, A3, A2};


Keypad myKeypad = Keypad(makeKeymap(keyMatrix), rowPins, colPins, ROWS, COLS);
int vlag = 0;

void setup() {
  pinMode(t1, OUTPUT);

}
//shock pattern below
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

void  p4() {
  digitalWrite(t1, HIGH);
  delayMicroseconds(500);
  digitalWrite(t1, LOW);
  delayMicroseconds(500);
}

void c0() {

}



void c1() {
  p1();
  delay(10);

  p2();
  delay(5);

  p3();
  delay(5);

  p0();
  delay(100);
  c1();
}

void c2() {
p1();
p1();
p1();
  delay(10);
 p2();
 p2();
 p2();
  delay(5);

  p3();
  delay(5);

  p0();
  delay(500);
  c1();
}
void c3() {
p1();
delay(700);
c3();
}
void c4() {
p1();
delay(700);
p1();
delay(300);
c3();
}
void c5() {
p1();
delay(700);
p1();
p1();
delay(70);
p1();
delay(30);
p4();
delay(300);
c5();
}

void c6() {

}
void c7() {

}
void c8() {

}
void c9() {

}
void cA() {
p1();
cA();
}
void cB() {
p2();
cB();
}
void cC() {
p3();
cC();
}
void cD() {
p4();
cD();
}
void cH() {

}
void cS() {

}
//////////
void loop() {
  if (vlag == 0) {
    {
      char (keymap = myKeypad.getKey());
    }
    int (keymap);
    vlag = 0;
  }
  switch (keymap) {
    case '0':
      c0();
      break;
    case '1':
      c1();
      break;
    case '2':
      c2();
      break;
    case '3':
      c3();
      break;
    case '4':
      c4();
      break;
    case '5':
      c5();
      break;
    case '6':
      c6();
      break;
    case '7':
      c7();
      break;
    case '8':
      c8();
      break;
    case '9':
      c9();
      break;
    case 'A':
      cA();
      break;
    case 'b':
      cB();
      break;
    case 'c':
      cC();
      break;
    case 'd':
      cD();
      break;
    case '#':
      cH();
      break;
    case '*':
      cS();
      break;
  }


}
