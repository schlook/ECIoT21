double summa(double felt[], int length)
{
    double sum=0;
    for (int i = 0; i < length; i++)
    {
        sum += felt[i];
    }
    
    return sum;
}
double kvd(double felt[], double length)
{
    double sum=0;
    for (int i = 0; i < length; i++)
    {
        sum=felt[i]*felt[i];
    }
    return sum;

}