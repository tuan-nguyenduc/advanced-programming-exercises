#include <iostream>

int main() {
    int local_var = 42;
    int* ptr = &local_var;
    free(ptr); // Attempt to free memory that was not dynamically allocated
    // The above line will cause a memory-related error because ptr points to a local variable, not dynamically allocated memory
    std::cout << "Program completed successfully" << std::endl;
    return 0;
}