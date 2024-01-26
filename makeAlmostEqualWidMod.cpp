#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;
        vector<long long int> v, b;

        for(long long int i = 0; i < n; i++){
            long long int x;
            cin >> x;

            if(x % 2 == 0)
                v.push_back(x);
            else
                b.push_back(x);
        }

        if (!v.empty() && !b.empty()){
            cout << 2 << endl;
        }
        else if(!v.empty()){
            cout << 3 << endl;
        }
        else{
            cout<< 4 <<endl;
        }
    }

    return 0;
}
