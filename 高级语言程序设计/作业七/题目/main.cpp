#include <iostream>
using namespace std;

void replaceFirstChars(char *arr, /*接下来三个参数用指针传递*/) {
	//请填写程序
}

void replaceFirstChars(char arr[], /*接下来三个参数用引用传递*/) {
	//请填写程序
}

int main() {
	char str1[] = "*** The 1st sentence for replacement ***";
	char str2[] = "*** 2nd Sentence ***";

	char forUpper1 = '+', forLower1 = '-', forNum1 = '#';
	cout << "Sentence before replacement:\t" << str1 << endl;
	//请在此处调用replaceFirstChars()函数的指针版本
	cout << "Sentence after replacement:\t" << str1 << endl
		 << "First Uppercase: " << forUpper1 << endl
		 << "First Lowercase: " << forLower1 << endl
		 << "First Number: " << forNum1 << endl
		 << endl;

	char forUpper2 = '+', forLower2 = '-', forNum2 = '#';
	cout << "Sentence before replacement:\t" << str2 << endl;
	//请在此处调用replaceFirstChars()函数的引用版本
	cout << "Sentence after replacement:\t" << str2 << endl
		 << "First Uppercase: " << forUpper2 << endl
		 << "First Lowercase: " << forLower2 << endl
		 << "First Number: " << forNum2 << endl;
	return 0;
}