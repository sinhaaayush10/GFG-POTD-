class Solution {
public:
    vector<string> winner(string arr[], int n) {
        unordered_map<string, int> voteCount;

        // Counting votes for each candidate
        for (int i = 0; i < n; i++) {
            voteCount[arr[i]]++;
        }

        // Finding the candidate with maximum votes
        int maxVotes = 0;
        string winner;
        for (const auto& entry : voteCount) {
            if (entry.second > maxVotes || (entry.second == maxVotes && entry.first < winner)) {
                winner = entry.first;
                maxVotes = entry.second;
            }
        }

        // Returning the result
        return {winner, to_string(maxVotes)};
    }
};
