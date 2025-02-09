#include<stdio.h>

    int findLowestSetBit(int n){
        int position=0;
        if(n==0){
            return -1;
        }
        while((n&1)==0){
            n=n>>1;
            position++;
        }
        return position;
    }

    int main(){
        int num;
        scanf("%d", &num);
        printf("%d\n", findLowestSetBit(num));
        return 0;
    }
