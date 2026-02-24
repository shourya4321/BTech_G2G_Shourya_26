#include <stdio.h>
#include <math.h>
int main(){
    float p,r,t,n,s;
    printf("Enter the pricipal:");
    scanf("%f",&p);
    printf("Enter the Rate:");
    scanf("%f",&r);
    printf("Enter the number of times interest applied per time period:");
    scanf("%f",&n);
    printf("Enter the time period:");
    scanf("%f",&t);
    s=p*pow((1+(r/n)),(n*t));
    printf("The compouund interest is:%.2f",s);
    return 0;


}
