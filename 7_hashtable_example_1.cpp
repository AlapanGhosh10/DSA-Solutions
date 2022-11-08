#include<iostream>
#include<unordered_map>
using namespace std;

int main() {
	unordered_map<string, int> menu;

	// Insert key-value pairs inside hashtable O(1)
	menu["maggi"] = 15;
	menu["colddrink"] = 20;
	menu["dosa"] = 99;
	menu["maggi"] = 15;
	menu["pizza"] = 499;
	menu["indianplatter"] = 399;

	// Update Query
	menu["dosa"] = (1 + 0.1) * menu["dosa"];

	// Deletion O(1)
	menu.erase("dosa");

	// Searching inside a collection of key-value pairs O(1)
	string item;
	cin >> item;

	if(menu.count(item) == 0)
		cout << item << " is not available" << endl;
	else
		cout << item << " is available, the cost is " << menu[item] << endl;
	// in menu[item] the square bracket is overloaded which is defined within the class
	// menu.count(item) returns 0 if the key is not present


	// we can iterate over all key-value pairs O(N)
	// In for each loop the iterator returns a pair
	for(pair<string, int> item : menu)
		cout << item.first << " - " << item.second << endl;
	// pair is an inbuilt class in c++ it has two attributes
	// 'first' which is key and 'second' which is value
	// From the output we can see the pairs are stored in random order
	// so they are called unordered map
}