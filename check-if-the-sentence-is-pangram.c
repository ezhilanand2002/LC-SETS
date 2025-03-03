bool checkIfPangram(char* sentence) {
    int seen[26]={0};

    size_t len = strlen(sentence);

    for(int i=0;i<len;i++)
    {
        seen[(int)sentence[i] - 'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(seen[i]==0)
        {
            return 0;
        }
    }
    return 1;
}
