//week13-1.cpp 聖誕到數寫程式advent of Code 2025 第1題第1題
//moodle 點擊 adventofcode.com 網址 可以看到黑底白字得題目
//在LeetCode的 My Playground 我的遊戲可以寫程式
//LeetCode 幫你把#include 全部加好了你不用寫#include
//右下角stdin可貼上你的程式Imput
//在Adventofcode.com登入你的GitHub帳號便可看到專屬謎題
//貼到右下角stdin後再執行看你的答案是多少(每個人不一樣)
int main() 
{
    char c;//字母 要應方向L左轉 R右轉
    int d;//數字 要轉動幾格
    int now =50;//一開始的密碼鎖 指向50
    int ans =0;//轉動時有幾次停在0的地方
    while(cin >> c >>d)//一直讀資料 讀字母 讀數字
    {
        //if(c=='L') cout << "往左轉" << d <<"格\n";
        //if(c=='R') cout << "往右轉" << d <<"格\n";
        if(c=='L') now = now-d;//減掉
        if(c=='R') now= now+d;//加上
        
        now = (now%100 + 100)%100;//太大的太小的都限制在0~99間
            //cout << "現在的刻度是:" << now <<"\n";
        if(now==0) ans++;//轉動時 停在0的地方(我們的通關密碼)
    }
    cout << "答案是:" << ans;
}