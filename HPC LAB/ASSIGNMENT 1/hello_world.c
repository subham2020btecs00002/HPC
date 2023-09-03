#include <omp.h>
#include <stdio.h>

int main(){
    printf("Hello World\n");
    int threads;

    #pragma omp parallel
    {
        threads = omp_get_num_threads();
        printf("Hello from thread no. %d\n", omp_get_thread_num());
    }

    printf("\nNo. of threads used = %d", threads);

    return 0;
}
// cd C:\Users\subha\OneDrive\Desktop\HPC LAB\ASSIGNMENT 1
// gcc -fopenmp hello_world.c -o hello_world
// .\hello_world