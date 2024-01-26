#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,cnt=0;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int max=v[0];
    int min=v[0];
    for(int i=0; i<n; i++){
        if(v[i]>max){
            max=v[i];
            cnt++;
        }
        if(v[i]<min){
            min=v[i];
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
