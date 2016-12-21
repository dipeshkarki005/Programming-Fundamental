/*
Student Name : Dipesh Karki
Roll No.: 13
Subject : Programming fundamental
Program : write a c program to check assigned from user is vowel or not.
lab sheet : 14
Date : 21 December , 2016
*/
#include<conio.h>
#include<stdio.h>
int main(){
char c;
printf("Enter any Character :");
scanf("%c",&c);
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
{
    printf("\n%c is a Vowel",c);
}
else
{
    printf("\n%c is not a Vowel",c);
}
return 0;
getch();
}
