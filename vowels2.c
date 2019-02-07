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
else if(c == 'b' || c == 'c' || c == 'f' || c == 'g' || c == 'h'||c == 'j' || c == 'k' || c == 'l' || c == 'm' || c == 'n'||c == 'p' || c == 'q' || c == 'r' || c == 's' || c == 't'||c == 'v' || c == 'w' || c == 'x' || c == 'y' || c == 'z');
printf("%c is a consonant.", c);
else
printf("%c is invalid");
getch();
}
