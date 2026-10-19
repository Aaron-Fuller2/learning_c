/*
Write a program that translates an alphabetic phone number into numeric form:
Enter phone number : CALI-ATT
2255288
(In case you don't have a telephone nearby. here are the letters on the keys: 2=ABC, 3=DEF,
4=GHl, 5=JKL, 6=MNO, 7=PRS, 8=TUV, 9=WXY.) If the original phone number contains
nonalphabetic characters (digits or punctuation, for example), leave them unchanged:
Enter phone number: 1-800-COL-LECT
1-800-265-5328
You may assume that any letters entered by the user are upper case.
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;

    printf("Enter phone number: ");
    
    while ((ch = getchar()) != '\n')
    {
        ch = toupper(ch);
        
        if (ch == 'A' || ch == 'B' || ch == 'C')
        {
            putchar('2');
        } else if (ch == 'D' || ch == 'E' || ch == 'F')
        {
            putchar('3');
        } else if (ch == 'G' || ch == 'H' || ch == 'I')
        {
            putchar('4');
        } else if (ch == 'J' || ch == 'K' || ch == 'L')
        {
            putchar('5');
        } else if (ch == 'M' || ch == 'N' || ch == 'O')
        {
            putchar('6');
        }else if (ch == 'P' || ch == 'R' || ch == 'S')
        {
            putchar('7');
        }else if (ch == 'T' || ch == 'U' || ch == 'V')
        {
            putchar('8');
        }else if (ch == 'W' || ch == 'X' || ch == 'Y')
        {
            putchar('9');
        } else
        {
            putchar(ch);
        }
    }
    printf("\n\n");

    return 0;
}