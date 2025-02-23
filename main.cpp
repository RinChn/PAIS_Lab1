#include <mpi.h>
#include <iostream>

int main(int argc, char** argv) {
    MPI_Init(&argc, &argv);

    std::cout << "Программа запущена!" << std::endl;

    MPI_Finalize();
    return 0;
}