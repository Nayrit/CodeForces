#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        if((x1==1 && y1==1) || (x2==1 &&y2==1) || (x1==n && y1==1) || (x2==n && y2==1) || (x1==1 && y1==m) || (x2==1 && y2==m) || (x1==n && y1==m) || (x2==n && y2==m ))
            cout<<2<<endl;
        else if((y1==1) || (y2==1) || (x1==n) || (x2==n) || (x1==1) || (x2==1) || (y1==m) || (y2==m))
            cout<<3<<endl;
        else
            cout<<4<<endl;

    }
}
