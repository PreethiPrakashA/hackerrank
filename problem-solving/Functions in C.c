#include <stdio.h>

int max_of_four(int a, int b, int c, int d){
    int e = a>b? a:b;
    int f = c>d? c:d;
    return (e>f? e: f);

    
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
