/*
Student Name : Dipesh Karki
Subject : Programming fundamental
Program : write a c program to use assignment operator.
lab sheet : 08
Date : 30 November , 2016
*/

#include<stdio.h>
#include<conio.h>
int main(){
int a,b;

printf("Enter First Number:\n");
scanf("%d",&a);

printf("Enter Second Number:\n");
scanf("%d",&b);

a+=b;
printf("+=%d\n",a);

a-=b;
printf("-=%d\n",a);

a*=b;
printf("*=%d\n",a);

a/=b;
printf("/=%d\n",a);

return 0;
getch();

}
