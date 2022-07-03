// Online C compiler to run C program online
#include <stdio.h>

int Dothree(int a, int b, int *sum, int *prod, int *avg);

int main() {
    // Write C code here
    int a = 5, b = 10;
    int sum, prod, avg;
    Dothree(a, b, &sum, &prod, &avg);
    
    printf("Sum %d\nProd %d\nAvg %d",sum, prod, avg);
    
    return 0;
}
int Dothree(int a, int b, int *sum, int *prod, int *avg)
{
    *sum = a + b;
    *prod = a * b;
    *avg = (a + b)/2;
}
