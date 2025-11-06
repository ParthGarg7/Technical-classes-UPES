// Find the first non-repeating element in a given array arr of integers and
// if there is not present any non-repeating element then return 0

// Note: The array consists of only positive and negative integers and not zero.

// Expected Time Complexity: O(n).
// Expected Auxiliary Space: O(n).

// #include <iostream>
// #include <unordered_map>

// using namespace std;

// class Solution {
//   public:
//     int firstNonRepeating(vector<int>& arr) {
//         unordered_map<int , int> map ;
//         for(auto x : arr)
//             map[x]++;

//         for(auto x: arr)
//         {

//             if(map[x] == 1)
//              return x;
//         }
//         return 0;

//     }
// };


// https://www.geeksforgeeks.org/problems/non-repeating-element3958/1