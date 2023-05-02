#include <stdio.h>

int main() {
    FILE *fptr;
    char fname[20], ch;
    int wrd = 1, charcounter = 1;

    printf("Count the number of words and chars in a file\n");
    printf("Input the file to be opened (Enter the path) : ");  // such as C:\\Users\\Pc\\Desktop\\test.txt
    scanf("%s", fname);

    fptr = fopen(fname, "r");

    if(fptr == NULL){
        puts("File does not exist or can not be opened");
        return 0;
    }

    ch = fgetc(fptr);
    while (ch != EOF) { //  equilavent to !feof(fptr)
        printf("%c", ch);
        
        if(ch == ' ' || ch == '\n'){
            wrd++;
        }
        else{
            charcounter++;
        }
        ch = fgetc(fptr);
    }
    printf("\n");
    printf("\nThe number of words is %d and the number of character %d",wrd-1, charcounter);

    fclose(fptr);    
}
