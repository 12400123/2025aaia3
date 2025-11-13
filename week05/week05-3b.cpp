///week05-3b.cpp Part1:Input Part2:Output
///Part3: stringstream Part4:reverse反過來
///CPE 第二題 UVA 483 倒過來
#include <iostream>
#include <sstream>///Part3:stringstream 的檔案室stream
#include <algorithm>///Part4: reverse的演算法
using namespace std;
int main()
{
    string line;///一行字的字串 Part1:Input
    while(getline(cin,line))///讀近來
    {
        stringstream ss(line);///Part3:stringstream 斷stream
        string word;///字放這裡
        while(ss >> word)///Part3 :用ss斷字
        {
            reverse (word.begin(),word.end());
            cout<<"讀到了" << word <<endl;///Part3
        }

        cout << line << endl; ///Part2:Output
    }
}

