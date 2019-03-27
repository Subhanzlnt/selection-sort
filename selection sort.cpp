#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

main()
{
    int n,k,l,z,pos,tampung;
    int nilai[20];

    cout<<"Jumlah inputan : ";
    cin>>n;
    for (int k=0; k<n; k++)
    {
        cout<<"Nilai ke "<<(k+1)<<" : ";
        cin>>nilai[k];
    }
   cout<<endl;
   cout<<"Sebelum Sorting"<<endl;
   for (int k=0; k<n; k++)
   {
        cout<<nilai[k]<<" ";
   }
   cout<<endl<<endl;

for (int k=0; k<n-1;++k)
 {
  pos=k;
  for (int l=k+1; l<n;++l)
    {
        if (nilai[l]<nilai[pos])
        {
            pos=l;
        }
    }
  if (pos !=k)
    {
        tampung=nilai[pos];
        nilai[pos]=nilai[k];
        nilai[k]=tampung;
    }
  cout<<"langkah ke "<<k+1<<endl;
    for (int z=0; z<n;++z)
    {
        cout<<nilai[z]<<" ";
    }
  cout<<endl<<endl;
 }

    cout<<"Setelah sorting : \n";
    for (int k=0; k<n;++k)
    {
        cout<<nilai[k]<<" ";
    }

return 0;
}
