#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if (a%5==0){
        printf("Divisible by 5");}
    else if (a%11==0);{
        printf("Divisible by 11");}
        else if (a%5==0 && a%11==0);{
            printf("Divisible")}
    else{
        printf("Indivisible")
    }
    return 0;
}