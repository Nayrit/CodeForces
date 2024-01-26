#include<bits/stdc++.h>
using namespace std;
int getSum(int n){
        int sum = 0;
        while (n != 0) {
            sum = sum + n % 10;
            n = n / 10;
        }return sum;
    }
int count_digit(int number) {
   int count = 0;
   while(number != 0) {
      number = number / 10;
      count++;
   }
return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int size,n,cntdgt,sum,wicket,over,over2;
        string str,result;
        cin>>str;
        size=str.size();
        for(int i=0; i<size; i++){
            if(isdigit(str[i]))
            result+=str[i];
        }
        n = stoi(result);
        cntdgt=count_digit(n);
        sum=getSum(n);
        wicket = size-cntdgt;
        over=size/6;
        over2 = size%6;


        cout<<"over = "<<over<<"."<<over2<<endl;
        cout<<"run = "<<sum<<endl;
        cout<<"wicket = "<<wicket<<endl;
        

    }
}