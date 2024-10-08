#include <iostream>
#include <vector>

int main() {
    std::vector<int> a = {10, 20, 40};  // Correct initialization
    for (int i : a) {
        std::cout << i << " ";
    }
    return 0;
}
