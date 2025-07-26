#include <iostream>

int main() {
    int input;
    std::cin >> input;

    if (input < 1 || input > 100) {
        std::cout << "NO";
        return 0;
    }
    if (input % 2 == 0 && input != 2)
        std::cout << "YES";
    else
        std::cout << "NO";
    return 0;
}
