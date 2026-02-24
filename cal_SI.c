#include <stdio.h>
int main(){
    float p,r,t,s;
    printf("Enter the pricipal:");
    scanf("%f",&p);
    printf("Enter the Rate:");
    scanf("%f",&r);
    printf("Enter the time period:");
    scanf("%f",&t);
    s=(p*r*t)/100;
    printf("The simple interest is:%.2f",s);
    return 0;


}
