#include <stdio.h>

class LED
{
    private:
        int diameter;
        float voltage;
        float current;


    public:

        /* Accessors*/
        int getDiameter()
        {
            return diameter;
        }

        float getVoltage()
        {
            return voltage;
        }

        float getCurrent()
        {
            return current;
        }

        /* Mutator*/
        void setDiameter(int modifyDiameter)
        {
            if (modifyDiameter > 0)
            {
                diameter = modifyDiameter;
            }
            else
            {
                diameter = 0;
            }
        }

        void setVoltage(float modifyVoltage)
        {
            voltage = modifyVoltage;
        }

        void setCurrent(float modifyCurrent)
        {
            current = modifyCurrent;
        }

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

	ledPtr->setCurrent(0.8);
	ledPtr->setVoltage(3.3);
    ledPtr->setDiameter(5);

    printf("The LED Diameter is: %d cm\n", ledPtr->getDiameter());
	printf("The LED Power is: %f W", greenLed.power());

}
