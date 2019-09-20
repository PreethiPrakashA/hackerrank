void bonAppetit(int bill_count, int* bill, int k, int b) {

    int i, r, sum=0;
    for(i=0; i<bill_count; i++)
    {
        sum+=bill[i];
    
    }

    r = sum - bill[k];
    
    if(r/2 == b)
        printf("Bon Appetit");
    else
        printf("%d",bill[k]/2);

}
