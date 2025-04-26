#include <bits/stdc++.h>
using namespace std;

int gcdBruteForce(int n1, int n2){

    for(int i = min(n1, n2); i >= 1 ; i--){
        if(n1 % i == 0 && n2 % i == 0){
            return i;
        }
    }

}

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

// The key idea is this:

// GCD(a, b) = GCD(b, a % b)

// We keep replacing a with b, and b with a % b, until b becomes 0.
// At that point, the GCD is a.

int gcdEuclidean(int a, int b){

    while(b!= 0){
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;

}

int main(){
    
    return 0;
}