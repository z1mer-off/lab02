#include <iostream>
int main(int argc,char** argv)
{
	string a; //переменная для хранения имени пользователя
	std::cout<<"Введите имя пользователя: ";
	std::cin>>a;
	std::cout<<"\nHello world from "<<a<<endl;
}