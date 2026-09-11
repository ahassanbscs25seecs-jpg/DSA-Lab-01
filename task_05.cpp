#include <iostream>

#define SIZE 6

// Reverse an array using recursion
void reverse(int arr[], size_t len) {
    if (len <= 1) {
        return;
    }
    
    int temp = arr[0];
    arr[0] = arr[len-1];
    arr[len-1] = temp;
    
    reverse(&arr[1], len-2);
}

// Print array to the terminal in one line
void print_arr(int arr[], size_t len) {
    for (size_t i = 0; i < len; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

int main() {
// Initial zeroed out array
    int arr[SIZE]{};
    
    // Get input from the user
    for (size_t i = 0; i < SIZE; i++) {
        std::cout << "Enter number " << i+1 << ": ";
        std::cin >> arr[i];
    }
    std::cout << std::endl;
    
    // Print initial state
    std::cout << "Before: ";
    print_arr(arr, SIZE);
    
    // Reverse the array
    reverse(arr, SIZE);
    
    // Print final state
    std::cout << "After: ";
    print_arr(arr, SIZE);
}   
    