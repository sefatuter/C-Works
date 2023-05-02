// This program was created to change the desired digit of an integer entered by the user.
#include <stdio.h>

int main()
{    
  int count = 0, dig, num, hane = 1, conv = 0;
  int n1, n2; 
  
  printf("Please enter an integer: ");
  scanf("%d",&num);

  printf("-----------------------\n");

  for (int i = 1; (num / i) != 0 ; i = i * 10)
  {
    count++;       
  }
    
  if(num == 0)
  {
   printf("--> The number has 1 digits!\n");
        
   printf("\nWhat is the new value of this digit: ");
   scanf("%d",&n2);
    
   if(n2 > 9 || n2 < 0)
    {
     printf("!!! The program ends !!!\n");
    }
    else
    {
     num = n2;
     printf("--> The number becomes %d", num);
    }     
  }
  else
  {
    conv = num;
    if (num < 0)
    {
        num = num * -1;
    }
        printf("--> The number has %d digits!\n", count);
  
        printf("Assuming that 1 represents the right most digit,");

        printf("\nWhich digit you want to change [1-%d]: ",count);
        scanf("%d",&n1);

    if (n1 > count || n1 <= 0)
    {
      printf("\nERROR: This number doesnot have %d. digit!\n", n1);
      printf("!!! The program ends !!!\n");
    }
    else
    {
      printf("\nWhat is the new value of this digit: ");
      scanf("%d",&n2);

      if(n2 > 9 || n2 < 0)
      {
        printf("!!! The program ends !!!\n");
      }

      else
      {
        while (n1 > 1)
         {
          hane = hane * 10;
          n1--;
         }
        dig = (num / hane) % 10;
        num = num - (hane*dig);
        num = num + (hane*n2);

        if (conv < 0)
         {
           num = num * -1;
         }
       printf("--> The number becomes %d", num);
      }
    }
  }    
  return 0;
}