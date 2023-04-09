#include <iostream>
#include <fstream>
#include "MyString.h"

using namespace std;

//要求：对arr数组中的所有对象排序
//排序过程中需要对两个对象比较、交换
//使用MyString的compareTo()和exchangeWith()
void sortMyString(MyString arr[], int count)
{
    //请填写程序

}

int main()
{
    
    //请确保names.txt文件与编译后的exe文件位于同一文件夹
    ifstream txtFile("names.txt");
    char txtLine[MyString::CAPACITY];

    //定义了一个容纳150个MyString对象的数组，但是实际测试数据只有128个
    MyString myArr[150];

    int count = 0;
    //循环读取文件中的每一行，每读一行，填充txtLine数组，
    //再用txtLine数组的内容填充myArr的一个对象，
    //读到文件末尾，getline会返回0，导致循环结束
    while (txtFile.getline(txtLine, MyString::CAPACITY))
        myArr[count++].setString(txtLine);
    txtFile.close();

    sortMyString(myArr, count);

    //循环打印
    for (int i = 0; i < count; i++)
        cout << myArr[i].getString() << endl;

    return 0;
}