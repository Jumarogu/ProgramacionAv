# SHADOWS OF THE KNIGHT - EPISODE 1

## Description
    Batman tiene que encontrar una bomba que se encuentra escondida dentro un edificio.
    Batman will look for the hostages on a given building by jumping from one window to another using his grapnel gun. Batman's goal is to jump to the window where the hostages are located in order to disarm the bombs. Unfortunately he has a limited number of jumps before the bombs go off...

    Your mission is to program the device so that it indicates the location of the next window Batman should jump to in order to reach the bombs' room as soon as possible.
    Buildings are represented as a rectangular array of windows, the window in the top left corner of the building is at index (0,0).

## Context

### Initialization input
    Line 1 : 2 integers W H. The (W, H) couple represents the width and height of the building as a number of windows.

    Line 2 : 1 integer N, which represents the number of jumps Batman can make before the bombs go off.

    Line 3 : 2 integers X0 Y0, representing the starting position of Batman.

    Input for one game turn

### The direction indicating where the bomb is.
    U (Up)
    UR (Up-Right)
    R (Right)
    DR (Down-Right)
    D (Down)
    DL (Down-Left)
    L (Left)
    UL (Up-Left)

### Output for one game turn
    A single line with 2 integers X Y separated by a space character. (X, Y) represents the location of the next window Batman should jump to. X represents the index along the horizontal axis, Y represents the index along the vertical axis. (0,0) is located in the top-left corner of the building.

## Breakdown
    Tomando en cuenta nuestros casos base para cada dirección: 
        Si la bomba se encuentra a la derecha de batman y nos encontramos en la posición x = W - 2 (antes del límite) quiere decir que la bomba se encuuentra en la posición x + 1 ó x = W - 1 (el límite).
        Al igual cuando la bomba indica estar arriba y nuestra posición y = 1 la bomba estará en la posición y = 0.
        Cuando la bomba indica estar abajo y te encuentras antes del limite y = H - 2, la bomba estará en la pos y = H - 1.
        Y finalmente si se encuentra hacia la izquierda y nuestra posición x = 1, la bomba estará en la posición x = 0.

    Ahora en otros casos calcularemos la cantidad de lugares que podemos avanzar para llegar al límite de X y Y. 
    Si nos dice que se encuentra hacia arriba o abajo, dividiremos la cantidad de espacios que hay para llegar al límite en 2 y avanzaremos ese número de espacios hasta encontrar la bomba. El problema con este método es que seguiremos tomando en cuenta lugares en donde sabemos que no se encuentra la bomba. Por ejemplo en el Test case de la torre, en donde movernos causaría un cambio de dirección y nos haría tomar en cuenta lugares que sabemos que no se encuentran.
    Si la dirección es combinada, refiriendome a arriba-derecha, arriba-izquierda, etc. Calcularemos la cantidad de espacios hasta llegar a los límites, comparamos cuál cantidad de movimientos es menor, si hay menos espacios hacia arriba que hacia la derecha (en el caso arriba-derecha), entonces nos movemos hacia arriba de la misma manera que lo hacemos cuando la dirección es única hacia arriba. Dividimos entre 2 los espacios que podemos recorrer y nos movemos esa cantidad de lugares. Así hasta llegar a la bomba. El problema es de nuevo el mismo, tomar en cuenta lugares que claramente no tienen la bomba.


