#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Book {
private:
	char* title;
	char* isbn;
	int price;
public:
	Book(const char* title, const char* isbn, int value)
		:price(value)
	{
		this->title = new char[strlen(title) + 1]; //�ȿ��ִ� ���� ����Ŵ=new char
		this->isbn = new char[strlen(isbn) + 1];
		strcpy(this->title, title);
		strcpy(this->isbn, isbn);
	}
	
	void ShowBookInfo() {
		cout << "����: " << title << endl;
		cout << "ISBN: " << isbn << endl;
		cout << "����: " << price << endl;
	}

	~Book() {
		delete[]title;
		delete[]isbn;
	}
};
//Ebook is a book
//Book�� ����

class Ebook : public Book {
private:
	char* DRMKey;
public:
	Ebook(const char*title, const char*isbn, int value, const char*key)
		:Book(title, isbn, value) {
		DRMKey = new char[strlen(key) + 1];
		strcpy(DRMKey, key);
	}

	void ShowEBookInfo() {
		ShowBookInfo();
		cout << "����Ű: " << DRMKey << endl;
	}

	~Ebook() {
		delete[]DRMKey;
	}
};

int main(void) {
	Book book("���� C++", "555-12345-890-0", 20000);
	book.ShowBookInfo();
	cout << endl;

	Ebook ebook("���� C++ ebook", "555-12345-890-1", 10000, "fdx9w0i8kkdfs");
	ebook.ShowEBookInfo();

	return 0;
}