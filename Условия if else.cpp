#include <iostream>
using namespace std;
 
 int main(void)
 
 {
	
	int pass = 12345;
	
    cout << " Введите пароль: ";
	cin >> pass;
	
	if (pass != 12345)
	{	
		std::cout << "Пароль не верен.\n";
	}  
	else  
	{
		std::cout << "Пароль верен.\n";
	int a, b, c;
	 a = 3;
	 b = 3;
	 c = a + b;
	 cout << "Сложение a + b = " << c << endl;
     return 0;	
	}
 }
  