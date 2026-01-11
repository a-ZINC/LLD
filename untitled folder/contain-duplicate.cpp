#include <set>
#include <vector>
#include <unordered_set>
#include <iostream>

using namespace std;

class Solution {
    public:
        bool contain_duplicate(vector<int>& nums) {
            unordered_set<int> s;
            for (int val : nums) {
                s.insert(val);
            }
            return s.size() != nums.size();
        }
};

int main() {
    vector<vector<int>> test = {
        {1,2,3,1},
        {1,2,3,4},
        {1,1,1,3,3,4,3,2,4,2}
    };
    Solution s;
    vector<bool> ans;
    for (auto& val : test) {
        bool a = s.contain_duplicate(val);
        ans.push_back(a);
        cout << "test: " << a << endl;
    }

}