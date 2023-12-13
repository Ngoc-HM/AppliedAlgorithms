#include <bits/stdc++.h>
using namespace std;

bool isValid(const string &s) {
    int balance = 0;
    for (char c : s) {
        if (c == '1') balance++;
        else if (c == '2') balance--;
        if (balance < 0) return false; 
    }
    return balance == 0;
}


void generateParentheses(vector<string> &result, string &current, int pos, const vector<int> &a) {
    if (pos == current.size()) {
        if (isValid(current)) {
            result.push_back(current);
        }
        return;
    }

    if (a[pos] == 0) { 

        current[pos] = '1';
        generateParentheses(result, current, pos + 1, a);


        current[pos] = '2';
        generateParentheses(result, current, pos + 1, a);
    } else {
        current[pos] = (a[pos] == 1) ? '1' : '2';
        generateParentheses(result, current, pos + 1, a);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    vector<string> result;
    string current(n, ' '); 
    generateParentheses(result, current, 0, a);

    for (const string &s : result) {
        cout << s << " ";
    }

    return 0;
}
