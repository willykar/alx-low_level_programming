#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countWords(const char *str);

char **strtow(char *str)
{
    int numWords;
    int wordIndex = 0;
    int start = 0;
    int i, j;
    int numWords = countWords(str);
    
    char **wordArray = (char **)malloc((numWords + 1) * sizeof(char *));
    
    if (str == NULL || *str == '\0') {
        return (NULL);
    }

    numWords = countWords(str);
    
    if (wordArray == NULL) {
        return (NULL);
    }

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            if (i > start) {
                wordArray[wordIndex] = (char *)malloc((i - start + 1) * sizeof(char));
                if (wordArray[wordIndex] == NULL)
                {
                    for (j = 0; j < wordIndex; j++) {
                        free(wordArray[j]);
                    }
                    free(wordArray);
                    return (NULL);
                }
                strncpy(wordArray[wordIndex], str + start, i - start);
                wordArray[wordIndex][i - start] = '\0';
                wordIndex++;
            }
            start = i + 1;
        }
    }
    if (str[start] != '\0') {
        wordArray[wordIndex] = (char *)malloc((strlen(str + start) + 1) * sizeof(char));
        if (wordArray[wordIndex] == NULL)
        {
            for (j = 0; j < wordIndex; j++) {
                free(wordArray[j]);
            }
            free(wordArray);
            return (NULL);
        }
        strcpy(wordArray[wordIndex], str + start);
        wordIndex++;
    }

    wordArray[wordIndex] = NULL;
    return (wordArray);
}

int countWords(const char *str)
{
    int count = 0;
    int word = 0;
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            if (!word) {
                count++;
                word = 1;
            }
        } else {
            word = 0;
        }
    }

    return (count);
}

int main(void)
{
    int i;
    char **words = strtow("Hello World   This is a test");
    if (words == NULL) {
        printf("Memory allocation failed or input is empty.\n");
        return (1);
    }

    for (i = 0; words[i] != NULL; i++) {
        printf("%s\n", words[i]);
        free(words[i]);
    }

    free(words);
    return (0);
}
