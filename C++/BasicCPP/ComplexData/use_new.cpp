#include <iostream>
using namespace std;
int main()
{
	int nights = 1001;
	int* pt = new int; // int���� ������ �޸𸮸� ����
	*pt = 1001;

	cout << "nights : " << nights << ": �޸� ��ġ = " << &nights << endl;
	cout << "int �� �� = " << *pt << ": �޸� ��ġ = " << pt << endl;

	double* pd = new double;
	// new double : double�� �����͸� ������ ���ο� �޸𸮰� �ʿ��ϴٰ� �˸���.
	// ������ �޸𸮸� ã�� �ʿ��� ��ŭ ������ �����ϰ�, �� �ּҸ� �����Ѵ�.
	*pd = 10000001.0;

	cout << "double ��";
	cout << " �� = " << *pd << ": �޸� ��ġ = " << pd << endl;
	cout << "������ pd�� �޸� ��ġ: " << &pd << endl << endl;
	cout << "pt�� ũ�� = " << sizeof pt << endl; // ���Ǳ��� ����
	cout << "*pt�� ũ�� = " << sizeof(*pt) << endl;
	cout << "pd�� ũ�� = " << sizeof pd << endl; // ���Ǳ��� ����
	cout << "*pd�� ũ�� = " << sizeof(*pd) << endl;

	// ���������� �ּҴ� ����� � ������ ��ü�� ���� �ּҸ� �˷� �ٻ�,
	// �� ��ü�� ���������̳� ����Ʈ ���� �˷����� �ʴ´�!!

	// �׷��� int���� �����ϴ� �������� ũ���
	// double���� �����ϴ� �������� ũ�Ⱑ ����.
	// �� �� �ܼ��� �ּ��� ���̱� �����̴�.
	return 0;
}

/* delete�� ����� �޸� ����!

- ����� �޸𸮸� �ٽ� �޸� Ǯ�� ȸ���ϴ� Ű���尡 delete �����ڴ�.
- �̷��� ������ �޸𸮴� ���α׷��� �ٸ� �κ��� �ٽ� ����� �� �ְ� �ȴ�.
- new ����� �Ŀ��� �ݵ�� ���߿� delete �� ����ؾ��Ѵ�.
- �׷��� �ʰ� �Ǹ� �޸� ����(�޸� ��)�� �߻��Ѵ�.
- �޸� ������ �Ը� �ʹ� Ŀ���� �޸𸮸� ���� �䱸�ϴ� ���α׷��� ������ �� �� �ִ�.
- �̹� ������ �޸� ������ �ٽ� �����Ϸ��� �õ��ϸ� ���� �� �ȴ�!

- new�� ������ �޸𸮿��� delete�� �������!
- ������ �ּҿ� ����ؾ� �Ѵٴ� ���̴�!
- �Ʒ��� ���� ��Ȳ�� OK
- �ٸ� ���� �޸� ������ �����ϴ� �� ���� �����͸� ����� ���� �Ǽ��� ����������,
- �����͸� �����ϴ� �Լ������� �� ��° �����͸� ����� �� �ִ�.
int * ps = new int;
int * pq = ps;
delete pq;



*/