#include <iostream>

#define SIZE 10

void print_arr(int arr[], size_t len) {
    for (size_t i = 0; i < len; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

int main() {
    int initial_arr[SIZE]{};
    int final_arr[SIZE]{};
    size_t final_arr_len = 0;
    
    for (size_t i = 0; i < SIZE; i++) {
        std::cout << "Enter number " << i+1 << ": ";
        std::cin >> initial_arr[i];
    }
    
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
            if (initial_arr[i] == initial_arr[j]) {
                already_reported[j] = already_reported[i] = true;
            }
        }
        
        final_arr[final_arr_len++] = initial_arr[i];
    }    

    std::cout << "Before: ";
    print_arr(initial_arr, SIZE);
    
    std::cout << "After: ";
    print_arr(final_arr, final_arr_len);   

    return 0;
}
