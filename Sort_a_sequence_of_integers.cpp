#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Đọc input
    int n;
    std::cin >> n;

    std::vector<int> sequence(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> sequence[i];
    }

    // Sắp xếp dãy số
    std::sort(sequence.begin(), sequence.end());

    // In dãy số đã sắp xếp
    for (int i = 0; i < n; ++i) {
        std::cout << sequence[i] << " ";
    }

    return 0;
}
