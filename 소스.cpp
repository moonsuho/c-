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
	cout << "�̸��� 43�� �Է��϶�" << endl;          // �̸� 43�� ����
	for (int i = 0; i < 43; i++)
	{
		cout << i + 1 << ">>";
		getline(cin, name);
		nm.push_back(name);
	}

	cout << "������ mbti 43�� �Է��϶�" << endl;
	for (int i = 0; i < 43; i++)
	{
		cout << i + 1 << ">>";
		getline(cin, mbti);
		sv.push_back(mbti);
	}

	cout << "���� MBTI�� ������ ģ����: " ;

	mbti = sv.at(0);          // ������ ù��° �̸� name�� ����
	for (int i = 0; i < sv.size(); i++)          
	{
		if (mbti == sv[i])
			cout << nm[i] << " ";
	}
}
	