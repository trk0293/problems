//
//  main.c
//  To test weather a number is prime or not.
//
//  Created by raghav on 10/19/18.
//  Copyright © 2018 raghav. All rights reserved.
//



#include <stdio.h>

void isPrime(int n){
    int flag = 0;
    int i =2;
    while(i<=n/2){
        if(n%i == 0)
            flag = 1;
        i++;
    }
    if(flag == 0)
        printf("%d is a prime number \n",n);
    else
        printf("%d is not a prime number \n",n);
}

long long unsigned int factorial(int n){
    long long unsigned int factorial = 1;
    for(int i=2;i<=n;i++)
        factorial=factorial*i;
    return factorial;
}
void halfPyramid(int n){
    for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        printf("* ");
    }
    printf("\n");
}
    return;
}
int main(int argc, const char * argv[]) {
    int n=0;
    printf("enter a positive number:");
    scanf("%d",&n);
    /************************************************************************************************/
    /*PRIME
    isPrime(n);
     */
    /************************************************************************************************/
    /* FACTORIAL
    if (n<0)
        printf("Factorial can be calculated for positive integers only. \nTry entering positive integer and run program again. \n");
    else
    printf("factorial of %d is %lld \n ",n,factorial(n));
     */
    /************************************************************************************************/
    halfPyramid(n);
    return 0;
}
