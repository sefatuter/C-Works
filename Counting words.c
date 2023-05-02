#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countWord(const char * str, char let );

int main(){

    char str[1000];
    char let;

    printf("Enter a sentence: ");
    fgets(str, 1000, stdin);

    printf("Enter a letter: ");
    scanf("%c", &let);
    
    printf("Number of words starting with %c = %d",let, countWord(str, toupper(let)));
}

int countWord(const char * str, char let ){
    const char *ptr = str;
    int count = 0, flag = 1;

    while (*ptr != '\0')
    {
        char temp = *ptr;
        if (flag == 1 && toupper(temp) == let)
        {
            count++;
        }
        else if (isblank(temp))
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
        ptr++;   
    }
    return count;
}
