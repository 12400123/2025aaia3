//week07-4.cpp 學習計畫 Simulation 模擬 第4題
//11041. Robot Bounded In Circle
class Solution {
public:
    bool isRobotBounded(string instructions)
    {
        instructions = instructions +instructions+instructions+instructions;//走四次
        int x=0,y=0;//d:方向direction,x座標,y座標 要在原點(0,0)
        int d=0;//d:方向direction 0:北1:東2:南3:西
        //右轉d = (d+1) % 4 取4的餘數
        //左轉d = (d-1+4) % 4 =(d+3) %4 竟然可以倒過來太神奇了
        int dx[4]={0,1,0,-1};//前進一格時 會走x+=dx[d]及 y +=dy[d]
        int dy[4]={1,0,-1,0};//這兩行事地圖2D模擬的精華決定前進多少
        for(char c:instructions)
        {
            if(c=='G')
            {
                x += dx[d];
                y += dy[d];
            }
            else if(c=='R')//右轉
            {
                d = (d+1) %4;
            }
            else if(c=='L')//左轉
            {
                d = (d+3) %4;
            }
        }//離開迴圈時...竟然會一直走,有時候會走不回來,有時候會回來
        if(x==0 &y==0)return true;
        else return false;
    }
};