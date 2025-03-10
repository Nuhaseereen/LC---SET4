int mostWordsFound(char** sentences, int sentencesSize) {
    int a[567] = {0};
    int i = 0, m = 0;
    for (i = 0; i < sentencesSize; i++) {
        int j = 0;
        while (sentences[i][j] != '\0') {
            if (sentences[i][j] == ' ') {
                a[i]++;
            }
            j++; 
        }
        a[i]++; 
        if (a[i] > m) {
            m = a[i]; 
        }
    }
    return m;
}
