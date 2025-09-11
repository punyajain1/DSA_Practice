#include <iostream>

using namespace std;

void solve(vector<int> &v, int i, int sum, int target, int &count) {
    if (i == v.size()) {
        if (sum == target) count++;
        return;
    }
    solve(v, i + 1, sum + v[i], target, count);
    solve(v, i + 1, sum, target, count);
}


int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int t=4;
    int count = 0;
    solve(v, 0, 0, t, count);
    cout<<count<<endl;
}