#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt=0;
        for (int i = 0; i < s.size(); i++){
            if (s[i] == '1') cnt++;
        }
        if ((sqrt(n) * sqrt(n)) == n){
            int d = sqrt(n);
            if (cnt==((2*d)+(2*(d-2)))) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}