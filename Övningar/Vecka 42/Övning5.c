#include <stdio.h>

void laggTillEtt(int *p);

int main()
{
    int *p, i = 10;
    p = &i;
    laggTillEtt(p);

    // 11
    printf("%d", *p);
    return 0;
}

// lägger till ett
void laggTillEtt(int *p)
{
    // lägger till 1 till värdet.
    (*p)++;
}