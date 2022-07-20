//ĸ��ȭ

#include <iostream>
using namespace std;

class SinivelCap { //�๰ óġ�� ĸ��
public:
	void Take() const { 
		cout << "�๰�� ��~ ���ϴ�." << endl;
	}
};

class SneezeCap { //��ä�� óġ�� ĸ��
public:
	void Take() const {
		cout << "��ä�Ⱑ �ܽ��ϴ�." << endl;
	}
};

class SnuffleCap { //�ڸ��� óġ�� ĸ��
public:
	void Take() const {
		cout << "�ڰ� �� �ո��ϴ�." << endl;
	}
};

class CONTAC600 {
private:
	SinivelCap sin; //�๰
	SneezeCap sne; //��ä��
	SnuffleCap snu; //�ڸ���

public:
	void Take() const {
		sin.Take();
		sne.Take();
		snu.Take(); //�� Ŭ���� �ȿ� ����ִ� �Լ� �ҷ� -> �μ��
	}
};

class ColdPatient {
public:
	void TakeCONTAC600(const CONTAC600& cap) const {
		cap.Take();
	}
};

int main(void) {
	CONTAC600 cap;
	ColdPatient sufferer;
	sufferer.TakeCONTAC600(cap);

	return 0;
}