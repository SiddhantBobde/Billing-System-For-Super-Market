#include<stdio.h>
#include<string.h>
struct counter
{
char name[20];
float price;
int code;
};
struct counter s[20];
int  main()
{
printf("========WELCOME TO THE STORE=========\n\n\n");

    int i,x,num=0;
    float flag=0;
    float fprice=0;
    strcpy(s[0].name,"Milk(1 lt)");
    s[0].price=40;
    s[0].code=1;

    strcpy(s[1].name,"eggs(6)");
    s[1].price=30;
    s[1].code=2;

    strcpy(s[2].name,"wheat(1 kg)");
    s[2].price=25;
    s[2].code=3;

    strcpy(s[3].name,"rice(1 kg)");
    s[3].price=40;
    s[3].code=4;

    strcpy(s[4].name,"sugar(1 kg)");
    s[4].price=40;
    s[4].code=5;

    strcpy(s[5].name,"bread");
    s[5].price=35;
    s[5].code=6;

    strcpy(s[6].name,"water bottle(1 lit)");
    s[6].price=30;
    s[6].code=7;

    strcpy(s[7].name,"thermos flask");
    s[7].price=250;
    s[7].code=8;

    strcpy(s[8].name,"classmate notebook A4(140 pages)");
    s[8].price=55;
    s[8].code=9;

    strcpy(s[9].name,"classmate notebook A4(180 pages");
    s[9].price=65;
    s[9].code=10;

    strcpy(s[10].name,"skybag blue color");
    s[10].price=1150;
    s[10].code=11;

    strcpy(s[11].name,"pentek toptec pen black(10 pcs)");
    s[11].price=55;
    s[11].code=12;

    strcpy(s[12].name,"skybag travelling bag");
    s[12].price=2500;
    s[12].code=13;

    strcpy(s[13].name,"remote controll car");
    s[13].price=300;
    s[13].code=14;

    for(i=0;i<14;i++)
    {
    printf("%s\n",s[i].name);
    printf("%f\n",s[i].price);
    printf("%d\n",s[i].code);
    }
    while(1)
    {
    int j;
    printf("\nenter the code of item\n");
    scanf("%d",&j);

    if(j!=0)
    {
    printf("enter number of items\n");
    scanf("%d",&num);
    printf("price is %f",s[j-1].price*num);
    flag=flag+s[j-1].price*num;
    }
    else
    {break;
}

}
printf("\ntotal amount is %f",flag);
fprice=flag;
if(flag>5000)
{
fprice=((0.9)*(fprice));
printf("\nYou recieved 10 percent discount. Final price = %f",fprice);
}
else
{printf("You are ineligible for discount\n");}
}
