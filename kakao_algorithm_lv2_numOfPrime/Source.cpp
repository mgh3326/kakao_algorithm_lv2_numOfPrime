#include<iostream>
using namespace std;
bool arry[10001];//�޸� ����̾��� �̰� ���� ���� �� ȿ���� �ö󰥰� �����ϴ�.
bool is_prime(const int num)
{
	for (auto i = 1; i < num / 2; i++)
	{
		if (num % (i + 1) == 0)
		{
			return true;
		}
	}
	return false;

}
int numOfPrime(const int n)
{
	auto answer = 0;
	for (auto i = 1; i < n; i++)
	{
		//cout <<i+1<<" "<< is_prime(i+1) << endl;
		if (is_prime(i + 1) == 0)
		{
			answer++;
		}

	}
	return answer;
}

int main()
{
	const auto test_case = 10;
	const auto test_answer = numOfPrime(test_case);

	cout << test_answer;
}
