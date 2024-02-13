
#include <iostream>

using namespace std;

int main()
{
    int arr[]={5,7,9,15,84,93};
    int input,low,high,mid,check;
    low=0; high=5;
    cout<<"Please Enter an element to search: ";
    cin>>input;

    while(low<=high)
    {
        mid=(low+high)/2;
        if(input==arr[mid])
        {
            check=1;
            break;
        }
        else if (input < arr[mid]) high = mid-1;
        else
        {
            low = mid+1;
        }
    }

    if(check==1) cout << "Data is Found";
    else cout << "Data is not found";

    return 0;
}
