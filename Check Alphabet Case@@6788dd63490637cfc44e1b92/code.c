#include<stdio.h>
#include<ctype.h>
int main(){
    char main a ;
    scanf("%c",&a);
    if(isupper(a)){
        printf("Uppercase");
    }
    else if(islower(a)){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}