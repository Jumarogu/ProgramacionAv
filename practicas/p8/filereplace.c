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
    char *fileName = "input.txt";
    FILE *input;
    char *search = "mundo";
    char *replace = "NUNDOTE";
    char word[255];
    long searchPos = 0;
    int character;
    input = fopen(fileName, "r");

    while(1) {
        fscanf(input, "%s", word);
        if(feof(input)) {
            break;
        }
        if(strcmp(word, search) == 0) {
            printDebug("Found %s\n", word);
            fseek(input , -1*strlen(search), SEEK_CUR);
            searchPos = ftell(input);
            printDebug("SearchPos = %ld \n", searchPos);
            rewind(input);
            while(ftell(input) != searchPos) {
                character = fgetc(input);
                fputc( character, stdout);
            }
            break;
        }
    }

    return 0;
}