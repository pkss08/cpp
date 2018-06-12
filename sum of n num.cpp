#include<iostream>
using namespace std;

int main(){
    int n ;
        cin >> n;
        int cnt = 1, sum = 0;
        while(cnt <= n){
            int a ; cin>>a;
            sum = sum + a;
            cnt = cnt + 1;
        }
        cout << sum << endl;


}
