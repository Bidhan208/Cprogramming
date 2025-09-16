#include<stdio.h>
#include<conio.h>
void sum_of_digit();
void main() {
    sum_of_digit();
    getch();
}
void sum_of_digit() {
    int r,n,sum = 0;
    printf("Enter the number");
    scanf("%d",&n);
    while(n!=0)
    {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }
    printf("\nThe sum of digit is %d",sum);
}

