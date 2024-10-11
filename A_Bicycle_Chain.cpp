#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n, m, a[51], b[51], ans = 0, rate = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cin >> m;
	for (int i = 0; i < m; i++){
		cin >> b[i];
		for (int j = 0; j < n; j++){
			if (b[i] % a[j] == 0){
				int tmpRate = b[i] / a[j];
				if (tmpRate > rate)
				{
					rate = tmpRate;
					ans = 1;
				}
				else  if (tmpRate == rate)
					ans++;
			}
		}
	}
	cout << ans << endl;
}