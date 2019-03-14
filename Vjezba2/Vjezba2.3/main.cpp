#include <iostream>
#include <iomanip>

using namespace std;

typedef struct _Vector {

	int size;
	int capacity;
	int* niz;

	void vector_new(int n) {

		this->size = 0;
		this->capacity = n;
		this->niz = new int[n];

	}

	int vector_size() {

		return size;
	}

	void doubleVector() {

		this->capacity = this->capacity * 2;

		int* newArray = new int[this->capacity];
	
		for (int i = 0; i < this->size; i++) {
			newArray[i] = this->niz[i];
		}
		
		delete[] this->niz;

		this->niz = 0;

		this->niz = newArray;


	}

	void vector_delete() {

		delete[] this->niz;
		this->size = NULL;
		this->capacity = NULL;
		this->niz = 0;

	}

	void vector_push_back(int insert) {

	
		if (this->size == this->capacity) {
			this->doubleVector();
		}
	

		this->niz[size] = insert;
		this->size++;
	}

	void vector_pop_back() {

		this->niz[this->size - 1] = NULL;

		this->size--;

	}

	int& vector_front() {

		return this->niz[0];

	}

	int& vector_back() {

		return this->niz[this->size - 1];

	}

}vector;




int main() {

	vector primjer;

	primjer.vector_new(4);

	primjer.vector_push_back(3);
	primjer.vector_push_back(7);
	primjer.vector_push_back(1);
	primjer.vector_push_back(7);
	primjer.vector_push_back(3);
	primjer.vector_push_back(2);
	primjer.vector_push_back(9);

	
	
	
	for (int i = 0; i < primjer.size; i++) {
		cout << i << ". clan: " << primjer.niz[i] << endl;
	}



	cout << "\n\nSize: " << primjer.size << endl;

	
	cout << "Prvi clan: " << primjer.vector_front() << endl;
	cout << "Zadnji clan: " << primjer.vector_back() << endl;
	
	


	primjer.vector_pop_back();

	for (int i = 0; i < primjer.size; i++) {
		cout << i << ". clan: " << primjer.niz[i] << endl;
	}

	
	cout << "Zadnji clan nakon popa: " << primjer.vector_back() << endl;
	


	cout << "Size: " << primjer.vector_size() << endl;
	
	

	cout << "Kraj" << endl;

}