#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>

using namespace std;

double division(double n, double m);

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	//try catch ����������
	/*try {
		cout << "������� ����� �� 1-10: ";
		cin >> n;
		if (n < 1)
			throw 0;
		if (n > 10)
			throw "��������� ����� ������ ���������� ���������\n";
		cout << "����� ������ � ��������\n";
	}
	catch (const int ex) {
		if(ex==0)
			cout<<"��������� ����� ������ ���������� ���������\n";
	}
	catch (const char ex[]) {
		cout << ex;
	}*/
	//bool correct = false;

	/*do {
		try {
			string nStr;
			cout << "������� �����: ";
			getline(cin, nStr);
			n = stoi(nStr);
			cout << "����� n = " << n << endl;
			correct = true;
		}
		catch (const exception& ex) {
			cout << "������: " << ex.what() << endl;
		}
	}while (!correct);*/
	/*try
	{
		cout << "������� �������: ";
		cin >> n;
		cout << "������� ��������: ";
		cin >> m;
		cin.ignore();
		cout << n << " / " << m << " = " << division(n, m) << endl;
		return 0;
	}
	catch (const invalid_argument& ex)
	{
		cout << "������: " << ex.what() << endl;
	}
}*/

//double division(double n, double m){
//	if (m == 0)
//		throw invalid_argument("division by zero");
//
//	return n/m;
//}
	string path = "file.txt";
	ifstream in;
	in.exceptions(ios::badbit || ios::eofbit || ios::failbit);
	try
	{
		cout << "������� �������� �����...\n";
		in.open(path);
		cout << "���� ������ ��� ������:\n";
		string str;
		getline(in, str);
		cout << str << endl;
		in.close();
	}
	catch (const ifstream::failure &ex)
	{
		cout << "ERROR: " << ex.what() << endl;
		cout << "Error code: " << ex.code() << endl;
	}
	
	return 0;
}