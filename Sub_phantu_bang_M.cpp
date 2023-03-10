#include <bits/stdc++.h>
using namespace std;
int M, n, x, dem = 0;
vector<int> dataO2;
void dophuctapO2(int n, int M)
{
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        dataO2.push_back(x);
    }
    dem = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (dataO2[i] + dataO2[j] == M)
            {
                dem++;
            }
    cout << dem;

}

void dophuctapO(){
    map<int, int> data;
    int M, n, count = 0;
    cin >> n >> M;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        data[x]++;
    }
    
    for(auto p : data){
        int x = p.first;
        if(data[M - x]){
            count += p.second * data[M - x];
            if(M - x == x) count -= p.second;
        }
    }
    cout << count / 2;
}

int main()
{
    
    //dophuctapO2();
    dophuctapO();
    return 0;
}