#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,c;
        cin>>n>>m>>c;
        for(int i=n;i>m;i--)
            cout<<i<<" ";
        for(int i=1;i<=m;i++)
            cout<<i<<" ";
        cout<<endl;  
    }  
}

