#include <bits/stdc++.h>
using namespace std;

void print1toN(int n){

    if(n == 0)  return;

    print1toN(n-1); // recursive call
    cout << n << " ";

}

int main(){
    
    return 0;
}