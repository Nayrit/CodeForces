#include <iostream>
using namespace std;
int main(){
int k, l, m, n, d, count=0;
cin>>k>>l>>m>>n>>d;
while(d){
    if(d%k==0 || d%l==0 || d%m==0 || d%n==0)
        count++;
    d--;  
    }
    cout<<count<<endl;
}            