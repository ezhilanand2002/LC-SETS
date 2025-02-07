int titleToNumber(char * columnTitle)
{
    int output=0;
    for(int i=0;i<strlen(columnTitle);i++)
    {
        output*=26;
        output+=(columnTitle[i]-'A'+1);
    }
    return output;
}
