# 1131. Copying
Time limit: 0.25 second
Memory limit: 64 MB

A new educating program was received by the kindergarten. Of course, children have discovered it immediately and want to play with it as soon as possible. In order to let them do it the program has to be copied to all the N computers that the kindergarten had bought just before the default of 1998. At the moment the program is installed only on one computer. Other computers do not have floppy drives and are not connected with a local network. The only way to transfer information from one computer to another is to copy it using a null-modem cable (a cable that connects two computers directly). So, if the program is installed on a computer, it can be copied to some other (but only one!) computer within an hour. There are only K null-modem cables in the kindergarten. Your task is to estimate the minimal time necessary for copying the program to all the computers in the kindergarten.

Input
The only input line contains two integers separated with a space: N and K (1 ≤ N ≤ 109; 1 ≤ K ≤ 109).

Output
You are to output the minimal time (in hours) necessary for copying of the program to all the computers.

Sample

input	output
8 3     4

## Descripción
La escuela tiene n computadoras 1 de ellas tendrá el programa isntalado  y tendremos que copiar el programa a n - 1 computadoras, teniendo k cables para hacerlo, el máximo de copias que podemos hacer en 1 hora depende del número de computadoras disponibles (con el programa instalado) y el número de cables disponibles (k). Tendremos que contar el número mínimo de horas que nos tomará copiar el programa a todas las computadoras y será nuestro output (h).

## Contexto
Inputs
n será un número mayor a 0 (número de computadoras en la escuela)
k deber ser número mayor a 0 (número de cables disponibles)

## Análisis (BREAKDOWN)

Al inicio solo prodremos transmitir a 1 computadora ya que solo 1 tiene el programa instalado. Si n = 1, horas (h) serán 0, independiente del valor k recibido.
Si nuestra entrada k = 1, el output h será = n - 1, ya que solo podremos hacer 1 copia cada hora porque solo hay 1 cable.

Tendremos 2 variables nuevas copiadas y senders, senders será = 1 al principio ya que hay 1 al menos computadora con el programa.
Contaremos cada hora y sumaremos el número de senders a copiadas cada hora hasta que senders sea mayor o igual a k, cuando eso pase, sumaremos solo k a copiados cada hora. Terminará el programa una vez que copiadas indica que su valor es igual a n e imprimirá las horas tomadas. En folder imgs se encuentra el diagrama de flujo.