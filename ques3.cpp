#include <iostream>
using namespace std;


int sqt(int x){
    if(x==1){
        return 1;
    }
    int l=0,h=x/2;
    int ans;
    while(l<=h){
        int mid=(l+h)/2;
        if((mid*mid)<=x){
            ans = mid;
            l=mid+1;
        }else{
            h=mid-1;
        }
    }
    return ans;
}

int main(){
    int x;
    cin>>x;
    cout<<sqt(x)<<endl;
    
}