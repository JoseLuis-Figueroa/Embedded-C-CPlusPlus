/* This program demonstrates the use of scope resolution operator (::) to access class members 
 * and functions in C++.

 * This includes 10.LED.h and 10.LED.cpp files which define the LED class and its member functions.
 * To build and run this program:
 * 
 * Choose Run > Start Debugging to build and run (or press F5). You will get an error. It is normal.
 * g++ -std=c++17 "10.ScopeResolution.cpp" "10.LED.cpp" -o "10.ScopeResolution.exe"
 * .\10.ScopeResolution.exe
 *
*/

#include <stdio.h>
#include "10.LED.h"

/****************************************************************
*Main
*****************************************************************/
int main(void)
{
    // Creating LED object from first constructor
	LED greenLed;

    printf("The voltage from green LED is: %f\n", greenLed.getVoltage());

    // Creating LED object from second constructor
    LED redLed(5, 3.6, .3);

    printf("The voltage from red LED is: %f\n", redLed.getVoltage());
    
    printf("This scope resolution demostration is complete.\n  ");
    
}
