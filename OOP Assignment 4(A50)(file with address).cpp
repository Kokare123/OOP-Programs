#include <iostream>
#include <stdlib.h>
#include <fstream>
/* Program Statement :-
 * Write a C++ program that creates an output file, writes information to it, closes the file
andopen it again as an input file and read the information from the file.
*/

class Employee
{
    char name[20];
    int ID;
    double salary;
	public:
    	void accept()
		{
        	std::cout << "\n Enter Name : ";
        	std::cin >> name;
        	std::cout << "\n Enter Id : ";
        	std::cin >> ID;
        	std::cout << "\n Enter Salary : ";
        	std::cin >> salary;
    	}
    	void display()
		{
       		std::cout << "\n Name : " << name ;
       		std::cout << "\n ID : " << ID ;
       		std::cout << "\n Salary : " << salary ;
    	}
};
int main(int argc, char** argv) 
{
    Employee emp[5];
    std::fstream file;
    file.open("C:\\Users\\pk\\Desktop\\A50\\OOP\\OOP.txt");
    int n = 0;
    std::cout << "\n Enter the no of information of employees you wanna store";
   
    std::cin >> n ;
    int n_c = n;
    int i = 0;
    while(n--)
	{
        std::cout << "\n Enter the information of employee No :- " << i + 1<< "\n Employee" << std::endl;
    	emp[i].accept();
    	file.write((char*) &emp[i],sizeof(emp[i]));
    	i++;
    }
    file.close();
    file.open("C:\\Users\\pk\\Desktop\\A50\\OOP\\OOP.txt", std::ios::in);
    i =0;
    while(n_c--)
	{
        file.read((char*)&emp[i],sizeof(emp[i]));
        emp[i].display();
        i++;
    }
    file.close();
	return 0;
}
