// 8LR.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include "stdafx.h"
int exist=0 ;
char x;

struct job 
{
	char lastname[30];
	char name[30];
	char fathername[30];
	int departnumber;
	char post[30];
	int workexp;
};
void input(job *ptrJob, int i);
job * jobmemory(job *ptrJob);
int menu()
{
	system("cls");
	//
	long long x = 0;
	std::cout << "Members info " << std::endl << "--------------" << std::endl;
	std::cout << "Choose menu feature(number) " << std::endl << "--------------" << std::endl;
	std::cout << "1. Add members " << std::endl;
	std::cout << "2. Display members " << std::endl;
	std::cout << "3. Find a member " << std::endl;
	std::cout << "4. Display members with exp over 20 years " << std::endl;
	std::cout << "5 / Other symbols for exit" << std::endl;
	std::cin >> x;
	if (x > 0 && x < 5)
		return x;
	else 
		return 0;
}

void display(job *ptrJob)
{
	system("cls");
	if (exist == 0)
	{
		std::cout << "Database is empty, first enter the data" << std::endl;
		system("pause");
		system("cls");
		return;
	}
	for (int i = 0; i < exist; i++)
	{
		std::cout << "Member # " << i + 1 << std::endl;
		std::cout << "Last Name: " << ptrJob[i].lastname << std::endl;
		std::cout << "Name: " << ptrJob[i].name << std::endl;
		std::cout << "Father Name: " << ptrJob[i].fathername << std::endl;
		std::cout << "Department #: " << ptrJob[i].departnumber << std::endl;
		std::cout << "Post: " << ptrJob[i].post << std::endl;
		std::cout << "Experience: " << ptrJob[i].workexp << std::endl;
		for (int j = 0; j < 40; j++)
		{
			std::cout << "=";
		}
		std::cout << std::endl;
	}
	system("pause");
	system("cls");
}
job * jobmemory(job *ptrJob)
{	
	if (exist == 0)
	{
		ptrJob = new job[exist+1];
	}
	else
	{
		job *tmpjob = new job[exist + 1];
		for (int i=0; i<exist; i++)
		{
			tmpjob[i] = ptrJob[i];
		}
		delete [] ptrJob;
		ptrJob = tmpjob;
	}
	return ptrJob;
}
void input(job *ptrJob, int i)
{
	system("cls");
	std::cin.ignore();
	std::cout << "Last name: ";
	std::cin.getline(ptrJob[i].lastname, 30);
	std::cout << "Name: ";
	std::cin.getline(ptrJob[i].name, 30);
	std::cout << "Father name: ";
	std::cin.getline(ptrJob[i].fathername, 30);
	std::cout << "Department number: ";
    std::cin >> ptrJob[i].departnumber;
	std::cout << "Post: ";
	std::cin.ignore();
	std::cin.getline(ptrJob[i].post,30);
	std::cout << "Work experience(how much years works): ";
	std::cin >> ptrJob[i].workexp;
}
job * addstruct(job *ptrJob)
{
	char YN;
	do 
	{
		ptrJob = jobmemory(ptrJob);
		input(ptrJob, exist);
		exist++;
		std::cout << "Press N/n for exit or any symbol for add another one member"<<std::endl;
		std::cin >>YN;
	} while (YN != tolower('n'));
	system("cls");
	return ptrJob;
}
void search(job *ptrJob)
{
	system("cls");
	if (exist == 0)
	{
		std::cout << "Database is empty, first enter the data" << std::endl;
		system("pause");
		system("cls");
		return;
	}
	bool flag = false;
		char templastname[20];
		std::cout << "Enter the last name: ";
		std::cin.ignore();
		std::cin.getline(templastname, 20);
		int i;
		for (i = 0;i<exist; i++)
		{
			if (strcmp(ptrJob[i].lastname, templastname) ==0)
			{
				flag = true;
				std::cout << "Member # " << i + 1 << std::endl;
				std::cout << "Last Name: " << ptrJob[i].lastname << std::endl;
				std::cout << "Name: " << ptrJob[i].name << std::endl;
				std::cout << "Father Name: " << ptrJob[i].fathername << std::endl;
				std::cout << "Department #: " << ptrJob[i].departnumber << std::endl;
				std::cout << "Post: " << ptrJob[i].post << std::endl;
				std::cout << "Experience: " << ptrJob[i].workexp << std::endl << std::endl;
				std::cout << "=======================================" << std::endl;
			}
		}
		if ((i == exist) && flag == true)
		{
			system("pause");
			system("cls");
			return;
		}
		if (flag == false) {
			std::cout << "Member not found." << std::endl;
			system("pause");
			system("cls");
			return;
		}
	}
void swapEl(job *ptrJob, int i)
{
	job buff;
	buff = ptrJob[i];
	ptrJob[i] = ptrJob[i-1];
	ptrJob[i-1] = buff;
}
void sort(job *ptrJob)
{
	int leftMark = 1;
	int rightMark = exist - 1;
	while (leftMark <= rightMark)
	{
		for (int i = rightMark; i >= leftMark; i--)
			if (ptrJob[i-1].workexp > ptrJob[i].workexp) swapEl(ptrJob, i);
		leftMark++;
		for (int i = leftMark; i <= rightMark; i++)
			if (ptrJob[i-1].workexp > ptrJob[i].workexp) swapEl(ptrJob, i);
		rightMark--;
	}
}
void over20(job *ptrJob)
{
	system("cls");
	if (exist == 0)
	{
		std::cout << "Database is empty, first enter the data" << std::endl;
		system("pause");
		system("cls");
		return;
	}
	int i;
	std::cout << "The list of members with work exp over 20 years: " << std::endl<<std::endl;
	sort(ptrJob);
	for (i = 0; ptrJob[i].workexp > 20; i++)
	{
		std::cout << "Last Name: " << ptrJob[i].lastname << std::endl;
		std::cout << "Name: " << ptrJob[i].name << std::endl;
		std::cout << "Father Name: " << ptrJob[i].fathername << std::endl;
		std::cout << "Department #: " << ptrJob[i].departnumber << std::endl;
		std::cout << "Post: " << ptrJob[i].post << std::endl;
		std::cout << "Experience: " << ptrJob[i].workexp << std::endl << std::endl;
		std::cout << "=======================================" << std::endl;
	}
	system("pause");
}
int main()
{
	int exist = 0;

	int xs;
	job  *ptrJob= NULL;
	for (;;)
	{
		xs = menu();
		switch (xs)
		{
		case 1:	ptrJob = addstruct(ptrJob);
				break;
		case 2: display(ptrJob);
			break;
		case 3: search(ptrJob);
			break;
		case 4: over20(ptrJob);
				break;
		default: 
			return 0;
		}
		delete[] ptrJob;

	}
}



