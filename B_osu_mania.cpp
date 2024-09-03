#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> s;
        for(int i=0; i<n; i++){
            string c;
            cin>>c;
            s.push_back(c);
        }


        for(int i=n-1;i>=0;i--){
            for(int j=0; j<4; j++){
                if(s[i][j] == '#') cout<<j+1<<" ";
            }
        }
        cout<<endl;
    }
}