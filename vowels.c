#include<stdio.h>
#include<conio.h>
void main()
{
char c;
clrscr();
printf("Enter an alphabet: ");
scanf("%c",&c);
if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
printf("%c is a vowel.", c);
else
printf("%c is a consonant.", c);
getch();
}
