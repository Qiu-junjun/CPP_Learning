#include<iostream>
using namespace std;
//c++�У�cout��ostream���һ��ʵ��
//ȫ��ֻ����һ��cout���������Ϊ���߳���ɳ������(�Ҹо������������)



class Person
{
friend ostream& operator<< (ostream& cout, Person& p);//��Ԫ����������˽������
public:
	Person(int a = 0, int b = 0) :m_A(a), m_B(b) {}
private:
	int m_A;
	int m_B;
	//�������ܹ����㣬����һ��ʹ��ȫ�ֺ�������������
	//void operator<<(ostream& cout);
	
};

ostream& operator<< (ostream& cout, Person& p)
{
	cout << "p.m_A:" << p.m_A << " p.m_B:" << p.m_B;
	return cout;//��ʽ���˼��
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