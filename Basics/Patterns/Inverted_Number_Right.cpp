#include <bits/stdc++.h>
using namespace std;

int main(){
    int N = 5;
    for(int i = 1; i<=N;i++){
        for(int j=1;j<=N-i+1;j++){
            cout << j;
        }
        cout << endl;
    }
}