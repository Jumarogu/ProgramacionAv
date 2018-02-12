#include <stdio.h>

int main() {

    int n, k;
    int hours, copied, senders;

    copied = 0;
    hours = 0;
    senders = 1;
    printf("Enter n and k values: \n");
    scanf("%d %d", &n, &k);
    
    while(copied < n - 1) {
        hours ++;
        if(senders >= k) {
            copied += k;
            senders = k;
        } else {
            copied += senders;
            senders = copied + 1;
        }
    }
    printf("hours = %d \n", hours);

    return 0;
}