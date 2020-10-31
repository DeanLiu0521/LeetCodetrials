class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> track;//each element
        vector<vector<int>> res;//result
        backtrack(nums, track, res);
        return res;
    }

private:
    void backtrack(vector<int>& nums, vector<int> &cur, vector<vector<int>>& res) {
        if (track.size() == nums.size()) { //End condition:track has all elements from nums 
            res.push_back(track);//Add track to res
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (find(cur.begin(), cur.end(), nums[i]) != cur.end()) {//if current element is used 
                continue;
            }
            track.push_back(nums[i]);//Make decision
            backtrack(nums, track, res);//Next layer
            track.pop_back();//Cancel decision
        }

    }
};

