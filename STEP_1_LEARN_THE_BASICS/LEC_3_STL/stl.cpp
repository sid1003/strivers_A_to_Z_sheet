#include <bits/stdc++.h>
using namespace std;

void explainPairs(){

    pair<int, int> p = {1, 3};

    cout << "First element of the pair: " << p.first << endl;
    cout << "Second element of the pair: " << p.second << endl;

    p.first = 5;
    p.second = 7;

    pair<int, pair<int, int>> p2 = {1, {2, 3}};

    cout << "First element of the pair: " << p2.first << endl;
    cout << "Second element of the pair: " << p2.second.first << endl;
    cout << "Third element of the pair: " << p2.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {2, 4}, {3, 5}};

    cout << "Array elements: ";
    for(auto &x: arr) cout << "(" << x.first << ", " << x.second << ") ";
    cout << endl;

}

void explainVectors(){

    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    v.emplace_back(1);

    vector<pair<int, int>> v2;

    v2.push_back({1, 2});
    v2.push_back({2, 3});

    v2.emplace_back(12, 34);

    vector<int> v3(5, 100);

    vector<int> v4(5);

    vector<int>  v5(5, 10);
    vector<int> v6(v5);

    vector<int>::iterator it = v.end();
    // vector<int>::iterator it = v.begin();

    cout << *(it) << endl;
    cout << *(v.begin()) << endl;

    it++;

    cout << *(it) << endl;
    
    it += 2;

    cout << *(it) << endl;

    // vector<int>::iterator it = v.end(); points to the memory location right after the last element
    // vector<int>::iterator it = v.rend();
    // vector<int>::iterator it = v.rbegin();

    cout << v[0] << " " << v.at(4) << endl;

    for(vector<int>::iterator it = v.begin(); it!=v.end() ; it++){
        cout << *(it) << " ";
    }

    for(auto it = v.begin(); it!=v.end() ; it++){
        cout << *(it) << " ";
    }

    for(auto it : v){
        cout << it << " ";
    }

    v.erase(v.begin() + 1);

    v.erase(v.begin() + 2, v.begin() + 4); // [start, end)

    v.insert(v.begin(), 100);
    v.insert(v.begin() + 1, 2, 100);
    
    vector<int> copy(2, 50);

    v.insert(v.begin() + 3, copy.begin(), copy.end());

    cout << v.size();

    v.swap(v);

    v.clear();

    cout << v.empty();

}

void explainList(){
    list<int> l;

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);

    l.emplace_back(1);

    l.push_front(0);

    l.emplace_front(10);

    // rest functions are same as vectors
    // begin, end, rbegin, rend, clear, insert, size, swap
}

void explainDeque(){

    deque<int> d;

    d.push_back(1);
    d.push_back(2);
    d.push_back(3);

    d.emplace_back(1);
    d.push_front(0);
    d.emplace_front(199);


    d.pop_back();
    d.pop_front();

    d.back();

    d.front();

}

void explainStack(){

    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.emplace(22);

    cout << s.top() << endl;

    s.pop();

    cout << s.top() << endl;
    cout << s.size() << endl;
    cout << s.empty() << endl;

    stack<int, vector<int>> s2;
    stack<int, vector<int>> s3;

    s2.swap(s3);

}

void explainQueue(){

    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.emplace(22);

    q.back() += 5;

    cout << q.front() << endl;
    cout << q.back() << endl;

    q.pop();

}

void explainPq(){

    priority_queue<int> pq;

    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.emplace(22);

    cout << pq.top() << endl;

    pq.pop();

    cout << pq.top() << endl;
    cout << pq.size() << endl;
    cout << pq.empty() << endl;

    // write code for min heap
    priority_queue<int, vector<int>, greater<int>> pq2;
    priority_queue<int, vector<int>, greater<int>> pq3;

    pq2.swap(pq3);

}

void explainSet(){

    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.emplace(22);

    s.erase(2);

    auto it = s.find(3);
    auto it = s.find(6); // will return s.end()

    s.erase(5);

    int cnt = s.count(4);

    auto it = s.find(3);
    s.erase(it);

    auto it1 = s.find(1);
    auto it2 = s.find(2);

    s.erase(it1, it2);

    auto it = s.lower_bound(2);
    auto it = s.lower_bound(3);

    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    
    int n  = sizeof(a)/sizeof(a[0]);

    int ind = lower_bound(a, a + n, 4) - a;
    int ind = lower_bound(a, a + n, 11) - a;

    int ind = upper_bound(a, a + n, 4) - a;
    int ind = upper_bound(a, a + n, 11) - a;

}

void explainMultiSet(){

    // everything same as set, also stores multiple occurrences

    multiset<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.emplace(22);

    s.erase(3); // will erase all 3s

    int cnt = s.count(3);

    s.erase(s.find(3));
    // s.erase(s.find(3), s.find(3)+2);

}

void explainUnorderedSet(){
    // all same as set but lowerbound and upperbound don't work

    unordered_set<int> s;

}

bool customComparator(const pair<int, int>& a, const pair<int, int>& b) {
    // First, compare based on the second element in ascending order
    if (a.second != b.second)
        return a.second < b.second;
    // If second elements are the same, compare based on the first element in descending order
    return a.first > b.first;
}

void explainAlgorithms(){

    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    
    int n  = sizeof(a)/sizeof(a[0]);

    vector<int> v(2, 500);

    sort(a, a + n);
    sort(v.begin(), v.end());
    sort(a + 2, a + 4);

    sort(a, a + n, greater<int>()); // sort in descending order

    pair<int, int> arr[] = {{1, 2}, {2, 1}, {4, 1}};

    // sort it asc order wrt to second element
    // if second element is same, then sort it 
    // according to first element but in descending order

    sort(arr, arr + n, customComparator);

    int num = 4;
    cout << __builtin_popcount(4) << endl; /// print number of set bits in binary representation of 4

    long long num2 = 4;
    cout << __builtin_popcountll(num2) << endl; /// print number of set bits in binary representation of 4

    string s = "123";

    do{
        cout << s << endl;
    }while(next_permutation(s.begin(), s.end()));

    int maxi = *max_element(a, a + n);
    int maxi = *max_element(v.begin(), v.end());

}

void explainMap(){

    map<int, int> m;

    map<int ,pair<int, int>> m2;

    map<pair<int, int>, int> m3;

    m[1] = 2;
    m[2] = 4;
    m[3] = 6;
    m.emplace(22, 33);

}

int main(){



    return 0;
}
