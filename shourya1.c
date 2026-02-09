#include <math.h>
#include<stdio.h>
int main()
{
    float p,r,t,si,ci ;
    printf("enter principal, rate ,time= ");
    scanf("%f%f%f",&p,&r,&t);
    si=(p*r*t)/100;
    ci=p*pow((1+r/100),t)-p;
    printf("simple intrest=%.2f compound interest=%.2f",si,ci);
    return 0;
}