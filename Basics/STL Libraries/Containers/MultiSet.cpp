#include <bits/stdc++.h>
using namespace std;

int main(){
    // Multiset => A multiset is a container that allows duplicate elements.->sorted -> not unique
    multiset<int> ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);

    //others methods same as set
    //Erase function erase all the elements with the given value -> 
    ms.erase(2); // This will remove all occurrences of 2 from the multiset
}

