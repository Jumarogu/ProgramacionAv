#include <stdio.h>

int main() {

    int a = 4;
    int j;
    float f = 7.5;
    int max = 2147483647;
    long d;
    int array[5];
    // Pointer almacena la direcci'on en memoria de la variable (&)
    int *p;
    p = &a;
    // * antes de un apuntador se refiere al contenido de esa direcci'on 
    *p = 7;
    p++;
    *p = 8;
    // Operaciones flotantes son más costosas, castear a int si no necesitamos decimales
    int b = a + (int)f; // 11
    float c = a * f;
    
    p = array;

    int sizeofp = sizeof(*p);
    printf(" sizeofp = %d \n", sizeofp);

    for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++) {
        *p = 67;
        p++;
        //array[i] = 67;
        // p[i] = 67; doing p + k
    }

    // C iguala al dato más grande
    // d = (long)max * (long)max;
    // d = max * max ---> overflow
    d = (long)max * max;



    printf(" p = %p, a = %d, b = %d, d = %ld \n", p, a, b, d);
    printf(" f = %f, c = %f, j = %d, array[1] = %d \n", f, c, j, array[1]); 
    return 0;
}