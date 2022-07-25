#include <iostream>
using namespace std;

class SoSimple {
public:
	static int simObjCnt;
public:
	SoSimple() {
		simObjCnt++;
	}
};
int SoSimple::simObjCnt = 0;

int main(void) {
	cout << SoSimple::simObjCnt << "��° SoSimple ��ü" << endl; //���� ��ü ������ �ȵƴµ� Ŭ������ �̸��� �̿��ؼ� simObjCnt��
	//�����ϰ� �ִ�. static ��� ������ ��ü ���� �������� ������ ����!!
	SoSimple sim1;
	SoSimple sim2;
	//2�� ��ü ��������ϱ� +2

	cout << SoSimple::simObjCnt << "��° SoSimple ��ü" << endl;
	cout << sim1.simObjCnt << "��° SoSimple ��ü" << endl; //��ü sim1, sim2�� �̿��ؼ��� static ��������� ������ ����
	cout << sim2.simObjCnt << "��° SoSimple ��ü" << endl; //�׷��� ��� ������ �����ϴ� �� ���� ���ظ� �� �� �����Ƿ�
	//�̷��� ������ ������ ��õ���� �ʴ´�
}