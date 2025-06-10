#include <iostream>
using namespace std;

main(){
    int ts;
    cout<<"Enter total seconds:- ";
    cin>>ts;

    int hours=ts/3600;
    int minutes=(ts%3600)/60;
    int seconds=ts%60;

    cout<<"Time in HH.MM.SS format:- ";

    
    if (hours<10)cout<<'0';
    cout<<hours<<'.';

 
    if (minutes < 10)cout<<'0';
    cout<<minutes<<'.';


    if (seconds < 10)cout<< '0';
    cout<<seconds<<endl;


}

