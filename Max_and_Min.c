#include<stdio.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(){
    int arr[3];
    for ( int  i = 0; i < 3; ++i ){
        scanf("%d", &arr[i]);
    }
    qsort(arr, 3, sizeof(int), cmpfunc);
    printf("%d %d", arr[0], arr[2]);
    return 0;
}