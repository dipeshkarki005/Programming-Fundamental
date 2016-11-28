/*
Student Name : Dipesh Karki
Subject : Programming fundamental
Program : write a c program to enter any number and calculate its square
lab sheet : 07
Date : 28 November , 2016
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
float a,square,sqr;
printf("Enter the number:");
scanf("%f",&a);
square=pow(a,2);
sqr=sqrt(a);
printf("The square of the number is=%f",square);
printf("The squareroot of the number is=%f",sqr);
return 0;
getch();
}
