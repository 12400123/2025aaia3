//week03-4.cpp
//LeetCode 挑戰賺金幣 120. Triangle
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle)//使用動態規劃 慢慢更新陣列做好了
     {
        //triangle [i] [j] 第i行的第j個數
        int N =triangle.size();//總共有幾層
        //從下往上查 最下面的第N-1層 沒問題 就是本身的最小值 所以N-2往上更新
        for(int i=N-2;i>=0;i--)//倒過來的迴圈 從N-2往上
        {
            for(int j=0;j<=i;j++)//從左到右 第一層有0..1個數都要更新
            {
            triangle[i][j] += min(triangle[i+1][j],triangle[i+1][j+1]);
            //每個人要看他下面兩個選擇 找最小的那一個
            }
        }
        return  triangle[0][0];
    }
};