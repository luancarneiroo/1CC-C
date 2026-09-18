#include <stdio.h>

long long potencia(int base, int exp)
{
    if (exp == 0)
        return 1;

    return base * potencia(base, exp - 1);
}

int main()
{
    potencia(1);
    return 0;
}