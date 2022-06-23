#pragma once
class Subscriber
{
private:
	string name;
	string surname;
	string patr;
	string info;
	int homeNum;
	int workNum;
	long long mobileNum;
public:
	Subscriber()
	{

	}
	Subscriber(string surname, string name, string patr, int homeNum, int workNum, long long mobileNum)
	{
		this->surname = surname;
		this->name = name;
		this->patr = patr;
		this->homeNum = homeNum;
		this->mobileNum = mobileNum;
		this->workNum = workNum;
	}
	Subscriber(string surname, string name, string patr, int homeNum, int workNum, long long mobileNum, string info) : Subscriber(surname, name, patr, homeNum, workNum, mobileNum)
	{
		this->info = info;
	}

	string getName()
	{
		return name;
	}
	string getSurname()
	{
		return surname;
	}
	string getPatr()
	{
		return patr;
	}

	void setHomeNum(int homeNum)
	{
		this->homeNum = homeNum;
	}
	void setMobileNum(int mobileNum)
	{
		this->mobileNum = mobileNum;
	}
	void setWorkNum(int workNum)
	{
		this->workNum = workNum;
	}
	void setInfo(string info)
	{
		this->info = info;
	}

	void printContact()
	{
		cout << "Full name: " << surname << " " << name << " " << patr << endl;
		cout << "Home number: " << homeNum << endl;
		cout << "Mobile number: " << mobileNum << endl;
		cout << "Work number: " << workNum << endl;
		cout << "Additional info: " << info << endl << endl;
	}

	void saveContact(string path)
	{
		ofstream out{ path, ios::app };
		out << "Full name: " << surname << " " << name << " " << patr << endl;
		out << "Home number: " << homeNum << endl;
		out << "Mobile number: " << mobileNum << endl;
		out << "Work number: " << workNum << endl;
		out << "Additional info: " << info << endl << endl;
		out.close();
	}
};

