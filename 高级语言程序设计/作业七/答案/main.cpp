#include <iostream>
using namespace std;

void replaceFirstChars(char *arr, char* forUpper, char* forLower, char* forNum) {
	int flag = 0;

	for (int i = 0; arr[i] != '\0'; i++) {
    if (!(flag & 0b001) && islower(arr[i])) {
        std::swap(arr[i], *forLower);
        flag |= 0b001;
    }

    if (!(flag & 0b010) && isupper(arr[i])) {
        std::swap(arr[i], *forUpper);
        flag |= 0b010;
    }

    if (!(flag & 0b100) && isdigit(arr[i])) {
        std::swap(arr[i], *forNum);
        flag |= 0b100;
    }

    if (flag == 0b111) {
        break;
    }

	}
}

void replaceFirstChars(char arr[], char& forUpper, char& forLower, char& forNum) {
	replaceFirstChars(arr,&forUpper,&forLower,&forNum);
}

int main() {
	cout << "姓名：EpicMo；学号：1919810114514" << endl;
	char str1[] = "*** The 1st sentence for replacement ***";
	char str2[] = "*** 2nd Sentence ***";

	char forUpper1 = '+', forLower1 = '-', forNum1 = '#';
	cout << "Sentence before replacement:\t" << str1 << endl;
	replaceFirstChars(str1,&forUpper1,&forLower1,&forNum1);
	cout << "Sentence after replacement:\t" << str1 << endl
		 << "First Uppercase: " << forUpper1 << endl
		 << "First Lowercase: " << forLower1 << endl
		 << "First Number: " << forNum1 << endl
		 << endl;

	char forUpper2 = '+', forLower2 = '-', forNum2 = '#';
	cout << "Sentence before replacement:\t" << str2 << endl;
	replaceFirstChars(str2,forUpper2,forLower2,forNum2);
	cout << "Sentence after replacement:\t" << str2 << endl
		 << "First Uppercase: " << forUpper2 << endl
		 << "First Lowercase: " << forLower2 << endl
		 << "First Number: " << forNum2 << endl;
	return 0;
}