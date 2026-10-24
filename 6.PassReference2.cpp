#include <iostream>

/****************************************************************
* Function prototype
*****************************************************************/
void swapper(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

    printf("Inside swapper function: a = %d, b = %d\n\r", *a, *b);
}

/****************************************************************
* Main
*****************************************************************/

int main(void)
{
    int num1 = 45;
    int num2 = 67;

    printf("Before swapper function: num1 = %d, num2 = %d\n\r", num1, num2);
    swapper(&num1, &num2);
    printf("After swapper function: num1 = %d, num2 = %d\n\r", num1, num2);

}