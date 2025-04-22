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

// optimal for only positives
int longest_subarray_sum_2(vector<int> &arr, int n, int k){
    int left = 0, right = 0;
    int sum = arr[0];
    int maxLen = 0;
    while(right < n){
        while(left <= right && sum > k){
            sum -=  arr[left++];
        }
        if(sum == k){
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if(right < n)  sum += arr[right];
    }
}

int main(){

}