#include <iostream>
using namespace std;
int main() {
    int t ;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int distance1 = abs(a-b)+abs(a-c);
        int distance2 = abs(b-c)+abs(b-a);
        int distance3 = abs(c-b)+abs(c-a);
        int minm = min(distance1,min(distance2,distance3));
        cout <<minm<<endl;
    }
}
