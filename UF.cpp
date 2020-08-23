#include <iostream>
using namespace std;
int find(int,int*);
void union_(int one,int two,int parent[])
{
    int x=find(one,parent);
    int y=find(two,parent);
    if(x!=y)
    {
        parent[x]=y;
    }
}
int find(int one,int parent[])
{
    if(parent[one]==one)
    return parent[one];
    return parent[one]=find(parent[one],parent);
}
int main() {
   int n;
   cin>>n;
   int parent[n+1];
   for(int i=1;i<=n;i++)
   parent[i]=i;
   union_(1,2,parent);
   union_(2,3,parent);
   union_(3,4,parent);
   union_(4,5,parent);
   for(int i=1;i<=5;i++)cout<<parent[i]<<" ";
   find(1,parent);cout<<"\n";
   for(int i=1;i<=5;i++)cout<<parent[i]<<" ";
   return 0;
}
