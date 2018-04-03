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
    int count = 2;
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
        // En esta parte se convierte el numero inicial a entero sscanf
        // se multiplica por el siguiente contador el inicial es 2, se aumenta el siguiente num
        // se guardan los nuevos numero vistos
        // se verifica si el arreglo est'a completo
        // se imprime el ultimo valor 
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