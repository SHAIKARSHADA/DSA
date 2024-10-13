
#include<bits/stdc++.h> 
using namespace std;

class Solution{
public:
    int isPrime(int N){
       
        int x = N; 
        int count = 0;
        for (int i = 1; i<=sqrt(x); i++) {
            if(x%i == 0) {
                count++;
                if((x/i) != i) {
                    count++;
                }
            }
        }
        if(count == 2) {
            return 1;
        } 
    return 0;
    }
};

// Prime Number