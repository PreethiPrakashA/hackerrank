int countingValleys(int n, char* s) {
    int alt = 0, i, valleyct = 0;
    for(i = 0; i<n; i++)
    {
        if(s[i] == 'U')
        {
            if (alt == -1)
                valleyct++;
            alt++;
        }
        else if(s[i] == 'D')
            alt--;
        
    }
    return valleyct;

}
