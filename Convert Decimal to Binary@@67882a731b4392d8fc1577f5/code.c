#include <stdio.h>
int main(){
void decimalToBinary(int n){
    int binary[32];
    int i=0;
    while(n>0){
        binary[i]=n&1;
        n >>= 1;
        i++;
    }
    for(int j=i-1; j>=0; j--){
        printf("%d", binary[j]);
    }
    printf("\n");
}
int main(){
    int decimalNum;
    scanf("%d", &decimalNum);
    decimalToBinary(decimalNum);
    return 0;
}
}