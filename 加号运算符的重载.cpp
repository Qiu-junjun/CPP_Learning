#include<iostream>
using namespace std;
//全局函数的加号运算符重载

class Person
{
public:
	int m_A;
	int m_B;
	Person():m_A(0),m_B(0){}
	//成员函数的加号运算符重载
	/*Person operator+(const Person& p)
	{
		Person p1;
		p1.m_A = m_A + p.m_A;
		p1.m_B = m_B + p.m_B;
		return p1;
	}*/
};
Person operator+(const Person& p1, const Person& p2)
{
	Person p;
	p.m_A = p1.m_A + p2.m_A;
	p.m_B = p1.m_B + p2.m_B;
	return p;
}
void test01()
{
	Person p1, p2;
	p1.m_A = 10;
	p1.m_B = 10;
	p2.m_A = 20;
	p2.m_B = 20;
	Person p3 = p1 + p2;
 //本质是：p3 = p1.operator+(p2);
 //或者是：p3 = opretor+(p1,p2);
	cout << "p3.m_A:" << p3.m_A << endl << "p3.m_B:" << p3.m_B << endl;
}
int main()
{
	test01();
	return 0;
}