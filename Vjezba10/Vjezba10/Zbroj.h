#ifndef ZBROJ_H
#define ZBROJ_H


#include <iostream>
#include <string>


using namespace std;

template <typename T>


class Zbroj
{
public:
	Zbroj(T val){

		this->val = val;
		cout << "Obicni konstruktor" << endl;

	};
	void add(Zbroj num) {
		this->val += num.val;

	}

	T getVal() {
		return this->val;
	}

private:
	T val;

};

template<>

class Zbroj<char>
{
public:
	Zbroj(char val) {

		cout << "Neobicni konstruktor" << endl;
		this->val = val;
	}
	void add(Zbroj other) {
	
		char temp = (this->val + other.val - 96);
		this->val = temp;
		
	}

	char getVal() {
		return this->val;
	}

private:
	char val;

};



#endif // !ZBROJ_H

