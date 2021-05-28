#include<iostream>
using namespace std;

class Person
{
public:
	int m_A;
	int m_B;
	Person():m_A(0),m_B(0){}
	Person& operator++ ()//前置++
	{
		m_A++;
		m_B++;
		return *this;
	}
	Person operator++(int)//占位参数，后置++
	{
		Person p = *this;
		m_A++;
		m_B++;
		return p;
	}
};

ostream& operator<<(ostream& cout, Person p)
{
	cout << "p.m_A:" << p.m_A << " p.m_B:" << p.m_B;
	return cout;
}

void test()
{
	Person p1;
	p1.m_A = 10;
	p1.m_B = 20;
	cout << ++p1 << endl;
	cout << p1 << endl;
	cout << p1++ << endl;
	cout << p1 << endl;
}
int main()
{
	test();
	return 0;
}