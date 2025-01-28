#include<stdio.h>
int main(){
    int n, bitposition;
    scanf("%d", &n);
    scanf("%d", &bitposition);
    n ^=(1<<bitposition);
    printf("%d", n);
    return 0;
}