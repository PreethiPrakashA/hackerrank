#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    char str[1000];
    gets(str);
    int arr[10],i;
    //int len = strlen(str);
    for(i=0;i<10;i++)
    {
        arr[i] = 0;
    }

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            arr[str[i] - '0']++;
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
