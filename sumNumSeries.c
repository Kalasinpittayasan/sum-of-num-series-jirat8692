#include <stdio.h>

int sum_of_numbers(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int n;

    printf("Enter a number n : ");
    scanf("%d", &n);

    printf("The sum of numbers from 1 to %d is: %d\n", n, sum_of_numbers(n));

    return ();
}
