#include <stdio.h>

void func(void) {
    int x;
    printf("func x is at %p\n", &x);
}

void func2(int x) {
    printf("func2 x is at %p\n", &x);
}

int main(void) {
    int x = 10;
    printf("main x is at %p\n", &x);
    func();
    func();
    func2(x);

    return 0;
}
