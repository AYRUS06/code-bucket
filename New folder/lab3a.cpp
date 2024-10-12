#include <unordered_map>
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    unordered_map<int, int> numMap; 
    int n;
    cout << "Enter number of inputs\n";
    cin >> n;
    cout << "Now enter the numbers\n";
    for(int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        numMap[input] += 1;
    }
    cout << endl;
    for(auto num : numMap)
    {
        cout << num.first << " appears " << num.second << " time(s)" << endl;
    }

    return 0;
}