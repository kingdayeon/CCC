#include <iostream>
using namespace std;

class Car { //�⺻ ���� �ڵ���
private:
	int gasolineGuage;
public:
	Car(int gas):gasolineGuage(gas) //gas�� ��ǲ�޾Ƽ� ���ָ��������� �־���
	{ }
	int GetGasGuage() {
		return gasolineGuage;
	}
};

class HybridCar : public Car { //���̺긮�� �ڵ���
private:
	int electricGuage;
public:
	HybridCar(int gas, int elec)
		: Car(gas), electricGuage(elec)
	{ }
	
	int GetElecGuage() {
		return electricGuage;
	}
};

class HybridWaterCar : public HybridCar {
private:
	int  waterGuage;
public:
	HybridWaterCar(int gas, int elec, int water)
		: HybridCar(gas, elec), waterGuage(water)
	{ }

	void ShowCurrentGuage() {
		cout << "�ܿ� ���ָ�: " << GetGasGuage() << endl;
		cout << "�ܿ� ���ⷮ: " << GetElecGuage() << endl;
		cout << "�ܿ� ���ͷ�: " << waterGuage << endl;
	}
};

int main(void) {
	HybridWaterCar wCar(79, 65, 35);
	wCar.ShowCurrentGuage();

	return 0;
}