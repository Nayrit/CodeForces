#include <iostream>
using namespace std;
void nayrit()
{
    int n, cnt = 0;
    cin >> n;
    string s, t;
    cin >> s;
    if(s[0] == '1') cnt++;
    for(int i=0; i<n-1; i++){
        if(s[i] != s[i+1]) cnt++;
    }
    cout<<cnt<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        nayrit();
    }
}