#include <stdio.h>

int sumTwo(int a, int b);
int square(int n);
int get_max(int x, int y);

int main(void)
{
    int a, b;

    printf("Input two integers:");
    scanf("%i %i", &a, &b);

    printf("sumTwo(%i, %i) = %i\n", a, b, sumTwo(a, b));
    printf("square(%i) = %i\n", a, square(a));
    printf("get_max(%i, %i) = %i\n", a, b, get_max(a, b));

    return 0;
}

int sumTwo(int a, int b)
{
    return a + b;
}

int square(int n)
{
    return (n * n);
}

int get_max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}
