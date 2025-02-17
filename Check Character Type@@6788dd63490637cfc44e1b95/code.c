#include<stdio.h>
#include<ctype.h>
int main(){
    char b;
    scanf("%c",&b);
    if (b=='a' || b=='e' || b=='i'|| b=='o' || b=='u' || b=='A' || b=='E' || b=='I' || b=='O' || b=='U'){
        printf("Vowel");
    }
    else if(isalpha(b)){
        printf("Consonant");
    }
    else if(isdigit(b)){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}