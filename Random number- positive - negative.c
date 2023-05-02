#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void howMany(const int* const array, int* const posPtr, int* const negPtr);

int main()
{
   int array[10], i, posPtr, negPtr;


   printf("10 random numbers generated = ");

   for (i = 0; i < 10; i++)
   {
      array[i] = rand() % 201 - 100;
      printf("%d ",array[i]);
   }
   printf("\n-------------------------------\n");

   howMany(array, &posPtr, &negPtr);
   
   printf("\nNumber of positive numbers: %d\n", posPtr);
   printf("Number of negative numbers: %d\n", negPtr);


}

void howMany(const int* const array, int* const posPtr, int* const negPtr)
{
   for (int i = 0; i < 10; i++)
   {
        if (array[i] > 0)
            (*posPtr)++;
        else if (array[i] < 0)
            (*negPtr)++;
   }
}
