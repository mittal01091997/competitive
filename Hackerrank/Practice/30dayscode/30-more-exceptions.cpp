#include <math.h>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

class myexception: public exception
{
  virtual const char* what() const throw()
  {
    return "n and p should be non-negative";
  }
} myex;

//Write your code here
class Calculator  {
    public:
    int power (int n, int p) {
        if (n < 0 || p < 0) {
            throw myex;
        }
        return pow(n, p);
    }
};

int main()
{
    Calculator myCalculator=Calculator();
    int T,n,p;
    cin>>T;
    while(T--){
      if(scanf("%d %d",&n,&p)==2){
         try{
               int ans=myCalculator.power(n,p);
               cout<<ans<<endl; 
         }
         catch(exception& e){
             cout<<e.what()<<endl;
         }
      }
    }
    
}