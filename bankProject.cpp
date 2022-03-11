#include<iostream>
#include<fstream>
#include<cctype>
#include<iomanip>
using namespace std;
class account
{
	int acno;
	char name[50];
	int deposit;
	char type;
public:
	void create_account();	
	void show_account() const;
	void modify();	
	void dep(int);	
	void draw(int);	
	void report() const;	
	int retacno() const;	
	int retdeposit() const;	
	char rettype() const;
}    
void account::create_account()
{
	cout<<"Enter The account No. :";
	cin>>acno;
	cout<<"Enter The Name of The account Holder : ";
	cin.ignore();
	cin.getline(name,50);
	cout<<"Enter Type of The account : ";
	cin>>type;
	type=toupper(type);
	cout<<"Enter The Initial amount(>=500 for Saving and >=1000 for current ) : ";
	cin>>deposit;
	cout<<"Account Created..";
}
void account::show_account() const
{
	cout<<"Account No. : "<<acno;
	cout<<"Account Holder Name : ";
	cout<<name;
	cout<<"Type of Account : "<<type;
	cout<<"Balance amount : "<<deposit;
}


void account::modify()
{
	cout<<"Account No. : "<<acno;
	cout<<"Modify Account Holder Name : ";
	cin.ignore();
	cin.getline(name,50);
	cout<<"Modify Type of Account : ";
	cin>>type;
	type=toupper(type);
	cout<<"Modify Balance amount : ";
	cin>>deposit;
}
void account::dep(int x)
{
	deposit+=x;
}
	
void account::draw(int x)
{
	deposit-=x;
}
	
void account::report() const
{
	cout<<acno<<setw(10)<<" "<<name<<setw(10)<<" "<<type<<setw(6)<<deposit<<endl;
}

	
int account::retacno() const
{
	return acno;
}

int account::retdeposit() const
{
	return deposit;
}

char account::rettype() const
{
	return type;
}
// not yet finished 