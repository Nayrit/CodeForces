#include<bits/stdc++.h>
using namespace std;
int main(){
    int friends,bottles,liters,limes,salt,toastLime,toastdrink,toastSalt;
    cin>>friends>>bottles>>liters>>limes>>toastLime>>salt>>toastdrink>>toastSalt;
    vector<int>v;
    int a=bottles*liters;
    int x=a/toastdrink;
    v.push_back(x);
    int b= limes*toastLime;
    v.push_back(b);
    int c= salt/toastSalt;
    v.push_back(c);
    sort(v.begin(), v.end());
    cout<<v[0]/friends<<endl;
}
