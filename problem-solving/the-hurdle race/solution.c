int hurdleRace(int k, int height_count, int* height) {
    int i,large;
    large  = height[0];
    for(i=1; i<height_count; i++)
    {
        if(height[i]>large)
            large = height[i];
    }
    
    if(large<=k)
        return 0;

    else
        return abs(k-large);
}
