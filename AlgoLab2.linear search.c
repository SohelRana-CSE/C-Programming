
#include<stdio.h>
#include<conio.h>


void linear_search(int[], int);

int main() {
    int arr[]={11,22,33,44,55,66};
    int input;


	printf("Enter an Element to Search : ");
    scanf("%d", &input);


    linear_search(arr, input);
    getch();
}

void linear_search(int arr[],int input) {
   int check=0;

   for(int i=0; i<6; i++)
   {
       if(input==arr[i])
       {
           check=1;
       }
   }


   if(check==1){
    printf("Searching data is found\n\n\n");
   }
   else{
        printf("Searching data is not found\n\n\n");
   }

   return 0;
}
