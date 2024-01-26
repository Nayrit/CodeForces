#include<bits/stdc++.h>
using namespace std;
int main(){
    double n,x,sum=0;

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        sum=sum+x;
    }
    cout<<sum/n<<endl;
}

