#include<bits/stdc++.h>
// for counting the no. of frequencies
// int main() {

//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i<n; i++) {
//         cin >> arr[i];
//     }

//     int hash[13] = {0};
//     for(int i = 0; i<n; i++) {
//         hash[arr[i]] += 1;
//     }

//     int q;
//     cin >> q;
//     while(q--) {
//         int number;
//         cin >> number;
//         cout << hash[number] << endl;
//     }
// }

// input 
// 5
// 1 3 2 1 3
// 5
// 1
// 4
// 2
// 3
// 12

// output
// 2
// 0
// 1
// 2
// 0


// this is for string 
// int main () {
//     string s;
//     cin >> s;

//     int hash[26] = {0};
//     for(int i=0; i<s.size(); i++) {
//         hash[s[i] - 'a']++;
//     }
//     int q;
//     cin >> q;
//     while(q--) {
//         char c;
//         cin >> c;
//         cout << hash[c-'a'] << endl;
//     }

// }

// input
// abcdef
// 5
// a
// c
// e
// f
// g

// output
// 1
// 1
// 1
// 1
// 0

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    // per compute

    //map<int, int> mpp;
    unordered_map <int, int> mpp;
    for(int i=0; i<n; i++) {
        mpp[arr[i]]++;
    }
    
    for(auto it: mpp) {
        cout << it.first << "-->" << it.second << endl;
    }

    int q;
    cin >> q;
    while(q--) {
        int numbers;
        cin >> numbers;
        cout << mpp[numbers] << endl;
    }
}