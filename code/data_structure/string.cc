#include<iostream>
#include<string>

using namespace std;

int main(){
    // // 1. 赋值：把 str2 赋值给 str1
    // string str1 = "Hello";
    // string str2;
    // str2 = "1234567";
    // cout << "str1: " << str1 << endl;
    // cout << "str2: " << str2 << endl;
    // str1.assign(str2);
    // cout << "str1: " << str1 << endl;
    // // out:
    // //      str1: Hello
    // //      str2: 1234567
    // //      str1: 1234567
    // // 
    // str1 = "Hello";
    // string str3 = "123World";
    // str1.assign(str3,4,2);
    // cout << "s1: " << str1 << endl;

    // // 2. 长度
    // string str = "1234567";
    // cout << "str 长度_length(): " << str.length() << endl;
    // cout << "str 长度_size(): " << str.size() << endl;
    // // out:
    // // str 长度_length(): 7
    // // str 长度_size(): 7
    string str1 = "Hello";
    string str2 = "123";
    // str1.replace(5,3,str2);
    // str1.swap(str2);
    str1.insert(2,str2);
    cout << "str1: " << str1 << endl;
    // cout << "str2: " << str2 << endl;
    string str = "Hello123World";
    // str.erase(5,5);
    string sub_str = str.substr(5,3);
    cout << "sub_str: " << sub_str << endl;

    str1.append(str2);
    cout << "by append(): " << str1 << endl;
    string s1 = "hello";
    char c2 = 'W';
    s1 += c2;
    cout << "by + : " << s1 << endl;
    string s2 = "1234567";
    s1.append(s2, 3,2);
    cout << "s1: " << s1 << endl;
    // out:
    //     s1: helloW45



}