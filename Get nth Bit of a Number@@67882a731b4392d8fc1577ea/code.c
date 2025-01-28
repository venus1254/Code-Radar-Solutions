#include<stdio.h>
int main(){
    int a, bitposition;
    scanf("%d", &a);
    scanf("%d", &bitposition);
    int bit = (a >> bitposition) & 1;
    printf("%d", a, bitposition);
    return 0;
    }