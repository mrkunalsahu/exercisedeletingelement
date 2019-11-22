#include<iostream>
#include<list>
using namespace std;
int main()
{
	float t,item;
	list <float> l;
	cout<<"Enter the numbers( 0+ENTER to quit) :  ";
while(cin>>t&&t)
{
	l.push_back(t);
}

list<float>::iterator it;

cout<<"\nList : ";

for(it=l.begin();it!=l.end();++it)
{
	cout<<*it<<" ";
}


cout<<"\nEnter the element you want to delete : ";
cin>>item;

for(it=l.begin();it!=l.end();++it)
{
if(item==*it)
{	it=l.erase(it);//works same as ++it too so in nect iteration one element would be left ot be iterated
}
}

cout<<"\nAfter deletion element the list is : ";
for(it=l.begin();it!=l.end();++it)
{
	cout<<*it<<" ";
}
return 0;
}	