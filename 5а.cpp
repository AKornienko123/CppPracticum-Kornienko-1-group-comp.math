#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int sLen;
    int mLen;
    char a[32];
    char* word;
    char* text;
    char b[] = " \n";
    FILE* file = fopen("txt.txt", "rb");
     fseek(file, 0, SEEK_END);
     sLen = ftell(file);
     fseek(file, 0, SEEK_SET);
     if ((text = (char*)malloc((1 + sLen) * sizeof(char))))
         if (fread(text, 1, sLen, file)) 
             text[sLen] = '\0';
     fclose(file);
     if (text)
     {
        mLen = (sLen = 0);
        printf("Text\n");
        word = strtok(text, b);
        while (word)
        {
            printf("%s ", word);
            sLen = strlen(word);
            if (mLen < sLen)
            {
                strcpy(a, word);
                mLen = sLen;
            }
            word = strtok(NULL, b);
        }
        printf("\nWord %s\n", a);
     }

    
    return 0;
}