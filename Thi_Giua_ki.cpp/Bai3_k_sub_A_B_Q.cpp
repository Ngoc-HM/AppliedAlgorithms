#include<bits/stdc++.h>
using namespace std;
int n, a, b;
int X[21];
vector<int> arr;
int cnt = 0;
void sol(){
    int s = 0;
    for(int i=1;i<=n;i++){
        s += X[i]*arr[i];
    }
    if(s>=a&&s<=b) 
        cnt+=1;
}
void Try(int k){
    for(int i=0;i<=1;i++){
        X[k] = i;
        if(k==n){
            sol();
        }else{
            Try(k+1);
        }
    }
}
int main(){
    cin>>n>>a>>b;
    arr.resize(n+1, 0);
    for(int i=1;i<=n;i++) 
        cin>>arr[i];
        
    Try(1);
    cout<<cnt;
    return 0;
}