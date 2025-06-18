#include <bits/stdc++.h>
using namespace std;

int main(){
    int N=5;
    for(int i = 1;i<=N;i++){
        for(int j = 0;j<N-i+1;j++){
            cout << "*";
        }
        cout << endl;
    }
}