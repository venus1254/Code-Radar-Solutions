#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    for(int i=1; i<=N; i++){
        for(int space=1; space=N-i; space++){
             printf(" ");
        }
        for(int j=1; j<=2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }
    for( i=N-1; i>=1; i--){
        for ( spaces=1; spaces<= N-i; spaces++){
            printf(" ");
        }
        for( j=1; j<=2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;

}