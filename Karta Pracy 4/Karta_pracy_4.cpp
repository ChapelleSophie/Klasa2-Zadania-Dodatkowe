#include <iostream>
#include<cmath>
#include<stdio.h>
#include <cstdlib>
using namespace std;

int moja_funkcja()
{
    cout << "[1] - dzielnik"<<endl; //czy d jest dzielnikiem liczby n
    cout << "[2] - suma"<< endl; //suma cyfr danej liczby n
    cout << "[3] - funkcje "<< endl; //3 funckje
    cout << "[0] - wyjscie" << endl;
}

bool dzielnik(int n, int d)

    {
     for(int i=0;i<=n;i++)
     {
         if(n%d==0) return true;
     }    return false;

 }



int suma(int n)
{   int wynik=0;
    do
  {

      (wynik=wynik+n%10);
         n=n/10;
  }
while (n!=0); return wynik;


}


int pierwsza(int n)
{
      if(n%2==0);
}

int druga (int n)
{
    n=n*3;

}

int trzecia(int n)
{
    n=n*0.4;
   cout<< pierwsza(n);
}

int main()
{
cout << "KARTA PRACY NR.4\n\t ____\n\t|MENU|\n\n";
    moja_funkcja();
    cout<<"\nWybierz zadanie:\n\n";
    int liczba;
    do
    {
        moja_funkcja();
        cin>>liczba;
        switch(liczba)
        {

        case 1:



             {
     int a,b;
     cin >>a>>b;
     if (a%b==0) cout << "TAK\n";
     else cout <<"NIE\n";
 } break;


        case 2:

            { int n;
            cin >> n;
             cout << suma(n)<<"\n";

            }break;

        case 3:

            {
                int n;
                cin>>n;
                cout<<pierwsza(n)<<endl;
               if (n%2==0) cout <<druga(); cout<<endl;
               else if (n%2==1) cout<< trzecia(); cout<<endl;
            }









        }
    } while( liczba != 0 );
}






