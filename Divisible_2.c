#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a;
    scanf("%d", &a);
    for ( int i = 1; i <= a; ++i ){
        if ( i%3 == 0 && i%7 == 0 ){
            printf("%d\n", i);
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}