#include "Stack.h"
#include <iostream>

using namespace std;




int main() {
	
	Stack<int> stog;

	Stack<char> stog2;

	cout << stog.isEmpty() << endl;

	stog.push(5);
	stog.push(6);
	stog.push(7);
	stog.push(8);
	stog.push(9);

	stog.pop();

	stog.printStack();

	cout << stog.isEmpty() << endl;

	cout << stog.getSize() << endl;

	cout << stog.isFull() << endl;

	cout << stog.returnTop() << endl;

	stog.pop();
	stog.pop();
	stog.pop();
	stog.printStack();
	stog.push(3);
	stog.push(3);
	stog.push(3);
	stog.push(3);
	stog.push(3);
	stog.printStack();


	stog2.push('e');
	stog2.push('f');
	stog2.push('g');
	stog2.push('h');
	stog2.push('i');

	stog2.printStack();


	cout << endl << endl << "Stack pointer na kraju je na elementu s vrijednosti: " << stog2.returnTop() << endl;

}