//minimize the maximum distance
#include <iostream>
using namespace std;

int high(vector<int>& v){
    int h=INT_MIN;
    for(int i=0;i<v.size();i++){
        h=max(h,v[i]-v[i-1]);
    }
    return h;
}

int cp(vector<int>& v , int dist){
    int p=0;
    int count=0;
    for(int i=0;i<v.size();i++){
        if(p+v[i] < dist){
            p+=v[i];
        }else{
            count++;
            p=v[i];
        }
    }
    return count;
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int l=0,h=high(v);
    while(l<h){
        int mid=l+(h-l)/2;
        int r=cp(v,mid);
        if(r<k){
            l=mid;
        }else{
            h=mid;
        }
    }
    cout<<h<<endl;
}