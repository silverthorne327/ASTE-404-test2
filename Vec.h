// #pragma once
// Vec.h
#ifndef _VEC_H
#define _VEC_H
#include <ostream>
#include <math.h>

/**
 * Solves 3D vector Operations such as vector subtraction, dot product, and magnitude.
 *
 * Operations:
 	\f[
	\vec{c} = \vec{a} - \vec{b}
	\vec{d} = \vec{a} + \vec{b}
	\vec{e} = \vec{a} * \vec{b}
	\|vec{a}| = sqrt(\vec{a} * \vec{a})
	\f]
	\f$
	\vec{c} = \vec{a} - \vec{b}
	\vec{d} = \vec{a} + \vec{b}
	\vec{e} = \vec{a} * \vec{b}
	\|vec{a}| = sqrt(\vec{a} * \vec{a})
	\f$

 * @param _vec3 3D Vector class
 * @param double3 Nickname for the 3D vector with a double data type.
 */

template<typename T>
class _vec3 {			// generic 3D vector type T
public:
	_vec3<T>() : d{ 0,0,0 } {}
	_vec3<T>(T a, T b, T c) : d{ a,b,c } {}
	T& operator[] (int i) { return d[i]; }
	T operator[] (int i) const { return d[i]; }
	
	friend _vec3<T> operator+(const _vec3<T>& a, const _vec3<T>& b) {
		return _vec3<T>(a[0] + b[0], a[1] + b[1], a[2] + b[2]);
	}
	friend _vec3<T> operator-(const _vec3<T>& a, const _vec3<T>& b) {
		return _vec3<T>(a[0] - b[0], a[1] - b[1], a[2] - b[2]);
	}
	friend T dot(const _vec3<T>& a, const _vec3<T>& b) {
		return a[0]*b[0] + a[1]*b[1] + a[2]*b[2];
	}
	friend double mag(const _vec3<T>&a) {
		return sqrt(dot(a,a));
	}
	friend std::ostream& operator<<(std::ostream& out, const _vec3<T>& a) {
		out << a[0] << " " << a[1] << " " << a[2]; return out;
	}
protected:
	T d[3];
};

using double3 = _vec3<double>;		//assign a nickname

#endif
