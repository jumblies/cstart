/*  This is to count cards
    an example from head first c  
*/
#include <stdio.h>

int main()
{
    int count = 0;
    for (int reps = 10; reps > 0; reps--)
    {
        char card_name[3];
        puts("Enter the card name");
        scanf("%2s", card_name);
        int val = 0;
        switch (card_name[0])
        {
        case 'K':
            // val = 10;
            // break;
        case 'Q':
            // val = 10;  //Not necessary to define the case each time.
            // break;
        case 'J':
            val = 10;
            break;
        case 'A':
            val = 11;
            break;
        default:
            val = atoi(card_name);
            break;
        }

        if ((val >= 3) && (val <= 6))
        {
            puts("Count has gone up.");
            val = atoi(card_name);
            count++;
        }
        else if (val >= 10)
        {
            puts("Count has gone down.");
            count--;
        }
        printf("The value is %i \n", (val));
        printf("The value of the count is %i.\n", count);
    }
    return 0;
}