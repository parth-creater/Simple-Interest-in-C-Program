#include<stdio.h>
int main()
{
float P,R,T,TOTAL;
clrscr();
printf("Enter Principal Value: ");
scanf("%f",&P);
printf("Enter Rate of Intrest: ");
scanf("%f",&R);
printf("Enter Time: ");
scanf("%f",&T);
TOTAL=(P*R*T)/100;
printf("Simple Intrest of Given Detail is: %f",TOTAL);
getch();
return 0;
}