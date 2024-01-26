#include<bits/stdc++.h>
using namespace std;
int main(){
    long long k,l,m,n,d,a,b,c,e,f;
    cin>>k>>l>>m>>n>>d;
    set<long long, greater<long long> > v;
    for(int i=1; a<=d; i++){
        a=i*k;
        b=i*l;
        c=i*m;
        e=i*n;
        f=i*d;
        v.insert(a);
        v.insert(b);
        v.insert(c);
        v.insert(e);
        v.insert(f);
    }
    v.erase(v.begin(), v.find(d));
    cout<<v.size()<<endl;
}
