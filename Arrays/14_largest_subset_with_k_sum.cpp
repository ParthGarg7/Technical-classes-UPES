// https : // www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=longest-sub-array-with-sum-k

// #include <iostream>
// #include <vector>
// #include <unordered_map>

//         using namespace std;

// class Solution
// {
// public:
//     int longestSubarray(vector<int> &arr, int k)
//     {
//         long long sum = 0;
//         int best = 0;
//         unordered_map<long long, int> prefix_sum;
//         for (int i = 0; i < arr.size(); i++)
//         {
//             sum += arr[i];

//             if (sum == k)
//                 best = i + 1;

//             auto it = prefix_sum.find(sum - k);

//             if (it != prefix_sum.end())
//             {
//                 int length = i - it->second;
//                 best = best > length ? best : length;
//             }

//             if (prefix_sum.find(sum) == prefix_sum.end())
//                 prefix_sum[sum] = i;
//         }
//         return best;
//     }
// };