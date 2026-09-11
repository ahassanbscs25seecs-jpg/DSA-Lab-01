#include <iostream>

#define SIZE 5

// Prints the entire array in one line
void print_arr(int arr[], size_t len) {
    for (size_t i = 0; i < len; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

int main() {
    // Initialize an empty array with zeroes
    int arr[SIZE]{};

    // Will contain the total of all numbers in the array
    int total = 0;
    
    // Get all the numbers from the user
    for (int i = 0; i < SIZE; i++) {
        std::cout << "Enter number " << i+1 << ": ";
        std::cin >> arr[i];
    }
    
    // Sum of all the numbers
    for (int i = 0; i < SIZE; i++) {
        total += arr[i];
    }
    
    // print the input array and the total
    
    std::cout << "Input: ";
    print_arr(arr, SIZE);
    std::cout << "Total: " << total << std::endl;

    return 0;
}
