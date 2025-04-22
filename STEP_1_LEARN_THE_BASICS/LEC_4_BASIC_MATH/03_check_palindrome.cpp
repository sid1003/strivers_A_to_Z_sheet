#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int n){

    if(n >= -9 && n <= 9) return n;

    int rev = 0;

    while(n){
        int rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    return rev;


}

bool checkPalindrome(int n){

    if(n >= -9 && n <= 9) return true;

    return reverseNumber(n) == n;

}

int main(){
    return 0;
}