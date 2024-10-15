//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int i = 0;
    void reverseArray(vector<int> &arr) {
       int n = arr.size();
       if(i >= n/2) return;
       swap(arr[i],arr[n-i-1]);
       i++;
       reverseArray(arr);
       
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        ob.reverseArray(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends