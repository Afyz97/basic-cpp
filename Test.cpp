#include <iostream>
using namespace std;

int x = 10;
int maxnum(int []);
int minnum(int []);
void primenum(int []);
void evenodd(int []);

int main()
{
	int num[10];
	int max, min;
	int nummod;
	int mod[10] = {0};
	int rep = 0;
	char resp = 'Y';
	do
	{
		system("CLS");
		cout << "Rep #" << rep+1 << endl << endl;
		cout << "Enter 10 numbers from 101 to 499:" << endl;
		
		for (int i = 0 ; i < x ; i++)
		{
			cin >> num[i];
			
			if (num[i] < 101 || num[i] > 499)
			{
				cout << "Invalid Number. Please enter again!" << endl;
				i--;
			}
		}
		cout << endl;
		cout << "Maximum Number is: " << maxnum(num) << endl << endl;
		cout << "Minimum Number is: " << minnum(num) << endl << endl;
		primenum(num);
		cout << endl;
		evenodd(num);
		cout << endl;
		
		for (int i = 0 ; i < x ; i++)
		{
			nummod = num[i]%7;
			switch(nummod) 
			{
				case 0 : mod[0]++; break;
		    	case 1 : mod[1]++; break;
		    	case 2 : mod[2]++; break;
		    	case 3 : mod[3]++; break;
		    	case 4 : mod[4]++; break;
		    	case 5 : mod[5]++; break;
		    	case 6 : mod[6]++; break;
		    	case 7 : mod[7]++; break;
		    	case 8 : mod[8]++; break;
		    	case 9 : mod[9]++; break;
			}
		}
		
		for (int i = 0 ; i < 10 ; i++)
		{
			cout << "Modulus of " << i << " has " << mod[i] << endl;
		}
		
		cout << endl;
		
		rep++;
		
		cout << "Do you want to repeat? Y or N: ";
		cin >> resp;
		
		if (rep > 9)
			break;
	}while (resp == 'y' || resp == 'Y');	
	
	cout << "You have reach maximum tries!" << endl;
	return 0;
}

int maxnum(int num[])
{
	int temp;
	
	temp = num[0];
	
	for (int i = 1 ; i < x ; i++)
	{
		if (num[i] > temp)
		temp = num[i];
	}
	
	return temp;
}

int minnum(int num[])
{
	int temp;
	
	temp = num[0];
	
	for (int i = 1 ; i < x ; i++)
	{
		if (num[i] < temp)
		temp = num[i];
	}
	
	return temp;
}

void primenum(int num[])
{
	cout << "Prime Number:" << endl;
	for (int a = 0 ; a < x ; a++)
	{
		int i;
		bool isPrime = true;
		
		for(i = 2; i <= num[a] / 2; ++i)
		{
		    if(num[a] % i == 0)
		    {
				isPrime = false;
		        break;
			}
			
		}
		if (isPrime)
		{
			cout << num[a];
		}
		    cout << " ";
	}
	cout << endl;
	return;
}

void evenodd(int num[])
{
	int even = 0;
	int odd = 0;
	for (int i = 0 ; i < x ; i++)
	{
		if (num[i]%2 == 0)
		even++;
		
		else
		odd++;
	}
	
	cout << "Has " << even << " even numbers" << endl;
	cout << "Has " << odd << " odd numbers" << endl;
	
	return;
}


