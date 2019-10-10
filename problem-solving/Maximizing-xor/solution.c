int maximizingXor(int l, int r) {
    int i,j,large;
    large = 0;
    for(i=l; i<=r; i++)
    {
        for(j=i+1; j<=r; j++)
        {
            if((i^j)> large)
                large = i^j;
 
        }
    }
    return large;
}
