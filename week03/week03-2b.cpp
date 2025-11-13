//week03-2b.cpp二合一 (不要真的乘nums[i]只乘+1-,1,0)
//LeetCode 學習計畫第八題 1822. Sign of the Product of an Array
// 把陣列乘起來 看是正數 負數 還是0

class Solution {
public:
    int arraySign(vector<int>& nums) 
    {
        int ans =1;//因為0乘任何數 都會變成0 只有乘1 乘甚麼 變甚麼
        for (int i=0;i<nums.size(); i++)//看有幾個數 迴圈跑幾次
        {
            if (nums[i]>0 )ans*= +1;
            if (nums[i]<0 )ans*= -1;
            if (nums[i]==0 )ans*= 0;
           
        }//數字越乘越大 1000個數字 乘到一半就爆炸了
        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;
    }
};