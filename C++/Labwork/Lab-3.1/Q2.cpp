#include<iostream>
using namespace std;

class customer{
	public:
		int grid,cage,cmo,csv;
		string cname,ccity,cbn;
		void setDetails(int id,string name,int age,string city,int mo,int sv,string bn){
			grid=id;
			cage=age;
			cname=name;
			ccity=city;
			cmo=mo;
			csv=sv;
			cbn=bn;
		}
		void getDetails(){
			cout<<"ID:- "<<grid<<"Name:- "<<cname<<"age:- "<<cage<<"City:- "<<ccity<<"Mobile no:- "
			<<cmo<<"Sim card validity(in yr):- "<<csv<<"Telecome Brand name:- "<<cbn<<endl;
			
		}

};
main(){
	customer c;
	c.setDetails(111,"jay",21,"Surat",991122344,3,"jio");
	c.getDetails();
}
