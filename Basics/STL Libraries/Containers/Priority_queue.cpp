#include <bits/stdc++.h>
using namespace std;

int main() {
    // Priority Queue is a container adaptor that provides constant time lookup of the largest (or smallest) element.
    // It is implemented as a max-heap(Higher numbers have higher priority) -> default
    
    priority_queue<int> pq;
    // Inserting elements into the priority queue
    pq.push(10);     // Inserts 10, top is now 10
    pq.push(20);     // Inserts 20, top becomes 20
    pq.push(5);      // Inserts 5, top remains 20
    pq.emplace(15);  // Inserts 15, top remains 20
 

    cout << "Top element: " << pq.top() << endl; // Outputs: 20
    pq.pop(); // Removes the top element (20)
    cout << "Top element after pop: " << pq.top() << endl; // Outputs: 15
    cout << "Size of priority queue: " << pq.size() << endl; // Outputs: 3

    // for minimum priority queue, we can use a custom comparator
    priority_queue<int, vector<int>, greater<int>> min_pq;
    min_pq.push(10);     // Inserts 10, top is now 10
    min_pq.push(20);     // Inserts 20, top remains 10
    min_pq.push(5);      // Inserts 5, top becomes 5

    cout << "Top element of min priority queue: " << min_pq.top() << endl; // Outputs: 5
    return 0;

    // Push , pop -> O(log n) and top -> O(1)
}