#include <stdio.h>

void main()
{
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);


    if((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
    {
        printf("'%c' is alphabet \n", ch);
    }
    else if(ch >= 48 && ch <= 57)
    {
        printf("'%c' is digit.\n", ch);
        printf("ASCII value of digit '%c' is %d\n",ch,ch);
    }
 }
