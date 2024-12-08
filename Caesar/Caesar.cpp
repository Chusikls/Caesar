#include <iostream>
#include <string>
std::string encrypt_caesar(std::string str1, int code) {
    std::string str2;
    int size = str1.length();
    str2 = str1;
    for (int n = 0; n < size; n++) {
        if (str1[n] >= 'A' || str1[n] <= 'Z' && str1[n] >= 'a' || str1[n] <= 'z') {
            if (str1[n] >= 'A' && str1[n] <= 'Z') {
                str1[n] = str1[n] - 'A';
                str1[n] = str1[n] + code;
                str1[n] = (str1[n] % 26) + 'A';
                str2[n] = str1[n];
            }
            if (str1[n] >= 'a' && str1[n] <= 'z') {
                str1[n] = str1[n] - 'a';
                str1[n] = str1[n] + code;
                str1[n] = (str1[n] % 26) + 'a';
                str2[n] = str1[n];
            }
        }
    }
    return str2;
}
int main()
{
    std::string str1;
    int code;
    std::cout << "text: \n";
    std::getline(std::cin, str1);
    std::cout << "code: \n";
    std::cin >> code;
    std::cout << "result: " << encrypt_caesar(str1, code);
}