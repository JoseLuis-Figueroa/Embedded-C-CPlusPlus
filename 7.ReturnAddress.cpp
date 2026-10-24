#include <iostream>

/****************************************************************
* Function prototype
*****************************************************************/
int * score_setter()
{
    int *ptr = new int[5];

    if(ptr == nullptr)
    {
        printf("Not enough memory to allocate\n\r");
    }
    else
    {
        for(int i=0; i<5; i++)
        {
            ptr[i] = 0;
        }
    }
    // Return the address to the allocated memory
    return ptr;
}


/****************************************************************
* Main
*****************************************************************/
int main(void)
{
    int *grade4_scores = score_setter();

    for (int i=0; i<5; i++)
    {
        printf("grade4_scores[%d]: \n\r", i);
        scanf("%d", &grade4_scores[i]);
    }

    printf("The scores for grade 4 are: \n\r");
    for (int i=0; i<5; i++)
    {
        printf("grade4_scores[%d]: %d\n\r", i, grade4_scores[i]);
    }

    // Don't forget to free the allocated memory
    delete[] grade4_scores;
    return 0;
}