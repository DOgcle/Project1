#include <iostream>
#include <vector>
#include <math.h>
#include <list>   

using namespace std;
using std::vector;

class Student {
private:
	string name;
	float avgs;

public:
	Student() {}

	Student(string name, float avgs) {
		this->name = name;
		this->avgs = avgs;
	}
	string getName() {
		return name;
	}
	float getAvgs() {
		return avgs;
	}
	void display() {
		cout << "Name: " << name << endl;
		cout << "Average Score: " << avgs << endl;
	}

	


};


class Class {
private:
	int ss;
	int numberGood;
	string name;
	vector <Student> listStudent;
	bool good;

public:
	Class() {}
	Class(string n, int s) {
		this->name = n;
		this->ss = s;
		this->good = false;
		this->numberGood = 0;
		this->listStudent = vector<Student>();
	}
	string getName() {
		return name;
	}
	int getSs() {
		return ss;
	}
	vector<Student> getListStudent() {
		return listStudent;
	}
	bool getGood() {
		return good;
	}
	int getNumberGood() {
		return numberGood;
	}

	void display() {
		cout << "Name: " << name << endl;
		cout << "Number: " << ss << endl;
	}

	void add(Student s) {
		listStudent.push_back(s);
	}

	

	 void  getTheHighestAverageScore() {
		double max = listStudent[0].getAvgs();
		vector <Student> v;
		// chạy tìm điểm cao nhất
		for (int i = 0; i < listStudent.size(); i++) {
			if (max < listStudent[i].getAvgs()) {
				max = listStudent[i].getAvgs();
			}
		}
		// thêm vào danh sách 
		for (int i = 0; i < listStudent.size(); i++) {
			if (listStudent[i].getAvgs() == max) {
				v.push_back(listStudent[i]);
			}
		}
		// in ra sinh viên cao nhất
		for (int i = 0; i < v.size(); i++) {
			cout << "The Highest Average Score " << endl;
			v[i].display();
		}


	}
	
	 void getGoodSummary() {
		
		for (int i = 0; i < listStudent.size(); i++) {
			if (listStudent[i].getAvgs() >= 8) {
				numberGood++;
			}
		}
	}
	 
	 void getSummary() {
		 getGoodSummary();
		 if (numberGood > 5)
			 good = true;
	 }

};


class School {
private:
	string name;
	vector <Class> listClass;
public:
	School() {}
	School(string n) {
		this->name = n;
		this->listClass = vector<Class>();
	}

	void add(Class c) {
		listClass.push_back(c);
	}

	void  getMaxStudent() {
		int count = 0;
		double max = listClass[0].getSs();
		vector <Class> v;
		// chạy tìm lớp đông nhất
		for (int i = 0; i < listClass.size(); i++) {
			if (count < listClass[i].getSs()) {
				max = listClass[i].getSs();
			}
		}
		// thêm vào danh sách 
		for (int i = 0; i < listClass.size(); i++) {
			if (listClass[i].getSs() == max) {
				v.push_back(listClass[i]);
			}
		}
		// in ra lớp đông nhất
		for (int i = 0; i < v.size(); i++) {
			cout << "The Most Crowded Class" << endl;
			v[i].display();
		}


	}

	void  getMinStudent() {

		double max = listClass[0].getSs();
		vector <Class> v;
		// chạy tìm điểm cao nhất
		for (int i = 0; i < listClass.size(); i++) {
			if (max > listClass[i].getSs()) {
				max = listClass[i].getSs();
			}
		}
		// thêm vào danh sách 
		for (int i = 0; i < listClass.size(); i++) {
			if (listClass[i].getSs() == max) {
				v.push_back(listClass[i]);
			}
		}
		// in ra sinh viên cao nhất
		for (int i = 0; i < v.size(); i++) {
			cout << " The class at least" << endl;
			v[i].display();
		}

	}

	void getMaxAvgs() {
		int max = listClass[0].getNumberGood();
		vector <Class> v;

		for (int i = 0; i < listClass.size(); i++) {
			listClass[i].getGoodSummary();
			if (max < listClass[i].getNumberGood()) {
				max = listClass[i].getNumberGood();
			}
		}

		for (int i = 0; i < listClass.size(); i++) {
			if (listClass[i].getSs() == max) {
				v.push_back(listClass[i]);
			}
		}
		// in ra sinh viên cao nhất
		for (int i = 0; i < v.size(); i++) {
			cout << " Best Class:" << endl;
			v[i].display();
		}

	}

	void getClassGood() {
		cout << "Class Good" << endl;
		for (int i = 0; i < listClass.size(); i++) {
			listClass[i].getSummary();
			if (listClass[i].getGood()== true) {
				listClass[i].display();
			}
		}
	}


};


int main() {
	School sch ("HCMUS");
	Class c1 ("A", 10);
	Class c2 ("B", 11);
	Student s = Student("Bob", 4.5);
	Student s1 = Student("Jack", 6.5);
	Student s2 = Student("Kenny", 8);
	Student s3 = Student("Ana", 9);
	Student s4 = Student("Waston", 2);
	Student s5 = Student("Bard", 9);
	Student s6 = Student("Emma", 3);
	Student s7 = Student("Sar", 5);
	Student s8 = Student("A1", 10);
	Student s9 = Student("B1", 2);
	Student s10 = Student("C1", 10);
	Student s11 = Student("D1", 9);
	Student s12 = Student("E1", 8);
	Student s13 = Student("Q1", 8.5);
	Student s14 = Student("W1", 10);
	Student s15 = Student("R1", 5);
	Student s16 = Student("T1", 8);
	Student s17 = Student("Y1", 9);
	Student s18 = Student("U1", 2);
	Student s19 = Student("I1", 9);
	Student s20 = Student("O1", 3);
	Student s21 = Student("G1", 5);

	c1.add(s);
	c1.add(s1);
	c1.add(s2);
	c1.add(s3);
	c1.add(s4);
	c1.add(s5);
	c1.add(s6);

	c2.add(s10);
	c2.add(s11);
	c2.add(s12);
	c2.add(s13);
	c2.add(s14);
	c2.add(s15);
	c2.add(s16);


	c1.getTheHighestAverageScore();

	sch.add(c1);
	sch.add(c2);
	sch.getMaxStudent();
	sch.getClassGood();
	sch.getMaxAvgs();
	sch.getMinStudent();

	return 0;
}