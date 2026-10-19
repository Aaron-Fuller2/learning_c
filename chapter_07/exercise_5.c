/*
In the SCRABBLE Crossword Game, players form words using small tiles, each containing
a letter and a face value. The face value varies from one letter to another, based on the Iet-
ter's rarity. (Here are the face values: l: AEILNORSTU, 2: DG, 3: BCMP. 4: FHVWY. 5: K,
8: JX, IO: QZ.) Write a program that computes the value of a word by summing the values
of its letters:
Enter a word: pitfall
Scrabble value: 12
Your program should allow any mixture of lower-case and upper-case letters in the word.
Hint: Use the toupper library function
*/
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int score = 0;

    printf("Enter a word: ");

    while ((ch = getchar()) != '\n')
    {
        ch = toupper(ch);

        if (ch=='A' || ch=='E' || ch=='I' || ch=='L' || ch=='N' ||
            ch=='O' || ch=='R' || ch=='S' || ch=='T' || ch=='U')
        {
            score += 1;
        }
        else if (ch=='D' || ch=='G')
        {
            score += 2;
        }
        else if (ch=='B' || ch=='C' || ch=='M' || ch=='P')
        {
            score += 3;
        }
        else if (ch=='F' || ch=='H' || ch=='V' || ch=='W' || ch=='Y')
        {
            score += 4;
        }
        else if (ch=='K')
        {
            score += 5;
        }
        else if (ch=='J' || ch=='X')
        {
            score += 8;
        }
        else if (ch=='Q' || ch=='Z')
        {
            score += 10;
        }
        /* Non‑letters are ignored */
    }

    printf("Scrabble value: %d\n", score);

    return 0;
}
