#pragma once
#ifndef ARRYTP_H
#define ARRYTP_H


#include<iostream>
#include<string>
using std::string;
using std::endl;
using std::cout;
using std::cin;
using std::ios_base;
template<class T, int n>
class ArrayTp
{
public:
	explicit ArrayTp(const T & v);
	virtual T& operator[](int i);
	virtual T operator[](int i)const;
	ArrayTp() {};
private:
	T ar[n];
};
template<class T, int n>
ArrayTp<T, n>::ArrayTp(const T &v)
{
	int i;
	for (i=0;i < n; i++)
	{
		ar[i] = v;
	}
}
template<class T, int n>
T & ArrayTp<T, n> ::operator[](int i)
{
	if (i < 0 || i >= n)
	{
		std::cerr << "Error in array limits: " << i << "is out of range.\n";
		std::exit(EXIT_FAILURE);
	}
	return ar[i];
 }
template<class T,int n>
T ArrayTp<T, n>::operator[](int i)const
{
	if (i < 0 || i >=n)
	{
		std::cerr << "Error in array limits: " << i << "is out of range.\n";
		std::exit(EXIT_FAILURE);
	}
	return ar[i];
}
#endif // !ARRYTP_H
