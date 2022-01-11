// You are given an integer array score of size n, where score[i] is the score of the ith athlete in a competition. All the scores are guaranteed to be unique.
// The athletes are placed based on their scores, where the 1st place athlete has the highest score, the 2nd place athlete has the 2nd highest score, and so on. The placement of each athlete determines their rank:
// The 1st place athlete's rank is "Gold Medal".
// The 2nd place athlete's rank is "Silver Medal".
// The 3rd place athlete's rank is "Bronze Medal".
// For the 4th place to the nth place athlete, their rank is their placement number (i.e., the xth place athlete's rank is "x").
// Return an array answer of size n where answer[i] is the rank of the ith athlete.
// Example 1:
// Input: score = [5,4,3,2,1]
// Output: ["Gold Medal","Silver Medal","Bronze Medal","4","5"]
// Explanation: The placements are [1st, 2nd, 3rd, 4th, 5th].
// Example 2:
// Input: score = [10,3,8,9,4]
// Output: ["Gold Medal","5","Bronze Medal","Silver Medal","4"]
// Explanation: The placements are [1st, 5th, 3rd, 2nd, 4th].
#include <iostream>
#include <unordered_map>
#include <iterator>
#include <vector>
#include<queue>
#include <sstream>
#include <string>
using namespace std;
vector<string> findRelativeRanks(vector<int> &score)
{
    priority_queue<int> large;
    unordered_map<int,int> maps;
    for (int i = 0; i < score.size(); i++)
    {
        large.push(score[i]);
        maps[score[i]]=i;
    }
    vector<string> x(score.size());

    for (int i = 1; i <=score.size(); i++)
    {
        int val=large.top();
        large.pop();
        int frequency;
        unordered_map<int, int>::iterator it = maps.begin();
        while (it != maps.end())
        {
            if(it->first==val){
                frequency = it->second;
            }
            it++;
        }
        if(i==1){
    x[frequency]="Gold Medal";
        }else if(i==2){
            x[frequency]="Silver Medal";
        }else if (i==3){
            x[frequency]="Bronze Medal";
        }else {
            int num = i;
            ostringstream str1;
            str1 << i;
            string geek = str1.str();
            x[frequency]=geek;
        }
    }
    return x;
    //optimise solution
    // vector<int> copy(score.begin(), score.end());
    // sort(copy.begin(), copy.end(), greater<int>());
    // vector<string> ans(score.size());
    // vector<int> track;
    // for (int i = 0; i < score.size(); i++)
    // {
    //     int val = -1;
    //     for (int j = 0; j < score.size(); j++)
    //     {
    //         if (score[i] == copy[j])
    //             track.push_back(j);
    //     }
    // }
    // for (int i = 0; i < score.size(); i++)
    // {
    //     if (track[i] == 0)
    //         ans[i] = "Gold Medal";
    //     else if (track[i] == 1)
    //         ans[i] = "Silver Medal";
    //     else if (track[i] == 2)
    //         ans[i] = "Bronze Medal";
    //     else
    //         ans[i] = to_string(track[i] + 1);
    // }
    // return ans;
}
using namespace std;
int main()
{
    int m;
    vector<int> x;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        x.push_back(a);
    }
    vector<string> y=findRelativeRanks(x);
    for (int i = 0; i < y.size(); i++)
    {
        cout<<y[i]<<" ";
    }
    
}