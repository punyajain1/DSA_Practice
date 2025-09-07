#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int ans=0,sign=1,i=0;
    if(isspace(s[i])){
        i++;
    }if(s[i]=='-'){
        sign= -1;
        i++;
    }
    for(;i<s.size();i++){
        cout<<s[i]<<endl;
        if(isdigit(s[i])){
            int a=s[i]-'0';
            if(a==0){
                continue;
            }else{
                ans=(ans*10)+a;
            }
        }else{
            break;
        }
    }
    if(sign==1) cout<<ans;
    if(sign==-1) cout<<sign*ans;
}