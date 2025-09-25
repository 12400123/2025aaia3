//week03-3a.cpp 二合一得第一種方法 把不是0的找出來
//LeetCode 學習計畫 283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] !=0)ans.push_back(nums[i]);
        }//上面把不是0的數 暫時放在ans裡 等一下再放回去
        //再用for迴圈放回去
        for(int i=0;i<nums.size();i++)
        {
            if (i<ans.size()) nums[i] =ans[i];//放回去
            else nums[i]=0;//其他放0
           
        }
    }
};