#include<stdio.h>
int main(){
    int year;
    scanf("%d", &year);
    if(year % 4 == 0){
        if(year%100==0){
            if(year%400==0){
                printf("%d is a Leap Year");
            }
            else {
                printf("%d is Not a Leap Year");
            }
            else {
                printf("%d is a Leap Year");
            }
        }
    }
}