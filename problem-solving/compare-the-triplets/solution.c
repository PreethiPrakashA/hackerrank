int* compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count) {
    
    *result_count = 2;
    static int result[2] ={0,0};
    int i;
    for(i =0; i < a_count; i++)
    {
        if(a[i] < b[i])
            result[1] = result[1] + 1;
        if(a[i] > b[i])
            result[0] = result[0] + 1;
    }
    return result;
}
