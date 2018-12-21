/*  This is to count cards
    an example from head first c

    to run:
    gcc cards.c -o cards && cards  
*/
#include <stdio.h>

void count_increase(int *cnt){
    // *cnt = *cnt + 1;
    (*cnt)++; //Pointers require special methods in order not move the position
    // it is an order of precedence issue
    // https://stackoverflow.com/questions/8208021/how-to-increment-a-pointer-address-and-pointers-value
    printf("Count = %i\n", *cnt);
}


int main()
{

    int count = 0;
    int reps = 2;

    while (reps >= 0)
    {
        reps--;
        char card_name[3];

        puts("Enter the card name");
        scanf("%2s", card_name);
        int val = 0;

        printf("count is stored at %p\n", &count); //& is the address of operator
        printf("value is stored at %p\n", &val);   //& is the address of operator
        printf("reps is stored at %p\n", &reps);   //& is the address of operator
        
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
            count_increase(&count);
        }
        else if (val >= 10)
        {
            puts("Count has gone down.");
            count--;
        }

        // {
        //     puts("That is not a valid number of decks");
        //     return 1;
        // }
        // printf("There are %i cards\n", (decks * 52));
        printf("The value is %i and is stored at %p.\n", val, &val);
        printf("The count is %i and is stored at %p.\n", count, &count);
        printf("The reps=%i and is stored at %p.\n", reps, &reps);
    }
    return 0;
}