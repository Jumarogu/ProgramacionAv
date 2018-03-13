#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define printDebug(...) do{\
    char *isDebug;\
    char message[255]; \
    isDebug = getenv("DEBUG");\
    if (isDebug != NULL && !strcmp(isDebug, "y")) {\
        fprintf (stderr, __VA_ARGS__);\
    }\
} while(0)

int main() {

    char *fileName = "output.txt";
    FILE *output;
    int character;
    output = fopen(fileName, "a");
    printDebug("output = %p \n", output);
    do {
        character = fgetc(stdin);
        if(feof(stdin)) {
            break;
        }
        fputc(character, output);
    }
    while(!feof(stdin));
    fclose(output);

    return 0;
}