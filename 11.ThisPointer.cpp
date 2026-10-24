/* This program demonstrates the use of the "this" pointer in C++. This pointer is used to refer 
 * to the current object instance of a class. It is particularly useful in scenarios where member
 * variables and parameters have the same name, allowing for clear differentiation between them.
 * 
 * This includes 11.LED.h and 11.LED.cpp files which define the LED class and its member functions.
 * To build and run this program:
 * 
 * Choose Run > Start Debugging to build and run (or press F5). You will get an error. It is normal.
 * g++ -std=c++17 "11.ThisPointer.cpp" "11.LED.cpp" -o "11.ThisPointer.exe"
 * .\11.ThisPointer.exe
 *
*/

#include <stdio.h>
#include "11.LED.h"

/****************************************************************
*Main
*****************************************************************/
int main(void)
{
    // Creating LED object from first constructor
	LED greenLed;

    printf("The voltage from green LED is: %f\n", greenLed.getVoltage());

    // Creating LED object from second constructor
    LED redLed(5, 3.0, .5);

    printf("The voltage from red LED is: %f\n", redLed.getVoltage());
    
    printf("This pointer code demostration is complete.\n");
}
