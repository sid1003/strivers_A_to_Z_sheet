#include <bits/stdc++.h>
using namespace std;

void printAllDivisors(int n){

    for(int i = 1 ; i <= n ; i++){
        if(n % i == 0){
            cout << i << " ";
        }
    }

}

void printAllDivisors2(int n){
    vector<int> ls;

    for(int i = 1 ; i * i <= n ; i++){
        if(n % i == 0){
            ls.push_back(i);
            if(i!= n / i) ls.push_back(n / i);
        }
    }

    sort(ls.begin(), ls.end());

    for(auto it: ls){ cout << it << " ";}
    cout << endl;

}

int main(){
    
    return 0;
}