There are N coins kept on the table, numbered from 0 to N - 1. Initially, each coin is kept tails up. You have to perform two types of operations:

1) Flip all coins numbered between A and B inclusive. This is represented by the command "0 A B"

2) Answer how many coins numbered between A and B inclusive are heads up. This is represented by the command "1 A B".

Sample Input :
4 7
1 0 3
0 1 2
1 0 1
1 0 0
0 0 3
1 0 3 
1 3 3

Sample Output :
0
1
0
2
1

Análisis
Para este problema obtenemos un número N, que es la cantidad de monedas en la mesa y un número de operations que seguirán.
Por cada número de operaciones indicadas obtendremos el rango y el tipo de operaci'on scanf("%d, %d, %d", &tipoOperacion, &a, &b)
Guardaremos cada operación en un queue, para después solo dequeue cada operación y contestarla.
Por cada operación que salga del queue mandaremos llamar a un método. Si la operación es 1 mandamos llamar answer(limInf, limSup), en caso de 0 flip(limInf, limSup)
Para nuestra operación flip, recibieremos 2 valores que es el rango de monedas que debemos voltear.
Para este problema podríamos usar un arreglo de booleans que se vuelva true cuando se voltea la moneda y su estado inicial será false, ya que todas las monedas están de cabeza.
Para flip(a,b) recorremos el arreglo de monedas en el rango y cambiamos el estado de cada moneda dependiendo de su estado actual.
Para nuestra función answer(a,b) recorremos nuestro arreglo en el rango indicado y después contaremos si está volteada o no la moneda, al final regresaremos el número de monedas volteadas.
La función answer solo será llamada cundo el tipo de operación es 1.

struct Operation{
    char type;
    int limInferior;
    int limSuperior;
};

flip(a, b):
    for(int i = a; i < b + 1; i ++):
        myCoins[i] = ! myCoins[i];

answer(a, b):
    count = 0;
    for(int i = a; i < b + 1; i++):
        if(myCoins[i]):
            count ++;
    return count;

