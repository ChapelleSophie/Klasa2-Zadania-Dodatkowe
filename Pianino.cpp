#include <iostream>
#include <windows.h> //pamietac!!!!
using namespace std;

int main()
{
    {


        int x;

    while(x != 0)
    {        int C = 523;
             int D = 590;
             int E = 660;
             int F = 698;
             int G = 784;
             int A = 880;
             int H = 987;
             int J = 1050;

            cin >> x;

            if(x<=8)
            {



                if (x == 0) break;


                if(x == 1) Beep(C,300);
                if(x == 2) Beep(D,300);
                if(x == 3) Beep(E,300);
                if(x == 4) Beep(F,300);
                if(x == 5) Beep(G,300);
                if(x == 6) Beep(A,300);
                if(x == 7) Beep(H,300);
                if(x == 8) Beep(J,300);

            }
else
    {

    if (x == 9) // melodyjka
                {
        Beep(G,300);
        Beep(E,300);
        Beep(E,300);
        Beep(F,300);
        Beep(D,300);
        Beep(D,300);
        Beep(C,300);
        Beep(E,300);
        Beep(G,500);
        Beep(G,300);
        Beep(E,300);
        Beep(E,300);
        Beep(F,300);
        Beep(D,300);
        Beep(D,300);
        Beep(C,350);
        Beep(E,350);
        Beep(C,350);

    }




}



} }}

