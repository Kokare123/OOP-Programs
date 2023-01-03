#include<iostream>
using namespace std;
class Studentinfo
{
	private:
		char name[];
		char clas[];
		int rollno;
		int DOB;
		char bloodgroup[];
		int contactno;
		int telno;
		double DLN;
	public:
		void get();
		void show();
};
void Studentinfo::get(void)
{
	cout<<"enter the name="<<endl;
	cin>>name;
	cout<<"enter the clas="<<endl;
	cin>>clas;
	cout<<"enter the rollno="<<endl;
	cin>>rollno;
	cout<<"enter the DOB="<<endl;
	cin>>DOB;
	cout<<"enter the bloodgroup="<<endl;
	cin>>bloodgroup;
	cout<<"enter the contactno="<<endl;
	cin>>contactno;
	cout<<"enter the telno="<<endl;
	cin>>telno;
	cout<<"enter the DLN="<<endl;
	cin>>DLN;
		
}
void Studentinfo::show(void)
{
	cout<<"name"<<name<<endl<<"clas"<<clas<<endl<<"rollno"<<rollno<<endl<<"DOB"<<DOB<<endl<<"bloodgroup"<<bloodgroup<<endl<<"contactno"<<contactno<<endl<<"telno"<<telno<<
	endl<<"DLN"<<DLN<<endl;
	
}
int main()
{
	Studentinfo s;
	s.get();
	s.show();
}

