//week05-1.cpp
//LeetConde 學習計畫 58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        stringstream ss(s);//把字串變成之前交的 cin iostream
        string word;//字串的 word
        //ss >>word;//很像之前交的 cin>>word
        //cout<<"讀到了"<<word<<"\n";//測試用
        while(ss >> word)
        {
            //裡面什麼都不做
        }
        return word.length();//隨便
    }
};