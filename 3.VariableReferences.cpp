#include <stdio.h>
#include <iostream>

/****************************************************************
* Main
*****************************************************************/

int main (void)
{
    int num = 234;
    int &ref_alias = num;
    int norm_alias = num;

    std::cout << "num is: " << num << '\n';
    std::cout << "ref_alias is: " << ref_alias << '\n';
    std::cout << "norm_alias is: " << norm_alias << '\n';

    ref_alias++;
    norm_alias++;

    std::cout << "num is: " << num << '\n';
    std::cout << "ref_alias is: " << ref_alias << '\n';
    std::cout << "norm_alias is: " << norm_alias << '\n';

}