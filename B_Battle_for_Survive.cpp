#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        long long int n;
        cin >> n;
        vector<long long int> v,m;
        for (int i = 0; i < n; ++i){
            int x;
            cin>>x;
            v.push_back(x);
            m.push_back(x);
        }
        sort(m.begin(),m.end());
        long long int a = 0;
        for (int i = 0; i < n - 2; i++)
            a = a+v[i];
        long long int b = v[n - 2] - a;
        b = v[n - 1] - b;
        cout<<b<<endl;
    }
}
