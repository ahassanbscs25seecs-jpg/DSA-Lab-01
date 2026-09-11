#include <iostream>

/**
 * print_arr: Conveniance function for printing an array
 */
void print_arr(int arr[], size_t len) {
    for (size_t i = 0; i < len; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

int main() {
    // Declaring array and filling it with numbers
    int numbers[] = { 2, 4, 6, 8, 10 };
    
    // Printing initial state
    std::cout << "Before: ";
    print_arr(numbers, 5);
    
    // Setting the third number to 7
    numbers[2] = 7;
    
    // Showing the final state
    std::cout << "After: ";
    print_arr(numbers, 5);
        
    return 0;
}
