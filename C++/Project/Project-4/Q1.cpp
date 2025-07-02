#include<iostream>
using namespace std;
class Bank{
	public:
		int accno,amount;
		string name;
		void setDetails(int accno,string name,int amount){
			this->accno = accno;
			this->name = name;
			this->amount = amount;
		}
		
		void getDetails(){
			cout<<"Accno :- "<<this->accno<<endl;
			cout<<"Acc holder name :- "<<this->name<<endl;
			cout<<"Amount :- "<<this->amount<<endl;
		}
		
		void withdraw(){
			
		}
		
		void deposite(){
			
		}
		
};
main(){
	int ch,amount,accno,acno;
	string name;
	int cnt = 0;
	Bank b[50];
	
	while(1){
		cout<<"press 1 Enter bank account :- "<<endl;
		cout<<"press 2 Enter bank details :- "<<endl;
		cout<<"press 3 withdraw amount :- "<<endl;
		cout<<"press 4 deposite  amount :- "<<endl;
		cout<<"press 0 Exit :- "<<endl;
		cout<<"Enter your choice :- ";
		cin>>ch;
	
		if(ch == 0){
			cout<<"----thank you----"<<endl;
			break;
		}
	
		switch(ch){
			case 1:
				cout<<"Enter accno :- ";
				cin>>accno;
				cout<<"Enter account holder name :- ";
				cin>>name;
				cout<<"Enter amount :- ";
				cin>>amount;
				b[cnt++].setDetails(accno,name,amount);
				
			break;
			
			case 2:
				cout<<"Enter your accno :- ";
				cin>>acno;
				for(int i=0;i<cnt;i++){
					if(accno == acno){
						b[i].getDetails();
					}else{
						cout<<"Invalid accno"<<endl;
					}
				}
			break;
			
			case 3:
				int mny;
				cout<<"Enter The amount of money you want to Withdraw:-";
				cin>>mny;
				
				if(mny<500||mny>10000){
					cout<<"Your range should be in between 500 to 10k"<<endl;
				}else{
					cout<<"Your amount of RS."<<mny<<" is withdraw successfully."<<endl;
				}
			
			break;
			
			case 4:
				int dpst;
				cout<<"Enter The amount of money you want to Deposite in your account:-";
				cin>>dpst;
				
				if(dpst<500||dpst>10000){
					cout<<"Your range should be in between 500 to 10k"<<endl;
				}else{
					cout<<"Your amount of RS."<<dpst<<" is deposited successfully."<<endl;
				}
			
			break;
			
			default:
				cout<<"---Enter valid choice----"<<endl;
		}
	}
	
	
}
