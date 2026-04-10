#include <stdio.h>

void main()
{
    int a, b, c, d, max;

    printf("Enter value of first number: ");
    scanf("%d", &a);

    printf("Enter value of second number: ");
    scanf("%d", &b);

    printf("Enter value of third number: ");
    scanf("%d", &c);

    printf("Enter value of fourth number: ");
    scanf("%d", &d);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                max = a;
            }
            else
            {
                max = d;
            }
        }
        else
        {
            if (c > d)
            {
                max = c;
            }
            else
            {
                max = d;
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                max = b;
            }
            else
            {
                max = d;
            }
        }
        else
        {
            if (c > d)
            {
                max = c;
            }
            else
            {
                max = d;
            }
        }
    }

    printf("\nThe maximum value is: %d", max);


}
