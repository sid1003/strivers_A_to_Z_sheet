#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str, int start, int end) {
    // Base case: If start is greater than or equal to end, the string is a palindrome
    if (start >= end) {
        return true;
    }

    // If the characters at the start and end are different, it's not a palindrome
    if (str[start] != str[end]) {
        return false;
    }

    // Recursively check the next substring
    return isPalindrome(str, start + 1, end - 1);
}

int main(){
    
    return 0;
}