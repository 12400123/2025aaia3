//week06-3.cpp
//Leetode 學習計畫 Simulation 模擬 第一題682. Baseball Game

class Solution {
public:
    int calPoints(vector<string>& operations) 
    {
        vector<int>a;//陣列a
        for(string op:operations)//C++進階迴圈
        {
            //cout << op <<"\n";//試試看 會印出甚麼
            if(op[0]=='+')//把末兩位數相加 在塞回去
            {
                int temp = a.back();//先記下最後一項
                a.pop_back();//暫時吐掉她
                int temp2 = a.back();//先記下最後2項
                a.push_back(temp);//把剛剛最後一項塞回去
                a.push_back(temp+temp2);//兩樹相加再塞回去
            }
            else if(op[0]=='D')//複製最後一位再double程2倍 在塞回去
            {
                a.push_back(a.back()*2);
            }
            else if (op[0]=='C')//吐掉最後一位
            {
                a.pop_back();
            }
            else//把stoi(op)整數 塞回去
            {
                a.push_back(stoi(op));
            }
        }
    //最後 用for迴圈把陣列a的值 全部加起來
    int ans=0;
    for(int now:a)//C++進階迴圈 也可以用for(int i=0;i<a.size();i++){int now=a[i]}
    {
        ans+=now;
    }
        return ans;//先隨便return 0等一下再改
    }
};