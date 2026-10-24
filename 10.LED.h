#ifndef LED_HPP
#define LED_HPP

class LED
{
    private:
        int diameter;
        float voltage;
        float current;


    public:
        /* Overload constructor*/
        LED();
        LED(int diameterValue, float voltageValue, float currentValue);

        /* Accessors*/
        int getDiameter();
        float getVoltage();
        float getCurrent();

        /* Mutator*/
        void setDiameter(int modifyDiameter);
        void setVoltage(float modifyVoltage);
        void setCurrent(float modifyCurrent);

        /* Function*/
        float power();

        /* Destructor*/
        ~LED();
};

#endif