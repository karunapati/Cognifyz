#include <iostream>
#include <string>
#include <algorithm>
bool isPalindrome(const std::string &str)
{

    std::string processedStr;
    for (char c : str)
    {
        if (std::isalnum(c))
            processedStr += std::tolower(c);
    }

    return processedStr == std::string(processedStr.rbegin(), processedStr.rend());
}

int main()
{
    std::string input;
    std::cout << "Enter a word or phrase: ";
    std::getline(std::cin, input);
    if (isPalindrome(input))
    {
        std::cout << "Yes, it is a palindrome!" << std::endl;
    }
    else
    {
        std::cout << "No, it is not a palindrome." << std::endl;
    }

    return 0;
}
