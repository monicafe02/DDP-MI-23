#include <iostream>
using namespace std;

int main (){
   int bilangan[10]= {12, 45, 40, 23, 44, 45, 78, 90, 103, 29};
   int i;
   int min=1000;//asumsi paling minimum
   int max=-1000;//asumsi paling maximum
       for(i=0; i<10; i++) 
       {
            if(bilangan[i]>max)
            {
                 max= bilangan[i];
            }
            if(bilangan[i]<min)
            {
                min= bilangan[i];
            }
       cout<<"Nilai maksimum:"<<max<<endl;
       cout<<"Nilai minimum:"<<min<<endl;

       }
}