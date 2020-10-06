#include "Str.h"

Str::Str(int leng):len(leng)
{
	// str = NULL
	str = new char[len]; //내용은 없이 메모리 할당만 진행
}
Str::Str(char*neyong)
{
	len = strlen(neyong)+1; // null 문자
	str = new char[len];
	strcpy(str,neyong);
}
Str::~Str() { delete []str; }
char*Str:: contents(void) { return str; }
int Str::length() { return len; }
int Str::compare(char* a) { return strcmp(str,a); }
int Str::compare(class Str&a) { return strcmp(str,a.str); }
void Str::operator=(char* a)
{
	if(str!=NULL)
		delete[]str; //NULL이 아니면 메모리 해제
	len = strlen(a)+1;
	str = new char[len];
	strcpy(str,a);
}
void  Str::operator=(class Str&a)
{
	if(str!=NULL)
		delete[]str;
	len = a.len;
	str = new char[len];
	strcpy(str,a.str);
}

