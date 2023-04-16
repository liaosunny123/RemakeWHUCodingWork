//
// Created by epicmo on 23-4-9.
//

#include "MyString.h"

//要求：把本对象和otherString对象的c数组内容交换
void MyString::exchangeWith(MyString& otherString)
{
    //请填写程序
}

//要求：把本对象和otherString对象的c数组逐字符比较
//1）比较规则同英文词典排序规则【测试数据并不含有A,a比较的操作，无需考虑大小写】
//2）如果本对象字符串应排在otherString的前面，则返回一负数
//3）如果本对象字符串应排在otherString的后面，则返回一正数
//4）如果两个字符串完全相同，则返回0
//注意：字符串以'\0'结尾，"Jack"应排在"Jackson"前面
int MyString::compareTo(MyString &otherString)
{
    //请填写程序
}

//要求：把s中的字符逐个复制到本对象的c数组
//注意：字符串以'\0'结尾，复制到'\0'即可停止
//注意：即可停止复制并不表示复制结束，你需要手动处理残余的字符
void MyString::setString(char s[])
{
    //请填写程序
}
