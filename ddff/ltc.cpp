#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define Faster  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fr(i,a,n) for(int i=a;i<n;i++)
#define T int t; cin>>t; while(t--)
#define all(v) v.begin(), v.end()
#define setpre(f, n) fixed << setprecision(n) << f
#define MOD 1000000007
using namespace std;
class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(all(nums));
        vector<int> v;int i;int n=nums.size();
        fr(i,0,n);
        {
            nums[i]+=nums[i-1];
        }
        int k=0;
        fr(i,0,queries.size())
        {
           while(nums[k]<=queries[i])
            k++;
            v.push_back(k);
        }
        return v;
        
    }
};
int main()
{

return 0;
}