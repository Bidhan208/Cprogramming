

#include<stdio.h>
#include<conio.h>
void rev();
void main() {
    rev();
    getch();
}
void rev() {
    int r,n,rev = 0;
    printf("Enter the number");
    scanf("%d",&n);
    while(n!=0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    printf("\nThe reversed number is %d",rev);
}
