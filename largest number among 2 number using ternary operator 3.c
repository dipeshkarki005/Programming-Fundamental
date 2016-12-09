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
int a,b;
printf("\nEnter the First Number:");
scanf("%d",&a);
printf("\nEnter the Second Number:");
scanf("%d",&b);
(a>=b)? printf("\n%d is the largest number",a): printf("\n%d is the largest number",b);
return 0;
getch();
}
