#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

#define printDebug(...) do{\
    char *isDebug;\
    char message[255]; \
    isDebug = getenv("DEBUG");\
    if (isDebug != NULL && !strcmp(isDebug, "y")) {\
        fprintf (stderr, __VA_ARGS__);\
    }\
} while(0)

void printDebugMethod(char *message) {

    char *isDebug;
    isDebug = getenv("DEBUG");

    if(isDebug != NULL && !strcmp(isDebug, "y")) {
        fputs(message, stderr);
    }
}

int main() {

    int character;
    while(!feof(stdin)) {

        character = fgetc(stdin);
        fputc(character, stdout);
        //sprintf(message, "Error: character %c ", character);
        printDebug("Error character %c \n", character);

    }
    return 0;
}
