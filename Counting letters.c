#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 100
void countDULA(const char *, int *, int *, int *, int *);

int main(){

    char str[SIZE];

    int dig = 0, up = 0, low = 0, total= 0;

    printf("Enter a sentence: ");
    fgets(str, SIZE, stdin);
   

    countDULA(str, &dig, &up, &low, &total);

    printf("\n-------------------");
    printf("\nNumber of digits = %d", dig);
    printf("\nNumber of upper case letters = %d", up);
    printf("\nNumber of lower case letters = %d", low);
    printf("\nNumber of total alphabet letters = %d", total);

    return 0;
}

void countDULA(const char *str, int *dig, int *up, int *low, int *total){
    const char *ptr = str;
    int _up = 0, _dig = 0, _low =0, _total = 0;

    while (*ptr != '\0'){
        char temp = *ptr;

        if (isupper(temp)){
            _up++;
            _total++;
        }
        else if (islower(temp)){
            _low++;
            _total++;
        }
        else if (isdigit(temp))
        {
            _dig++;
        }
        
        ptr++;
    }
    *dig = _dig;
    *up = _up;
    *low = _low;
    *total = _total;
}
