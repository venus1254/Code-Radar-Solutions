#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    if(a & 1){
        printf("Set 1");
    }
    else{
        printf("Set 0");
    }
    return 0;
}