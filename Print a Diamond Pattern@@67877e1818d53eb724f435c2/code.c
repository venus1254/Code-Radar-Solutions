#include <stdio.h>
int main(){
    int N, N-1;
    scanf("%d %d", &N, &N-1);
    for(int i=1; i<=N; i++){
        for(int space=1; space=N-i; space++){
             printf(" ");
        }
        for(int j=i; j<=N; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;

}