
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
using namespace std;

int main() 
{
    long double k ;
    long double val=0.0 , nval;

    for(k=1; k <= 1000000; k++)
    {
        val = val + ( powf (-1, k + 1) / (2 * k - 1) );
    }
    nval = 4 * val;

    printf ( "Approximate PI=%14.16Lf\n ", nval );
    printf ( "Built in PI=%14.300lf\n ", M_PI );   

    cout << setprecision (90);
    cout << "Approximate PI = " << nval << endl;
    cout << setprecision (90);
    cout << "Built in PI = " <<  M_PI << endl;   

    return 0;
}

int test ()
{
  printf ("test");
  switch (t)
    {
    case 1:
      break;

    case 3:
      break;
}
