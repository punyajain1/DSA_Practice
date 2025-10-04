// Given two integers L and R. Find the XOR of the elements in the range [L , R].
#include <iostream>
using namespace std;

// int main(){
//     int l,r;
//     cin>>l>>r;
//     int ans=0;
//     for(int i=l;i<=r;i++){
//         ans=ans^i;
//     }
//     cout<<ans<<endl;

// }

//optimal Approach where we use the pattern which is used to finf the xor of every number form 1 to n 
int calXOR(int n){
    if(n%4==1) return 1;
    if(n%4==2) return n+1;
    if(n%4==3) return 0;
    return n;
}
int main(){
    int l,r;
    cin>>l>>r;
    //we are xoring the xor of 1 to r and 1 to l-1 to get the xor of l to r
    cout<<(calXOR(r)^calXOR(l-1))<<endl;
}