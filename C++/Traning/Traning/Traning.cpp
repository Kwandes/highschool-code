#include "stdafx.h"
#include <string>
#include <iostream>


//void Foo(int &var)
//{
//	var++;
//}

//int Stack[100],SP = 0;
//int *pointer = &Stack[0];
//
//void push(int value)
//{
//	pointer[SP++] = value;
//}
//int pop()
//{
//	return pointer[--SP];
//}

/*class StaticTest
{public:
	static int StaticCounter;

	StaticTest() { StaticCounter++; };
	~StaticTest() { StaticCounter--; if (StaticCounter == 0) std::cout << "Bye Bye"; }
};
int StaticTest::StaticCounter = 0;*/

int main()
{


	//created on demand: pointer -> object's component, then delete pointer(entire obj)
	//Static makes the component callable without any instance of the class existing
	/*StaticTest objA;
	std::cout << "counter: " << StaticTest::StaticCounter << std::endl;
	StaticTest objB;
	std::cout << "counter: " << StaticTest::StaticCounter << std::endl;
	StaticTest objC;
	std::cout << "counter: " << StaticTest::StaticCounter << std::endl;
	StaticTest objD,objE, objF, objG, objH, objI;
	std::cout << "counter: " << StaticTest::StaticCounter << std::endl;*/
	/*push(3);
	push(2);
	push(1);
	std::cout << pop() << std::endl;
	std::cout << pop() << std::endl;
	std::cout << pop() << std::endl;*/


	/*std::string TheString = "content";
	std::string NewString;
	NewString.append(TheString);
	NewString.append(TheString, 0, 3);
	NewString.append(2, '!');
	std::cout << NewString << std::endl;

	std::string quote = "Whyserious?", anyword = "monsoon";
	quote.insert(3, 2, ' ').insert(4, anyword, 3, 2);
	std::cout << quote << std::endl;

	quote = "TestingHowInsertWorks";
	anyword = "test";
	quote.insert(4, anyword, 0, 4).insert(4, 2, ' ');
	std::cout << quote << std::endl;*/
	//first it adds test(from 0 to 4th char in after 4th char of quote, then it adds 2 spaces after 4th character of completed qoute

	/*int ***pointer;
	int st = 0, nd = 0, rd = 0;
	pointer = new int **[st];
	pointer[st] = new int *[nd];
	pointer[st][nd] = new int[rd];
	pointer[st][nd][rd] = 10;
	std::cout << pointer[st][nd][rd] << std::endl;
	std::string S = "test";
	int not_more_than = S.max_size();
	std::cout << "max size: " << not_more_than << std::endl;*/
	/*int **pointer, columns, rows;
	
	std::cout << "How many columns do you want" << std::endl;
	std::cin >> columns;
	std::cout << "How many rows do you want" << std::endl;
	std::cin >> rows;
	pointer = new int *[columns];
	for (int i = 0; i <= columns; i++)
	{
		pointer[i] = new int[rows];
	}
	std::cout << "what index do you want to test?" << std::endl;
	std::cin >> columns;
	std::cout << pointer[columns][columns];

	delete[] pointer[columns];
	delete[] pointer;*/

	/*int *p,*p2,*p3;
	int test=10;

	p3 = &test;

	std::cout << p3 << " " << *p3 << " " << sizeof(p3) << " " << sizeof *p3 << std::endl;

	int Tab[5],Tab2[5];
	p = Tab;
	*p = 10;
	std::cout << *p << " ";
	p = &Tab[0];
	std::cout << *p << std::endl;
	Tab[1] = 420;
	p++;
	std::cout << *p << std::endl;

	int Var = 10;
	std::cout << Var;
	Foo(Var);
	std::cout << " " << Var << std::endl;*/

	/*float testfloat = 0;
	double testdouble = 0;
	testfloat++;
	testdouble++;
	std::cout << testfloat << " " << testdouble << std::endl;*/

	/*Var == 11 ? Var = 12 : Var = 10;
	std::cout << Var << std::endl;*/



	getchar();
	return 0; 
}



