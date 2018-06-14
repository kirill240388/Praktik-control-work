
#include <iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int x;
	cout << "Хотите стать профессиональным музыкантом?1=да / 0=нет/ 2-не знаю" << endl;
	cin >> x;
	if (x == 1)
	{
		cout << "Вы богаты?" << endl;
		cin >> x;
		if (x == 1)
		{
			cout << "Любите отрываться?" << endl;
			cin >> x;
			if (x == 1)
			{
				cout << "Пиво пьёте?" << endl;
				cin>>x;
				{
					if (x == 1)
					{
						cout << "Хотите играть классику?" << endl;
						cin >> x;
						if (x == 1)
						{
							cout << "Готовы работать круглые сутки?" << endl;
							cin >> x;
							if (x == 1)
							{
								cout << "Гобой" << endl;
							}
							if (x == 0)
							{
								cout << "Готовы что будут проблемы с работой даже если вы круто играете?" << endl;
								cin >> x;
								if (x == 1)
								{
									cout << "Кларнет" << endl;
								}
								if (x == 0)
								{
									cout << "Валторна" << endl;
								}
							}
							
						}
						if (x == 2)
						{
							cout << "Тромбон"<<endl;
						}
						if (x == 0)
						{
							cout << "...а джаз?" << endl;
							cin >> x;
							if (x == 1)
							{
								cout << "Саксофон"<<endl;
							}
							if (x == 0)
							{
								cout << "У вас есть немецкие корни?" << endl;
								cin >> x;
								{
									if (x == 1)
									{
										cout << "Труба" << endl;
									}
									if (x == 0)
									{
										cout << "Дудук" << endl;//
									}
								}
							}
						}
						
					}
					if (x == 0)
					{
						cout << "Вы страстная натура?" << endl;
						if (x == 1)
						{
							cout << "Вилончель" << endl;
						}
						if (x == 0)
						{
							cout << "Дорма" << endl;
						}
					}
				}
			}
			if (x == 0)
			{
				cout << "Готовы заниматься по 8 часов в день?" << endl;
				cin >> x;
				if (x == 1)
				{
					cout << "Хотите учить детей?" << endl;
					cin >> x;
					if (x == 1)
					{
						cout << "Флейта" << endl;
					}
					if (x == 0)
					{
						cout << "Скрипка" << endl;
					}
				}
				if (x == 0)
				{
					cout << "Знаете ноты?" << endl;
					if (x == 1)
					{
						cout << "Арфа" << endl;
					}
					if (x == 0)
					{
						cout << "Альт" << endl;
					}
				}
			}
		}
		if (x == 0)
		{
			cout << "Любите деньги?" << endl;
			cin >> x;
			if (x == 1)
			{
				cout << "Забудьте о музыке" << endl;
			}
			if (x == 0)
			{
				cout << "Любите отрываться?" << endl;
				cin >> x;
				if (x == 1)
				{
					cout << "Пиво пьёте?" << endl;
				}
			}
		}
	}
	if (x == 0)
	{
		cout << "Хотите встречаться с девушками?" << endl;
		cin >> x;
		if (x == 1)
		{
			cout << "Любите глупышек?" << endl;
			cin >> x;
			if (x == 1)
			{
				cout << "Любите выпить?" << endl;
				cin >> x;
				if(x==1)
				{
					cout << "Гитара" << endl;
				}
				if (x == 0)
				{
					cout << "Фортепиано" << endl;
				}
			}
			if (x == 0)
			{
				cout << "Вы парень?" << endl;
				cin >> x;
				if (x == 1)
				{
					cout << "Оперный певец" << endl;
				}
				if (x == 0)
				{
					cout << "Ударные" << endl;
				}
			}
		}
		if (x == 0)
		{
			cout << "Хотите встречаться с парнями?" << endl;
			cin >> x;
			if (x == 1)
			{
				cout << "Вы парень?"<<endl;
				cin >> x;
				if (x == 1)
				{
					cout << "Оперный певец" << endl;
				}
				if (x == 0)
				{
					cout << "Ударные" << endl;
				}
			}
			if (x == 0)
			{
				cout << "Фагот" << endl;
			}
		}
		
	}





}

