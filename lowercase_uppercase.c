#include<stdio.h>
int main()
{
// ASCII VALUES
char ch;
printf("Enter your character\n");
scanf("%c",&ch);
if(ch<=122 && ch>=97){
    printf("the character you entered is lowercase\n");
}
else{
    printf("the character you entered is not a lowercase\n");
}
return 0;
}