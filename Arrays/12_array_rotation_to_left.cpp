// https : // www.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

// #include <iostream>
// #include <vector>

//         using namespace std;

// class Solution
// {
// public:
//     void reverseVector(vector<int> &arr, int start, int end)
//     {
//         while (start < end)
//             swap(arr[start++], arr[end--]);
//     }

//     // Function to rotate an array by d elements in counter-clockwise direction.
//     void rotateArr(vector<int> &arr, int d)
//     {
//         int n = arr.size();
//         if (n <= 1)
//             return;
//         if (d == 0)
//             return;
//         d = d % n;
//         reverseVector(arr, 0, d - 1);
//         reverseVector(arr, d, n - 1);
//         reverseVector(arr, 0, n - 1);
//     }
// };