long repeatedString(char* s, long n) {
    
    long i, num, a_ct, rem, ct = 0;
    int len = strlen(s);

    for(i=0; i<len; i++)
    {
        if(s[i] == 'a')
            ct++;
    }

    num = n/strlen(s);
    a_ct = ct * num;

    if(n % len != 0)
    {
        rem = n % len;
        for(i=0; i<rem; i++)
        {
            if(s[i] == 'a')
                a_ct++;
        }

    }
    return a_ct;



}
