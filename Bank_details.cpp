#include <iostream>
using namespace std;

class Bank
{
	  public:
	  char name[11],account_type[10];
	  long balance,account_number;

	  void initialize()
    {
    cin>>name;
    cout<<"Enter Account Holders Name:"<<name<<endl;
    cin>>account_type;
    cout<<"Enter Account type:"<<account_type<<endl;
    cin>>account_number;
    cout<<"Enter account number:"<<account_number<<endl;
    cin>>balance;
    cout<<"Enter balance to deposit:"<<balance<<endl;
    };
     void deposit ()
     {
     	int bal;
     	cin>>bal;
       balance+=bal;
cout<<"Enter the amout to deposit:"<<bal<<endl;
cout<<"Amount deposited successfully"<<endl<<"Your New Balance:"<<balance<<endl;
     };
     void check()
     {
      int bal;
      cout<<"\nYour balance :"<<balance<<"\nEnter amount to withdraw:";
      cin>>bal;
      if(bal<=balance)
      {
        balance-=bal;
        cout<<"\nRemaining Balance:"<<balance<<endl;
      }
      else
      {
      exit(0);
      };
      };
      void display()
      {
      cout<<"\nName :"<<name;
      cout<<"\nBalance :"<<balance;
      };
};


int main()
{
	Bank B;
	B.initialize();
	B.display ();
	B.check();
	B.deposit();

	cout<<"\n1. Your Information\n2. Deposit\n3. Withdraw\nEnter your choice\n";

	int l;
	cin>>l;

	if(l==1)
{
B.display();
}
else if(l==2)
{
B.deposit();
}
else if(l==3)
{
B.check();
}
	return 0;
};
