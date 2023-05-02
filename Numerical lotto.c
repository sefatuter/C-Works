#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define N 6

void loto6_49(int, char);

int main()
{
    int amount;
    char choose;

    printf(" 6/49 NUMERICAL LOTTO \n");
    printf("---------------------\n");
    printf("C - Play Column\n");
    printf("T - Play Ticket\n");
    printf("Column or Ticket (C/T)? ");
    scanf("%c",&choose);

    if (choose == 'C' || choose == 'c' )
    {
        printf("How many C's will be played? ");
        scanf("%d",&amount);
    }
    else if (choose == 'T' || choose == 't')
    {
        printf("How many T's will be played? ");
        scanf("%d",&amount);
    }
    else
    {
        printf("!!! You Entered Wrong Character !!!");
        
        return 0;
    }

    loto6_49(amount, choose);

    return 0;
}

void loto6_49(int amount, char choose)
{
    int gen[N], temp;
    srand(time(NULL));

    if (choose == 'C' || choose == 'c')
    {
        for (int i = 0; i < amount; i++)
        {

            printf("\n\n %d. Column",i+1);
            printf("\n-------------\n");

            for (int a = 0; a < N; a++)
                {
                    gen[a] = rand() % 49 + 1;
                    for (int b = 0; b < a; b++)
                    {
                        if (gen[a] == gen[b])
                        {
                            a--;
                            break;
                        }
                    }
                }
            
            for (int x = 0; x < N-1 ; x++)
                for (int y = 0; y < N-1; y++)
                    if (gen[y] > gen[y+1] )
                    {
                        temp = gen[y];
                        gen[y] = gen[y+1];
                        gen[y+1] = temp;
                    }

            for (int m = 0; m < N; m++)
            {
                printf("%d\t", gen[m]);
            }        
        }
    }
    
else if(choose == 'T' || choose == 't')
    {
        int count;
        for (int i = 0; i < amount; i++)
        {    
            count++;
            for (int j = 0; j <8 ; j++)
            {
                printf("\n\n%d. Ticket %d. Column", count, j+1);
                printf("\n--------------------------\n");
            
                    for (int a = 0; a < N; a++)
                    {
                        gen[a] = rand() % 49 + 1;
                        for (int b = 0; b < a; b++)
                        {
                            if (gen[a] == gen[b])
                            {
                                a--;
                                break;
                            }
                        }
                    }
                
                for (int x = 0; x < N-1 ; x++)
                    for (int y = 0; y < N-1; y++)
                        if (gen[y] > gen[y+1] )
                        {
                            temp = gen[y];
                            gen[y] = gen[y+1];
                            gen[y+1] = temp;
                        }
                for (int m = 0; m < N; m++)
                {
                    printf("%d\t", gen[m]);
                }    
            }                        
        }        
    }
}
