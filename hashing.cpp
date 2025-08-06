#include<iostream>
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

int main(){
    char_hashing();
    return 0;
}