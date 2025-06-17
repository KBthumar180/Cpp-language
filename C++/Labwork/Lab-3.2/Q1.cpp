#include<iostream>
using namespace std;

class hotel{
	public:
		int grid,hey,hsq,hrq;
		float hrt;
		string hname,htype,hloc;
		
		void setDetails(int id,string name,string type,float rating,string location,int establish,int staff,int room){
			grid=id;
			hname=name;
			htype=type;
			hrt=rating;
			hloc=location;
			hey=establish;
			hsq=staff;
			hrq=room;
		}
		void getDetails(){
			cout<<"Hotel ID:- "<<grid<<endl;
			cout<<"Hotel Name:- "<<hname<<endl;
			cout<<"Hotel Type:- "<<htype<<endl;
			cout<<"Hotel Rating (out of 5):- "<<hrt<<endl;
			cout<<"Hotel Establish Year:- "<<hey<<endl;
			cout<<"Hotel Staff Quantity:- "<<hsq<<endl;
			cout<<"Hotel Room Quantity:- "<<hrq<<endl;
		}
};

main(){
	hotel h;
	h.setDetails(111,"avadh","Restaurent",4.7,"surat",2012,40,20);
	h.getDetails();
}
