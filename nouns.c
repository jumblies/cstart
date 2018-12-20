/* A first attempt at german nouns Q & A Progam
*/

#include <stdio.h>
char noun[20] = "Hauptmann";
char article[4] = "Der";
char answer[4];

int main()
{
    for (int i = 3; i > 0; i--)
    {
        printf("What is the article for the noun %s ? \n", noun);
        scanf("%3s", answer);
        if (strcmp(article, answer) == 0)
        {
            printf("The answer %s %s is correct!\n", answer, noun);
        }
        else
        {
            printf("Try again...\n");
            continue; 
            // if (i <= 0){
            // // continue;
            // printf("You blew it!\n");
            // }
        }
                break;
    
    }

    return 0;
}