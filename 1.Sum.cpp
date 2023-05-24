#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   
   double sum=0.0;
   int number;
   //enter number of terms you want in expression:"1-1/2^2+1/3^3...n"
   cout<<"enter number for getting sum";
   cin>>number;
   cout<<endl;
   for(int i=1;i<=number;i++){
       if (i%2==0){
        sum -= 1/pow(i,i);
        
       }
       else{sum+=1/pow(i,i);
        
       }
   }
   cout<<sum;
   

    return 0;
}
