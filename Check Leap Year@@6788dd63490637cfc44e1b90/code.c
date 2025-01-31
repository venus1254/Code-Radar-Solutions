#include<stdio.h>
int main(){
    int day;
    scanf("%d", &day);
    if(day>=365){
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}