#include <stdio.h>

int main(){

    char source[] = "int age = 5;";
    char *pSource = source;

    while(*pSource != '\0'){

        if(*pSource == ' '){
            pSource++;
        }

        printf("character: %c\n", *pSource);

        pSource++;

    }

    return 0;
}