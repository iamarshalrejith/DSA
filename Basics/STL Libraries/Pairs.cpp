//Pair is a part of utility library in C++17
#include <bits/stdc++.h>
using namespace std;

int main(){
    // Pair is a simple data structure that holds two values, which can be of different types.
    // It is defined in the <utility> header file.
    pair<int,int> p = {1,2};
    cout << p.first << " " << p.second << endl; // Output: 1 2
    
    //Nested pairs
    pair<int, pair<int,int>> p2 = {1, {2, 3}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl; // Output: 1 2 3
    
    //Array of pairs
    pair<int,int> arr[] = {{1,2},{3,4}, {5,6}};
    cout << arr[0].first << " " << arr[0].second << endl; // Output: 1 2

}