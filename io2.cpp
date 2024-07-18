#include<bits/stdc++.h>
#include<vector>

using namespace std; 



void printName() {
  cout << "hello shaik";
}

void parameterisedFunction(string name) {
  cout << "hello " << name;
}

int main() {
  
  // int day; 
  // cin >> day;

  // switch(day) {
  //   case 1:
  //   cout << "Monday";
  //   break;

  //   case 2: 
  //   cout << "Tuesday";
  //   break;

  //   case 3: 
  //   cout << "Wednesday";
  //   break;

  //   case 4: 
  //   cout << "Thursday";
  //   break;

  //   case 5:
  //   cout << "Friday";
  //   break;

  //   case 6: 
  //   cout << "Saturday";
  //   break;

  //   case 7: 
  //   cout << "Sunday";
  //   break;

  //   default : 
  //   cout << "Give Correct Inputs";
  // }

  // switch case example


  // int arr[5];

  // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] ;

  // for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
  //   cout << arr[i] << "\n";
  // }

  // cout << sizeof(arr) << "\n";

  // cout << sizeof(arr[0]) << "\n";

  // cout << sizeof(arr) / sizeof(arr[0]);

  // first one will be stored in an random place but,
  // the second index will be stored after the first one so, that's why it is called consecutive memory location 

  // if you didn't intialize an array  you can get an garbage value as default, it is some random value  like int a[]; a[2] = 0; and cout << a[4] , it will give some random gibberish 
  // array example 


  // int i = 1;
  // while(i<=5) {
  //   cout << "shaik is awesome " << i << "\n";
  //   i++;


  // while loop example

  // int i = 1;
  // do {
  //   cout << "shaik is super awesome " << i << "\n";
  //   i++;
  // } while(i<=5);

  // do while loop example 


  // Now comes Function

  // function has 4 types 

  // void -> which does not return anything
  // return -> 
  // parameterised -> 
  // non parameterised ->

  string name;
  cin >> name;

   printName(); // this is void example go up in void we wont 
   parameterisedFunction(name);
  return 0;
} 
