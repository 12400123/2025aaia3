///week05-1.cpp
///���x stringstream
#include <iostream> ///cin,cout,getlineŪ�g���
#include <sstream> ///stringstream �ݭn�L
#include <string>///�ڭ̪��r�� string
using namespace std;///�p�߮e���ѰO
int main()
{
    cout<<"�п�J�@�q�^��,�̭��i���Ů�:";
    string s;///�r��s
    getline(cin,s);///�̦��r�J�@���,��Js
    cout<<"Ū��Fs�r��:"<<s<<endl;
    stringstream ss(s);///�N�r��s�ܦ�ss
    string word;///�r��word
    while(ss>>word)
    {
        cout<<"���@�Ӧr:"<<word<<endl;
    }
}
