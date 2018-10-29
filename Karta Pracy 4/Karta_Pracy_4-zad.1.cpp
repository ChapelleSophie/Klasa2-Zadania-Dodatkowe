#include <iostream>
#include<cmath>
using namespace std;
f()
{
    cout << "KARTA PRACY NR.4\n" << endl;
}

//1//
   ///suma kwadratow dwoch liczb   //karta pracy nr.1
       int suma(int a, int b)
      {
         return (a*a)+(b*b);
         }

     int main()
{
    int a,b;
    cin>>a>>b;
    cout <<suma (a,b);

}








//2//
/// szescian roznicy dwoch liczb //karta pracy nr.1

int roznica(int a,int b)
{
    return (a*a*a)-(b*b*b);
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout <<roznica(a,b);
}









//3//
/// czy dana liczba jest podzielna przez 3 //karta pracy nr.2


bool podzielna(int a)
{
   for (int i=0;i<=a;i++)
   {
       if (a%3==0) return true;

   } return false;
}

int main()
{
    int a;
    cin>>a;
    if (podzielna(a)) cout << "TAK";
    else cout <<"NIE";

}



//*3*//
///drugi sposob -||-

 double podzielna(int a)
 {
     return a/3;
 }
int main()
{
    int a;
    cin>>a;
    if (a%3==0) cout << "TAK";
    else cout << "NIE";
}











//4//

/// czy osoba jest pelnoletnia //karta pracy nr.2


bool pelnoletni(int a)
{
   {if(a>=18) return true;
   }return false;


}

int main()
{
    int a;
    cin>>a;
    if (pelnoletni(a))cout << "TAK";
    else cout<<"NIE";
}










//5//
///suma wszystkich liczb dwucyfrowych//karta pracy nr.3

 void suma_liczb(int a)
 {

        for (int i=10; i<100;i++)
        a=a+i;
       cout <<a;

 }
 int main()
 {
     int a=0;
      suma_liczb(a);

 }


