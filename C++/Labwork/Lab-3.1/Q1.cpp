#include<iostream>
using namespace std;

class student{
	public:
		int grid,sage;
		string sname,scourse,scollage,scity,semail;
		void setDetails(int id,string name,int age,string course,string collage,string city,string email){
			grid=id;
			sage=age;
			sname=name;
			scourse=course;
			scollage=collage;
			scity=city;
			semail=email;
		}
		void getDetails(){
			cout<<"ID:- "<<grid<<"Name:- "<<sname<<"age:- "<<sage<<"Course:- "<<scourse<<"Collage:- "
			<<scollage<<"City:- "<<scity<<"Email:- "<<semail<<endl;
			
		}

};
main(){
	student s;
	s.setDetails(111,"jay",17,"btech","nirma","surat","jay.com");
	s.getDetails();
}
