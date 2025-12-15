// https : // www.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1

// #include <iostream>
// #include <vector>
// #include <unordered_map>

//         using namespace std;

// class Solution
// {
// public:
//     int maxLength(vector<int> &arr)
//     {
//         unordered_map<int, int> prefix_sum;
//         int sum = 0, max = 0;
//         for (int i = 0; i < arr.size(); i++)
//         {
//             sum += arr[i];
//             if (sum == 0)
//                 max = i + 1;

//             auto it = prefix_sum.find(sum);
//             if (it != prefix_sum.end())
//             {
//                 int x = i - it->second;
//                 max = max < x ? x : max;
//             }
//             else
//             {
//                 prefix_sum[sum] = i;
//             }
//         }

//         return max;
//     }
// };