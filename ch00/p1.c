#include <stdio.h>
#include <stdlib.h>

void func() {
    static int x = 0;
    printf("x = %d\n", x);
    x = x + 1;
}

int main() {
    func();
    func();
    func();
    return 0;
}