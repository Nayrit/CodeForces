#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,cnt=0;
    cin>>n;
    int a[n][2];
    for(int i=0; i<n; i++){
        for(int j=0; j<2 ; j++){
            cin>>a[i][j];
        }
    }
    for(int i=0; i<n; i++){
            if(a[i][0]+2 <= a[i][1])
                cnt++;
        }
    cout<<cnt<<endl;

}
