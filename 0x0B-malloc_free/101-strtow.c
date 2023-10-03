#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countWords(const char *str);

char **strtow(char *str)
{
    if (str == NULL || *str == '\0') {
        return NULL;
    }

    int numWords = countWords(str);
    char **wordArray = (char **)malloc((numWords + 1) * sizeof(char *));
    
    if (wordArray == NULL) {
        return NULL; // Memory allocation failed
    }

    int wordIndex = 0;
    int start = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            if (i > start) {
                // Allocate memory for the word
                wordArray[wordIndex] = (char *)malloc((i - start + 1) * sizeof(char));
                if (wordArray[wordIndex] == NULL) {
                    // Memory allocation failed, clean up and return NULL
                    for (int j = 0; j < wordIndex; j++) {
                        free(wordArray[j]);
                    }
                    free(wordArray);
                    return NULL;
                }
                // Copy the word
                strncpy(wordArray[wordIndex], str + start, i - start);
                wordArray[wordIndex][i - start] = '\0';
                wordIndex++;
            }
            start = i + 1; // Set the start index for the next word
        }
    }

    // Handle the last word
    if (str[start] != '\0') {
        wordArray[wordIndex] = (char *)malloc((strlen(str + start) + 1) * sizeof(char));
        if (wordArray[wordIndex] == NULL) {
            // Memory allocation failed, clean up and return NULL
            for (int j = 0; j < wordIndex; j++) {
                free(wordArray[j]);
            }
            free(wordArray);
            return NULL;
        }
        strcpy(wordArray[wordIndex], str + start);
        wordIndex++;
    }

    wordArray[wordIndex] = NULL; // Null-terminate the word array
    return wordArray;
}

int countWords(const char *str)
{
    int count = 0;
    int word = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            if (!word) {
                count++;
                word = 1;
            }
        } else {
            word = 0;
        }
    }

    return count;
}

int main(void)
{
    char **words = strtow("Hello World   This is a test");
    if (words == NULL) {
        printf("Memory allocation failed or input is empty.\n");
        return 1;
    }

    for (int i = 0; words[i] != NULL; i++) {
        printf("%s\n", words[i]);
        free(words[i]); // Free each word
    }

    free(words); // Free the word array
    return 0;
}
