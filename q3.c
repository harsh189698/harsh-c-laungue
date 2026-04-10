#include <stdio.h>

int main()
{
    int maths, english, science;
    float average;

    printf("Enter maths marks: ");
    scanf("%d", &maths);

    printf("Enter english marks: ");
    scanf("%d", &english);

    printf("Enter science marks: ");
    scanf("%d", &science);

    if (maths <= 100 & english <= 100 & science <= 100)
    {
        average = (maths + english + science) / 3;
        printf("Average mark: %.2f", average);
    }
    else
    {
        printf("Invalid marks...!");
    }

    return 0;
}
