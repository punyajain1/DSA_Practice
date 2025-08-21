#include<iostream>
using namespace std;

void floorr(vector<int> v, int t){
    int l=0,r=v.size()-1,ans=-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(v[mid]<=t){
            ans = mid;
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    cout<<v[ans]<<" ";
}
void celie(vector<int> v, int t){
    int l=0,r=v.size()-1,ans=-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(v[mid]>=t){
            ans = mid;
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
    cout<<v[ans];
}

int main(){
    int n;
    cin>> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
   }
    floorr(v,5);
    celie(v,5);

}