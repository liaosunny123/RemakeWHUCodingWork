//
// Created by epicmo on 23-4-9.
//

#ifndef HW06_MYSTRING_H
#define HW06_MYSTRING_H
class MyString
{

public:
    void exchangeWith(MyString& );
    int compareTo(MyString& );
    void setString(char[]);
    char* getString() {
        return c;
    }
    static const int CAPACITY = 64;

private:
    char c[CAPACITY] {0};
};
#endif //HW06_MYSTRING_H
