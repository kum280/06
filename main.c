#include <stdio.h>

int get_integer(void);
int combination(int n, int r);
int factorial(int n);

int main(void)
{
    int n, r;
    int result;

    n = get_integer();
    r = get_integer();

    result = combination(n, r);
    printf("C(%i, %i) = %i\n", n, r, result);

    return 0;
}

int combination(int n, int r)
{
    return (factorial(n) / (factorial(n - r) * factorial(r)));
}

int factorial(int n)
{
    int i;
    int res = 1;

    for (i = 1; i <= n; i++)
        res *= i;

    return res;
}

int get_integer(void)
{
    int n;

    printf("Input an integer:");
    scanf("%i", &n);

    return n;
}
