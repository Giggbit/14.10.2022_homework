#pragma once
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class Directory {
	string name_company;
	string name;
	string number;
	string adress;
	string proffesion;

public:
	Directory() = default;

	Directory(string nc, string n, string nb, string a, string p) {
		name_company = nc;
		name = n;
		number = nb;
		adress = a;
		proffesion = p;
	}

	void SearchNameCompany() {
		Directory obj;
		ifstream take("Directory.txt");
		take >> obj.name_company >> obj.name >> obj.number >> obj.adress >> obj.proffesion;

		string answer;
		cout << "Enter name of company: ";
		cin >> answer;

		if (answer == name_company) {
			cout << "\nName of company: " << name_company << endl;
			cout << "Name: " << name << endl;
			cout << "Number: " << number << endl;
			cout << "Adress: " << adress << endl;
			cout << "Proffesion: " << proffesion << endl << endl;
		}
		else {
			cout << "Didn't find this: " << answer << endl;
		}
	}

	void SearchName() {
		Directory obj;
		ifstream take("Directory.txt");
		take >> obj.name_company >> obj.name >> obj.number >> obj.adress >> obj.proffesion;

		string answer;
		cout << "Enter name: ";
		cin >> answer;

		if (answer == name) {
			cout << "\nName of company: " << name_company << endl;
			cout << "Name: " << name << endl;
			cout << "Number: " << number << endl;
			cout << "Adress: " << adress << endl;
			cout << "Proffesion: " << proffesion << endl << endl;
		}
		else {
			cout << "Didn't find this: " << answer << endl;
		}
	}

	void SearchNumber() {
		Directory obj;
		ifstream take("Directory.txt");
		take >> obj.name_company >> obj.name >> obj.number >> obj.adress >> obj.proffesion;

		string answer;
		cout << "Enter number: ";
		cin >> answer;

		if (answer == number) {
			cout << "\nName of company: " << name_company << endl;
			cout << "Name: " << name << endl;
			cout << "Number: " << number << endl;
			cout << "Adress: " << adress << endl;
			cout << "Proffesion: " << proffesion << endl << endl;
		}
		else {
			cout << "Didn't find this: " << answer << endl;
		}
	}

	void SearchProffesion() {
		Directory obj;
		ifstream take("Directory.txt");
		take >> obj.name_company >> obj.name >> obj.number >> obj.adress >> obj.proffesion;

		string answer;
		cout << "Enter proffesion: ";
		cin >> answer;

		if (answer == proffesion) {
			cout << "\nName of company: " << name_company << endl;
			cout << "Name: " << name << endl;
			cout << "Number: " << number << endl;
			cout << "Adress: " << adress << endl;
			cout << "Proffesion: " << proffesion << endl << endl;
		}
		else {
			cout << "Didn't find this: " << answer << endl;
		}
	}

	void Input() {
		cout << "Enter name of company: ";
		getline(cin, name_company);
		cout << "Enter name: ";
		getline(cin, name);
		cout << "Enter number: ";
		getline(cin, number);
		cout << "Enter adress: ";
		getline(cin, adress);
		cout << "Enter proffesion: ";
		getline(cin, proffesion);
		cout << endl;
	}

	void Save() {
		ofstream save("Directory.txt", ios::app);
		save << name_company << "\n"
			<< name << "\n"
			<< number << "\n"
			<< adress << "\n"
			<< proffesion << "\n";
		save.close();
	}

	void Print() {
		Directory d;
		ifstream add("Directory.txt");
		do {
			/*add >> d.name_company >> d.name >> d.number >> d.adress >> d.proffesion;
			cout << "Name of company: " << d.name_company << endl
				<< "Name: " << d.name << endl
				<< "Number: " << d.number << endl
				<< "Adress: " << d.adress << endl
				<< "Proffesion: " << d.proffesion << endl << endl;*/

			getline(add, d.name_company);
			cout << "Name of company: " << d.name_company << "\n";
			getline(add, d.name);
			cout << "Name: " << d.name << "\n";
			getline(add, d.number);
			cout << "Number: " << d.number << "\n";
			getline(add, d.adress);
			cout << "Adress: " << d.adress << "\n";
			getline(add, d.proffesion);
			cout << "Proffesion: " << d.proffesion << "\n\n";

		} while (!add.eof());

		add.close();
	}

};

