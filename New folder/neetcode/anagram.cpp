#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
        return false;
        vector<int> v(26,0);
        transform(s.begin(),s.end(),s.begin(),::tolower);
        transform(t.begin(),t.end(),t.begin(),::tolower);
        cout<<s<<endl;
        cout<<t<<endl;
        for(int i=0;i<s.length();i++)
        {
            v[int(s[i]-97)]++;
            v[int(t[i]-97)]--;
        }
        if(accumulate(v.begin(),v.end(),0))
        return false;
        return true;
    }
int main()
{
    string s,t;
    cin>>s>>t;
    cout<<isAnagram(&s,&t)<<endl;
    return 0;
}