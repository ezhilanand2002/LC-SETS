int mostWordsFound(char ** sentences, int sentencesSize){
    int word_count = 0;

    for (int i = 0; i < sentencesSize; i++) {
        int counter = 0;
        for (int count = 0; sentences[i][count] != '\0'; count++) {
            if (sentences[i][count] == ' ') {
                counter++;
            }
        }
        if (counter > word_count) {
            word_count = counter;
        }
    }

    return word_count + 1;
}
