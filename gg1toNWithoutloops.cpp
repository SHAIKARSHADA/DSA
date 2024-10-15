#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // brute force method one;
    // int n = 1;
    // void printNos(int N)
    // {
    //     if(n >= N+1) {
    //         return;    
    //     }
    //     cout<<" "<<n;
    //     n++;
    //     printNos(N);
        
    // }
    // another method
    // using call stack
    void printNos(int N)
    {
        if(N == 0) {
            return;    
        }
        printNos(N - 1);
        cout<<" "<<N;
      
        
    }
};