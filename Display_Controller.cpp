#include <Display_Controller.h>
#include <Arduino.h>
//Create the variables that contain one place's digit
int dig1, dig2, dig3, dig4;
bool dig1HD, dig2HD, dig3HD, dig4HD;
void exeSetup() {
  pinMode(MB, OUTPUT);
  pinMode(MM, OUTPUT);
  pinMode(MT, OUTPUT);
  pinMode(RB, OUTPUT);
  pinMode(RT, OUTPUT);
  pinMode(LB, OUTPUT);
  pinMode(LT, OUTPUT);
  pinMode(DOT, OUTPUT);
  pinMode(DIG1, OUTPUT);
  pinMode(DIG2, OUTPUT);
  pinMode(DIG3, OUTPUT);
  pinMode(DIG4, OUTPUT);
  digitalWrite(DIG1, HIGH);
  digitalWrite(DIG2, HIGH);
  digitalWrite(DIG3, HIGH);
  digitalWrite(DIG4, HIGH);
}
//The function that write one digit to an assigned place
void writeDig(int digit, int position) {
  digitalWrite(MB, LOW);
  digitalWrite(MM, LOW);
  digitalWrite(MT, LOW);
  digitalWrite(RB, LOW);
  digitalWrite(RT, LOW);
  digitalWrite(LB, LOW);
  digitalWrite(LT, LOW);
  digitalWrite(DOT, LOW);
  switch(position) {
    case 1:
    digitalWrite(DIG1, LOW);
    digitalWrite(DIG2, HIGH);
    digitalWrite(DIG3, HIGH);
    digitalWrite(DIG4, HIGH);
    break;
    case 2:
    digitalWrite(DIG1, HIGH);
    digitalWrite(DIG2, LOW);
    digitalWrite(DIG3, HIGH);
    digitalWrite(DIG4, HIGH);
    break;
    case 3:
    digitalWrite(DIG1, HIGH);
    digitalWrite(DIG2, HIGH);
    digitalWrite(DIG3, LOW);
    digitalWrite(DIG4, HIGH);
    break;
    case 4:
    digitalWrite(DIG1, HIGH);
    digitalWrite(DIG2, HIGH);
    digitalWrite(DIG3, HIGH);
    digitalWrite(DIG4, LOW);
    break;
  }
  switch(digit) {
    case 0: 
      digitalWrite(MB, HIGH);
      digitalWrite(MM, LOW);
      digitalWrite(MT, HIGH);
      digitalWrite(RB, HIGH);
      digitalWrite(RT, HIGH);
      digitalWrite(LB, HIGH);
      digitalWrite(LT, HIGH);
      break;
    case 1:
      digitalWrite(MB, LOW);
      digitalWrite(MM, LOW);
      digitalWrite(MT, LOW);
      digitalWrite(RB, HIGH);
      digitalWrite(RT, HIGH);
      digitalWrite(LB, LOW);
      digitalWrite(LT, LOW);
      break;
    case 2:
      digitalWrite(MB, HIGH);
      digitalWrite(MM, HIGH);
      digitalWrite(MT, HIGH);
      digitalWrite(RB, LOW);
      digitalWrite(RT, HIGH);
      digitalWrite(LB, HIGH);
      digitalWrite(LT, LOW);
      break;
    case 3:
      digitalWrite(MB, HIGH);
      digitalWrite(MM, HIGH);
      digitalWrite(MT, HIGH);
      digitalWrite(RB, HIGH);
      digitalWrite(RT, HIGH);
      digitalWrite(LB, LOW);
      digitalWrite(LT, LOW);
      break;
    case 4:
      digitalWrite(MB, LOW);
      digitalWrite(MM, HIGH);
      digitalWrite(MT, LOW);
      digitalWrite(RB, HIGH);
      digitalWrite(RT, HIGH);
      digitalWrite(LB, LOW);
      digitalWrite(LT, HIGH);
      break;
    case 5:
      digitalWrite(MB, HIGH);
      digitalWrite(MM, HIGH);
      digitalWrite(MT, HIGH);
      digitalWrite(RB, HIGH);
      digitalWrite(RT, LOW);
      digitalWrite(LB, LOW);
      digitalWrite(LT, HIGH);
      break;
    case 6:
      digitalWrite(MB, HIGH);
      digitalWrite(MM, HIGH);
      digitalWrite(MT, HIGH);
      digitalWrite(RB, HIGH);
      digitalWrite(RT, LOW);
      digitalWrite(LB, HIGH);
      digitalWrite(LT, HIGH);
      break;
    case 7:
      digitalWrite(MB, LOW);
      digitalWrite(MM, LOW);
      digitalWrite(MT, HIGH);
      digitalWrite(RB, HIGH);
      digitalWrite(RT, HIGH);
      digitalWrite(LB, LOW);
      digitalWrite(LT, LOW);
      break;
    case 8:
      digitalWrite(MB, HIGH);
      digitalWrite(MM, HIGH);
      digitalWrite(MT, HIGH);
      digitalWrite(RB, HIGH);
      digitalWrite(RT, HIGH);
      digitalWrite(LB, HIGH);
      digitalWrite(LT, HIGH);
      break;
    case 9:
      digitalWrite(MB, HIGH);
      digitalWrite(MM, HIGH);
      digitalWrite(MT, HIGH);
      digitalWrite(RB, HIGH);
      digitalWrite(RT, HIGH);
      digitalWrite(LB, LOW);
      digitalWrite(LT, HIGH);
      break;
  }
}
//The function that write full numbers
void writeNum(int number, int lasts) {
  dig1HD = false;
  dig2HD = false;
  dig3HD = false;
  dig4HD = false;
  dig1 = 0;
  dig2 = 0;
  dig3 = 0;
  dig4 = 0;
  if (number >= 1000) {
    dig1 = number / 1000;
    dig1HD = true;
  }
  if (number >= 100) {
    dig2 = (number / 100) - (dig1 * 10);
    dig2HD = true;
  }
  if (number >= 10) {
    dig3 = (number / 10) - ((dig1 * 100) + (dig2 * 10));
    dig3HD = true;
  }
  if (number >= 1) {
    dig4 = number - (((dig1 * 1000) + (dig2 *100)) + (dig3 * 10));
    dig4HD = true;
  }
  for (int i = 0; i < lasts; i++){
    if(dig1HD == true){
      writeDig(dig1, 1);}
    if(dig2HD == true){
    writeDig(dig2, 2);}
    if(dig3HD == true){
    writeDig(dig3, 3);}
    if(dig4HD == true){
    writeDig(dig4, 4);}
  }
  digitalWrite(MB, LOW);
  digitalWrite(MM, LOW);
  digitalWrite(MT, LOW);
  digitalWrite(RB, LOW);
  digitalWrite(RT, LOW);
  digitalWrite(LB, LOW);
  digitalWrite(LT, LOW);
}
