# Arduino Univeristy Projects
Simple Arduino projects completed as part of an IoT module in my Master's program.\
The code may not be pretty, but it gets the job done!
***
## [Arduino LED Sequence + RGB Demo](https://github.com/kbob6980/Arduino-Uni-Projects/tree/main/Seven_Segment_Display)
A simple Arduino project with 7 regular LEDs and 1 RGB LED arranged in a horizontal line.  
The LEDs create a specific chasing / fill / color cycle animation.

Created and tested in Tinkercad.
\
![Project screenshot](https://github.com/kbob6980/Arduino-Uni-Projects/blob/main/Diodes_and_LED_Loop.png)

### Circuit

- 7 × LEDs (any color) – placed in a horizontal row
- 1 × RGB LED (common cathode or common anode) – placed at the end of the row
- Current-limiting resistors for each LED (~220–330 Ω)
- All components placed on a breadboard
- Power supplied through the breadboard (5 V from Arduino)

Typical pin assignment example:

- Regular LEDs → digital pins 2, 3, 4, 5, 6, 7, 8
- RGB LED → pins 9 (R), 10 (G), 11 (B)

### Animation Sequence

1. **Chasing effect (bounce from outside to center)**  
   LEDs light up and turn off one by one in this order:  
   **1 → 7 → 2 → 6 → 3 → 5 → 4**  
   Each LED is on for **0.75 seconds**, then turns off before the next one lights up.

2. **Fill left to right**  
   LEDs light up one after another from **1 to 7** and **stay on**.

3. **Short pause**  
   All LEDs remain lit for **1.25 seconds**.

4. **RGB LED color cycle**  
   The RGB LED shows the following colors (stays lit for the given time):  
   - White     – 1 second  
   - Red       – 2 seconds  
   - Green     – 3 seconds  
   - Blue      – 4 seconds  
   - White     – 5 seconds  

5. **All off**  
   Everything turns off. The sequence loops / can be restarted.

### Goal of the project

- Practice sequential control of multiple outputs
- Timing with `delay()`
- Basic RGB color mixing
- Creating structured light animations\

***

## [Arduino LED Sequence (6 LEDs)](https://github.com/kbob6980/Arduino-Uni-Projects/blob/main/6_diode_sequence.ino)
A simple Arduino project that lights up 6 LEDs in a repeating sequence.\
Built and simulated in Tinkercad.\
\
![Project screenshot](https://github.com/kbob6980/Arduino-Uni-Projects/blob/main/6_diode_sequence_01.png)

### Features

- Lights up 6 LEDs one after another
- Smooth chasing/knight rider style sequence
- Easy to build and understand
\


***
## [Arduino Seven Segment_Display](https://github.com/kbob6980/Arduino-Uni-Projects/tree/main/Seven_Segment_Display)
2 simple projects done with a seven-segment display.\
\
![Project screenshot](https://github.com/kbob6980/Arduino-Uni-Projects/blob/main/Seven_Segment_Display/7_segment_display.png)\
\
The first one is a 0-9 counting loop with 1s pause between each number.\
The second one is a simple "flowing" shapes loop.\
Built and simulated in Tinkercad.\
