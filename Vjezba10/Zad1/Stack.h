#ifndef STACK_H
#define STACK_H

#include <vector>

using namespace std;

template <typename T>


class Stack
{
public:
	
	Stack() {

		this->size = defaultSize;
		this->top = 0;
		this->stackPtr;
	}
	
	Stack(int size) {

		while (size > this->maxSize) {
			cout << "Prevelika vrijednost. Ponovi upis" << endl;
			cin >> size;
		}

		this->size = size;
		this->top = 0;
		this->stackPtr = &this->top;
		cout << "Stack pointer je na: " << *stackPtr << endl;
	}
	
	void push(T val) {


		this->stackArr.push_back(val);
		this->stackPtr = &this->stackArr[stackArr.size() - 1];
		this->top = *this->stackPtr;

		cout << "Stack pointer je na: " << *stackPtr << endl;


		if (this->stackArr.size() == this->maxSize) {
			cout << "Sve puno" << endl;
			return;
		}

		if (this->stackArr.size() == this->size) {
			this->size += 1;
		}
	}
	void pop() {

		if (this->isEmpty()) {
			cout << "Prazno" << endl;
			return;
		}

		this->stackArr.pop_back();
		this->stackPtr = &this->stackArr[stackArr.size() - 1];
		this->top = *this->stackPtr;
	}

	bool isEmpty() {
		if (this->stackArr.size() == 0) {
			return true;
		}
		return false;
	}

	bool isFull() {
		if (this->stackArr.size() == this->maxSize) {
			return true;
		}
		return false;
	}

	T returnTop(){
		return *this->stackPtr;
	}

	int getSize() {
		return this->size;
	}


	void printStack() {

		for (int i = 0; i < this->stackArr.size(); i++) {
			cout << i + 1 << ". element: " << this->stackArr[i] << endl;
		}

	}

private:

	T val;
	int defaultSize = 10;
	int maxSize = 1000;
	int size;
	int top;
	T* stackPtr;
	vector<T> stackArr;
};



#endif // !STACK_H
