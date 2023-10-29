/* below has a video link*/
/* https://www.youtube.com/watch?v=SxhsT2pas60&t=64s&ab_channel=HappyLearningSchool%26College*/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    vector<vector<int>>v;

    int row,col;
    cin >> row >> col;
    for(int i=0;i<row;i++)
    {
         vector<int>tmp;// outer loop theke aknae asle ata empty thake tarpor vale add hy
        for(int j=0;j<col;j++)
        {
           int val;
           cin >> val;
           tmp.push_back(val);
        }
        v.push_back(tmp);
    }
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

}
int main()
{
  solve();
  return 0;
}
