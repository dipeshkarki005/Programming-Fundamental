/*
Student Name : Dipesh Karki
Roll No.: 13
Subject : Programming fundamental
Program : write a c program to use ternary operator.
lab sheet : 12
Date : 9 December , 2016
*/
#include<stdio.h>
#include<conio.h>
int main(){
int a,b,c;
printf("Enter the first number:");
scanf("%d",&a);
printf("Enter the second number:");
scanf("%d",&b);
printf("Enter the third number:");
scanf("%d",&c);
(a>=b&&a>=c)? printf("%d is the largest number",a):(b>=a&&b>=c)? printf("%d is the largest number",b): printf("%d is the largest number",c);
return 0;
getch();
}
