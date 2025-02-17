#include<stdio.h>

int main(){
    int N, sum = 0; // Initialize sum to 0
    scanf("%d", &N); // Read the input into variable 'N'
    for(int i = 1; i <= N; i++){ // Declare 'i' within the loop
        sum = sum + i; // Calculate the sum
    }
    printf("%d", sum); // Print the sum
    return 0;
}
