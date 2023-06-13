#include "Array.h"

int main() {
    Array<5, int> arr = {{1, 2, 3, 4, 5}};
    // arr.fill(5);
    arr.at(0) = 2;
    arr.at(4) = 2;
    try {
        arr.at(5) = 3;
    }
    catch (std::exception &ex) {
        std::cout << ex.what() << std::endl;
    }
    std::cout << arr;
    return 0;
}