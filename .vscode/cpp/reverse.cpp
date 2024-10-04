#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int r ;
    while(n!=0){
        int ld = n%10;
        r = r*10;
        r = r+ld;
        n /=10;
    }
    cout<<r;
}