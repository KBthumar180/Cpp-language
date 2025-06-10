#include<iostream>
using namespace std;

class details{
	public:
		void id(){
			int id;
			cout<<"Enter your employee ID:-";
			cin>>id;
		}
		void cn(){
    		string cn;
    		cout<<"Enter your company name:- ";
    		cin>>cn;
		}		

		void model(){
			string ml;
			cout<<"Enter the model:- ";
			cin>>ml;
		}

		void colour(){
		string colour;
			cout<<"Enter the colour:- ";
			cin>>colour;
		}
		void year(){
		int yr;
		cout<<"Enter the release year:- ";
		cin>>yr;
    	}

};

main(){
	details d;
	d.id();
	d.cn();
	d.model();
	d.colour();
	d.year();
}
