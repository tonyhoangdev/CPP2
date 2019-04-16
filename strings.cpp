#include <iostream>
// #include <bits/stdc++.h>
int main()
{
    std::cout << "Hello Tony" << std::endl;


    std::string str1("first string");
    std::string str2(str1);
    std::string str3(5, '#');
    std::string str4(str1, 6, 6);
    std::string str5(str2.begin(), str2.begin() + 5);

    std::cout << "str1: " << str1 << std::endl;
    std::cout << "str2: " << str2 << std::endl;
    std::cout << "str3: " << str3 << std::endl;
    std::cout << "str4: " << str4 << std::endl;
    std::cout << "str5: " << str5 << std::endl;

    std::string str6 = str4;
    std::cout << "str6: " << str6 << std::endl;

    str4.clear();
    std::cout << "str4: " << str4 << std::endl;

    int len = str6.length();
    std::cout << "Length of string is: " << len << std::endl;

    char ch = str6.at(2);
    std::cout << "third character of string is: " << ch << std::endl;

    const char * charStr = str6.c_str();
    std::cout << "char * is: " << charStr << std::endl;

    // append
    str6.append(" extension");
    std::cout << "str6: " << str6 << std::endl;

    str4.append(str6, 4, 6); // at 4th position 6 character
    std::cout << "str4: " << str4 << std::endl;

    std::cout << "std::string::npos: " << std::string::npos << std::endl;

    if (str6.find(str4) != -1) {
        std::cout << "str4 found in str6 at " << str6.find(str4)
                  << " pos" << std::endl;
    } else {
        std::cout << "str4 not found in str6" << std::endl;
    }

    std::cout << "str6 substr: " << str6.substr(7, 3) << std::endl;

    std::cout << "str6 substr: " << str6.substr(7) << std::endl;

    str6.erase(7, 4);
    std::cout << "str6 erase: " << str6 << std::endl;

    str6.erase(str6.begin() + 5, str6.end() - 3);
    std::cout << "str6 erase: " << str6 << std::endl;

    str6.replace(2,  1, "ese are test");
    std::cout << "str6 replace: " << str6 << std::endl;

    return 0;
}