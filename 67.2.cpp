#include<iostream>
#include<fstream>
#include<math.h>
using namespace std;

int fib(int n)
{
	if(n<3)
		return 1;
	
	return fib(n-2)+fib(n-1);
}

int pierwsza(long long liczba)
{
	if(liczba<=1)
	return 0;
	
	for(int i=2;i<=liczba/2;i++)
	{
		if(liczba%i==0){
			return 0;
		}
	}
	return 1;
	
}

int main()
{
	ofstream plik1;
	plik1.open("plik1.txt");
	unsigned long long n;
	for(int i=10;i<=40;i+=10){

	cout<<"Podaj nr wyrazu ciagu: ";
	cin>>n;
	
	cout<<n<<" wyraz ciagu ma wartosc "<<fib(n)<<endl;
	
	
	plik1<<fib(n)<<endl;
	}
	unsigned long long a;
	
	cout<<"Podaj dlugosc ciagu:"<<endl;
	cin>>a;
	for(int j=2;j<=a;j++)
	{

	
	
	cout<<"Kolejny wyraz ciagu ma wartosc "<<fib(j)<<endl;
	
	
	
	plik1<<fib(j)<<endl;
	}
	
for(int y=0;y<=a;y++)
{
	
	if(pierwsza(fib(y))){	
	cout<<fib(y)<<endl;
	
	plik1<<fib(y)<<endl;
	}
		
	
	

}
	
	
	return 0;
	
	
}

