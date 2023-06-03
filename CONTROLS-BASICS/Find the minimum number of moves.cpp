#include <iostream>
#include <cstdlib> // Required for absolute function

int main() {
    int a, b;
    std::cin >> a >> b; // Input values of a and b

    int diff = abs(a - b); // Calculate the absolute difference between a and b
    int moves = diff / 10; // Calculate the number of moves by dividing diff by 10

    if (diff % 10 != 0) {
        moves++; // If there is a remainder, increment the number of moves by 1
    }

    std::cout << moves << std::endl; // Output the minimum number of moves

    return 0;
}
