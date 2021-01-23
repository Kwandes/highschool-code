//Ci¹gi mno¿enia
#include <iostream>

int Power(int x, int n)
{
    int k;
    if (n == 1) return x;
    else
    {
        if (n % 3 == 0)
        {
           k = Power(x, n / 3);
           return k*k*k;
        }
        else return x*Power(x,n-1);
    }
}
int main()
{
    int number, power;
    std::cout << "Input the number" << std::endl;
    std::cin >> number;
    std::cout << "Input the power" << std::endl;
    std::cin >> power;
    std::cout << Power(number,power) << std::endl;
    system("PAUSE");
    return 0;  
}
