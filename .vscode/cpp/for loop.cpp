// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for (int i=1;i<=n;i++){
//         if(i%2==0) cout<<i<<" ";
//     }
// }    
// highest factor other than n


// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for (int i=n/2;i>=1;i--){
//         if(n%i==0) {cout<<i<<" ";
//         break;
//         }

//     }


// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool flag = true;
    for (int i=2;i<=n/2;i++){
        if (n%i==0) {
        flag = false;
          break;
    }
    }
    if(flag==true) cout<<"prime";
    else cout<<"composite";
}