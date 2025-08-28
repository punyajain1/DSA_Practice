//Painter's Partition Problem

#include <iostream>
using namespace std;

int count_painter(vector<int> v , int num){
    int painter = 1 , cp=0;
    for(auto it: v){
        if((cp+it)<=num){
            cp+=it;
        }else{
            painter++;
            cp=it;
        }
    }
    return painter;
}

int main(){
    int n,k,l,h=0;
    cin>>n>>k;
    vector<int> v(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
        h+=v[i];
    }
    l = *max_element(v.begin(),v.end());
    int ans=h;
    while(l<=h){
        int mid=l+(h-l)/2;
        int p=count_painter(v,mid);
        if(p<=k){
            h=mid-1 ;
            ans=mid;
        }
        else l=mid+1;
    }
    cout<<ans<<endl;
}