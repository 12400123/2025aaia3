///week05-3b.cpp Part1:Input Part2:Output
///Part3: stringstream Part4:reverse�ϹL��
///CPE �ĤG�D UVA 483 �˹L��
#include <iostream>
#include <sstream>///Part3:stringstream ���ɮ׫�stream
#include <algorithm>///Part4: reverse���t��k
using namespace std;
int main()
{
    string line;///�@��r���r�� Part1:Input
    while(getline(cin,line))///Ū���
    {
        stringstream ss(line);///Part3:stringstream �_stream
        string word;///�r��o��
        while(ss >> word)///Part3 :��ss�_�r
        {
            reverse (word.begin(),word.end());
            cout<<"Ū��F" << word <<endl;///Part3
        }

        cout << line << endl; ///Part2:Output
    }
}

