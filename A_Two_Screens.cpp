#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int cnt,cnt2,i;
        string s,ss;
        cin>>s>>ss;
        cnt=cnt2=(int)s.size()+(int)ss.size();
        for(i=0; i<min(s.size(),ss.size()); i++){
            if(s[i]==ss[i]) cnt--;
            else break;
        }
        cout<<min(cnt+1,cnt2)<<endl;
    }
}
