#include <iostream>
using namespace std;

void heart()
{
	cout << "\r";
	int n = 5;
	for (int i = 2; i <= n; i++)
	{
		cout << char(186)<<"\t\t\t";
		for (int j = n; j >= i; j--)
		{
			cout << " ";
		}
		for (int k = 1; k <= (2 * i - 1); k++)
		{
			cout << char(3);
		}
		for (int j = i; j <= (2 * n - i); j++)
		{
			cout << " ";
		}
		for (int k = 1; k <= (2 * i - 1); k++)
		{
			cout << char(3);
		}
		cout << "\t\t\t\t\t" << char(186);
		cout << endl;
	}
	for (int i = 2 * n; i >= 1; i--)
	{
		cout << char(186) << "\t\t\t";
		for (int j = 2 * n; j >= i; j--)
		{
			cout << " ";
		}
		for (int k = 1; k <= (2 * i - 1); k++)
		{
			cout << char(186);
		}
		cout << "\r";
		cout << "\t\t\t\t\t\t\t\t\t\t" << char(186)<<endl;
	}
	cout << char(186) << "\t\t\t\t\t\t\t\t\t\t" << char(186) << endl;
}

void I()
{
	cout << endl;
	for (int i = 1; i <= 8; i++)
	{
		cout << char(186);
		cout << "\t\t";
		for (int j = 1; j <= 11; j++)
		{
			if (i == 1 || i == 2 || i == 7 || i == 8)
			{
				cout << char(219);
			}
			else
			{
				if (j == 5 || j == 6 || j == 7)
				{
					cout << char(219);
				}
				else
				{
					cout << " ";
				}
			}
		}
		cout <<"\t\t\t\t\t\t\t"<< char(186) << endl;
	}
	cout << char(186) << "\t\t\t\t\t\t\t\t\t\t" << char(186) << endl;
}

void c()
{
	cout << "\r";
	for (int i = 1; i <= 8; i++)
	{
		cout << char(186);
		cout << "\t\t\t\t    ";
		for (int j = 1; j <= 10; j++)
		{
			if (i == 1 || i == 2 || i == 7 || i == 8)
			{
				cout << char(178);
			}
			else
			{
				if (j == 1 || j == 2 || j == 3)
				{
					cout << char(178);
				}					
				else
				{
					cout << " ";
				}					
			}
		}
		cout << "\t\t\t\t\t" << char(186) << endl;
	}
	cout << char(186) << "\t\t\t\t\t\t\t\t\t\t" << char(186) << endl;
}

void p()
{
	for (int i = 1; i <= 9; i++)
	{
		cout << char(186);
		cout << "\t\t\t\t\t\t";
		for (int j = 1; j <= 10; j++)
		{
			if (i == 1 || i == 2 || i == 5 || i == 6)
			{
				cout << char(177);				
			}
			else if (i == 3 || i == 4)
			{
				if (j == 1 || j==2 || j==3 || j==8 || j == 9 || j == 10)
				{
					cout << char(177);
				}
				else if (j > 3 || j < 8)
				{
					cout << " ";
				}
			}
			else if(i == 7 || i == 8 || i == 9)
			{
				if (j == 1 || j == 2 || j==3)
				{
					cout << char(177);
				}
			}
		}
		cout << "\r";
		cout << "\t\t\t\t\t\t\t\t\t\t" << char(186) << endl;
	}
	cout << char(186) << "\t\t\t\t\t\t\t\t\t\t"<< char(186) << endl;
}

void e()
{
	for (int i = 1; i <= 8; i++)
	{
		cout << char(186);
		cout << "\t\t\t\t\t\t\t";
		for (int j = 1; j <= 10; j++)
		{
			if (i == 1 || i == 2 || i == 4 || i == 5 || i == 7 || i == 8)
			{
				cout << char(176);
			}
			else if(i == 3 || i == 6)
			{
				if (j == 1 || j == 2 || j==3)
				{
					cout << char(176);
				}
			}
		}
		cout << "\r";
		cout << "\t\t\t\t\t\t\t\t\t\t" << char(186) << endl;
	}
	cout << char(186) << "\t\t\t\t\t\t\t\t\t\t" << char(186) << endl;
}

int main(void)
{
	system("color c");
	cout << char(201);
	for(int i=1;i<80;i++)
	{
		cout << char(205);
	}
	cout << char(187);

	I();
	heart();
	c();
	p();
	e();

	cout << char(200);
	for (int i = 1; i < 80; i++)
	{
		cout << char(205);
	}
	cout << char(188);
	return 10;
}