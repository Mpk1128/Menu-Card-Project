#include<stdio.h>

int main()
{
        //variable decleration
    int ch,total,pay;
    int pasta=0,biriyani=0,pizza=0,coffee=0;
    int price1=0,price2=0,price3=0,price4=0;
    float gst,grand_total;

    //displaying the welcome message

    printf("<..........MANCAFE.........>\n");

      //displays the menu and accepts customers choice

    do{
         label:
    
    printf("1.pasta = 120\n2.biriyani = 250\n3.pizza = 250\n4.coffee = 15\n5. for exit\n\n");
    printf("enter your choice\n\n");
    scanf("%d", &ch);

    //decides which food item
    
    switch(ch)
    {
        case 1:
        printf("your pasta order is added to your cart\n\n");
        pasta++;
        printf("Quantity --pasta*%d\n\n",pasta);
        break;

        case 2:
        printf("your biriyani order is added to your cart\n\n");
        biriyani++;
        printf("Quantity --biriyani*%d\n\n",biriyani);
        break;

        case 3:
        printf("your pizza is added to your cart\n\n");
        pizza++;
        printf("Quantity --pizza*%d\n\n",pizza);
        break;

        case 4:
        printf("your coffee is added to your cart\n\n");
        coffee++;
        printf("Quantity --coffee*%d\n\n",coffee);
        break;

        case 5:
        break;

        default:
        printf("No item to be found\n\n");
        goto label;
    }
}


      
     
    while(ch>=1 && ch<=4);
    {

    printf("<------------total items added to your cart--------------->\n\n");
    }
    if(pasta>0)
    {
        price1=pasta*120;
        printf("pizza*%d=%d\n",pasta,price1);
    }
    if(biriyani>0)
    {
        price2=biriyani*250;
        printf("biriyani*%d=%d\n",biriyani,price2);
    }
    if(pizza>0)
    {
        price3=pizza*250;
        printf("pizza*%d=%d\n",pizza,price3);
    }
    if(coffee>0)
    {
        price4=coffee*15;
        printf("coffee*%d=%d\n",coffee,price4);
    }

    gst=(float)(price1+price2+price3+price4)*0.00;

    printf("<------------------------------------->\n\n");
    
    total=price1+price2+price3+price4;

    printf("Total\t=%d\n",total);
    printf("GST\t=%g\n",gst);

    printf("<------------------------------------->\n\n");

    grand_total=price1+price2+price3+price4+gst;

    printf("GRAND TOTAL=%G\n\n\n",grand_total);

    label2:

    printf("pick the payment option\n\n1.cash\n2.UPI\n");

    scanf("%d",&pay);


    switch(pay)
    {
        case 1:
        printf("your selected cash payment\n\n");
        break;

        case 2:
        printf("your selected UPI\n\n");
        break;

        default:
        printf("select a valid payment option\n\n");


        goto label2;

    }

        printf("<---------------THANK YOU VISIT AGAIN------------------>\n\n");


        return 0;
  
}  