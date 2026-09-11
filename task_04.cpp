#include <iostream>

#define SIZE 8

void find_largest(int arr[], size_t len) {
    int largest = 0;
    
    for (size_t i = 0; i < len; i++) {
        if (arr[largest] < arr[i]) {
            largest = i;
        }
    }
    
    std::cout << "Largest element " << arr[largest] << " at index " << largest << std::endl;
}

void find_smallest(int arr[], size_t len) {
    int smallest = 0;
    
    for (size_t i = 0; i < len; i++) {
        if (arr[smallest] > arr[i]) {
            smallest = i;
        }
    }
    
    std::cout << "Smallest element " << arr[smallest] << " at index " << smallest << std::endl;
}


int main() {
    // declare an array of size 8 with zeroes in it
    int arr[SIZE]{};
    
    // get input from the users into the array
    for (size_t i = 0; i < SIZE; i++) {
        std::cout << "Enter number " << i+1 << ": ";
        std::cin >> arr[i];
    }
    std::cout << std::endl;
    
    // Find the largest and smallest elements.
    find_largest(arr, SIZE);
    find_smallest(arr, SIZE);
    
    // Find repeating
    
    // Keep track of all the elements that we have checked to be repeating
    bool already_reported[SIZE]{};
    
    for (size_t i = 0; i < SIZE; i++) {
        bool repeating = false;

        // Skip already reported
        if (already_reported[i]) {
            continue;
        }

        // Check if the element is repeating
        // if so, set repeating to true and mark it as already reported
        for (size_t j = i+1; j < SIZE; j++) {
            if (arr[i] == arr[j]) {
                repeating = true;
                already_reported[j] = already_reported[i] = true;
            }
        }
        
        // Only report if it's repeating
        if (repeating) {
            std::cout << "Element " << arr[i] << " repeats at index " << i << std::endl;
            repeating = false;
        }
    }

    return 0;
}
