#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

unsigned long long power_mod(unsigned long long a, unsigned long long b) {
    unsigned long long result = 1;
    while (b > 0) {
        if (b & 1) {
            result = (result * a) % MOD;
        }
        a = (a * a) % MOD;
        b >>= 1;
    }
    return result;
}

int mod(int a, int m)
{
    return (a % m + m) % m;
}

int main() {
    unsigned long long a, b;
    cin >> a >> b;
    unsigned long long ans = mod(a, b);
    cout << ans << endl;
    return 0;
}
