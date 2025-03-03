int countKeyChanges(char* s) 
{
    int l=strlen(s);
    int c=0;
    for(int i=0;i<l-1;i++)
    {
        if(tolower(s[i])!=tolower(s[i+1]))
         c++;   
    }
    return c;
}
