#include <stdio.h>
 
int main(void)
{
    int number, i, sum = 0;
    scanf("%d", &number);
 
    i = 1;
    while (i < number)
    {
        if (number % i == 0)
            sum += i;
        i++;
    }
 
    if (sum == number)
        printf("True");
    else
        printf("False");
}