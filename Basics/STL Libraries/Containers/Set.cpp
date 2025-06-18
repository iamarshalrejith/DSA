#include <bits/stdc++.h>
using namespace std;

int main(){
    // Set -> Stores unique elements in sorted order
    set<int> s;
    s.insert(1); // {1}
    s.emplace(2); // {1, 2}
    s.insert(3); // {1, 2, 3}
    s.insert(4); // {1, 2, 3, 4}
    s.insert(2); // Duplicate, will not be added -> {1, 2, 3}
    
    //find
    auto it = s.find(2); // returns an iterator
    cout << *it << endl; // Output: 2
    // If not found, it returns s.end()
    
    s.erase(2); // Removes 2 from the set -> {1, 3, 4}
    cout << s.size() << endl; // Output: 3 (size of the set)

    //Erase using iterator
    set<int> s2 = {1, 2, 3, 4, 5};
    auto it2 = s2.find(3);
    auto it3 = s2.find(5);
    s2.erase(it2,it3); // Erases elements from 3 to 5 (exclusive) -> {1, 2, 5}
    for(auto x : s2) {
        cout << x << " "; // Output: 1 2 5
    }
}

//Note : Every operation in set takes O(log n) time complexity because it is implemented as a balanced binary search tree (usually a Red-Black Tree).