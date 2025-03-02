#include<iostream>
using namespace std;
void nayrit(){
    string s;
    int cnt=0;
    cin>>s;
    for(int i=0; i<s.size()-1; i++)
        if(s[i]==s[i+1]) cnt=1;
    if(cnt==0) cnt=s.size();
    cout<<cnt<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        nayrit();
    }
}