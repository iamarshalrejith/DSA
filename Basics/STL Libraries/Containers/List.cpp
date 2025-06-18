#include <bits/stdc++.h>
using namespace std;

int main(){
    // List is a doubly linked list that allows fast insertions and deletions at both ends and in the middle
    // It does not support random access like vector, but is efficient for certain operations.

    list<int> ls;
    ls.push_back(1); // Add 1 to the end of the list
    ls.emplace_back(2); // Add 2 to the end of the list

    ls.push_front(0); // Add 0 to the front of the list
    ls.emplace_front(-1); // Add -1 to the front of the list

   /*
   - Inserting at the front or back of a list is O(1).
   - Inserting in the middle is O(1) if you already have an iterator to that position.
   - But finding the position is O(n) (no random access)
   */

    // rest functions are same as vector
    // begin(), end(),size(), empty(), clear(),swap(),erase()
 

  /*
Note:
  - list is a doubly linked list.
  - Allows fast insertions and deletions at both ends and in the middle (with an iterator).
  - Does not support random access (unlike vector).
  - Not cache friendly due to non-contiguous memory.
  - Front operations (push_front, pop_front) are O(1), unlike vector.
*/

}