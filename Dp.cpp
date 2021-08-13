#include<bits/stdc++.h>
using namespace std;

int t[1005][1005];

int solve(int x, int y, string s1, string s2) {
   if(x==0 || y==0)
      return 0;
   if(t[x][y] !=-1)
    return t[x][y];
   if(s1[x-1] == s2[y-1]){
      return t[x][y]=1+solve(x-1,y-1,s1,s2);
   }
   else{
      return t[x][y]= max(solve(x-1,y,s1,s2),solve(x,y-1,s1,s2));
   }
}
int main()
{
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);

   
  int x,y;
  cin>>x>>y;
  string s1,s2;
  cin>>s1>>s2;
  memset(t,-1,sizeof(t));
   cout<<solve(x,y,s1,s2);
   return 0;	
}