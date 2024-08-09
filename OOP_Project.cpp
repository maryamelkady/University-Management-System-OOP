#include<iostream>
#include<fstream>
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include<string>
using namespace std;


class person {                                            //common class to inhiret from
protected:
	string first_name, last_name, address, gender, email, college, id, password, phone_number, year;
public:

	void set_first_name(string fn) {                     //--------- setter and getter for every function -----------
		first_name = fn;

	}
	string get_first_name() {
		return first_name;
	}
	void set_last_name(string ln) {
		last_name = ln;
	}
	string get_last_name() {
		return last_name;
	}
	void set_address(string add) {
		address = add;
	}
	string get_address() {
		return address;
	}
	void set_gender(string gen) {
		gender = gen;
	}
	string get_gender() {
		return gender;
	}
	void set_email(string em) {
		email = em;
	}
	string get_email() {
		return email;
	}
	void set_college(string coll) {
		college = coll;
	}
	string get_college() {
		return college;
	}
	void set_password(int pass) {
		password = pass;
	}
	void set_id(int i) {
		id = i;
	}
	string get_id() {
		return id;
	}
	void set_phone_number(int pn) {
		phone_number = pn;
	}
	string  get_phone_number() {
		return phone_number;
	}
	void set_year_of_birth(int y) {
		year = y;
	}
	string  get_year_of_birth() {
		return year;
	}
	void getfile() {
		system("cls");                                         // TO READ ALL THE DATA FROM THE FILE print in console
		fstream fin;
		cout << "\n Enter Your ID : ";
		cin.ignore();
		char idd[5];
		cin.getline(idd, 5);
		fin.open("student.txt", ios::in);
		char id[5], phone_number[11], year[5], college[10], email[20], gender[10], address[30], last_name[10], first_name[10];
		int count = 0;
		if (fin.is_open()) {
			string myfile;
			while (!fin.eof()) {
				fin.getline(id, 5, '|');
				fin.getline(first_name, 10, '|');
				fin.getline(last_name, 10, '|');
				fin.getline(address, 20, '|');
				fin.getline(gender, 10, '|');
				fin.getline(email, 20, '|');
				fin.getline(college, 10, '|');
				fin.getline(phone_number, 20, '|');
				fin.getline(year, 5, '|');
				if (myfile.find(id))
				{
					if (id[4] == idd[4]) {
						system("cls");
						cout << "\n\n\t\t\t ID :- " << id << endl;
						cout << "\t\t\t FIRST NAME :- " << first_name;
						cout << "\t\t\t LAST NAME :- " << last_name << endl;
						cout << "\t\t\t ADDRESS :- " << address << endl;
						cout << "\t\t\t GENDER :- " << gender << endl;
						cout << "\t\t\t EMAIL :- " << email << endl;
						cout << " \t\t\t COLLEGE :- " << college << endl;
						cout << "\t\t\t PHONE NUMBER :- " << phone_number << endl;
						cout << "\t\t\t YEAR OF BIRTH :- " << year;
						count++;
					}
					else { cout << "\n Student ID not found ......Error " << endl; }
				}
				break;
			}
			fin.close();
		}
	}

};



class student : public person {

protected:
	float gpa;
	int q;
	int scores[6];
public:
	void set_gpa(int gp[6]) {
		scores[6] = gp[6];
	}
	float get_gpa() {                                 // CALCULATE GPA FOR THE STUDENT
		float credit[6];
		float point[6];

		cout << endl;
		for (int i = 0; i < q; i++)
		{
			cout << "Enter the credit for the subject " << i + 1 << ": ";
			cin >> credit[i];
			cout << endl;
			cout << "Enter the point of the subject " << i + 1 << ": ";
			cin >> point[i];
			cout << "-----------------------------------\n\n" << endl;
		}

		float sum = 0;
		float tot;
		for (int j = 0; j < q; j++)
		{
			tot = credit[j] * point[j];
			sum = sum + tot;
		}

		float totCr = 0;
		for (int k = 0; k < q; k++)
		{
			totCr = totCr + credit[k];
		}

		return gpa;
	}
};

//};
/*class doctor : public person {
	protected :
	string subject;

	void set_subject(string sub) {
		subject = sub;
	}
	string get_subject() {
		return subject;
	}
};
class TA : public doctor{};
*/
int main()
{
	system("cls");
	cout << "\t\t\t M University Management System \t\t\t " << endl;
	cout << "\n\n \t\t\t 1- LOGIN " << endl;
	cout << "\t\t\t 2- REGISTERATION  " << endl;
	cout << "\t\t\t 3- EXIT " << endl;
	int x;
	cin >> x;
	switch (x)
	{
	case 1:
	{
		cout << "\t\t\t 1- STUDENT " << endl;
		cout << "\t\t\t 2- DOCTOR " << endl;
		cout << "\t\t\t 3- T.A" << endl;
		int y;
		cin >> y;
		switch (y) {
		case 1:
		{
			student s;
			s.getfile();
			break;
		}
		}
		break;
	}
	case 2:
	{
		cout << "\t\t\t 1- NEW STUDENT " << endl;
		break;
	}
	case 3:
	{
		break;
	}
	default:
	{
		cout << "\t\t\t PLEASE ENTER THE RIGHT NUMBER " << endl;
		break;
	}
	}
}