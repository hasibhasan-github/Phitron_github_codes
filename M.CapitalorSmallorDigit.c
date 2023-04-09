#include<stdio.h>
#include<ctype.h>

int main(){
    char c, d, e;
    scanf("%c", &c);
    if ( isdigit(c) ){
        printf("IS DIGIT");
    }
    else {
    d = tolower(c);
    e = toupper(c);
    if ( c == d ){
        printf("ALPHA\nIS SMALL\n");
    }
    else{
        printf("ALPHA\nIS CAPITAL\n");
    }
    }
    
    return 0;
}