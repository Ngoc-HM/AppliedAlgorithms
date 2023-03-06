#include <bits/stdc++.h>
using namespace std;
priority_queue<int> pq;
int main(){
    int n;
    scanf("%d", &n);
    int x;
    for(int i=0;i<n;i++){
        cin >> x;
        pq.push(x);
    }
    string check;
    while(cin >> check){
        if(check.compare("insert")==0){
            cin >> x;
            pq.push(x);
        }else 
        if(check.compare("delete-max")==0){
            x = pq.top();
            cout << x;
            pq.pop();
        }else {
            break;
        }
    }

    return 0;
}