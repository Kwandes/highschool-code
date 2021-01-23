#include <iostream>
#include <iomanip>

using namespace std;

long int palindrome(long int number)
{
    number+=1;
    int n,  digit, rev,save=number;
    start:
    rev=0;
    number=save;
    n = number;
    save=n;
    do
    {
        digit = number % 10;
        rev = (rev * 10) + digit;
        number = number / 10;
    }
    while (number != 0);
    //cout << " The reverse of the number is: " << rev << endl;
    if (n == rev){
        n;
        //cout << "number "<<n<<" is a palindrome" << endl;
    //cout<<n<<endl;
    return n;
    }
    else
     {
        //cout << " The number is not a palindrome" << endl;
        save++;
        //Sleep();
        goto start;

     }
}

int main()
{


    /*cout << "Enter a positive number: ";
    cin >> Number;
    palindrome(Number);*/

    long int Number;
    int numberamount;
    cout<<"Insert amount of numbers: ";
    cin>>numberamount;
    cout<<endl;
    long long Numbers[numberamount];
    for(int i=1; i<=numberamount; i++)
    {
        cout<<endl<<"Insert "<<i<<" number: ";
        cin>>Numbers[i];
        cout<<endl;
        Number=Numbers[i];
        Numbers[i]=palindrome(Numbers[i]);

    }
    for(int i=1;i<=numberamount;i++)
    {
        cout<< "Closest Palidrome is: " << Numbers[i]<<endl;
    }
    system("PAUSE");
    return 0;
}
