#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
// eucledian algorithm
// gcd(a,b) == gcd(a-b,b) in here the bigger no. will be a, if b is big then it will look like this (b-a,a) 
  int gcd(int a, int b) {
        
        while( a>0 && b>0 ) {
            if( a>b) {
                a = a%b;
            } else {
                b = b%a;
            }
            
        }
        if (a==0) return b;
        return a;
        
  }
// brute force method no. 1
//   int gcd(int a, int b) {
//         int c = a;
//         int d = b;
//         int gcd = 0;
//         for(int i = 1; i <= min(a,b); i++ ) {
//             if((c%i == 0) && (d%i == 0) ) {
//                 gcd = i;
//             }
//         }
//         return gcd;
//     }
// brute force method no. 2
    // int gcd(int a, int b) {
    //     int c = a;
    //     int d = b;
    //     for(int i = min(c,d); i >= 1; i++ ) {
    //         if((c%i == 0) && (d%i == 0) ) {
    //             return i;
    //             break;
    //         }
    //     }
    // }
}