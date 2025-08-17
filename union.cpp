#include<iostream>
#include <set>
using namespace std;


void uni(vector<int> v1,vector<int> v2){
    set<int> temp;
    for(int i=0;i<v1.size();i++){
        temp.insert(v1[i]);
        temp.insert(v2[i]);
    }
    
}

int main(){

    vector<int> v1;
    vector<int> v2;
    int n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v1[i]=x;
    }
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v2[i]=x;
    }


}