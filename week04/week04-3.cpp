//week04-3.cpp 模擬題 照著題目謝程式
//LeetCode 學習計畫第7題 66. Plus One
//123
//   4最右邊開始 加一
//4321
//   2最右邊開始加一
//949
//  0有盡位怎麼辦 不可以return 繼續做
// 5最右邊加一 完成
class Solution {
public:
    vector<int> plusOne(vector<int>& digits)
     {
        int N = digits.size();//上週教過陣列大小
        for(int i=N-1;i>=0;i--)//倒過來的迴圈
        {
            if(digits[i]==9)//要進位
            {
                digits[i]=0;//設成0 繼續做 不結束
            }
            else
            {//不用進位的話 直接++就結束了
        
            digits[i]++;//簡單加一啦
            return digits;//把全部得陣列 當答案 return
            }
        }
        
        digits.insert(digits.begin(),1);//最左邊要加一
        return digits;//結束了
    }

};