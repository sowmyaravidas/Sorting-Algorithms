#include<iostream>
using namespace std;
void insertion_sort(int[],int);
int main()
{
int i;
int number_of_elements;
cout<<"Enter the number of elements \n";
cin>>number_of_elements;

int unsorted[number_of_elements];
for(i=1;i<=number_of_elements;i++)
{
	cin>>unsorted[i];
}

insertion_sort(unsorted,number_of_elements);


for(i=1;i<=number_of_elements;i++)
{

    cout<<unsorted[i];
}

return 0;
}

void insertion_sort(int unsorted[],int number_of_elements)
{

int i,j,key;
for(j=2;j<=number_of_elements;j++)
{
key=unsorted[j];
i=j-1;
while(i>0 && unsorted[i]>key)
{
unsorted[i+1]=unsorted[i];

i=i-1;
}
unsorted[i+1]=key;
}
}

