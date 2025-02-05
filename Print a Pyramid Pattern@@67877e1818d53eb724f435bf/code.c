#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    for(int i=2; i<=2-N; i++){
        for(int j=3; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}