#include<stdio.h>
#include<unistd.h>
#include<signal.h>

void reciveSignal(int sig) {
    printf("Hola mundo \n");
    printf("Recibi señal %d\n", sig);
}

int main() {
    signal(SIGUSR1, reciveSignal);
    while(1) {

    }
    return 0;
}