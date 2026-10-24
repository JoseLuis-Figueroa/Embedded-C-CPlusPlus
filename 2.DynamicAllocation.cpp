#include <stdio.h>

/****************************************************************
* Main
*****************************************************************/
int main(void)
{
    int _size;
	int *all_scores;

	printf(" How many scores would you like to enter? ");
	scanf("%d", &_size);

	all_scores = new int[_size];

	if(all_scores == nullptr)
	{
		printf("Error: Memory allocation failed! ");
		return -1;
	}
	else
	{
		for(int i = 0; i < _size; ++i)
		{
			printf("Enter score %d: ", i+1);
			scanf("%d", &all_scores[i]);
		}
	}

	printf(" You entered the following scores: ");
	for(int i = 0; i < _size; ++i)
	{
		printf("%d, ", all_scores[i]);
	}

	delete[] all_scores;

}