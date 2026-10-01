#include <stdio.h>

int countDigits(int n)
{
    int count = 0;

    if (n == 0)
        return 1;

    while (n != 0)
    {
        n = n / 10;
        count++;
    }

    return count;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Number of digits = %d\n", countDigits(n));

    return 0;
}
