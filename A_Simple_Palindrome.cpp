#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int flag = 1;
        vector<char> v;
        for(int i=0;i<n;i++){
            if(flag%5==1) v.push_back('a');
            else if(flag%5==2) v.push_back('e');
            else if(flag%5==3) v.push_back('i');
            else if(flag%5==4) v.push_back('o');
            else if(flag%5==0) v.push_back('u');
            flag++;
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
            cout<<v[i];
        cout<<endl;
    }
}