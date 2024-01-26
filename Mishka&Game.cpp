#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m=0,c=0;
    vector<int>a,b;
    cin>>n;
    for(int i=0; i<n; i++){
        int x,y;
        cin>>x>>y;
        a.push_back(x);
        b.push_back(y);
    }
    for(int i=0; i<n; i++){
        if(a[i]>b[i])
            m++;
        else if(a[i]<b[i])
            c++;
    }
    if(m>c)
        cout<<"Mishka"<<endl;
    else if(m<c)
        cout<<"Chris"<<endl;
    else
        cout<<"Friendship is magic!^^"<<endl;

}
