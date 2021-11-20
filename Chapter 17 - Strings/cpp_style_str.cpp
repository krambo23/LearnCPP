// pg 118

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1 = "Hello";
	string str2 = "World";
	string str3;
	int len;

	// copy str1 into str3
	str3 = str1;
	cout << "str3 : " << str3 << endl;
	//printf("str3 : %s\n", str3);

	// concatenates str1 and str2 
	str3 = str1 + str2;
	cout << "str1 + str2 : " << str3 << endl;
	//printf("str1 + str2 = %s\n", str3);

	// total length of str3 after concatenation
	len = str3.size();
	printf("str3.size() = %d\n", len);

	return 0;
}