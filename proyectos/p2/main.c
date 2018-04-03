#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {

    bool completedArray(bool *visited);
    char initialNumber;
    int number;
    bool visited[10] = {false};
    int testCases;
    int numberLenght;
    int count = 0;
    scanf("%d", &testCases);

    scanf("%c", &initialNumber);
    printf("%c", initialNumber);

    sscanf(&initialNumber, "%d", &number);
    numberLenght = strlen(&initialNumber);


    for(int i = 0; i < numberLenght; i ++){
        int index = initialNumber[i] - '0';
        if(! visited[index]) {
            visited[index] = true;
        }
    }

    while(!completedArray(&visited)){

    }

}

bool completedArray(bool *visited) {
    for(int i = 0; i < 10; i++){
        if(!(*visited[0])) {
            return false;
        }
    }
    return true;
}