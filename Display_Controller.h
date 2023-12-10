/*
Hi everyone! Thanks for using my library! 
*/



#ifndef DISPLAY_CONTROLLER_H
#define DISPLAY_CONTROLLER_H
//Choose which pin will control what
const int MB = 2;
const int MM = 3;
const int MT = 4;
const int RB = 5;
const int RT = 6;
const int LB = 7;
const int LT = 8;
const int DOT = 9;
const int DIG1 = 10;
const int DIG2 = 11;
const int DIG3 = 12;
const int DIG4 = 13;
//Create the two functions: one for writing one digit to an assigned place, and one for writing full numbers
void exeSetup();
void writeDig(int digit, int position);
void writeNum(int number, int lasts);


#endif
