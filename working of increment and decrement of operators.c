/*
Student Name : Dipesh Karki
Subject : Programming fundamental
Program : write a c program to demonstrate the working of increment and decrement of operators.
lab sheet : 09
Date : 2 December , 2016
*/

#include<stdio.h>
#include<conio.h>
int main(){
int a;
printf("Enter the Number:\n");
scanf("%d",&a);
printf("The post increment is:%d\n",a++);
printf("The pre increment is:%d\n",++a);
printf("\nThe post decrement is:%d\n",a--);
printf("The pre decrement is:%d\n",--a);
return 0;
getch();
}
