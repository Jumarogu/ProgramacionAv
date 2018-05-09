Solución
Ya que se obtiene una oración, se guarda en un arreglo de caracteres,
comenzaremos a buscar las palabras para después agregarlas a otra variable o simplemente imprimirlas, se comenzará al final del
arreglo, se busca por un espacio vacio que es donde inicia una palabra,
al incio se guarda el index del caracter final de la oración que es el
final de la última palabra de la oración o el final de la primera 
palabra que se agregará la nueva oración, recorremos hacia atrás buscando el espacio que indique el inicio de una palabra y el final de otra (el final de la siguiente palabra)
cuando se encuentra una palabra se recorre desde el inicio hasta el
final de la palabra, la palabra y se guarda en un nuevo arreglo,
por eso comenzarmos al final, para agregar las palabras encontradas del final hasta el inicio. Cada que se encuentra una palabra se actualiza
el inicio y después de guardarla se actualiza el final.

en el código, obtenemos del usuario un entero que son el número de
oraciones que el programa revisará. Después obtiene cada una de las 
oraciones y manda llamar el método reverse, que recide 2 direcciones
una de la primera oración recibida y el segundo de la variable donde 
guardaremos el resultado, el método imprime la oración final.