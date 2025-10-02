//week04-2.cpp 模擬題 照著題目謝程式
//LeetCode 學習計畫第十題896. Monotonic Array
//陣列只有增加或減少 不可以又增又減
class Solution {
public:
    bool isMonotonic(vector<int>& nums)
    {
        int up =0 ,down =0;//up有增加 down有減少
        for(int i=1; i<nums.size(); i++)//倆倆比較
        {
            if(nums [i-1] < nums [i] ) up = 1 ;//增加
            if(nums [i-1] > nums [i] ) down = 1 ;//減少

        }
        if(up==1 && down==1  ) return false ;//不可以又增加又減少
        return true;//沒有失敗就成功

    }
};