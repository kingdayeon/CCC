#include<iostream> 

int main(void) {

	int sum = 0;
	int name[100];

	for (int i = 0; i < 5; i++) {
		std::cout << i+1 << "��° ���� �Է�: ";
		std::cin >> name[i];
		sum = sum + name[i];
	}

	std::cout << "�հ�: " << sum << std::endl;

	return 0;
}