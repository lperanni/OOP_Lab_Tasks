#ifndef VEC3_H
#define VEC3_H
#include <iostream>

using namespace std;

namespace OOP {

	typedef struct _Position {

		int x;
		int y;
		int z;

	}position;

	class Vec3
	{
	public:

		Vec3();
		friend ostream& operator<<(ostream& os, const Vec3& vektor);
		friend istream& operator>>(istream& is, Vec3& vektor);
		int getX();
		int getY();
		int getZ();
		void setX(int val);
		void setY(int val);
		void setZ(int val);
		Vec3 operator+(const Vec3& vector);
		Vec3 operator-(const Vec3& vector);
		Vec3 operator*(const Vec3& vector);
		Vec3 operator/(int scalar);
		void operator+=(const Vec3& vector);
		void operator-=(const Vec3& vector);
		void operator*=(const Vec3& vector);
		void operator/=(int scalar);
		Vec3& operator=(const Vec3& vector);
		bool operator==(const Vec3& vector1);
		bool operator!=(const Vec3& vector1);
		Vec3 operator*(int scalar);
		int operator[](int index);
		Vec3 normalize();
		friend ostream& operator<<(ostream& os, const Vec3& vektor) {

			os << "X: " << vektor.coord.x << " Y: " << vektor.coord.y << " Z: " << vektor.coord.z;

			return os;
		}
		friend istream& operator>>(istream& is, Vec3& vektor) {
			cout << "X: ";
			is >> vektor.coord.x;
			cout << "Y: ";
			is >> vektor.coord.y;
			cout << "Z: ";
			is >> vektor.coord.z;

			return is;
		}


	private:
		position coord;
		static int count;
	};

}

#endif // !VEC3_H
