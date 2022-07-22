//������ �ùķ��̼�~ ��ü �� ��ȭ��!! ������ �߰�����!!

#include <iostream>
using namespace std;

class FruitSeller {
private:
	int APPLE_PRICE; //����� �� �빮�ڷ�
	int numOfApples;
	int myMoney;

public:
	FruitSeller(int price, int num, int money) { //�� �κ��� �ٲ�
		APPLE_PRICE = price; //��� ���� �ϳ��� 1000��
		numOfApples = num; //����� 20��
		myMoney = money; //���� �ƹ��͵� �� �Ⱦ����ϱ� 0�� ��������
	}

	int SaleApples(int money) {
		int num = money / APPLE_PRICE;
		numOfApples -= num;
		myMoney += money;
		return num;
	}

	void ShowSalesResult() {
		cout << "���� ���: " << numOfApples << endl;
		cout << "�Ǹ� ����: " << myMoney << endl << endl;
	}
};

class FruitBuyer {
	int myMoney; //private
	int numOfApples; //private

public:
	FruitBuyer(int money) { //�� �κ��� �ٲ�!!
		myMoney = money; //�����ڴ� 5000�� �����־�
		numOfApples = 0;
	}

	void BuyApples(FruitSeller& seller, int money) { //������ 2000�� ����
		numOfApples += seller.SaleApples(money);
		myMoney -= money; //2000�� �پ�
	}

	void ShowBuyResult() {
		cout << "���� �ܾ�: " << myMoney << endl;
		cout << "��� ����: " << numOfApples << endl << endl;
	}
};

int main(void) {
	FruitSeller seller(1000, 20, 0);
	FruitBuyer buyer(5000); //�� �� ���� �ٲ�. ������ FruitSeller seller���� �� �ؿ� seller.Initmem�̷� ��
	buyer.BuyApples(seller, 2000);

	cout << "���� �Ǹ����� ��Ȳ" << endl;
	seller.ShowSalesResult();

	cout << "���� �������� ��Ȳ" << endl;
	buyer.ShowBuyResult();

	return 0;
}