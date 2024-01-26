#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    vector<int> v;
    vector<int> b;
    int cnt=0;
    for(int i=0; i<a; i++){
        int x,y;
        cin>>x;
        cin>>y;
        v.push_back(x);
        b.push_back(y);
    }
    for(int i=0; i<a; i++){
        for(int j=0; j<a; j++){
            if(v[i]==b[j])
                cnt++;
        }
    }
    cout<<cnt<<endl;
}
