#include <bits/stdc++.h>
using namespace std;

int countDigits(int n){

    if(n >= -9 && n <= 9) return 1;

    int cnt = 0;

    while(n){
        cnt++;
        n /= 10;
    }
    return cnt;
}

int main(){
    return 0;
}