// https : // www.geeksforgeeks.org/problems/winner-of-an-election-where-votes-are-represented-as-candidate-names-1587115621/1

// #include <unordered_map>
// #include <vector>
// #include <string>
// using namespace std;

// class Solution
// {
// public:
//     // Function to return the name of candidate that received maximum votes.
//     vector<string> winner(string arr[], int n)
//     {
//         unordered_map<string, int> freq;

//         // Count frequency
//         for (int i = 0; i < n; i++)
//             freq[arr[i]]++;

//         string winnerName = "";
//         int maxVotes = 0;

//         for (auto &p : freq)
//         {
//             if (p.second > maxVotes)
//             {
//                 maxVotes = p.second;
//                 winnerName = p.first;
//             }
//             else if (p.second == maxVotes && p.first < winnerName)
//             {
//                 winnerName = p.first;
//             }
//         }

//         return {winnerName, to_string(maxVotes)};
//     }
// };