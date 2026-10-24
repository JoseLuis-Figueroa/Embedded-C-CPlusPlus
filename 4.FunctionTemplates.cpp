#include <iostream>

/****************************************************************
* Function prototype
*****************************************************************/
/*
int int_adder(int a, int b)
{
    return a + b;
}

float float_adder(float a, float b)
{
    return a + b;
}
*/
template <class T>
T adder(T a, T b)
{
    return a + b;
}

/****************************************************************
* Main
*****************************************************************/

int main(void)
{
    int num1 = 45;
    int num2 = 67;
    int ans;

    float fnum1 = 50.2;
    float fnum2 = 80.6;
    float fans;

    //ans = int_adder(num1, num2);
    //fans = float_adder(fnum1, fnum2); 

    ans = adder(num1, num2);
    fans = adder(fnum1, fnum2);

    std::cout << "The integer result is: " << ans << '\n';
    std::cout << "The float result is: " << fans << '\n';

}