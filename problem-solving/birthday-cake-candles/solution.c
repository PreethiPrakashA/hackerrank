int birthdayCakeCandles(int ar_count, int* ar) {

    int i,tallest = ar[0],ct=1;
    for(i=1 ;i<ar_count ;i++)
    {
        if(ar[i] == tallest)
        {
            ct++;
        }
        else if(ar[i] >tallest)
        {
            tallest =ar[i];
            ct = 1;
        }

    }
    return ct ;
   
}
