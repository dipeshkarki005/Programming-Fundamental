/*
Student Name : Dipesh Karki
Roll No.: 13
Subject : Programming fundamental
Program : write a c program to check assigned from user is Alphabet or not.
lab sheet : 14
Date : 21 December , 2016
*/
#include<stdio.h>
#include<conio.h>
int main(){
char c;
int ascii;
printf("Enter any Character : ");
scanf("%c",&c);
ascii=c;
if(ascii>=97&&ascii<=122||ascii>=65&&ascii<=90)
{
    printf("\n%c is a Alphabet",ascii);
}
else
{
    printf("\n%c is not a Alphabet",ascii);
}

return 0;
getch();
}
