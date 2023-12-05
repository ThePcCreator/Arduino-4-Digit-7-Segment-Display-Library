# Arduino-4-Digit-7-Segment-Display-Library
An Arduino library used to easily control common cathode 4 digit 7 segment displays. Informations on how to setup in README.

Hello everyone, thank you for using my library!

To make this library work, you need:
- An Arduino board(I am using an Arduino Uno)
- A 4-digit 7-segment common cathode display(It should have 12 pins, 6 on each side, like this: https://www.amazon.com/uxcell-Cathode-Segment-Display-Digital/dp/B07GTQ53MM?source=ps-sl-shoppingads-lpcontext&ref_=fplfs&smid=A1THAZDOWP300U&th=1)
- A breadboard
- Male-to-male jumper wires

How to set up:
1. Attach the display to the breadboard.
2. Using jumper wires, connect the pins of the display to the digital I/O pins, exactly like this: (note that the display shown only has 4 pins, but just imagine there are 12) ![image](https://github.com/ThePcCreator/Arduino-4-Digit-7-Segment-Display-Library/assets/152657248/422e5e45-5e22-4619-8df5-4189f6da6eca)

How to use:
There is a function that writes numbers: writeNum({}
