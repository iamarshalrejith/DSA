#include <bits/stdc++.h>
using namespace std;

int main(){
    // Deque is a double-ended queue that allows insertion and deletion at both ends
    deque<int> dq;
    dq.push_back(1); // Add 1 to the end
    dq.emplace_back(2); // Add 2 to the end 

    dq.push_front(0); // Add 0 to the front 
    dq.emplace_front(-1); // Add -1 to the front 

    dq.pop_back(); // Remove the last element
    dq.pop_front(); // Remove the first element
    // Note: Deque allows fast insertion and deletion at both ends

    // insert in vector is costly-> O(n), but in deque it is not costly -> O(1)
    

    /*
    Note :
          - deque is a double-ended queue.
          - It combines features of both vector and list, but is not the same.
          - Unlike a vector, it allows fast insertions/deletions at both ends.
          - Unlike a list, it supports random access like vector.

         - Inserting at the front of a vector is O(n).
         - Inserting at the front or back of a deque is generally O(1).
         - But inserting in the middle of a deque is still O(n) (same as vector).
    */

    // rest functions are same as vector
    // begin(), end(),size(), empty(), clear(),swap(),erase()

}