#include <iostream>
#include <vector>
#include <math.h>

using namespace std;
using std::vector;

class School {
public:
	string name;
public:
	School(){}
	School(string n) {
		this->name = n;
	}
	
};
class Class {
public:
	int ss;
	string name;


	
public:
	Class() {}
	Class(string n, int s) {
		this->name = n;
		this->ss = s;
		
	}
	void display() {
		cout << "Name: " << name << endl;
		cout << "Number: " << ss << endl;
	}
	static void  getMaxStudent(vector<Class> c) {
		int count = 0;
		double max = c[0].ss;
		vector <Class> v;
		// chạy tìm điểm cao nhất
		for (int i = 0; i < c.size(); i++) {
			if (count < c[i].ss) {
				max = c[i].ss;
			}
		}
		// thêm vào danh sách 
		for (int i = 0; i < c.size(); i++) {
			if (c[i].ss == max) {
				v.push_back(c[i]);
			}
		}
		// in ra sinh viên cao nhất
		for (int i = 0; i < v.size(); i++) {
			v[i].display();
		}


	}

	static void  getMinStudent(vector<Class> c) {
		
		double max = c[0].ss;
		vector <Class> v;
		// chạy tìm điểm cao nhất
		for (int i = 0; i < c.size(); i++) {
			if (max > c[i].ss) {
				max = c[i].ss;
			}
		}
		// thêm vào danh sách 
		for (int i = 0; i < c.size(); i++) {
			if (c[i].ss == max) {
				v.push_back(c[i]);
			}
		}
		// in ra sinh viên cao nhất
		for (int i = 0; i < v.size(); i++) {
			v[i].display();
		}


	}
	
	

};
class Student {
public:
	string name;
	float avgs;
	
public:
	Student() {}
	
	Student(string n, float a) {
		this->name = n;
		this->avgs = a;
	}
	void display() {
		cout << "Name: " << name << endl;
		cout << "Average Score: " << avgs << endl;
	}

	static void  theHighestAverageScore(vector<Student> listStudent) {
		int count = 0;
		double max = listStudent[0].avgs;
		vector <Student> v;
		// chạy tìm điểm cao nhất
		for (int i = 0; i < listStudent.size(); i++) {
			if (count < listStudent[i].avgs) {
				max = listStudent[i].avgs;
			}
		}
		// thêm vào danh sách 
		for (int i = 0; i < listStudent.size(); i++) {
			if (listStudent[i].avgs == max) {
				v.push_back(listStudent[i]);
			}
		}
		// in ra sinh viên cao nhất
		for (int i = 0; i < v.size(); i++) {
			v[i].display();
		}


	}
	static bool good() {
		return true;
	}
	static void goodSummary(vector<Student>student) {
		int count = 0;
		for (int i = 0; i < student.size(); i++) {
			if (student[i].avgs >= 8) {
				count++;

			}
		}
		if (count > 5)
			good();
		cout << "Summary" << count << endl;

	}

	static void getClassGood(vector<Class> c) {
		for (int i = 0; i < c.size(); i++) {
			if (good() == true) {
				c[i].display();
			}
		}
	}


};
int main() {
	vector <Student> A;
	vector<Student> B;
	vector <Class> c;
	Class c1("A", 10);
	Class c2("B", 11);
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
	Student s11 = Student("D1", 3);
	Student s12 = Student("E1", 4);
	Student s13 = Student("Q1", 7);
	Student s14 = Student("W1", 6);
	Student s15 = Student("R1", 5);
	Student s16 = Student("T1", 8);
	Student s17 = Student("Y1", 9);
	Student s18 = Student("U1", 2);
	Student s19 = Student("I1", 9);
	Student s20 = Student("O1", 3);
	Student s21 = Student("G1", 5);

	c.push_back(c1);
	c.push_back(c2);

	

	A.push_back(s);
	A.push_back(s1);
	A.push_back(s2);

	B.push_back(s3);
	B.push_back(s5);
	B.push_back(s19);
	B.push_back(s17);
	B.push_back(s16);
	B.push_back(s8);


	Class::getMaxStudent(c);
	Class::getMinStudent(c);

	Student::theHighestAverageScore(A);
	/*Class::goodSummary(c);*/


	return 0;
}