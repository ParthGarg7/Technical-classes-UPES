// https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=leaders-in-an-array

// class Solution
// {
//     // Function to find the leaders in the array.
// public:
//     vector<int> leaders(vector<int> &arr)
//     {
//         vector<int> leaders;
//         int mx = 0;

//         for (int i = arr.size() - 1; i >= 0; i--)
//         {
//             if (mx <= arr[i])
//             {
//                 leaders.push_back(arr[i]);
//                 mx = arr[i];
//             }
//         }

//         reverse(leaders.begin(), leaders.end());
//         return leaders;
//     }
// };