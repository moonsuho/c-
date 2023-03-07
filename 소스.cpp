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
//서로 다른 두개의 벡터에 친구들의 이름과 mbti를 순서에 맞게 입력하게 한 후 (단, 나의 mbti를 첫번째에 입력한다) 나의 mbti와 비교하여 맞으면 이름이 저장된 벡터에서 동일한 위치에 저장된 이름을 불러와 출력하도록 구현하였다.
