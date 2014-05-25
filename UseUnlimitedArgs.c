#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

void change(int start, ...) {
    va_list arg_ptr;
    int nArgValue = start;
    int nArgCount = 0;
    va_start(arg_ptr, start);
    do {
        ++nArgCount;
        printf("the %d the arg: %d\n", nArgCount, nArgValue);
        nArgValue = va_arg(arg_ptr, int);
    } while (nArgValue != -1);
    return;
}
void Execasd() {
    char *arg[3];

    arg[0] = "echo";
    arg[1] = "hello";
    arg[2] = 0;
    exec("/bin/echo", arg);
}
int main() {
    change(3, 4, 5, 6, 1, 5, -1);
    return 0;
}

