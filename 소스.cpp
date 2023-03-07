/*데이터 필드는 초기 값을 갖지 않으므로 생성자에서 초기화 되어야한다(클래스 멤버로서 데이터 필드는 선언될 때 초기화 할 수 x) 
객체 이름= 배열 이름(객체이름은 상수라고 할 수 있음)
클래스 정의-클래스의 규약사항을 기술(모든 데이터 필드와 생성자 원형, 함수 원형을 목록으로 만드는 것)
클래스 구현-그 규약을 실현(생성자와 함수를 만드는 것)
다중 포함 방지: #define/#ifndef --> 포함감시


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
