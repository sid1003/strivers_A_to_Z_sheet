#include <bits/stdc++.h>
using namespace std;

// brute force
bool linearSearch(vector<int>&a, int num) {
    int n = a.size(); //size of array
    for (int i = 0; i < n; i++) {
        if (a[i] == num)
            return true;
    }
    return false;
}

int longestSuccessiveElements(vector<int>&a) {
    int n = a.size(); //size of array
    int longest = 1;
    //pick a element and search for its
    //consecutive numbers:
    for (int i = 0; i < n; i++) {
        int x = a[i];
        int cnt = 1;
        //search for consecutive numbers
        //using linear search:
        while (linearSearch(a, x + 1) == true) {
            x += 1;
            cnt += 1;
        }

        longest = max(longest, cnt);
    }
    return longest;
}

// better 
int longestSuccessiveElements(vector<int>&a) {
    int n = a.size();
    if (n == 0 || n == 1) return n;

    //sort the array:
    sort(a.begin(), a.end());
    int lastSmaller = INT_MIN;
    int cnt = 0;
    int longest = 1;

    //find longest sequence:
    for (int i = 0; i < n; i++) {
        if (a[i] - 1 == lastSmaller) {
            //a[i] is the next element of the
            //current sequence.
            cnt += 1;
            lastSmaller = a[i];
        }
        else if (a[i] != lastSmaller) {
            cnt = 1;
            lastSmaller = a[i];
        }
        longest = max(longest, cnt);
    }
    return longest;

}

// optimal code
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    if(n == 1) return 1;
    set<int> s(arr.begin(), arr.end());
    int maxCnt = 1;
    for(int elem : arr){
        // it's the first element of the sequence 
        // if you're not able to find a previous element in the set
        if(s.find(elem - 1) == s.end()){
            int cnt = 1;
            int temp = elem;
            while(s.find(temp + 1) != s.end()){
                cnt++;
                maxCnt = max(cnt, maxCnt);
                temp++;
            }
        }
    }
    return maxCnt;
}

int main(){
    
    return 0;
}