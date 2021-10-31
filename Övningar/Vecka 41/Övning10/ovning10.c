
double sum(double felt[], int lengd)
{
    int sum;

    sum = 0;

    for (int i = 0; i < lengd; i++)
    {
        sum += felt[i];
    }

    return sum;
}

double kvadSum(double felt[], int lengd)
{
    int sum;

    sum = 0;

    for (int i = 0; i < lengd; i++)
    {
        sum += felt[i] * felt[i];
    }

    return sum;
}