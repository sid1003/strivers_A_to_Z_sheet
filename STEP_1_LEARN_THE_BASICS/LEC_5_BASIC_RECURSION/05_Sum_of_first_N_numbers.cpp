#include <bits/stdc++.h>
using namespace std;

int sumOfFirstNNumbers(int n){
    if(n == 0) return 0;
    return n + sumOfFirstNNumbers(n-1);
}

int main(){
    
    return 0;
}