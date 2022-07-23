#include <iostream>
using namespace std;

class SoSimple {
private:
	int num;
public:
	SoSimple(int n) :num(n)
	{}
	
	SoSimple(const SoSimple& copy) :num(copy.num) {
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}

	void ShowData() {
		cout << "num: " << num<<endl;
	}
};

void SimpleFuncObj(SoSimple ob) { //ob ��ü�� �ʱ�ȭ��
	ob.ShowData();
}

int main(void) {
	SoSimple obj(7);
	cout << "�Լ�ȣ�� ��" << endl;
	SimpleFuncObj(obj); //SimpleFuncObj�Լ��� �ҷ��� ���ε� ���� SoSimple�� ����Ʈ������ �μ��(��, ��������� ȣ���)
	cout << "�Լ�ȣ�� ��" << endl;

	return 0;
}