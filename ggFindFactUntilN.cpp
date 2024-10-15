#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<long long> factorialNumbers(long long n) {
        vector<long long> ans;
        long long result = 1, x = 1;
        while (result <= n) {
            ans.push_back(result);
            x = x + 1;
            result = x * result;
        }
        return ans;
    }
};

int main() {
    long long N = 100;  // Hardcoded value for N (you can change this value)
    
    Solution ob;
    vector<long long> ans = ob.factorialNumbers(N);
    
    // Output the result
    for (auto num : ans) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}