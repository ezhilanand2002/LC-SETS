int firstUniqChar(char* s) {
    int freq[256]={0};
    for(int i=0;i<strlen(s);i++)
    {
        freq[s[i]]++;
    }  
    for(int i=0;i<strlen(s);i++)
    {
        if(freq[s[i]]==1)
        {
            return i;
            break;
        }
    }
    return -1;
}
