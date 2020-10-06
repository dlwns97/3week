#include "Array.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Array::Array(int size){
	if(size<=0){
		cout<<"Error!"<<endl;
		exit(1);
	}
	data = new int[size];
	len = size;
}
Array::~Array(){ delete []data; }
int& Array::operator[](int i)
{
	static int tmp=-1;
	if(i<0 || i>len){
		cout<<"Array bound error!"<<endl;
		return tmp;
	}
	return data[i];
}
int Array::operator[](int i) const
{
	if(i<0 || i>len){
		cout<<"Array bound error!"<<endl;
		return -1;
	}
	return data[i];
}
int Array::length() { return len; }
void Array::print(){
	cout<<'[';
	for(int i=0;i<len;i++){
		cout<<data[i];
		if(i!=len-1)
			cout<<' ';
	}
	cout<<']'<<endl;
}
