#include<iostream>
using namespace std;
void bubble_sort(int[],int);
int main()
{
    int i;
    int number_of_elements;

    cout<<"Enter the number of elements";
    cin>>number_of_elements;
    int unsorted[number_of_elements];
    cout<<"Enter the elements \n";
    for(i=0;i<number_of_elements;i++)
    {
        cin>>unsorted[i];
    }

    bubble_sort(unsorted,number_of_elements);

    cout<<"Sorted order"<<endl;
    for(i=0;i<number_of_elements;i++)
    {
        cout<<unsorted[i]<<endl;
    }
    return 0;

}

void bubble_sort(int unsorted[],int n)
{

    int temp;
    for(int i=0;i<number_of_elements-1;i++)
    {
        
       for(int j=0;j<number_of_elements-i-1;j++)
        {
            if(unsorted[j]>unsorted[j+1])
            {
           
                temp=unsorted[j];
                unsorted[j]=unsorted[j+1];
                unsorted[j+1]=temp;
            }
        }



    }
}



        

