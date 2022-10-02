#include <iostream>
#include <string>
#include <fstream>

#include <vector>
#include <sstream>

using namespace std;

class Flight {
	int day;
	int hour;
	int minute;
	int id;
	string event;
public:
	Flight();
	Flight(int d, int h, int m, int id, string e)
	{
		day = d;
		hour = h;
		minute = m;
		this->id = id;
		event = e;
	}

	void print()
	{
		cout << day << " " 
			<< hour << " " 
			<< minute << " " 
			<< id << " " 
			<<event << endl;
	}
};

// split string
vector<string> split_string(string str)
{
	vector<string> result;
	stringstream ss(str);
	while (ss.good())
	{
		string substr;
		getline(ss, substr, ' ');
		result.push_back(substr);
	}
	return result;
}

int main() {
	vector<string> result;

	

	//day hour minute id event
	//string str = { "14 23 52 212372 S"};

	// split str
	//result = split_string(str);

	vector<Flight> list;
	list.push_back(Flight(14, 23, 52, 212372, "S"));
	list.push_back(Flight(14, 21, 30, 212372, "A"));
	list.push_back(Flight(14, 21, 40, 212372, "B"));
	for (Flight n : list)
		n.print();
	return 0;
}
