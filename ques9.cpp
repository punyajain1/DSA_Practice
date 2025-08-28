//K-th Element of two sorted arrays
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int kthElement(vector<int>& a, vector<int>& b, int k) {
    int n = a.size(), m = b.size();
    if (n > m) return kthElement(b, a, k);
    int l = max(0, k - m), r=min(k, n);

    while (l <= r) {
        int cut1 = (l + r) / 2;
        int cut2 = k - cut1;

        int l1 = (cut1 == 0) ? INT_MIN : a[cut1 - 1];
        int l2 = (cut2 == 0) ? INT_MIN : b[cut2 - 1];
        int r1 = (cut1 == n) ? INT_MAX : a[cut1];
        int r2 = (cut2 == m) ? INT_MAX : b[cut2];

        if (l1 <= r2 && l2 <= r1) {
            return max(l1, l2);
        }
        else if (l1 > r2) {
            r = cut1 - 1;
        }
        else {
            l = cut1 + 1;
        }
    }
    return -1;
}

int main() {
    vector<int> a = {2, 3, 6, 7, 9};
    vector<int> b = {1, 4, 8, 10};
    cout << "The k-th element of two sorted array is: " <<
            kthElement(a, b, 5) << '\n';
}
