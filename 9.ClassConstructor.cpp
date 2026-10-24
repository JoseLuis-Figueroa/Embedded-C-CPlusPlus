#include <stdio.h>

class LED
{
    private:
        int diameter;
        float voltage;
        float current;


    public:
        /* Overload constructor*/
        LED()
        {
            diameter = 3;
            voltage = 3.3;
            current = 0.2;
        }

        LED(int diameterValue, float voltageValue, float currentValue)
        {
            setDiameter(diameterValue);
            setVoltage(voltageValue);
            setCurrent(currentValue);
        }

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

        /* Function*/
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
    // Creating LED object from first constructor
	LED greenLed;

    printf("The voltage from green LED is: %f\n", greenLed.getVoltage());

    // Creating LED object from second constructor
    LED redLed(5, 3.6, .3);

    printf("The voltage from red LED is: %f\n", redLed.getVoltage());
    
}
