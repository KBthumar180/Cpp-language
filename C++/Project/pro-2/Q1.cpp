#include<iostream>
using namespace std;

class Train{
	public:
		int tno;
		string tname,source,dest,time;
		void setDetails(int tno,string tname,string source,string dest,string time){
			this->tno = tno;
			this->tname = tname;
			this->source = source;
			this->dest = dest;
			this->time = time;
		}
		
		void showAllTrain(){
			cout<<"Train no :- "<<this->tno<<endl;
			cout<<"Train Name :- "<<this->tname<<endl;
			cout<<"Train Source :- "<<this->source<<endl;
			cout<<"Train Destination :- "<<this->dest<<endl;
			cout<<"Train Time :- "<<this->time<<endl;
		}
};

main(){
	Train t[50];
	int ch,tno;
	string tname,source,dest,time;
	int cnt=0,i;
	while(1){
		cout<<"Press 1 Add New Train Record"<<endl;
		cout<<"Press 2 Display All Train Record"<<endl;
		cout<<"Press 3 Search Train By Number"<<endl;
		cout<<"Press 4 Exit Menu"<<endl;
		cout<<"Enter Your Choise :- ";
		cin>>ch;
		
		if(ch == 4){
			cout<<"---------Thank you-----------";
			break;
		}
		
		switch(ch){
			case 1:
				cout<<"Enter Train Number :- ";
				cin>>tno;
				cout<<"Enter Train Name :- ";
				cin>>tname;
				cout<<"Enter Source :- ";
				cin>>source;
				cout<<"Enter Destination :- ";
				cin>>dest;
				cout<<"Enter Train Time :- ";
				cin>>time;
				t[cnt++].setDetails(tno,tname,source,dest,time);
				cout<<"----Train successfully add----------"<<endl;
			break;
			
			case 2:
				for(i=0;i<cnt;i++){
					t[i].showAllTrain();
				}
			break;
			
			case 3:
				int tn;
				cout<<"Enter train no. :-"<<endl;
				cin>>tn;
				
				for(i=0;i<cnt;i++){
					if(t[i].tno==tn){
						cout<<"Train Name :- "<<t[i].tname<<endl;
						cout<<"Train Source :- "<<t[i].source<<endl;
						cout<<"Train Destination :- "<<t[i].dest<<endl;
						cout<<"Train Time :- "<<t[i].time<<endl;
					}
				}
		}
	}
}
