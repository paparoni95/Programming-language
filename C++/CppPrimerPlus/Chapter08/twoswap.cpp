// twoswap.cpp -- Ư��ȭ�� ���ø��� �����Ѵ�
#include <iostream>
template <typename T>
void Swap(T& a, T& b);

struct job
{
	char name[40];
	double salary;
	int floor;
};

// ������ Ư��ȭ
template<> void Swap<job>(job& j1, job& j2);
void Show(job& j);

int main()
{
	using namespace std;
	cout.precision(2);
	cin.setf(ios::fixed, ios::floatfield);
	int i = 10, j = 20;
	cout << "i, j = " << i << ", " << j << ".\n";
	cout << "�����Ϸ��� ������ int�� ��ȯ�⸦ ����ϸ�\n";
	Swap(i, j); // void Swap(int&,int&)�� ������
	cout << "���� i, j = " << i << ", " << j << ".\n";

	job sue = { "Susan Yaffee", 73000.60, 7 };
	job sidney = { "Sidney Taffee", 78060.72, 9 };
	cout << "job ��ȯ ��:\n";
	Show(sue);
	Show(sidney);
	Swap(sue, sidney); // void Swap(job&,job&)�� ����Ѵ�
	cout << "job ��ȯ ��:\n";
	Show(sue);
	Show(sidney);
	return 0;
}

template<typename T>
void Swap(T& a, T& b) // �Ϲ� ����
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

// job ����ü�� salary�� floor ����� ��ȯ�Ѵ�
template<> void Swap<job>(job& j1, job& j2) // Ư��ȭ ����
{
	double t1;
	int t2;
	t1 = j1.salary;
	j1.salary = j2.salary;
	j2.salary = t1;
	t2 = j1.floor;
	j1.floor = j2.floor;
	j2.floor = t2;
}

void Show(job& j)
{
	using namespace std;
	cout << j.name << ": (" << j.floor << "���� ����) "
		<< "$" << j.salary << endl;
}