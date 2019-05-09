#include <iostream>
#include "Vec3.h"

using namespace std;


namespace OOP {

	int Vec3::count = 0;

	Vec3::Vec3() {

		count++;

	}


	int Vec3::getX() {
		return this->coord.x;
	}
	int Vec3::getY() {
		return this->coord.y;
	}
	int Vec3::getZ() {
		return this->coord.z;
	}
	void Vec3::setX(int val) {
		this->coord.x = val;
	}
	void Vec3::setY(int val) {
		this->coord.y = val;
	}
	void Vec3::setZ(int val) {
		this->coord.z = val;
	}


	Vec3 Vec3::operator+(const Vec3& vector) {
		Vec3 temp;

		temp.setX(this->coord.x + vector.coord.x);
		temp.setY(this->coord.y + vector.coord.y);
		temp.setZ(this->coord.z + vector.coord.z);


		return temp;
	}
	Vec3 Vec3::operator-(const Vec3& vector) {

		Vec3 temp;

		temp.setX(this->coord.x - vector.coord.x);
		temp.setY(this->coord.y - vector.coord.y);
		temp.setZ(this->coord.z - vector.coord.z);


		return temp;
	}
	Vec3 Vec3::operator*(const Vec3& vector) {

		Vec3 temp;

		temp.setX(this->coord.y * vector.coord.z - this->coord.z * vector.coord.y);
		temp.setY(this->coord.z * vector.coord.x - this->coord.x * vector.coord.z);
		temp.setZ(this->coord.x * vector.coord.y - this->coord.y * vector.coord.x);


		return temp;

	}
	Vec3 Vec3::operator/(int scalar) {

		Vec3 temp;

		temp.setX(this->coord.x / scalar);
		temp.setY(this->coord.y / scalar);
		temp.setZ(this->coord.z / scalar);


		return temp;

	}
	void Vec3::operator+=(const Vec3& vector) {

		this->setX(this->coord.x + vector.coord.x);
		this->setY(this->coord.y + vector.coord.y);
		this->setZ(this->coord.z + vector.coord.z);

	}

	void Vec3::operator-=(const Vec3& vector) {

		this->setX(this->coord.x - vector.coord.x);
		this->setY(this->coord.y - vector.coord.y);
		this->setZ(this->coord.z - vector.coord.z);

	}
	void Vec3::operator*=(const Vec3& vector) {

		this->setX(this->coord.y * vector.coord.z - this->coord.z * vector.coord.y);
		this->setY(this->coord.z * vector.coord.x - this->coord.x * vector.coord.z);
		this->setZ(this->coord.x * vector.coord.y - this->coord.y * vector.coord.x);

	}
	void Vec3::operator/=(int scalar){
		

	

		this->setX(this->coord.x / scalar);
		this->setY(this->coord.y / scalar);
		this->setZ(this->coord.z / scalar);


	}
	Vec3& Vec3::operator=(const Vec3& vector) {

		Vec3 temp;

		temp.setX(vector.coord.x);
		temp.setY(vector.coord.y);
		temp.setZ(vector.coord.z);

		return temp;

	}
	bool Vec3::operator==(const Vec3& vector1) {

		if (this->coord.x == vector1.coord.x) {
			if (this->coord.y == vector1.coord.y) {
				if (this->coord.z == vector1.coord.z) {
					return true;
				}
			}
		}

		return false;

	}

	bool Vec3::operator!=(const Vec3& vector1) {

		return !(*this == vector1);

	}
	Vec3 Vec3::operator*(int scalar) {
		
		Vec3 temp;

		temp.setX(this->coord.x * scalar);
		temp.setY(this->coord.y * scalar);
		temp.setZ(this->coord.z * scalar);

		return temp;
	}
	int Vec3::operator[](int index) {

		

		if (index == 0) {
			cout << "X: " << this->coord.x << endl;
			return this->coord.x;

		}
		if (index == 1) {
			cout << "Y: " << this->coord.y << endl;
			return this->coord.y;

		}
		if (index == 2) {
			cout << "Z: " << this->coord.z << endl;
			return this->coord.z;

		}

	}
	Vec3 Vec3::normalize() {

		float length = sqrt(pow(this->coord.x, 2) + pow(this->coord.y, 2) + pow(this->coord.z, 2));


		Vec3 temp;

		temp.setX(this->coord.x / length);
		temp.setY(this->coord.y / length);
		temp.setZ(this->coord.z / length);


		return temp;
	}

}