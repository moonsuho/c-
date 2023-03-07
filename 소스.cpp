#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	vector <string> sv;
	vector <string> nm;
	string name;
	string mbti;
	int count = 0;
	cout << "이름을 43개 입력하라" << endl;          // 이름 43개 저장
	for (int i = 0; i < 43; i++)
	{
		cout << i + 1 << ">>";
		getline(cin, name);
		nm.push_back(name);
	}

	cout << "각각의 mbti 43개 입력하라" << endl;
	for (int i = 0; i < 43; i++)
	{
		cout << i + 1 << ">>";
		getline(cin, mbti);
		sv.push_back(mbti);
	}

	cout << "나와 MBTI가 동일한 친구들: " ;

	mbti = sv.at(0);          // 벡터의 첫번째 이름 name에 저장
	for (int i = 0; i < sv.size(); i++)          
	{
		if (mbti == sv[i])
			cout << nm[i] << " ";
	}
}
	