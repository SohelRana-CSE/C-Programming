int main(void)
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c){
        if(c>b){
            int temp=c;
            c=b;
            b=temp;
        }
    }
    else if(a>b && b>c){
        int temp=a;
        a=b;
        b=temp;
        if(c>b){
            int temp=c;
            c=b;
            b=temp;
            }
        }
    else if(c>a && c>b){
        int temp=c;
        c=a;
        a=temp;
        if(c>b){
            int temp=c;
            c=b;
            b=temp;
            }
        }
    printf("%d%d%d",a,b,c);

    return 0;
}
