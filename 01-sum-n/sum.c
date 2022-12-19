#include <stdio.h>

int sum1(int n){
    int i = 1;
    int sum = 0;
    while (i <= n){
        sum += i;
        i++;
    }
    return sum;
}

int main()
{
    int n=10;
    int j = sum1(n);
    printf("%d", j);
}
