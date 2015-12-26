#include "stdafx.h"
#include <iostream>
#include "queue.h"
#include <stdio.h>
#include <conio.h>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	Node *first = NULL, *last = NULL;
	int val = 0;

	//Предотвратить запись нуля
	cout << "0. Создать очередь.\n";
	cout << "1. Добавить элемент.\n";
	cout << "2. Удалить элемет\n";
	cout << "3. Вывести очередь\n";


	int n;
	while (1)
	{

		cin >> n;
		switch (n)
		{
		case 0:
		{
            cin >> val;
			add_first(val, &first, &last);
			cout << "Готово.\n";
			break;
		}

		case 1:
		{
			cout << "Введите элемент\n";
			do
			{
				cin >> val;
				add(val, &first);
			} while (val);
			cout << "Готово.\n";
			break;
		}

		case 2:
		{
            if (isEmpty(first))
            {
                cout<<"Пусто\n";
            }
            else
            {
			    del(&first);
            }
            cout << "Готово.\n";
			break;
		}

		case 3:
		{   
            if (isEmpty(first))
            {
                cout<<"Пусто";
            }
            else
            {
                print(&first);
            }
			
			cout << "\nГотово.\n";
			break;
		}

		}

	}

	
	_getch();

	return 0;
}
