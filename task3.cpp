#include <iostream>
#include <mpi.h>

int main(int argc, char** argv) {
    int rank, size;

    MPI_Init(&argc, &argv);
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    const int table_size = 5;
    for (int i = rank + 1; i <= table_size; i += size) {
        for (int j = 1; j <= table_size; j++) {
            std::cout << "Процесс " << rank << ": " << i << " * " << j << " = " << i * j << std::endl;
        }
    }

    MPI_Finalize();

    return 0;
}