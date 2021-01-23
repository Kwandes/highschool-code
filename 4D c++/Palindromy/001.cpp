#include <iostream>
#include <string>

bool CheckPalindrome(std::string Word)
{
     bool Check = true;
     for(int i = 0; i< Word.size()/2 ;i++)
     {
             if (Word[i] != Word[Word.size() - (i + 1)]) return false;
     }
     if (Check == true) return true;
}

int main()
{
    std::string word;
    std::cout << "Insert word" << std::endl;
    std::cin >> word;
    
    if(CheckPalindrome(word)) std::cout << word <<  " is a palindrome" << std::endl;
    else std::cout << word <<  " is NOT palindrome" << std::endl;
    
    system("PAUSE");
    return 0;
}
