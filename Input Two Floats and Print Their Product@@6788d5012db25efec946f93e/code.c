#include<stdio.h>
int main(){
    float n1, n2;
    scanf("%f %f", &n1, &n2);
    int prod = n1 * n2;
    printf("Product: %.2f", prod);
    return 0;
}