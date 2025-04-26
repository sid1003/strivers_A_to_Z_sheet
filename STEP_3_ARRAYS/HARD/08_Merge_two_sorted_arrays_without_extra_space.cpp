#include <bits/stdc++.h>
using namespace std;

// optimal  approach 

// tc -> O(min(n, m)) + O(mlogm) + O(nlogn)
// sc -> O(1)

void mergeArrays(vector<int>& a, vector<int>& b) {
    int n = a.size(), m = b.size();
    int i = n - 1, j = 0;
    while(i >= 0 && j < m){ // O(min(n, m))
        if(a[i] > b[j]){
            swap(a[i], b[j]);
            i--;j++;
        } else {
            break;
        }
    }
    sort(a.begin(), a.end()); // can also be written as sort(a, a + n) O(nlogn)
    sort(b.begin(), b.end()); // can also be written as sort(b, b + m) O(mlogm) 
}

int main(){

    return 0;
}