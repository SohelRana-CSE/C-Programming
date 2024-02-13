#include<stdio.h>
int main()
{

        int time,Here,n;


        printf("\n\n1. Morning\n2. Noon\n3. Afternoon\n4. Evening\n5. Night\n\n");
        printf("Enter the time actually you want to know about: ");

        scanf("%d",&time);
        switch(time)
        {
        case 1:
            printf("\nI get up at 9 am in the morning. Then I took my breakfast with my family.");
            printf("I belongs to a hindu family.But we celebrate eid , specially, in almost every year.");
            printf("In Eid we always take semai in our breakfast.After breakfast I spent time with my family.\n\n");
            break;
        case 2:
            printf("\nIn noon After completing my bath, I went to our kitchen and help my mother in cooking.");
            printf(" My mother has cook many delicious food. She cooked special Morog Polao. Then I complete my lanch.\n\n");
            break;
        case 3:
            printf("\nThis year for Corona pandamic I could not go out with my family or friends.");
            printf(" So I took rest for sometimes. Then I play ludu with my family member");
            printf(" It was a lot of fun\n\n");
            break;
        case 4:
            printf("\nIn evening I made a conversation with my reletives and my friends by vedio call.");
            printf(" Then I went to my neighbor house for wishing them with sweet.\n\n");
            break;
        case 5:
            printf("\n At 9 late night I took my dinner. And then I watched a film with my family.");
            printf(" After that I went to sleep\n\n");
            break;
        default:
            printf ("\n\nWrong Input\n\n");
        }




    return 0;
}
