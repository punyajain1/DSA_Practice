//Nth Root of a Number using Binary Search
#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin>> n>>m;
    int l=0,h=m;
    int count=1;
    while(l<=h){
        int mid=(l+h)/2;
        if (pow(n,count)==m){
            break;
        }else if(pow(n,count)<m){
            count++;
            l=mid+1;
        }else{
            break;
        }
    }
    if(pow(n,count)==m){
        cout<<count;
    }else{
        cout<<-1;
    }
}