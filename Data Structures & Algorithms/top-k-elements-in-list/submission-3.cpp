class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto &t:mp){
            cout<<t.first<<" "<<t.second;
        }
        vector<pair<int,int>>freq;
        for(auto &t:mp){
            freq.push_back({t.second,t.first});
        }
        sort(freq.begin(),freq.end(),greater<pair<int,int>>());
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(freq[i].second);
        }
        return ans;
    }
};
