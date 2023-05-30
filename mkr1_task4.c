#include <stdio.h>
#include <math.h>

int main() 
{
    int x, y;
    printf("Input x value: ");
    scanf("%d", &x);
    printf("Input y value: ");
    scanf("%d", &y);
    int f=x*x+y*y/sqrt(x+y);
    if (x+y<=0) //Перевірка того чи дільник не може бути 0 або меньше 0
    {
    printf("This math problem cannot be solved.\nEither x + y is equal to 0, or square root is a negative number, which it cannot be.");
    }
    else
    {
    printf("The answer to this math problem is: %d", f);
    }
    return 0; //та й ґата
}