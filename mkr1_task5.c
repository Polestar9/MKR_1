#include <stdio.h>
#include <math.h>

int main() 
{
    int a;
    int b;
    printf("Input a side: ");
    scanf("%d", &a);
    printf("Input b side: ");
    scanf("%d", &b); 
    int c = sqrt(a*a + b*b); // hypotenuse
    int p = (a + b + c)/2; // finding perimeter
    int S = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("Hypotenuse (c side): %d\nSemiperemeter of the triangle is: %d\nArea of the triangle is: %d", c, p, S);
    return 0;
}