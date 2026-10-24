#include <stdio.h>

class LED
{
public:
	int diameter;
	float voltage;
	float current;

	float power()
	{
		return voltage * current;
	}
};


/****************************************************************
*Main
*****************************************************************/
int main(void)
{
    // Creating LED objects
	LED greenLed;

	// Creating a pointer to an LED object
	LED *ledPtr = &greenLed;

	ledPtr->current = 0.8;
	ledPtr->voltage = 3.3;

	printf("The LED Power is: %f ", greenLed.power());

}
