// �������� �������� ����� ��� �ᒺ���.
#include <iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

class samp {
	int i, j;
public:
	void set_ij(int a, int b) { i = a; j = b; }
	int get_product() { return i*j; }
};

int main()
{
	system("chcp 1251 >nul");
	samp *p;

	p = new samp; // �������� ����� �����

	p->set_ij( 4, 5);

	cout << "ϳ������:" << p->get_product() << "\n";

    delete p;
	getch();
	return 0;
}
