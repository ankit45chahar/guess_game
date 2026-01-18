#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int rand_num=(rand()%100)+1;
	int no_of_guesses,guessed_number;
	printf("Guess the number:");
	scanf("%d",&guessed_number);
	do
	{
		if(guessed_number>rand_num)
		{
			printf("Lower number please:");
			scanf("%d",&guessed_number);
		}
		else if(guessed_number<rand_num)
		{
			printf("Higher number please:");
			scanf("%d",&guessed_number);
		}
		no_of_guesses++;
	}
	while(guessed_number!=rand_num);
	printf("Congrats! You guessed the number.\n");
	printf("You guessed the number in %d times.",no_of_guesses+1);
	return 0;
}
