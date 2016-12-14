/*
Student Name : Dipesh Karki
Roll No.: 13
Subject : Programming fundamental
Program : write a c program to two number without using third variable
lab sheet : 12
Date : 14 December , 2016
*/
#include<stdio.h>
#include<conio.h>
int main(){
int a,b;
printf("Enter the first value:");
scanf("%d",&a);
printf("Enter the second value:");
scanf("%d",&b);
printf("\nThe value before swapped is:%d",a);
printf("\nThe value before swapped is:%d\n",b);
a=a-b;
b=a+b;
a=b-a;
printf("\nThe value after swapped is:%d",a);
printf("\nThe value after swapped is:%d",b);
return 0;
getch();
}
