#include <iostream>
using namespace std;

void PlusOne(int &ref){ //��ȯ void���̰� return �����൵ ��
	ref = ref + 1;
}

void ChangeBuho(int &ref) {
	ref = ref * (-1);
}

int main(void) {
	int num;

	cout << "���� �Է�: ";
	cin >> num;

	PlusOne(num); //ȣ�������ϱ� �˾Ƽ� �ٲ�
	cout << num << endl;

	ChangeBuho(num);
	cout << num << endl;

	return 0;
}