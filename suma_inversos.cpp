#include <iostream>
#include <cmath>

int main (void){

    double result=0;
    int  n=0;

    for(n = 10; n <=100; n = n+1)
    {
        if(n%2!=0)
        {

          result= result +(1.0/n) ;
          std::cout<<n<<" "<<result<<"\n";

          //El "cout" está dentro del "for" para tener registro de como avanza la suma mientras avanza del 10 al 100

        }

            }

    return 0;

                 }
