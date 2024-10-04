// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for (int i=1;i<=n;i++){
//         // if(i==4 || i==6 || i==25) continue;
//         //we can separate them
//         if(i==4) continue;
//         if (i==6) continue;
//         cout<<i<<" ";
//     }
// }
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=100;i++){
    if(i%2==0) continue;
    cout<<i<<" ";
    }
}