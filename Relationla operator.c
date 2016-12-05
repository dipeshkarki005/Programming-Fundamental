/*
Student Name : Dipesh Karki
Roll No.: 13
Subject : Programming fundamental
Program : write a c program to use relational operator.
lab sheet : 10
Date : 5 December , 2016
*/
#include<stdio.h>
#include<conio.h>
int main(){
float a;
printf("Enter the number:\n");
scanf("%f",&a);

if(a>=60&&a<80)
{
    printf("You are passed in first division");
}
if(a>=50&&a<60)
{
  printf("You are passed in second division");
}
if(a>=40&&a<50)
{
    printf("You are passed in third division");
}

return 0;

getch();
}
