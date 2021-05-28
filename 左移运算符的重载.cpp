#include<iostream>
using namespace std;
//c++中，cout是ostream类的一个实例
//全局只能有一个cout，否则会因为多线程造成程序崩溃(我感觉可以这样理解)



class Person
{
friend ostream& operator<< (ostream& cout, Person& p);//友元函数来访问私有类型
public:
	Person(int a = 0, int b = 0) :m_A(a), m_B(b) {}
private:
	int m_A;
	int m_B;
	//这样不能够满足，所以一般使用全局函数来进行重载
	//void operator<<(ostream& cout);
	
};

ostream& operator<< (ostream& cout, Person& p)
{
	cout << "p.m_A:" << p.m_A << " p.m_B:" << p.m_B;
	return cout;//链式编程思想
}

void test()
{
	Person p1(10,10);
	cout << p1 << endl;
}

int main()
{
	test();
	system("pause");
	return 0;
}