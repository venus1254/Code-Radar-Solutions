#include<stdio.h>
int main(){
    int a, bitposition;
    scanf("%d", &a);
    scanf("%d", &bitposition);
    int mask = ~(1<<bitposition);
    int result = a&mask;
    printf("%d", result);
    return 0;
}