#include<stdio.h>
int main(){
    int n, divisor;
    scanf("%d %d", &n, &divisor);
    if (n % divisor == 0){
        printf("Yes");
    }
    else {
        printf("No");
    }
    return 0;
}