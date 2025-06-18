#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int,int> mpp; // key value pair
    mpp[1] = 2; // insert key-value pair
    mpp[2] = 3; // insert another key-value pair

    map<int,pair<int,int>> mpp2; // map of pairs
    mpp2[1] = {2, 3}; // insert key-value pair with pair as value

    map<pair<int,int>,int> mpp3; // map of pairs as keys 
    mpp3[{1, 2}] = 3; // insert key-value pair with pair as key
   

    // Iterating through the map
    for(auto it :mpp){
        cout << it.first << " " << it.second << endl; // print key and value
    }
}

//Note : Map stores unique keys in sorted order, and it is implemented as a balanced binary search tree (usually a Red-Black Tree).

//Multi-map
// Allows duplicate keys, but still stores them in sorted order.


//Unordered Map
//unique keys, not sorted, implemented as a hash table.
// Most of the cases it took O(1) time complexity
// Worst case O(n) time complexity (Does not happen in practice)