#include <stdio.h>

int main()
{
    int a;

    printf("Enter any number: ");
    scanf("%d", &a);

    if (a< 0)
    {
        printf("This number is Negative");
    }
    else if (a == 0)
    {
        printf("This number is Neutral");
    }
    else
    {
        printf("This number is Positive");
    }

    return 0;
}
		
		
		
		
		
		
		
		
	
