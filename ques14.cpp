//Find the two numbers appearing odd number of times

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans^=arr[i];
    }
    int a=ans & -ans;
    int v1=0,v2=0;
    for(int i=0;i<n;i++){
        if(arr[i]&a){
            v1^=arr[i];
        }else{
            v2^=arr[i];
        }
    }
    cout<<v1<<" "<<v2<<endl;
}