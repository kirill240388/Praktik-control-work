
#include <iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int x;
	cout << "������ ����� ���������������� ����������?1=�� / 0=���/ 2-�� ����" << endl;
	cin >> x;
	if (x == 1)
	{
		cout << "�� ������?" << endl;
		cin >> x;
		if (x == 1)
		{
			cout << "������ ����������?" << endl;
			cin >> x;
			if (x == 1)
			{
				cout << "���� �����?" << endl;
				cin>>x;
				{
					if (x == 1)
					{
						cout << "������ ������ ��������?" << endl;
						cin >> x;
						if (x == 1)
						{
							cout << "������ �������� ������� �����?" << endl;
							cin >> x;
							if (x == 1)
							{
								cout << "�����" << endl;
							}
							if (x == 0)
							{
								cout << "������ ��� ����� �������� � ������� ���� ���� �� ����� �������?" << endl;
								cin >> x;
								if (x == 1)
								{
									cout << "�������" << endl;
								}
								if (x == 0)
								{
									cout << "��������" << endl;
								}
							}
							
						}
						if (x == 2)
						{
							cout << "�������"<<endl;
						}
						if (x == 0)
						{
							cout << "...� ����?" << endl;
							cin >> x;
							if (x == 1)
							{
								cout << "��������"<<endl;
							}
							if (x == 0)
							{
								cout << "� ��� ���� �������� �����?" << endl;
								cin >> x;
								{
									if (x == 1)
									{
										cout << "�����" << endl;
									}
									if (x == 0)
									{
										cout << "�����" << endl;
									}
								}
							}
						}
						
					}
					if (x == 0)
					{
						cout << "�� ��������� ������?" << endl;
						if (x == 1)
						{
							cout << "���������" << endl;
						}
						if (x == 0)
						{
							cout << "�����" << endl;
						}
					}
				}
			}
			if (x == 0)
			{
				cout << "������ ���������� �� 8 ����� � ����?" << endl;
				cin >> x;
				if (x == 1)
				{
					cout << "������ ����� �����?" << endl;
					cin >> x;
					if (x == 1)
					{
						cout << "������" << endl;
					}
					if (x == 0)
					{
						cout << "�������" << endl;
					}
				}
				if (x == 0)
				{
					cout << "������ ����?" << endl;
					if (x == 1)
					{
						cout << "����" << endl;
					}
					if (x == 0)
					{
						cout << "����" << endl;
					}
				}
			}
		}
		if (x == 0)
		{
			cout << "������ ������?" << endl;
			cin >> x;
			if (x == 1)
			{
				cout << "�������� � ������" << endl;
			}
			if (x == 0)
			{
				cout << "������ ����������?" << endl;
				cin >> x;
				if (x == 1)
				{
					cout << "���� �����?" << endl;
				}
			}
		}
	}
	if (x == 0)
	{
		cout << "������ ����������� � ���������?" << endl;
		cin >> x;
		if (x == 1)
		{
			cout << "������ ��������?" << endl;
			cin >> x;
			if (x == 1)
			{
				cout << "������ ������?" << endl;
				cin >> x;
				if(x==1)
				{
					cout << "������" << endl;
				}
				if (x == 0)
				{
					cout << "����������" << endl;
				}
			}
			if (x == 0)
			{
				cout << "�� ������?" << endl;
				cin >> x;
				if (x == 1)
				{
					cout << "������� �����" << endl;
				}
				if (x == 0)
				{
					cout << "�������" << endl;
				}
			}
		}
		if (x == 0)
		{
			cout << "������ ����������� � �������?" << endl;
			cin >> x;
			if (x == 1)
			{
				cout << "�� ������?"<<endl;
				cin >> x;
				if (x == 1)
				{
					cout << "������� �����" << endl;
				}
				if (x == 0)
				{
					cout << "�������" << endl;
				}
			}
			if (x == 0)
			{
				cout << "�����" << endl;
			}
		}
		
	}





}

