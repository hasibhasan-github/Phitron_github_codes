//     https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/A 
#include<stdio.h>
#include<string.h>

int main(){
    char a[1001], b[1001];
    gets(a);
    gets(b);
    int x = strlen(a);
    int y = strlen(b);
    printf("%d %d\n", x, y);
    printf("%s %s\n", a, b);

    return 0;
}