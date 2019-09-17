void plusMinus(int arr_count, int* arr) {
    int i,pos_count=0,neg_count=0,zero_count=0;
    for(i=0;i<arr_count;i++)
    {
        if(arr[i]>0)
            pos_count++;
        else if(arr[i]<0)
            neg_count++;
        else  
            zero_count++;
    }
    printf("%.6f\n%.6f\n%.6f",(float)pos_count/(float)arr_count,(float)neg_count/(float)arr_count,(float) zero_count/(float)arr_count);    
}
