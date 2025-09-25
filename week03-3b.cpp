//week03-3b.cpp 二合一得第一種方法 把不是0的找出來
//LeetCode 學習計畫 283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int k=0;//直接移動 nums[k] =nums[i] 在k++
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] !=0)nums[k++]=nums[i];
        }//上面把不是0的數 暫時放在ans裡 等一下再放回去
        //再用for迴圈放回去
        for(int i=k;i<nums.size();i++)
        {
            nums[i]=0;//其他放0
           
        }
    }
};