#include <bits/stdc++.h>
using namespace std;

int main(){
    // Queue is a FIFO (First In First Out) data structure
    queue<int> q;
    q.push(1); // Add 1 to the back {1}
    q.emplace(2); // Add 2 to the back {1, 2}

    cout << q.size() << endl; // Output the size of the queue (2)
    cout << q.front() << endl; // Output the front element (1)
    cout << q.back() << endl; // Output the back element (2)

    q.pop(); // Remove the front element {1, 2} => {2}
   
    // Every Operation on queue is O(1) time complexity
}