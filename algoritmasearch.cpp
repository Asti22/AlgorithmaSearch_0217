#include <iostream>
using namespace std;

int arr[20]; //array to be searched
int n; //number of elements in the array
int i; //index of array element

void input(){
    while (true) {
        cout << "Enter the number of elemnt in the array:";
        cin>>n;
        if((n>0) &&(n<=20))
          break;
        cout << "\nArray shoult have minimum 1 and maximum 20 elements.\n\n";
    }
    //accept array elements
    cout <<"\n--------------\n";
    cout <<"Enter array element \n";
    cout <<"------------------\n";
    for(i =0;i < n;i++);
    {
        cout <<"<" <<(i+1)<< ">";
        cin >> arr[i];
    }
}
 
 void LinearSearch()
 {
    char ch;
    int ctr; //number of comparisons
    int item;

    do{

        //accept the number to be saearched
        cout <<"\nEnter the element you want to search:";
        cin>>item;

        ctr=0;
        i=0; //step 2
        while (i < n)// step 3
        {
            ctr++;
            if (arr[i]== item)
            {
                cout <<"\n"<< item <<"found at position"<<(i+1) <<endl; //step 6
                break;
            }
        }
        
    }
 }

