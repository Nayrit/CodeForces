#include<iostream>
#include<vector>
using namespace std ;
int main () {
    int n , m , x = 0 ;
    cin >> n >> m ;
    vector<int> arr(n) ;
    for(int i=0; i<n; i++)
        cin >> arr[i] ;
    sort(arr.begin() , arr.end());
    for(int i=0; i<m; i++){
        if(arr[i]<=0) x-=arr[i];
        else break;
    }
    cout << x <<endl;
}