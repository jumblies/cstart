/*  This is to count cards
    an example from head first c

    to run:
    gcc cards.c -o cards && cards  
*/
#include <stdio.h>

int main()
{
    int count = 0;
    int reps = 10;
    printf("count is stored at %p\n\n", &count); //& is the address of operator
        
    while (reps >= 0)
    {
        reps --; 
        char card_name[3];
        puts("Enter the card name");
        scanf("%2s", card_name);
        int val = 0;
        if (card_name[0] == 'K' || card_name[0] == 'Q' || card_name[0] == 'J')
        {
            val = 10;
        }
        else if (card_name[0] == 'A')
        {
            val = 11;
        }
        if ((atoi(card_name) >= 3) && (atoi(card_name) <= 6))
        {
            puts("Count has gone up.");
            val = atoi(card_name);
            count ++; 
        }
        else if (val >= 10)
        {
            puts("Count has gone down.");
            count --;
        }

        // {
        //     puts("That is not a valid number of decks");
        //     return 1;
        // }
        // printf("There are %i cards\n", (decks * 52));
        printf("The value is %i \n", (val));
        printf("The value of the count is %i.\n", count);

    }
    return 0;
}