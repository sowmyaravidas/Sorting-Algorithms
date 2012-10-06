#include<iostream>
using namespace std;

void selection_sort(int[],int n);
int main()
{
    int i;
    int number_of_elements;
    cout<<"Enter n \n";
    cin>>number_of_elements;

    int unsorted[number_of_elements];
    cout<<"Enter the elements \n";
    for(i=0;i<number_of_elements;i++)
    {
        cin>>unsorted[i];
        cout<<endl;
    }

    selection_sort(unsorted,number_of_elements);

    cout<<"sorted \n";
    for(i=0;i<number_of_elements;i++)
    {
        cout<<unsorted[i]<<"\n";
    }
    
return 0;
}


void selection_sort(int unsorted[],int number_of_elements)
{
    int minimum;
    int temp;   
    int minimum_position;
    for(int i=0;i<number_of_elements;i++)
    {
     minimum=unsorted[i];
     for(int j=i+1;j<number_of_elements;j++)
    {
      if(minimum>unsorted[j])
      {
          minimum=unsorted[j];
          minimum_position=j;

      temp=unsorted[i];
      unsorted[i]=unsorted[minimum_position];
      unsorted[minimum_position]=temp;

      }
    }
    }
}










