#pragma once
class PhoneBook
{
private:
	Subscriber* list = new Subscriber[0];
	int size = 0;
public:
	PhoneBook()
	{

	}
	PhoneBook(Subscriber& subs)
	{

	}
	~PhoneBook()
	{
		delete[]list;
	}

	void addContact(Subscriber& subs)
	{
		Subscriber* buf = new Subscriber[size + 1];
		for (int i = 0; i < size; i++)
		{
			buf[i] = list[i];
		}
		buf[size] = subs;
		delete[]list;
		list = buf;
		size++;
	}
	void delContact(int index)
	{
		if (index >= size) index = size - 1;
		Subscriber* buf = new Subscriber[size - 1];
		for (int i = 0; i < index; i++)
		{
			buf[i] = list[i];
		}
		for (int i = index + 1, k = index; i < size; i++)
		{
			buf[k++] = list[i];
		}
		delete[]list;
		list = buf;
		size--;
	}

	inline void print()
	{
		cout << "PHONE BOOK:" << endl;
		for (int i = 0; i < size; i++)
		{
			cout << i + 1 << ". ";
			list[i].printContact();
		}
	}

	void addInfo(int index, string info)
	{
		if (index >= size || index < 0) return;
		list[index].setInfo(info);
	}

	void saveBook(string path)
	{
		for (int i = 0; i < size; i++)
		{
			list[i].saveContact(path);
		}
	}

	void readBook(string path)
	{
		string str;
		ifstream in{ path };
		if (in.is_open())
		{
			while (getline(in, str))
			{
				cout << str << endl;
			}
		}
		else cout << "Error!";
		in.close();
	}

	int searchName(string n)
	{
		for (int i = 0; i < size; i++)
		{
			if (list[i].getName() == n)
			{
				cout << "Number of your contact in the book is: ";
				return i + 1;
			}
		}
		cout << "No such name in the book!";
		return -1;
	}

	int searchSurname(string n)
	{
		for (int i = 0; i < size; i++)
		{
			if (list[i].getSurname() == n)
			{
				cout << "Number of your contact in the book is: ";
				return i + 1;
			}
		}
		cout << "No such surname in the book!";
		return -1;
	}

	int searchPatr(string n)
	{
		for (int i = 0; i < size; i++)
		{
			if (list[i].getPatr() == n)
			{
				cout << "Number of your contact in the book is: ";
				return i + 1;
			}
		}
		cout << "No such patronymic in the book!";
		return -1;
	}

};

