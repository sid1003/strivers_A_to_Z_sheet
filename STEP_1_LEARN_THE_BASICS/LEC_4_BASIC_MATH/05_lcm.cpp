#include <bits/stdc++.h>
using namespace std;

// euclidean algorithm for gcd

// gcd(a, b) == gcd(a - b, b)
// gcd(a, b) == gcd(a % b, b)

// write the code for gcd(a, b)

int gcdOptimized(int a, int b){

    while(a > 0 && b > 0){
        if(a > b) a = a % b;
        else b = b % a;
    }

    if(a == 0) return b;
    return a;

}

int lcm(int a, int b) {
    // Using the formula LCM(a, b) = abs(a * b) / GCD(a, b)
    return (a * b) / gcdOptimized(a, b);
}

int main(){
    
    return 0;
}