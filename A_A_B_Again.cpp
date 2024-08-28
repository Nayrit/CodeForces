#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a,b;
        b=n%10;
        a=n/10;
        int c=a+b;
        cout<<c<<endl;
    }
}