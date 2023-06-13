#include "Array.h"

int main() {
    Array<5, int> arr = Array<5, int>({1, 2, 3, 4, 5});
    // arr.fill(5);
    arr[0] = 2;
    arr[4] = 2;
    try {
        arr[5] = 3;
    }
    catch (std::exception &ex) {
        std::cout << ex.what() << std::endl;
    }
    std::cout << arr;
    return 0;
}