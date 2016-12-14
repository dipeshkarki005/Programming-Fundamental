/*
Student Name : Dipesh Karki
Roll No.: 13
Subject : Programming fundamental
Program : write a c program to two number using temporary variable using third variable
lab sheet : 12
Date : 14 December , 2016
*/
#include<stdio.h>
#include<conio.h>
int main(){
int a,b,temp;
printf("Enter the first number:");
scanf("%d",&a);
printf("Enter the second number:");
scanf("%d",&b);
printf("\nThe value before swapped is:%d",a);
printf("\nThe value before swapped is:%d\n",b);
temp=a;
a=b;
b=temp;
printf("\nThe value after swapped is:%d",a);
printf("\nThe value after swapped is:%d",b);
return 0;
getch();
}
