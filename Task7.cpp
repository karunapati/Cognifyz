#include <iostream>
#include <algorithm>

void sortArray(int arr[], int size, bool ascending) {
    if (ascending) {
        std::sort(arr, arr + size);
    } else {
        std::sort(arr, arr + size, std::greater<int>());
    }
}

void displayArray(int arr[], int size) {
    std::cout << "Sorted Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int size;
    bool ascending;
    
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int arr[size];

    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Enter the sorting order (0 for descending, 1 for ascending): ";
    std::cin >> ascending;

    sortArray(arr, size, ascending);
    displayArray(arr, size);

    return 0;
}
