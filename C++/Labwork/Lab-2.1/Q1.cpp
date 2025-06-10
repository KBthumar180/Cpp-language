#include<iostream>
using namespace std;

class details{
	public:
		void id(){
			int id;
			cout<<"Enter your employee ID:-";
			cin>>id;
		}
		void name(){
			string name;
			cout<<"Enter your name:- ";
			cin>>name;
		}
		void age(){
			int age;
			cout<<"Enter your age:- ";
			cin>>age;
		}
		void role(){
			string role;
			cout<<"Enter your role in your company:- ";
			cin>>role;
		}
		void salary(){
			int sal;
			cout<<"Enter your salary:- ";
			cin>>sal;
		}
		void city(){
		string city;
			cout<<"Enter your city:- ";
			cin>>city;
		}
		void exp(){
		int exp;
		cout<<"Enter the years of experinece you have:- ";
		cin>>exp;
    	}
    	void cn(){
    		string cn;
    		cout<<"Enter your company name:- ";
    		cin>>cn;
		}		
};

main(){
	details d;
	d.id();
	d.name();
	d.age();
	d.role();
	d.salary();
	d.city();
	d.exp();
	d.cn();
}
