char* catAndMouse(int x, int y, int z) {

    static char str[10];
    if(abs(z-y)<abs(x-z))
    {
        strcpy(str,"Cat B");
    }
    else if(abs(z-y)>abs(x-z))
    {
        strcpy(str,"Cat A");
    }
    else  
    {
        strcpy(str,"Mouse C");
    }
    
    return str; 
}
