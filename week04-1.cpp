//week04-1.cpp 模擬題 照著題目謝程式
//LeetCode 3100. Water Bottles II

class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) 
    {
        int ans = numBottles;//一開始就喝了那麼多瓶
        while(numBottles >= numExchange)//如果瓶子數大於兌換量 就兌換
        {
            numBottles = numBottles- numExchange +1;//兌換一瓶飲料
            ans ++;//多喝一瓶了
            numExchange ++;//兌換的條件多一瓶
        }
        return ans;
    }
};