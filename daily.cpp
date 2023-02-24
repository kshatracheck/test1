#include<iostream>
using namespace std;

class imanager
{
public:
	virtual void submitjob()=0;
};

class worker
{
	imanager* mnr;
public:
	worker()
	{}
	worker(imanager* ptr)
	{
		mnr = ptr;
		ptr->submitjob();
	}
	void submitjob12()
	{
		mnr->submitjob();
		cout << "from worker class";
	}
};

class manager : public imanager
{
	worker* W;
	manager() {
		W = new worker(this);
	}
public:
	void submitjob()
	{
		cout << "task completed from MGR";
	}
};
int main()
{
	
}
