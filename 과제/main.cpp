#include "Str.h"

int main(void)
{
	Str a("I'm a girl");
	cout<<a.contents();
	a = "I'm a booy\n";
	cout<<a.contents();
	cout<<a.compare("I'm a a")<<endl;
	return 0;
}
