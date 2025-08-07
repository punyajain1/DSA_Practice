#include<iostream>
#include <map>
using namespace std;


void char_hashing(){
    string s;
    cin>>s;
    int h[26]={0};
    for(int i=0;i<s.size();i++){
        h[s[i]-'a']++;
    }

    int q;
    cin>>q;
    while(q--){
        char x;
        cin>>x;
        cout<<h[x-'a']<<endl;
    }
}


void ques(){

    vector <int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(1);
    nums.push_back(4);

    map<int , int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int ans=0;
        for(auto it : m){
            if(it.second>ans){
                ans = it.second;
            }
        }
        cout<< ans<<endl;;
}



int main(){
    ques();
    return 0;
}