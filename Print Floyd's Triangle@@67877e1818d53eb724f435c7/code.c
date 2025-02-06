#include<stdio.h>
int main(){
    int N, number=1;
    scanf("%d", &N);
    for(int i=1; i<=N; i++){
        for(int j=1; j<=i; j++){
            printf("%d ", number);
            number++;
        }
        printf("\n");
    }
    return 0;
}