#include<iostream>
#include<map>
#include<list>
#include<string>
using namespace std;

int main() {
	map<string, list<string>> phonebook;

	phonebook["Prateek"].push_back("242423423");
	phonebook["Prateek"].push_back("546536345");
	phonebook["Prateek"].push_back("898796786");

	phonebook["Krishna"].push_back("5463453456");
	phonebook["Krishna"].push_back("3456354444");
	phonebook["Krishna"].push_back("3456345645");

	// Printing the hashtable
	for(pair<string, list<string>> name : phonebook) {
		cout << name.first << " - ";
		for(string number : name.second)
			cout << number << ", ";
		cout << endl;
	}
	return 0;
}