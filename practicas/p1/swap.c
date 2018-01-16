#include <stdio.h>

// PASAR VALORES EN FUNCIONES

int swap_no(int a, int b) {
    int t;
    t = a;
    a = b;
    b = t;
    return 0;
}

int swap(int *a, int *b) {
    int t;
    t = *a;
    *a = *b;
    *b = t;
    return 0;
}

int main() {
    int a = 5;
    int b = 10;

    swap_no(a, b);
    printf ("a = %d, b = %d \n", a, b);
    
    swap(&a, &b);
    printf ("a = %d, b = %d \n", a, b);

    return 0;
}