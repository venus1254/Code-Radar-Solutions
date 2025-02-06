#include<stdio.h>
int main(){
    int N, spaces;
    scanf(" %d", &N);
    for(int i= 1; i<=N; i++){
        for(spaces=1; spaces<=N-i; spaces++){
            printf(" ");
        }
        for(int j=1; j<=i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}