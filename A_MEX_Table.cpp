#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int b=max(n,m);
        cout<<b+1<<endl;
    }
}