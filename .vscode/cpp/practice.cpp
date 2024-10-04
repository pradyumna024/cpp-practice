// #include<iostream>
// using namespace std;
// int main(){
//     int x=4,y=0;
//     while(x>=0){
//         x--;
//         y++;
//         if(x==y) continue;
//         else cout<<x<<" "<<y<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int count = 0;
//     while(n>0){
//        n=n/10;
//        count++;
//     }
//     cout<<count;
// }
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum =1;
    while(n>0){
        int ld =n%10;
        n = n/10;
        sum *=ld;
    }
    cout<<sum;

}