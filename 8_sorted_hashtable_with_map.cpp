#include<iostream>
#include<map>
using namespace std;

int main() {
	map<string, int> menu;

	// Insert key-value pairs inside hashtable O(log N)
	menu["maggi"] = 15;
	menu["colddrink"] = 20;
	menu["dosa"] = 99;
	menu["maggi"] = 15;
	menu["pizza"] = 499;
	menu["indianplatter"] = 399;

	// Update Query
	menu["dosa"] = (1 + 0.1) * menu["dosa"];

	// Deletion O(log N)
	menu.erase("dosa");

	// Searching inside a collection of key-value pairs O(log N)
	string item;
	cin >> item;

	if(menu.count(item) == 0)
		cout << item << " is not available" << endl;
	else
		cout << item << " is available, the cost is " << menu[item] << endl;


	// we can iterate over all key-value pairs O(N)
	for(pair<string, int> item : menu)
		cout << item.first << " - " << item.second << endl;
	// The output list is arranged in terms of the keys lexicographically
}