#include <iostream>

namespace Hybrid {
	void HybFunc(void) {;
		std::cout << "So simple function!" << std::endl;
		std::cout << "In namespace Hybrid!" << std::endl;
	}
}

int main(void) {
	using Hybrid::HybFunc; //�̸����� Hybrid�� ��õ� HybFunc�� ȣ���� ������ ;,�� ����ó�� ȣ���ϰٴ�
	HybFunc();

	return 0;
}