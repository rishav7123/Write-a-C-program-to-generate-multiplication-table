// Write a C program to generate multiplication table
#include<stdio.h>
int main(){
    int i, n;
    printf("Enter number: ");
    scanf("%d",&n);

    for (i=1; i<= 10; i++){
        printf("%d x %d = %d\n", n, i, i*n);
    }
    return 0;
}