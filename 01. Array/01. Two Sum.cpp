
class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
    int n=nums.size(),i,j=n-1;
    vector<pair<int,int>> temp;
    vector<int> ans;
    for(int i=0;i<n;i++)
        temp.push_back(make_pair(nums[i],i));
    i=0;
    sort(temp.begin(),temp.end());
    while(1)
    {
        if(temp[i].first+temp[j].first==target)
        {
        ans.push_back(temp[i].second);
        ans.push_back(temp[j].second);
        break;
        }
        else if(temp[i].first+temp[j].first>target)
            j--;
        else
            i++;
        }
    return ans;
    }
};