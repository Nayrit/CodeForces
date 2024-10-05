#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,cntx=0,cnty=0;
    int maxx=0,maxy=0;
    int a,b;
    cin>>n;
    for(int i=0; i<n; i++){
        int x,y;
        cin>>x>>y;
        if(x==1) cntx++;
        if(y==1) cnty++;
    }
    a=abs(cntx-n);
    b=abs(cnty-n);
    if(a>=cntx) maxx=cntx;
    else maxx=a;
    if(b>=cnty) maxy=cnty;
    else maxy=b;
    cout<<maxx+maxy<<endl;
    
}