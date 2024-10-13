#include<bits/stdc++.h> 
using namespace std;

class Solution {
  public:
    void print_divisors(int n) {
        int x = n;
        vector<int> ls;
        for(int i = 1; i<=sqrt(x); i++) {
            if(x%i == 0) {
                ls.push_back(i);
                if((x/i) != i ) {
                    ls.push_back(x/i);
                }
            }
        }
        sort(ls.begin(), ls.end());
        for(auto it : ls) cout << it << " ";
    }
};
// All divisors of a Number geeks for geeks
