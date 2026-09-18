#include <stdio.h>

int(int n)
{
    // caso base
    if (n == 0)
        return 0;

    // caso recursivo
    return n + somatorio(n - 1);
}

int main()
{
    // somatorio(2);
    printf("%d\n", somatorio(5));
    return 0;
}