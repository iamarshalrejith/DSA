#include <bits/stdc++.h>
using namespace std;

int main(){
    // Stack  is a LIFO (Last In First Out) data structure
    stack<int> st;
    st.push(1); // Add 1 to the top {1}
    st.emplace(2); // Add 2 to the top {1, 2}
    st.push(3); // Add 3 to the top {1, 2, 3}
    st.emplace(4); // Add 4 to the top {1, 2, 3, 4}

    cout << st.size() << endl; // Output the size of the stack (4)

    st.pop(); // Remove the top element {1, 2, 3, 4} => {1, 2, 3}

    cout << st.top() << endl; // Output the top element (3)
    cout << st.empty() << endl; // Check if the stack is empty (0 for false)
    
    // Every Operation on stack is O(1) time complexity
}