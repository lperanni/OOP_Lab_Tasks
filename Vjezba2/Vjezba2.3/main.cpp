#include <iostream>
#include <iomanip>

using namespace std;

typedef struct _Vector {

	int size;
	int capacity;
	int* niz;

}vector;

//RADI
int vector_size(vector example) {

	int size = 0;
	

	while (example.niz[size] != NULL)
	{
		size++;
	}

	return size;
}

//RADI
vector vector_new(int n) {

	vector example;
	
	example.size = 0;
	example.capacity = n;
	example.niz = new int[n];

	return example;
}

//RADI(VALJDA?)
void vector_delete(vector* example) {

	delete[] example->niz;
	example->size = NULL;
	example->capacity = NULL;

	
}


//RADI
void vector_push_back(vector &example, int insert) {

	if (example.size == example.capacity) {
		example.capacity *= 2;
	}
	for (int i = vector_size(example); i >= 0 ; i--) {
		example.niz[i + 1] = example.niz[i];
	}

	example.niz[0] = insert;
	example.size++;
}			


//RADI
void vector_pop_back(vector &example) {

	example.niz[example.size-1] = NULL;

	example.size--;

}


//RADI
int vector_front(vector &example) {

	return example.niz[0];

}


//RADI
int vector_back(vector &example) {

	return example.niz[example.size - 1];

}

int main() {

	vector primjer = vector_new(4);

	vector_push_back(primjer, 3);
	vector_push_back(primjer, 7);
	vector_push_back(primjer, 1);
	vector_push_back(primjer, 7);
	vector_push_back(primjer, 3);
	vector_push_back(primjer, 2);
	vector_push_back(primjer, 9);

	for (int i = 0; i < primjer.size; i++) {
		cout << i << ". clan: " << primjer.niz[i] << endl;
	}


	cout << "\n\nSize: " << primjer.size << endl;

	
	cout << "Prvi clan: " << vector_front(primjer) << endl;
	cout << "Zadnji clan: " << vector_back(primjer) << endl;
	
	


	vector_pop_back(primjer);

	for (int i = 0; i < primjer.size; i++) {
		cout << i << ". clan: " << primjer.niz[i] << endl;
	}

	
	cout << "Zadnji clan nakon popa: " << vector_back(primjer) << endl;
	


	cout << "Size: " << vector_size(primjer) << endl;

	cout << "Kraj" << endl;

}