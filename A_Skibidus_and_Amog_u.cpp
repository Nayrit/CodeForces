#include<iostream>
using namespace std;
void nayrit(){
    string s;
    cin>>s;
    int n=s.size();
    if(s[n-2]=='u' && s[n-1]=='s'){
        s[n-2]='i';
        s.pop_back();
    }
    cout<<s<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        nayrit();
    }
}