#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	if( n % 2 == 1){
		cout << -1 << endl;
		return 0;
	}
	while(n > 0){
		cout << n << " ";
		n--;
	}
	cout << endl;
}