#include<bits/stdc++.h>
using namespace std;
int main(){
    string v,n,m,a,b,c;
    int x=0,y=0,z=0;
    cin >> v>>n>>m;
    
    if (v[1] == '>')a = string(1, v[2]) + string(1, v[0]);
    else a = string(1, v[0]) + string(1, v[2]);
    if (n[1] == '>') b = string(1, n[2]) + string(1, n[0]);
    else b = string(1, n[0]) + string(1, n[2]);
    if (m[1] == '>') c = string(1, m[2]) + string(1, m[0]);
    else c = string(1, m[0]) + string(1, m[2]);

    if(a[0]=='A')x++;
    if(b[0]=='A')x++;
    if(c[0]=='A')x++;

    if(a[0]=='B')y++;
    if(b[0]=='B')y++;
    if(c[0]=='B')y++;

    if(a[0]=='C')z++;
    if(b[0]=='C')z++;
    if(c[0]=='C')z++;

    if(x==1 && y==1 && z==1)
        cout<<"Impossible"<<endl;
    else{
        if(x==2) cout<<"A";
        if(y==2) cout<<"B";
        if(z==2) cout<<"C";

        if(x==1) cout<<"A";
        if(y==1) cout<<"B";
        if(z==1) cout<<"C";
        
        if(x==0) cout<<"A";
        if(y==0) cout<<"B";
        if(z==0) cout<<"C";

    }
    
}
