#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);

    for(int i=1; i<=10; i++){
        printf("%d\n", N*i);
    }
    return 0;
}