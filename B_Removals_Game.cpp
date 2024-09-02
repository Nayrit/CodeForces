#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector<int> a,b;
        for (int i = 0; i < n; i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++){
            int x;
            cin>>x;
            b.push_back(x);
        }
        if (b == a || equal(a.begin(), a.end(), b.rbegin()))
            cout << "Bob" << endl;
        else
            cout << "Alice" << endl;
    }
}