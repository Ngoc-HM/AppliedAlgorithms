#include <iostream>
#define MAX 100000
int main(){
    int n;
    std::cin >> n;
    int a[MAX];
    for(int i = 1; i <= n; i++){
        std::cin >> a[i];
    }
    int Q = 0;
    for (int i = 2; i < n; i++)
    {
        if(a[i] > a[i-1] && a[i]>a[i+1]) Q++;
    }
    std::cout << Q;
    return 0;
}