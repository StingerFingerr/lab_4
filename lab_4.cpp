//Лабараторная работа 4 "Наследование" студента группы 924401 Мартиновича Алексея
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class Human {
	string Name;
	string Date;
public:
	string Get_info() {
		return "\nPerson's name: " + Name + "\nDate of Birth: " + Date;
	}
	void Set_info() {
		cout << "Input Person's name: ";
		cin >> Name;
		cout << "Input date of Birth: ";
		cin >> Date;
	}
};

class university_lecturer : public Human {
	string Post, academic_degree, specialty, list;
public:
	string Get_info() {
		Human::Get_info();
		return "\nPost: " + Post + "\nAcademic_degree: " + academic_degree + "\nSpecialty: " + specialty + "\nList: " + list;
	}
	void Set_info() {
		Human::Set_info();
		cout << "Inputn Post: ";
		cin >> Post;
		cout << "Input Academic_degree: ";
		cin >> academic_degree;
		cout << "Input Specialty: ";
		cin >> specialty;
		cout << "Input List: ";
		cin >> list;
	}
};

class Commission_representative :Human {
	string Name_of_the_commission, Year, Number, Aautobiography;
public:
	string Get_info() {
		Human::Get_info();
		return "\nName_of_the_commission: " + Name_of_the_commission + "\nYear: " + Year + "\nNumber: " + Number + "\nAautobiography: " + Aautobiography;
	}
	void Set_info() {
		Human::Set_info();
		cout << "Input nName_of_the_commission: ";
		cin >> Name_of_the_commission;
		cout << "nInput nYear: ";
		cin >> Year;
		cout << "nInput Number: ";
		cin >> Number;
		cout << "nInput Aautobiography: ";
		cin >> Aautobiography;
	}
};

class lecturer_member_commissiom :Human {
	string list;
public:
	string Get_info() {
		Human::Get_info();
		return "\nlist: " + list;
	}
	void Set_info() {
		Human::Set_info();
		cout << "Input list: ";
		cin >> list;
	}
};

int main() {
	ofstream fout;
	cout << "Enter file name: ";
	string name;
	cin >> name;
	fout.open(name, ofstream::out);
	Human h1;
	cout << "********Input data********\n";
	h1.Set_info();
	cout << "\n********Output data********";
	h1.Get_info();
	fout.write(h1.Get_info().c_str(), ofstream::out);
	cout << "\n\n..........................\n\n";
	university_lecturer h2;
	cout << "********Input data********\n";
	h2.Set_info();
	cout << "\n********Output data********";
	h2.Get_info();
	fout.write(h2.Get_info().c_str(), ofstream::out);
	cout << "\n\n..........................\n\n";
	Commission_representative h3;
	cout << "********Input data********\n";
	h3.Set_info();
	cout << "\n********Output data********";
	h3.Get_info();
	fout.write(h3.Get_info().c_str(), ofstream::out);
	cout << "\n\n..........................\n\n";
	lecturer_member_commissiom h4;
	cout << "********Input data********\n";
	h4.Set_info();
	cout << "\n********Output data********";
	h4.Get_info();
	fout.write(h4.Get_info().c_str(), ofstream::out);
	cout << "\n\n..........................\n\n";
	return 0;
}