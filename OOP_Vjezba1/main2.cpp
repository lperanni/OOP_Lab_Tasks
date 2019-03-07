#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


typedef struct _Student {

	string ID;
	string name;
	string gender;
	float quizGrades[2];
	float midTermScore;
	float finalScore;
	float totalScore;

}student;

void printSingleStudent(student ucenik) {				//Pomocna funkcija

	cout << "\t\t\t\t\tID - " << ucenik.ID << endl;
	cout << "\t\t\t\t\tIME - " << ucenik.name << endl;
	cout << "\t\t\t\t\tSPOL - " << ucenik.gender << endl;
	cout << "\t\t\t\t\tOCJENE KVIZOVA - " << ucenik.quizGrades[0] << "/ " << ucenik.quizGrades[1] << endl;
	cout << "\t\t\t\t\tMIDTERM - " << ucenik.midTermScore << endl;
	cout << "\t\t\t\t\tFINAL - " << ucenik.finalScore << endl;
	cout << "\t\t\t\t\tTOTAL - " << ucenik.totalScore << endl;

}
bool compareGrades(student &ucenik1, student &ucenik2) {		//Pomocna funkcija

	return ucenik1.totalScore < ucenik2.totalScore;

}
void addStudent(vector<student> &razred) {

	string temp;
	student newStudent;
	int choice;

	cout << "Navedi informacije Studenta " << endl;			//Blok koda za unos ID-a
	cout << "ID - ";
	cin >> temp;
	for (int i = 0; i < razred.size(); i++) {
		if (razred[i].ID == temp) {
			cout << "Vec postojeci ID. Ponovite unos! - " << endl;
			cin >> temp;
			int i = 0;
		}
	}
	newStudent.ID = temp;

	cout << "Ime - ";									//Blok za ime
	cin >> newStudent.name;
	cout << "Spol	1.Muski		2. Zenski" << endl;
	cin >> choice;

	while (newStudent.gender == "") {
	switch (choice) {
		case 1:
			newStudent.gender = "Muski";				//Blok za biranje spola
			break;
		case 2:
			newStudent.gender = "Zenski";
			break;
		default:
			cout << "Pogresan odabir. Ponovite unos! - ";
			cin >> choice;
	}
	}

	cout << "Unesi ocjene kvizova" << endl;
	cout << "Prvi kviz - ";						//Ocjene kvizova
	cin >> newStudent.quizGrades[0];
	cout << "Drugi kviz - ";
	cin >> newStudent.quizGrades[1];

	cout << "Unesi mid-term score - ";
	cin >> newStudent.midTermScore;
												//Mid i final score
	cout << "Unesi final score - ";
	cin >> newStudent.finalScore;

	newStudent.totalScore = newStudent.quizGrades[0] + newStudent.quizGrades[1] + newStudent.midTermScore + newStudent.finalScore;	//totalscore izracun

	razred.push_back(newStudent);


}
void deleteStudent(vector<student> &razred) {

	string ID;

	cout << "Upisi ID studenta za brisanje - ";
	cin >> ID;

	for (int i = 0; i < razred.size(); i++) {

		if (razred[i].ID == ID) {
			razred.erase(razred.begin() + i);
			break;
		}
	}

}
void updateStudent(vector<student> &razred) {


	string ID;
	string temp;
	student newStudent;
	int choice;

	cout << "Upisi ID studenta za azuriranje - ";
	cin >> ID;


	for (int i = 0; i < razred.size(); i++) {
		if (razred[i].ID == ID) {

	cout << "Navedi informacije Studenta " << endl;			//Blok koda za unos ID-a
	cout << "ID - ";
	cin >> temp;
	for (int i = 0; i < razred.size(); i++) {
		if (razred[i].ID == temp) {
			cout << "Vec postojeci ID. Ponovite unos! - " << endl;
			cin >> temp;
			int i = 0;
		}
	}
	newStudent.ID = temp;

	cout << "Ime - ";									//Blok za ime
	cin >> newStudent.name;
	cout << "Spol	1.Muski		2. Zenski" << endl;
	cin >> choice;

	while (newStudent.gender == "") {
		switch (choice) {
		case 1:
			newStudent.gender = "Muski";				//Blok za biranje spola
			break;
		case 2:
			newStudent.gender = "Zenski";
			break;
		default:
			cout << "Pogresan odabir. Ponovite unos! - ";
			cin >> choice;
		}
	}

	cout << "Unesi ocjene kvizova" << endl;
	cout << "Prvi kviz - ";						//Ocjene kvizova
	cin >> newStudent.quizGrades[0];
	cout << "Drugi kviz - ";
	cin >> newStudent.quizGrades[1];

	cout << "Unesi mid-term score - ";
	cin >> newStudent.midTermScore;
												//Mid i final score
	cout << "Unesi final score - ";
	cin >> newStudent.finalScore;

	newStudent.totalScore = newStudent.quizGrades[0] + newStudent.quizGrades[1] + newStudent.midTermScore + newStudent.finalScore;	//totalscore izracun

	razred[i] = newStudent;
		}
	}

}
void printAllStudents(vector<student> &razred) {

	cout << "\t\t\t\t\t##STUDENTI##" << endl;

	for (int i = 0; i < razred.size(); i++) {

		cout << "\t\t\t\t\tID - "<< razred[i].ID << endl;
		cout << "\t\t\t\t\tIME - " << razred[i].name << endl;
		cout << "\t\t\t\t\tSPOL - " << razred[i].gender << endl;
		cout << "\t\t\t\t\tOCJENE KVIZOVA - " << razred[i].quizGrades[0] << ", "<< razred[i].quizGrades[1] << endl;
		cout << "\t\t\t\t\tMIDTERM - " << razred[i].midTermScore << endl;
		cout << "\t\t\t\t\tFINAL - " << razred[i].finalScore << endl;
		cout << "\t\t\t\t\tTOTAL - " << razred[i].totalScore << endl << endl;

	}

	cout << "\t\t\t\t\t############" << endl; 
		

}
void calculateAvg(vector<student> &razred) {

	float avg = 0;

	for (int i = 0; i < razred.size(); i++) {

		avg = razred[i].totalScore / 4;
		cout << "Ucenik - " << razred[i].name << " -> " << avg << endl;

	}

}
void showBestStudent(vector<student> &razred) {
	
	float max = 0;

	student temp;

	for (int i = 0; i < razred.size(); i++) {

		if (razred[i].totalScore > max) {
			max = razred[i].totalScore;
			temp = razred[i];
		}
	}

	cout << "Najbolji student je sljedeci: " << endl;
	printSingleStudent(temp);
	


}
void showWorstStudent(vector<student> &razred) {

	float min = 500;

	student temp;

	for (int i = 0; i < razred.size(); i++) {

		if (razred[i].totalScore < min && razred[i].totalScore != NULL) {
			min = razred[i].totalScore;
			temp = razred[i];
		}
	}

	cout << "Najgori student je sljedeci: " << endl;
	printSingleStudent(temp);

}
student findByID(vector<student> &razred) {
	
	string tempID;

	cout << "Unesi ID trazenog studenta - ";
	cin >> tempID;

	for (int i = 0; i < razred.size(); i++) {

		if (razred[i].ID == tempID) {
			return razred[i];
		}
		if (i = razred.size() - 1) {
			cout << "Nema studenta pod trazenim ID-om. Ponovite unos" << endl;
			cin >> tempID;
			i = 0;
		}
	}
	
	
}
void sortByTotal(vector<student> &razred) {

	sort(razred.begin(), razred.end(), compareGrades);

}

int main2() {

	vector<student> razred;

	int choice;

	cout << "\t\t\t\t\t###################IZBORNIK################" << endl;
	cout << "\t\t\t\t\t# 1. Dodaj novi zapis                     #" << endl;
	cout << "\t\t\t\t\t# 2. Ukloni zapis                         #" << endl;
	cout << "\t\t\t\t\t# 3. Azuriraj zapis                       #" << endl;
	cout << "\t\t\t\t\t# 4. Prikazi sve zapise                   #" << endl;
	cout << "\t\t\t\t\t# 5. Izracunaj prosjek bodova za studenta #" << endl;
	cout << "\t\t\t\t\t# 6. Prikazi studenta s najvise bodova    #" << endl;
	cout << "\t\t\t\t\t# 7. Prikazi studenta s najmanje bodova   #" << endl;
	cout << "\t\t\t\t\t# 8. Pronadi studenta po ID               #" << endl;
	cout << "\t\t\t\t\t# 9. Sortiraj zapise po broju bodova      #" << endl;
	cout << "\t\t\t\t\t# 0. Izlaz	                          #" << endl;
	cout << "\t\t\t\t\t###########################################" << endl;


	bool exit = false;

	while(!exit){
	
		cout << "\nIzbor -> ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			addStudent(razred);
			break;
		case 2:
			deleteStudent(razred);
			break;
		case 3:
			updateStudent(razred);
			break;
		case 4:
			printAllStudents(razred);
			break;
		case 5:
			calculateAvg(razred);
			break;
		case 6:
			showBestStudent(razred);
			break;
		case 7:
			showWorstStudent(razred);
			break;
		case 8:
			printSingleStudent(findByID(razred));
			break;
		case 9:
			sortByTotal(razred);
			break;
		case 0:
			exit = true;
			break;
		}
	
		}

	cout << "Hvala na koristenju! " << endl;
	
	}



