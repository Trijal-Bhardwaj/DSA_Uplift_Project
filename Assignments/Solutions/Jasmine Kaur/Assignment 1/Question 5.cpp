#include<iostream>
using namespace std;
 int main()
 {
   int i,j,k,counts,n=5;
   for(i=0;i<4;i++)
   {
       counts=1;
       for(j=0;j<=i;j++)
       {

           cout<<counts<<"";

           counts++;}

       for(k=0;k<n;k++)
       {

           cout<<" ";

       }
       counts=counts-1;
       for(j=0;j<=i;j++)
       {
           {
               if(n<=0)
              {

               counts=counts-1;
                for(j=1;j<=i-1;j++)
                {
                     cout<<counts<<"";
                     counts--;
                }}
           }
           cout<<counts<<"";

           counts--;}


       n=n-2;

       cout<<endl;
   }

   return 0;
 }
