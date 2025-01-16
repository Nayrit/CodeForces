#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        int c=0;
        int mi=0;
        int ma=INT_MAX;
        for(int i=0; i<n; i++){
            if(a[i]<b[i]){
                c++;
                mi=b[i]-a[i];
            }
            else ma=min(ma, a[i]-b[i]);
            if(c>1) break;
        }
        if(c>1){
            cout << "NO" << endl;
            continue;
        }
        if(mi<=ma) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}