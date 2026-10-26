#include <stdio.h>
#include <ctype.h>
#define TRUE 1
#define FALSE 0
#define SIZE ((int)(sizeof(message_entered) / sizeof(message_entered[0])))

typedef int Bool;

int main(void)
{
    int ch, i = 0;
    char message_entered[150];
    printf("Enter message: ");


    do
    {
        ch = getchar();

        if (ch == 'a' || ch == 'A')
        {
            ch = '4';
        } else if (ch == 'b' || ch == 'B')
        {
            ch = '8';
        } else if (ch == 'e' || ch == 'E')
        {
            ch = '3';
        } else if (ch == 'i' || ch == 'I')
        {
            ch = '1';
        }else if (ch == 'o' || ch == 'O')
        {
            ch = '0';
        }else if (ch == 's' || ch == 'S')
        {
            ch = '5';
        }
    
        message_entered[i] =  toupper(ch);
        i++;

    } while (i < SIZE && ch != '\n');
    message_entered[i - 1] = '\0';

    printf("In BIFF-speak: %s!!!!!!!!\n", message_entered); 
}
