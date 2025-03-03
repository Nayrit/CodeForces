#include<iostream>
using namespace std;
void nayrit(){
    int x,y;
    cin>>x>>y;
    if(x + 1 >= y && (x + 1 - y) % 9 == 0){
        cout<<"Yes"<<endl;
        return;
    }
    cout<<"No"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        nayrit();
    }
}