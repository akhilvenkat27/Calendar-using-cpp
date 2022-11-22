#include <bits/stdc++.h>
using namespace std;
int leap(int year)
{
    if((year%4==0 && year%100!=0)||year%400==0)
        return 1;
    else
        return 0;
}
int main() {
   int ref=1900,base,leaps=0,day=0,total,diff,in,fi;
   long long int i,j,k,l,m,n,q;
  cout<<"Enter the year name :"<<endl;
   cin>>in;
  cout<<"    ****** "<<in<<" calendar******"<<endl;
    diff=in-ref;
    while(ref<in)
    {
        if(leap(ref))
            leaps++;
        ref++;
    }
    total=abs(diff-leaps)*365+leaps*366;
    day=(total)%7;
   vector<int>month={31,28,31,30,31,30,31,31,30,31,30,31};
   if(leap(in))
   month[1]=29;
   vector<string>month_nam={"january","february","march","april","may","june","july","august","september","october","november","december"};
   vector<string>week={"mon","tue","wed","thu","fri","sat","sun"};
   long long int day_c=0,total_days,c=0,top=0,t1=day;
   total_days=12;
   while(day_c<total_days)
   {
     vector<vector<int>>week_c;
     cout<<"                 "<<month_nam[c]<<" "<<endl;
     cout<<endl;
     c++;
     for(i=0;i<6;i++)
     {
         vector<int>q;
         for(j=0;j<7;j++)
         {
             q.push_back(0);
         }
         week_c.push_back(q);
     }
     for(i=0;i<week.size();i++)
     cout<<week[i]<<"   ";
     cout<<endl;
     long long int c1=0;
     for(i=0;i<month[top];i++)
     {
         week_c[c1][day]=i+1;
         day++;
        if(day==7)
         c1++;
         day=day%7;
     }
     top++;
   for(i=0;i<6;i++)
     {
         for(j=0;j<7;j++)
         {
             if(week_c[i][j]==0)
             cout<<"      ";
             else
             {
                 if(week_c[i][j]<10)
                 cout<<week_c[i][j]<<"     ";
                 else
                 cout<<week_c[i][j]<<"    ";
             }
         }
         cout<<endl;
     }
     week_c.clear();
       day_c++;
   }
return 0;
}
