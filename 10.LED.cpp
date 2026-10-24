/* Overload constructor*/
#include "10.LED.h"

LED::LED()
{
    diameter = 3;
    voltage = 3.3;
    current = 0.2;
}

LED::LED(int diameterValue, float voltageValue, float currentValue)
{
    setDiameter(diameterValue);
    setVoltage(voltageValue);
    setCurrent(currentValue);
}

/* Accessors*/
int LED::getDiameter()
{
    return diameter;
}

float LED::getVoltage()
{
    return voltage;
}

float LED::getCurrent()
{
    return current;
}

/* Mutator*/
void LED::setDiameter(int modifyDiameter)
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

void LED::setVoltage(float modifyVoltage)
{
    voltage = modifyVoltage;
}

void LED::setCurrent(float modifyCurrent)
{
    current = modifyCurrent;
}

/* Function*/
float LED::power()
{
    return voltage * current;
}

/* Destructor*/
LED::~LED(){}