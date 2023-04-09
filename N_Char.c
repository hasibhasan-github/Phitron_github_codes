#include<stdio.h>
#include<ctype.h>

int main(){
    char c, d, e;
    scanf("%c", &c);
    d = tolower(c);
    e = toupper(c);
    if ( c == d ){
        printf("%c", e);
    }
    else{
        printf("%c", d);
    }
    
    return 0;
}