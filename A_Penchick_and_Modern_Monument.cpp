#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> v(n + 1);
        for (int i = 0; i < n; i++){
            int tmp;
            cin >> tmp;
            v[tmp]++;
        }
        sort(v.begin(), v.end());
        cout <<n-*v.rbegin() <<endl;
    }
}