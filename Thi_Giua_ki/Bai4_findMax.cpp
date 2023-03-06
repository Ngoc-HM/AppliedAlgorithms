#include <bits/stdc++.h>
using namespace std;
int findMaxSum(int arr[], int N)
{
    int dp[N][2];
    if (N == 1) {
        return arr[0];
    }
    dp[0][0] = 0;
    dp[0][1] = arr[0];
    for (int i = 1; i < N; i++) {
        dp[i][1] = dp[i - 1][0] + arr[i];
        dp[i][0] = max(dp[i - 1][1], 
                       dp[i - 1][0]);
    }
    return max(dp[N - 1][0], dp[N - 1][1]);
}
int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=0; i <N;i++){
        cin>>arr[i];
    }
    cout << findMaxSum(arr, N) << endl;
    return 0;
}
