#include <stdio.h> 
#include <time.h>

int main() {

    int valuea = 0, valueb = 10;
    int taget = 12;
    int values[] = {2, 3, 4, 6, 7, 5, 9};
    int indexes[2];

    int sizeofvalues = sizeof(values)/sizeof(values[0]);
    printf("Size of array %d \n", sizeofvalues );
    clock_t begin = clock();
    int j = 0;
    while(j > sizeofvalues){
        
        for(int i = j + 1; i < sizeofvalues; i++) {
            
            //valuea = valuea + valueb;

        }
        j++;
    }

    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("value a = %d \n", valuea);
    printf("seconds s = %f \n", time_spent);
    return 0;
}