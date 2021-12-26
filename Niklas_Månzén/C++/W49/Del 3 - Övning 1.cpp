#include <iostream>

void print_out_array(int array[]) // Vet redan size sedan innan. Har endast en fältvariabel som argument.
{
    for (int i = 0; i < 5; i++)
    {
        std::cout << array[i] << "\t";
    }
    std::cout << std::endl;
}

int main()
{
    int even[] = {10, 20, 30, 40, 50};
    int odd[] = {5, 15, 25, 35, 45};

    print_out_array(even);
    print_out_array(odd);

    return 0;
}