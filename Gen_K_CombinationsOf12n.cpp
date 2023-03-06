#include <bits/stdc++.h>
using namespace std;

void combinations(int k, int n, vector<int>& current, int last) {
    if (k == 0) {
        // Print the current combination
        for (int i = 0; i < current.size(); i++) {
            std::cout << current[i] << " ";
        }
        std::cout << std::endl;
        return;
    }
    for (int i = last + 1; i <= n; i++) {
        current.push_back(i);
        combinations(k - 1, n, current, i);
        current.pop_back();
    }
}

int main() {
    int k, n;
    std::cin >> k >> n;

    vector<int> current;
    combinations(k, n, current, 0);

    return 0;
}
