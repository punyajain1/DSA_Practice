//Count occurrences of a number in a sorted array with duplicates

#include<iostream>
using namespace std;

int floorr(vector<int> v, int t){
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
    return v[ans];
}
int celie(vector<int> v, int t){
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
    return v[ans];
}

int main(){
    int n;
    cin>> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
   }
    cout<<floorr(v,5) - celie(v,5) +1<<endl;

}