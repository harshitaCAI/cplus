#include<bits/stdc++.h>
using namespace std;

int main()
{
      int a,b;
cin>>a>>b;
      int choice;
     cout<<"\nchoose 1 to add , 2 to subtract and 3 to multuply";
      cin>>choice;
      int ans;
      switch(choice)
      { 
       	     case 1: ans=a+b; break;
               case 2: ans=a-b; break;
       	case 3: ans=a*b; break;
      }
cout<<ans;

return 0;
}
