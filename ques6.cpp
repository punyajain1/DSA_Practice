#include <iostream>
using namespace std;

int counts(vector<int>&v , int pages){
    int st = 1 , pagescout=0;
    for(int i=0;i<v.size();i++){
        if(v[i]+pagescout <= pages){
            pagescout+=v[i];
        }else{
            st++;
            pagescout=v[i];
        }
    }
    return st;
}
int suma(vector<int>v){
    int sum=0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int l=*max_element(v.begin(),v.end()) , h=suma(v) , student=4;

    while(l<=h){
        int mid=l+(h-l)/2;
        int x=counts(v,mid);
        if(x<=student){
            h=mid-1;
        }else{
            l=mid+1;
        }
    }
    cout<<l<<endl;
}