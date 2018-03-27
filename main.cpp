#include <iostream>

using namespace std;

int main()
{
 int x;
 cin >> x;
 bool w=1;
 while (x<=100);
 {
     for (int i=2 ;i<=x ; i++)
        if (x%i==0)
            w=0;

 }
 if(w==1)
    cout << "prime";
 else
    cout << "not prime";
}
