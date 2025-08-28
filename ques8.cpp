//minimize the maximum distance
#include <iostream>
using namespace std;

int high(vector<int>& v){
    int h=INT_MIN;
    for(int i=1;i<v.size();i++){
        h=max(h,v[i]-v[i-1]);
    }
    return h;
}

int cp(vector<int>& v , double dist){
    int count = 0;
    for(int i=1;i<v.size();i++){
        double gap = v[i] - v[i-1];
        count += (int)(gap / dist);  // number of stations needed
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
    double l=0,h=high(v);

    while(h-l > 1e-6){
        double mid=l+(h-l)/2.0;
        int r=cp(v,mid);
        if(r>k){
            l=mid;
        }else{
            h=mid;
        }
    }
    cout<<h<<endl;
}