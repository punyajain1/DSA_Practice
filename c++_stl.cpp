#include <iostream>
using namespace std;

void pairs(){

    //pairs - to store valus in pairs 
    //it can be accesed by using - v_name.first (fir first value) , v_name.second (for second value)
    pair<int,int> p={1,2};
    cout<<p.first<<" "<<p.second<<endl;

    //we can store a pair in any element of pair
    pair<int , pair<int,int>>p2 = {1,{2,3}};
    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;
    
    //pair can also be used in array
    pair<int,int> arr[] = {{1,2},{2,3}};
    cout << arr[0].first <<endl;
}
void vectors(){
    //when we dont know size 
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2); //faster
    
    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2); //here we dont need to place it in curly brackets

    vector<int> v2(5); //vector of size 5 with 0 vales
    vector<int> v3(5 , 10); //vector of size 5 with 10 vales

    vector<int> v4(v3); //copy of a vector v3 in v4

    vector<int>::iterator it= v3.begin();
    it++;
    cout<< *(it) <<" ";

    it = it+3;
    cout<< *(it) <<" ";
    cout<<endl;
    vector<int> v5 = {1,2,3,4,5,6,7,8,9};
    cout<<v5.back()<<endl;

    for(vector<int>::iterator it = v5.begin(); it!= v5.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    for(auto it :v5){
        cout<<it<<" ";

    }

}

int main(){
    vectors();
    return 0;
}