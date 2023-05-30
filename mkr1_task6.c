#include <stdio.h>
#include <math.h>

int main() 
{
    double salarybeforetax;
    double taxtime; //tax time :3 How much? Secret! Why? Just guess~ ..s..six hundred dollars..?? ..Jail :3
    double salaryaftertax; 
    printf("The salary before tax: ");
    scanf("%lf", &salarybeforetax);
    printf("Tax percentage: ");
    scanf("%lf", &taxtime);
    salaryaftertax = (salarybeforetax) - ((salarybeforetax * taxtime)) / 100;
    printf("The salary after tax: %.2lf\n", salaryaftertax);
    return 0;
}