#include <iostream>

using namespace std;

int main()
{
    int arr[]= {5,7,9,15,84,93};
    int input,check=0;
    cout<<"Please Enter an element to search: ";
    cin>>input;


    for(int i=0; i<6; i++)
    {
        if(input==arr[i])
        {
            check=1;
        }
    }

    if (check==1)
    {
        cout<<"Data is Found";
    }
    else
    {
        cout<<"Data is Not Found";
    }
    return 0;
}
