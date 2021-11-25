#include <stdio.h>

// Om du har GCC 10 fungerar å, ä eller ö
enum veckodag {
    måndag,
    tisdag,
    onsdag,
    torsdag,
    fredag,
    lördag,
    söndag
}

int main(void)
{
    enum veckodag dag;
    dag = onsdag;
    printf("%d", dag);
    printf("%d", tisdag);
    return 0;
}