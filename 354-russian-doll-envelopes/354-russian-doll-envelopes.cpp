class Solution {
public:
    bool static cmp(vector<int>&a,vector<int>&b){
        if(a[0]!=b[0]){
            return a[0]<b[0];
        }
        return a[1]>b[1];
    }
    int maxEnvelopes(vector<vector<int>>& arr) {
        sort(arr.begin(),arr.end(),cmp);
        int n=arr.size();
        vector<int> collector;
	for(auto& pair: arr)
	{
		auto iter = lower_bound(collector.begin(), collector.end(), pair[1]);
		if(iter == collector.end()) collector.push_back(pair[1]);
		else if(*iter > pair[1]) *iter = pair[1];
	}
	return collector.size();
    }
};