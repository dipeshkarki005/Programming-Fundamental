/*
Student Name : Dipesh Karki
Roll No.: 13
Subject : Programming fundamental
Program : write a c program to use logical operator
lab sheet : 10
Date : 7 December , 2016
*/

#include<stdio.h>
#include<conio.h>
int main(){
int a,b,c;
printf("\nEnter the first number (a): ");
scanf("%d",&a);

printf("\nEnter the second number (b): ");
scanf("%d",&b);

printf("\nEnter the third number (c): ");
scanf("%d",&c);

if(a>=b && a>=c)
{
    printf("\nThe greater number is a: %d",a);
}
else if(b>=c)
{
    printf("\nThe greater number is b: %d",b);
}
else
{
    printf("\nThe greater number is c: %d",c);
}
return 0;

getch ();
}
