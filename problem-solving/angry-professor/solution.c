char* angryProfessor(int k, int a_count, int* a) {
    int i,j;
    int ct=0;
    static char str[5];
    for(i=0; i<a_count; i++)
    {
        if(a[i]<=0)
        {
            ct++;
        }
    }

    if(ct>=k)
    {
       strcpy(str,"NO");
       return str;
    }
    else
    {
        strcpy(str,"YES");
        return str;
    }


}
