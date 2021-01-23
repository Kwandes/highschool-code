#include <iostream>
#include <string>

bool CheckPalindrome(std::string Word)
{
	std>>string ReverseWord;
	int Counter = 0;
	for (int i = Word.Length()-1; i >= 0 ; i--)
	{
		ReverseWord[Counter++] = Word[i];
	}
	if (Word == ReverseWord) return True;
	else return False;
}

int main()
{
    std::string Word;
    std::cout << "Insert word" << std::endl;
    std::cin >> Word;
    std::
    
    if(CheckPalindrome(Word)) std::cout << Word <<  " is a palindrome" << std::endl;
    else std::cout << Word <<  " is NOT palindrome" << std::endl;
    
    system("PAUSE");
    return 0;
}
