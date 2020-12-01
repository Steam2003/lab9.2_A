#include <iostream>
#include <iomanip>
#include <string>
#include <Windows.h> 

using namespace std;
	do {
		cout << "������� ��:" << endl;
		cout << " [1] - �������� ����� � ���������" << endl;
		cout << " [2] - ���� ����� �� �����" << endl;
		cout << " [3] - ���� ���������� ���������� ���� �������� �������� �� �������� � ������ " << char(34) << "4" << char(34) << " ��� " << char(34) << "5" << char(34) << endl;
		cout << " [4] - ������� ������������� �����" << endl;
		cout << " [5] - �������� ������������� �� ���� �����" << endl;
		cout << " [6] - ������� ����� ��������" << endl;
		cout << " [0] - ����� �� ���������� ������ ��������" << endl;
		cout << "������ ����� ����: "; cin >> menuItem;
		switch (menuItem)
			cin.get(); 
			cin.sync(); 
			cout << " �������: ";
			getline(cin, prizv);

			cout << " �������� ��� (� �������� �� ���� ����� ���� ����): ";
			cin >> avg;

			cout << " ��� � ����������: "; cin >> math_mark;
			cout << endl;
			if ((found = BinSearch(s, N, prizv, avg, math_mark)) != -1)
				cout << "�������� �������� � ������� " << found + 1 << endl;
			else
				cout << "�������� �������� �� ��������" << endl;
			break;
			cout << "[�������] �� ����� ��������� �������� ! "
				"��� ������ ����� - ����� ��������� ������ ����" << endl;
		cout << endl;
		cin.get();
		cin.sync();
		cout << "  �������: "; getline(cin, s[i].prizv);
		cout << "  ����: "; cin >> s[i].kurs;
		do
		{
			cout << "  ������������� (0 - ��, 1 - ��, 2 - ��, 3 - ��, 4 - ��): "; cin >> specialty;
	
		} while (specialty != 0 && specialty != 1 && specialty != 2 && specialty != 3 && specialty != 4);
			s[i].specialty = (Specialty)specialty;
			cout << "  ������ � ������: "; cin >> s[i].physics;
			cout << "  ������ � ����������: "; cin >> s[i].math;
			cout << "  ������ � �����������: "; cin >> s[i].informatics;
{
	cout << "================================================================================"
		<< endl;
	cout << "| �  | �������     | ���� | ������������� | Գ���� | ���������� | ����������� |"
		<< endl;
	cout << "--------------------------------------------------------------------------------" << endl;
	for (int i = 0; i < N; i++)
	{
		cout << "| " << setw(2) << right << i + 1 << " "
			<< "| " << setw(13) << left << s[i].prizv
			<< "| " << setw(3) << right << s[i].kurs << "  "
			<< "| " << setw(8) << right << strSpecialty[s[i].specialty] << "      "
			<< "| " << setw(4) << right << s[i].physics << "   "
			<< "| " << setw(6) << right << s[i].math << "      "
			<< "| " << setw(6) << right << s[i].informatics << "     |" << endl;
	}
	cout << "================================================================================" << endl;
}
	double si1, si2;
	
	for (int i0 = 0; i0 < N - 1; i0++) 
		for (int i1 = 0; i1 < N - i0 - 1; i1++)
		{
			 si1 = (s[i1].physics + s[i1].math + s[i1].informatics) / 3.;
			 si2 = (s[i1 + 1].physics + s[i1 + 1].math + s[i1 + 1].informatics) / 3.;
			if (
				(si1 > si2)
				||	(si1 == si2 && s[i1].math > s[i1 + 1].math)
				||	(si1 == si2 && s[i1].math == s[i1 + 1].math && s[i1].prizv > s[i1 + 1].prizv)
				)
			{
				tmp = s[i1];
				s[i1] = s[i1 + 1];
				s[i1 + 1] = tmp;
			}
{ 
	int* I = new int[N]; 
	for (int i = 0; i < N; i++)
		I[i] = i; 
	int i, j, value; 
	for (i = 1; i < N; i++)
	{
		value = I[i];
		j = i - 1;
		double sIj = (s[I[j]].physics + s[I[j]].math + s[I[j]].informatics) / 3.;
		double svalue = (s[value].physics + s[value].math + s[value].informatics) / 3.;
		for (j;
			j >= 0 && (
				(sIj > svalue)
				||
				(sIj == svalue && s[I[j]].math > s[value].math)
				||
				(sIj == svalue && s[I[j]].math > s[value].math && s[I[j]].prizv > s[value].prizv)
				);
			j--)
		{
			I[j + 1] = I[j];
		}
		I[j + 1] = value;
	}
	return I;
}
{ 
	cout << "================================================================================"
		<< endl;
	cout << "| �  | �������     | ���� | ������������� | Գ���� | ���������� | ����������� |"
		<< endl;
	cout << "--------------------------------------------------------------------------------" << endl;
	for (int i = 0; i < N; i++)
	{
		cout << "| " << setw(2) << right << i + 1 << " "
			<< "| " << setw(13) << left << s[I[i]].prizv
			<< "| " << setw(3) << right << s[I[i]].kurs << "  "
			<< "| " << setw(8) << right << strSpecialty[s[I[i]].specialty] << "      "
			<< "| " << setw(4) << right << s[I[i]].physics << "   "
			<< "| " << setw(6) << right << s[I[i]].math << "      "
			<< "| " << setw(6) << right << s[I[i]].informatics << "     |" << endl;
	}
	cout << "================================================================================"
		<< endl;
	cout << endl;
}
{ 
	int L = 0, R = N - 1, m;
	double average;
	do {
		m = (L + R) / 2;
		average = round((s[m].physics + s[m].math + s[m].informatics)/3.0*100)/100.0;
		if (s[m].prizv == prizv && average == avg && s[m].math == math)
			return m;
			if (
				(average < avg)
				||(average == avg && s[m].math < math)
				||(average == avg && s[m].math == math && s[m].prizv < prizv)
				)
		{
			L = m + 1;
		}
		else
		{
			R = m - 1;
		}
	} while (L <= R);
	return -1;
}