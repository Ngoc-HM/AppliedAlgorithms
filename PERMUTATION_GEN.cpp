//C++ 
#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> perm(n);
    for (int i = 1; i <= n; ++i) {
        perm[i - 1] = i;
    }

    do {
        for (int i = 0; i < n; ++i) {
            cout << perm[i] << " ";
        }
        cout << endl;
    } while (next_permutation(perm.begin(), perm.end()));

    return 0;
}
