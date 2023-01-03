#include<iostream>
using namespace std;
class publication
{
	private:
		string title;
		float prize;
		
	public:
		void get()
		{
			cout<<"Enter the title="<<endl;
			cin>>title;
			cout<<"Enter the price="<<endl;
			cin>>prize;
		}
		
		void show()
		{
			cout<<"title="<<title<<"prize="<<prize<<endl;
		}
};

class book:public publication
{
	private:
		int page_count;

		
	public:
		void get()
		{
			cout<<"Enter the page_count="<<endl;
			cin>>page_count;

		}
		
		void show()
		{
			cout<<"page_count="<<page_count<<endl;
		}
};

class tape:public publication
{
	private:
		int playing_time;

		
	public:
		void get()
		{
			cout<<"Enter the playing_time="<<endl;
			cin>>playing_time;

		}
		
		void show()
		{
			cout<<"playing_time="<<playing_time<<endl;
		}
};

int main()
{
	publication p;
	p.get();
	p.show();
	book b;
	b.get();
	b.show();
	tape t;
	t.get();
	t.show();
	return 0;
}
