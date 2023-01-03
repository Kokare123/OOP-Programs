#include<iostream>
using namespace std;
class Studentinfo
{
	private:
		char name[25];
		char clas[4];
		int rollno;
		int DOB;
		char bloodgroup[2];
		int contactno;
		int telno;
		double DLN;
	public:
		void get();
		void show();
};
void Studentinfo::get()
{
	cout<<"enter the name="<<endl;
	cin>>name;
	cout<<"enter the class="<<endl;
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
void Studentinfo::show()
{
	cout<<"name"<<name<<endl<<"class"<<clas<<endl<<"rollno"<<rollno<<endl<<"DOB"<<DOB<<endl<<"bloodgroup"<<bloodgroup<<endl<<"contactno"<<contactno<<endl<<"telno"<<telno<<
	endl<<"DLN"<<DLN<<endl;
	
}
int main()
{
	Studentinfo s;
	s.get();
	s.show();
}
