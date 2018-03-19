#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int W; // width of the building.
    int H; // height of the building.
    scanf("%d%d", &W, &H);
    int N; // maximum number of turns before game over.
    scanf("%d", &N);
    int X0;
    int Y0;
    scanf("%d%d", &X0, &Y0);

    // game loop
    while (1) {
        char bombDir[4]; // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
        scanf("%s", bombDir);
        int newYPos = Y0;
        int newXPos = X0;
        
        if(strcmp(bombDir, "U") == 0) {
            if(Y0 == 1) {
                newYPos = 0;
                Y0 = newYPos;
            } else {
                newYPos = Y0 / 2;
                newYPos = Y0 - newYPos;
                Y0 = newYPos;
            }
        } else if(strcmp(bombDir, "R") == 0) {
            if(X0 == (W - 2)) {
                newXPos = W - 1;
                X0 = newXPos;
            } else {
                newXPos = (W - 1) - X0;
                newXPos = newXPos / 2;
                newXPos = X0 + newXPos;
                X0 = newXPos;
            }
        
        } else if(strcmp(bombDir, "D") == 0) {
            if(Y0 == (H-2)) {
                newYPos = H - 1;
                Y0 = newYPos;
            } else {
                newYPos = (H - 1) - Y0;
                newYPos = newYPos / 2;
                newYPos = Y0 + newYPos;
                Y0 = newYPos;
            }
        
        } else if(strcmp(bombDir, "L") == 0) {
            if(X0 == 1) {
                newXPos = 0;
                X0 = newXPos;
            } else {
                newXPos = X0 / 2;
                newXPos = X0 - newXPos;
                X0 = newXPos;
            }
             
        } else if(strcmp(bombDir, "UR") == 0) {
            if(((W - 1) - X0) < Y0){ // move on x axis
                if(X0 == (W - 2)) {
                    newXPos = W - 1;
                    X0 = newXPos;
                } else {
                    newXPos = (W - 1) - X0;
                    newXPos = newXPos / 2;
                    newXPos = X0 + newXPos;
                    X0 = newXPos;
                }
            } else { // move on y axis
                if(Y0 == 1) {
                    newYPos = 0;
                    Y0 = newYPos;
                } else {
                    newYPos = Y0 / 2;
                    newYPos = Y0 - newYPos;
                    Y0 = newYPos;
                }
            }
        } else if(strcmp(bombDir, "DR") == 0) {
            if(((W - 1) - X0) < ((H - 1) - Y0)) {
                if(X0 == (W - 2)) {
                    newXPos = W - 1;
                    X0 = newXPos;
                } else {
                    newXPos = (W - 1) - X0;
                    newXPos = newXPos / 2;
                    newXPos = X0 + newXPos;
                    X0 = newXPos;
                }
            } else {
                if(Y0 == (H-2)) {
                    newYPos = H - 1;
                    Y0 = newYPos;
                } else {
                    newYPos = (H - 1) - Y0;
                    newYPos = newYPos / 2;
                    newYPos = Y0 + newYPos;
                    Y0 = newYPos;
                }
            }
        
        } else if(strcmp(bombDir, "DL") == 0) {
            if(X0 < ((H - 1) - Y0)) {
                if(X0 == 1) {
                    newXPos = 0;
                    X0 = newXPos;
                } else {
                    newXPos = X0 / 2;
                    newXPos = X0 - newXPos;
                    X0 = newXPos;
                }
            } else {
                if(Y0 == (H-2)) {
                    newYPos = H - 1;
                    Y0 = newYPos;
                } else {
                    newYPos = (H - 1) - Y0;
                    newYPos = newYPos / 2;
                    newYPos = Y0 + newYPos;
                    Y0 = newYPos;
                }
            }
            
        } else if(strcmp(bombDir, "UL") == 0) {
            if(X0 < Y0) {
                if(X0 == 1) {
                    newXPos = 0;
                    X0 = newXPos;
                } else {
                    newXPos = X0 / 2;
                    newXPos = X0 - newXPos;
                    X0 = newXPos;
                } 
            } else {
                if(Y0 == 1) {
                    newYPos = 0;
                    Y0 = newYPos;
                } else {
                    newYPos = Y0 / 2;
                    newYPos = Y0 - newYPos;
                    Y0 = newYPos;
                }
            }
        
        }
        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        //fprintf(bombDir, "bomb direction \n");
        // To debug: fprintf(stderr, "Debug messages...\n");


        // the location of the next window Batman should jump to.
        printf("%d %d\n", newXPos, newYPos);
    }

    return 0;
}