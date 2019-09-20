int findDigits(int n) {
    int ct = 0;
    int dig;
    int temp=n;

    while(n!=0)
    {
        dig  = n%10;
        if(dig==0)
        {   
            n=n/10;
            continue;
        }
        else 
        {
         if(temp%dig  == 0)
         {
           ct++;
         }
        }
        n=n/10;
        
    }
    return ct;

}
