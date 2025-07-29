
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_PARAGRAPH 1000
#define MAX_WORDS 200
#define MAX_WORD_LENGTH 50

int main() {
    char paragraph[MAX_PARAGRAPH];
    char words[MAX_WORDS][MAX_WORD_LENGTH];
    int wordCount[MAX_WORDS] = {0};
    int totalWords = 0;

    printf("Enter a paragraph:\n");
    fgets(paragraph, MAX_PARAGRAPH, stdin);

    // Tokenize the paragraph into words
    char *token = strtok(paragraph, " .,;:!?()\n");
    while (token != NULL) {

        for (int i = 0; token[i]; i++) {
            token[i] = tolower(token[i]);
        }


        int found = 0;
        for (int i = 0; i < totalWords; i++) {
            if (strcmp(words[i], token) == 0) {
                wordCount[i]++;
                found = 1;
                break;
            }
        }

        if (!found && totalWords < MAX_WORDS) {
            strcpy(words[totalWords], token);
            wordCount[totalWords] = 1;
            totalWords++;
        }

        token = strtok(NULL, " .,;:!?()\n");
    }

    printf("\nWord Frequencies:\n");
    for (int i = 0; i < totalWords; i++) {
        printf("%s: %d\n", words[i], wordCount[i]);
    }

    return 0;
}
