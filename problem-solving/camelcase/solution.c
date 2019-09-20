int camelcase(char* s) {

    int i,ct=1;

    for(i=0;i<strlen(s);i++)
    {
        if(('A' <= s[i]) && (s[i] <= 'Z'))
        {
            ct++;
        }   

    }
    return ct;
}
