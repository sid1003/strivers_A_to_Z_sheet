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

bool armstrongNumber(int n){

    int check = 0;
    int copy = n;
    while(copy){
        int rem = copy % 10;
        check += pow(rem, countDigits(n));
        copy /= 10;
    }

    return check == n;

}

int main(){
    
    return 0;
}