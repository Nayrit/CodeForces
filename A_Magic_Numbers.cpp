#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    int flag=0;
    for(int i=0; i<n; i++){
        if(s[i]=='1' && s[i+1]=='4' && s[i+2]=='4') {
            flag=1;
            i=i+2;
        }
        else if(s[i]=='1' && s[i+1]=='4') {
            flag=1;
            i=i+1;
        }
        else if(s[i]=='1') {
            flag=1;
        }
        else {
            flag=0;
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}