#include <stdio.h>
#include <string.h>

int main()
{   
    int numOfSentences;
    int count = 0;
    char sentence[100];
    char finalSentence[100];

    scanf("%d", &numOfSentences);
    //printf("\n%d", numOfSentences);


    while(count <= numOfSentences){
        gets( sentence);
        //printf("%s\n", sentence);
        reverse(&sentece, &finalSentence);
        printf("%s" finalSentence);
        count = count + 1;
    }
    return 0;
}

void reverse(char *sentence, char *finalSentence){

    int length   = strlen(*sentence);
    int index = 0;
    int i = 0;

    int wordStart = length - 1;
    int wordEnd   = length - 1;

    while(wordStart > 0)
    {
        if(*sentence[wordStart] == ' ')
        {
            i = wordStart + 1;
            while(i <= wordEnd)
            {
                *finalSentence[index] = *sentence[i];

                i++;
                index++;
            }
            *finalSentence[index++] = ' ';

            wordEnd = wordStart - 1;
        }

        wordStart--;
    }
    for(i=0; i <= wordEnd; i++)
    {
        *finalSentence[index] = *sentence[i];
        index++;
    }
    *finalSentence[index] = '\0'; 
}