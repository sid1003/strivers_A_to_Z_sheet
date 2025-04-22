#include <bits/stdc++.h>
using namespace std;

// optimal solution for positive and negative numbers but better for only positive numbers
int longest_subarray_sum(vector<int> &arr, int n, long long k){
    unordered_map<long,  long> map;
    long long sum = 0;
    int maxLen = 0;
    for(int i = 0 ; i < n ; i++){
        sum += arr[i];
        if(sum == k){
            maxLen = i + 1;
        }
        long long rem = sum - k;
        if(map.find(rem)!= map.end()){
            int len = i - map[rem];
            maxLen = max(maxLen, len);
        }
        // store the sum only if it doesn't already exist
        if(map.find(sum) == map.end()){
            map[sum] = i;
        }
    }
    return maxLen;
}

int main(){

}