#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
using namespace std;

namespace COMP_POS {
    enum { CLERK, SENIOR, ASSIST, MANAGER };

    void ShowPositionInfo(int pos) {
        switch (pos) {
        case CLERK:
            cout << "���" << endl;
            break;
        case SENIOR:
            cout << "����" << endl;
            break;
        case ASSIST:
            cout << "�븮" << endl;
            break;
        case MANAGER:
            cout << "����" << endl;
        }
    }
}

class NameCard {
private:
    char* name;
    char* company;
    char* phone;
    int position;
public:
    NameCard(const char* _name, const char* _company, const char* _phone, int pos)
        :position(pos)
    {
        this->name = new char[strlen(_name) + 1];
        this->company = new char[strlen(_company) + 1];
        this->phone = new char[strlen(_phone) + 1];
        strcpy(this->name, _name);
        strcpy(this->company, _company);
        strcpy(this->phone, _phone);
    }

    NameCard(const NameCard& ref) :position(ref.position) {
        name = new char[strlen(ref.name) + 1];
        company = new char[strlen(ref.company) + 1];
        phone = new char[strlen(ref.phone) + 1];
        strcpy(name, ref.name);
        strcpy(company, ref.company);
        strcpy(phone, ref.phone);
    }

    void ShowNameCardInfo() {
        cout << "�̸�: " << name << endl;
        cout << "ȸ��: " << company << endl;
        cout << "��ȭ��ȣ: " << phone << endl;
        cout << "����: "; COMP_POS::ShowPositionInfo(position);
        cout << endl;
    }

    ~NameCard() {
        delete[]name;
        delete[]company;
        delete[]phone;
    }
};

int main(void) {
    NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
    NameCard copy1 = manClerk;
    NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
    NameCard copy2 = manSENIOR;
    copy1.ShowNameCardInfo();
    copy2.ShowNameCardInfo();
}