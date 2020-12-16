#include <iostream>
#include <CL/cl.h>

int main()
{
    int i;
    const int LIST_SIZE = 1024;
    int *A = (int *)malloc(sizeof(int) * LIST_SIZE);
    int *B = (int *)malloc(sizeof(int) * LIST_SIZE);

    for (size_t i = 0; i < LIST_SIZE; i++)
    {
        A[i] = i;
        B[i] = LIST_SIZE - i;
    }

    
    std::cout << "hassan" << std::endl;
    return 0;
}