#include<iostream>
using namespace std;

int main(){
    int n ; cin>> n;
    int cnt = 2;

    while(cnt <= n-1){
        if(n%cnt ==0){
            cout<<"Not Prime";
            return 0;
        }

        cnt = cnt + 1;
    }

     cout<< "Prime";

}
