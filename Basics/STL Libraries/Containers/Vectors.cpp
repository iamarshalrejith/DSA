//Vectors are a sequence of elements of the same type, which can be accessed by index.
// Vectors are dynamic arrays that can grow and shrink in size.

#include <bits/stdc++.h>
using namespace std;

int main(){
    //Vector declaration
    vector<int> v; // Empty vector of integers
    v.push_back(1); // Adding an element to the vector
    v.emplace_back(2); // Adding an element to the vector using emplace_back, faster than push_back
    

    //Vector initialization
    vector<int> v1(5,100); // Vector of size 5, initialized with 100
    vector<int> v2(5); // Vector of size 5, initialized with default value (0 for int)
    

    //Copying vectors 
    vector<int> v3(v1); // Copying vector v1 to v3
    cout << v3[0] << endl; // Accessing the first element of v3


    //Vector of Pairs
    vector <pair<int,int>> vp; // Vector of pairs
    vp.push_back({1,2}); // Adding a pair to the vector
    vp.emplace_back(3,4); // emplace_back also works same as push_back for pairs but syntax differs

    
    //Iterating through vectors
    vector<int>::iterator it1 = v1.begin(); // Iterator to the beginning of vector v1 (Points to memory location of first element)
    vector<int>::iterator it2 = v1.end(); // Iterator to the end of vector v1 (Points to memory location after last element)
    
    for(auto it = it1;it!= it2;it++){ // auto keyword -> deduces the type of iterator (auto <-> vector<int>::iterator)
        cout << *it << " "; // Dereferencing the iterator to get the value
    }
    cout << endl;


    //Functions on vectors
    vector<int> v4 = {1,2,3,4,5};
    cout << v4.size() << endl; // Size of the vector
    

    //Erase:
    v4.erase(v4.begin() + 2); // Erasing with iterator (removes the element at index 2)
    //{1, 2, 4, 5}

    //To erase a range of elements:
    v4.erase(v4.begin() + 1, v4.begin() + 3); // Erasing elements from index 1 to index 3 (exclusive)
    // {1, 5}
    

    //Insert:
    v4.insert(v4.begin()+1,2); // Inserting 2 at index 1
    // {1, 2, 5}
    v4.insert(v4.begin()+2, 3, 4); // Inserting 3 elements of value 4 at index 2
    // {1, 2, 4, 4, 4, 5}
    
    vector<int> v5(2,50)  ; // Vector of size 2, initialized with 50
    v4.insert(v4.begin(), v5.begin(), v5.end()); // Inserting elements of vector v5 at index 0
    // {50, 50, 1, 2, 4, 4, 4, 5}

    //pop_back:
    v4.pop_back(); // Removes the last element of the vector
    // {50, 50, 1, 2, 4, 4, 4}

    /*other functions: swap => swaps the contents of two vectors -> v1.swap(v2)
                      clear => removes all elements from the vector -> v1.clear()
                     empty => checks if the vector is empty -> v1.empty()
    */

}