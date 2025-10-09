//week05-4.cpp
//709. To Lower Case

class Solution {
public:
    string toLowerCase(string s) 
    {
        for(int i=0;i<s.length();i++)
        {
            s[i] = tolower(s[i]);
        }//每個字母都變成小寫,完整版要用#include <stdio.h>
        //或是用#include <cctype> 兩個是同一個檔案
         return s;//答案送出
    }
   
};