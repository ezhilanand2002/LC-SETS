int countCharacterOccurrences(char *str, char x) {
    int count = 0;
    while (*str != '\0') {
        if (*str == x) {
            count++;
        }
        str++;
    }
    return count;
}

int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    int* indices = (int*)malloc(wordsSize * sizeof(int));
    int count = 0;
    
    for (int i = 0; i < wordsSize; i++) {
        if (countCharacterOccurrences(words[i], x) > 0) {
            indices[count++] = i;
        }
    }
    
    *returnSize = count;
    return indices;
}



