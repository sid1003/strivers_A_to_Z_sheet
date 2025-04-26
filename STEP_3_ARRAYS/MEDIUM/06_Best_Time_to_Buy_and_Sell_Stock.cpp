#include <bits/stdc++.h>
using namespace std;

// brute force

int maxProfit(vector<int>& arr){
    int n = arr.size();
    int res = 0;
    int curr = 0;
    for(int i = 0 ; i < n - 1; i++){
        for(int j = i + 1 ; j < n; j++){
            curr = arr[j] - arr[i];
            res = max(curr, res);
        }
    }
    return res;
}

// better

int maxProfit2(vector<int>& arr) {
    int n = arr.size();
    int res = 0;
    int currProfit = 0;
    int minSoFar = arr[0];
    for(int i = 0 ; i < n ; i++){
        minSoFar = min(minSoFar, arr[i]);
        currProfit = arr[i] - minSoFar;
        res = max(currProfit, res);
    }
    return res;
}

// better approach with enhanced syntax
int maxProfit(vector<int>& prices) {
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int price : prices) {
        minPrice = min(minPrice, price);             // Track the lowest price so far
        maxProfit = max(maxProfit, price - minPrice); // Track the max profit
    }

    return maxProfit;
}


int main(){

    return 0;
}