/* Overload constructor*/
#include "11.LED.h"

LED::LED()
{
    this->diameter = 3;
    this->voltage = 3.3;
    this->current = 0.2;
}

LED::LED(int diameter, float voltage, float current)
{
    setDiameter(diameter);
    setVoltage(voltage);
    setCurrent(current);
}

/* Accessors*/
int LED::getDiameter()
{
    return this->diameter;
}

float LED::getVoltage()
{
    return this->voltage;
}

float LED::getCurrent()
{
    return this->current;
}

/* Mutator*/
void LED::setDiameter(int modifyDiameter)
{
    if (modifyDiameter > 0)
    {
        this->diameter = modifyDiameter;
    }
    else
    {
        this->diameter = 0;
    }
}

void LED::setVoltage(float modifyVoltage)
{
    this->voltage = modifyVoltage;
}

void LED::setCurrent(float modifyCurrent)
{
    this->current = modifyCurrent;
}

/* Function*/
float LED::power()
{
    return this->voltage * this->current;
}

/* Destructor*/
LED::~LED(){}