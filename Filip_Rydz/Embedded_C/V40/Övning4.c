#include <stdio.h>

double season(void);
double day(void);
int visit(void);

int main(void) {

    double se = season();
    double da = day();
    int vis = visit();

    double sum = vis * da;

    if (sum > se) {

        printf("Season ticket is cheapest!\n");
    }
    
    else {

        printf("Dayticket is cheaper!\n");
    }
}

double season(void) {

    double season;
    printf("Price for a 'Season ticket': \n");
    scanf("%lf", &season);

    return season;
}

double day(void) {

    double day;
    printf("Price for a 'Dayticket'; \n");
    scanf("%lf", &day);

    return day;
}

int visit(void) {

    int visit;
    printf("How many visits is planed?\n");
    scanf("%d", &visit);

    return visit;
}
