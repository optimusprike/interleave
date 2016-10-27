//COP3530 Programming Assignment 2
//Prakash Pudhucode
//UFID 4156-0131
//COP3530 Section 13A8
#include <iostream> 
#include <list>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::list<int> list;
	std::list<int>::iterator count;
	int size = 0;
	int input = 0;
	int step = 0;
	int extralist = 0;
	do {
		std::cin >> size;
	}while(size <= 0);
	for (int i = 0; i < size;i++) {
		std::cin >> input;
		list.push_back(input); //adds inputs at end
	}
	std::cin >> extralist; //number of extralists
	for (int i = 0; i < extralist; i++) {
		count = list.begin(); //initializes iterator to beginning of list
		std::cin >> step;
		std::cin >> size;
		for (int j = 0; j < size; j++) {
			std::cin >> input;
			std::advance(count, step);
			list.insert(count, input);
		}
	}
	for (std::list<int>::iterator i = list.begin(); i != list.end(); i++) {
		std::cout << *i << " ";
	}
}