// Online C compiler to run C program online
#include <stdio.h>

int swap(int *a, int *b);

int main() {
    // WAP to swap 2 numbers. call by reference
    int num1, num2;
    num1 = 10;
    num2 = 20;
    swap(&num1, &num2);
    printf("Num1 is %d\nNum2 is %d",num1,num2);
    
    return 0;
}
int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
