#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void fm();
void ccm();
void cans();
void antibio();
void gy();
 char name[100],email[100], no[100];int ch,pass;
int main()
{
     printf("\nWelcome to K - Pharmacy");
    printf("\nEnter :\n1.Sign-up (New Customer)\n2.Sign-in (Existing Customer)");
    printf("\nEnter your Choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 : printf("\nCustomer's Name : ");
                 scanf("%s",&name);
      while (1)
      {
          printf("\nCustomer's Mobile Number : ");
          scanf("%s",&no);;
          int len = strlen(no);
     
            if(len==10)
          {
           printf("\nWelcome %s to K - Pharmacy",name); break;
          } 
          if(len!=10)
          {
            printf("\nEnter valid mobile number ");continue;
          }
      }
      printf("\nEnter Customer's Email : ");
      scanf("%s",&email);break;

      case 2: while(1)
      {
        printf("\nEnter Password : ");
              scanf("%d",&pass);
              if(pass==123045)
              {
                printf("\nWelcome Back !!!");break;
              }
              else 
              {
                printf("\nEnter Valid Password");
              }
      }break;

      default:printf("\nInvalid Choice");
              
            
    }
      while(1)
      {
        int ch;
        printf("\nEnter Number Allocated to each Section to select it.");
        printf("\nEnter : \n1.Fever Medicines\n2.Cold-Cough Medicines\n3.Antibiotics\n4.Creams and Sprays\n5.General / Hygiene\n6.Exit");
        printf("\nEnter Your Choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: fm();break;
            case 2: ccm();break;
            case 3: antibio();break;
            case 4: cans();break;
            case 5: gy();break;
            case 6: exit(0);
            default:printf("\nInvalid Choice");
        }
      }
}
void fm()
{
    int fv,quantity=0, price,det;float total,amt;
    char item[20][100]={"Paracetemol    ","Dolo 650   ","Aspirin  "};
      int qty[14]={0};
      float priceA[]={70,80,94};
      float amtA[14]={0};
    while(1)
    {
    printf("\nPlease Select Medicines From the Below List : ");
    printf("\n1.Paracetemol\n2.Dolo 650\n3.Aspirin\n4.Details of Medicine\n5.Generate Invoice");
    printf("\nEnter your Choice : ");
    scanf("%d",&fv);
    switch(fv)
    {
        case 1: printf("\nParacetemol");
                printf("\nEnter Number of Stripes : ");
                scanf("%d",&quantity);
                price = 70;
                priceA[fv-1]=price;
                qty[fv-1]=quantity;
                amt += 70*quantity;
                amtA[fv-1]=price*quantity;break;
        case 2: printf("\nDolo 650");
                printf("\nEnter Number of Stripes : ");
                scanf("%d",&quantity);
                price = 80;
                priceA[fv-1]=price;
                qty[fv-1]=quantity;
                amt += 80*quantity;
                amtA[fv-1]=price*quantity;break;
        case 3: printf("\nAspirin");
                printf("\nEnter Number of Stripes : ");
                scanf("%d",&quantity);
                price = 94;
                priceA[fv-1]=price;
                qty[fv-1]=quantity;
                amt += 94*quantity;
                amtA[fv-1]=price*quantity;break;
        case 4: printf("\nEnter the Medicines(Number) you bought : ");
                scanf("%d",&det);
                switch(det)
                {
                    case 1:printf("\n\nParacetemol\nMfg. Date : 12 January 2024\nExpiry Date : 12 January 2026\nNet Dose Weight : 500mg\n\n");break;
                    case 2:printf("\n\nDolo 650\nMfg. Date : 9 October 2023\nExpiry Date : 15 June 2025\nNet Dose Weight : 650mg\n\n");break;
                    case 3:printf("\n\nAspirin\nMfg. Date : 10 March 2024\nExpiry Date : 19 November 2026\nNet Dose Weight : 300mg\n\n");break;
                    default:printf("\nInvalid Choice ");
                }
                break;
        case 5: goto fend;break;
        default:printf("\nInvalid Choice");
    }
    }
    fend : 
    printf("\n\n\n");
        printf("\nINVOICE:");
        printf("\n\t\t\t\t\t K-PHARMACY");
        printf("\n---------------------------------------------------------------------------------------------------");
        printf("\nCustomer's Name : %s",name);
        printf("\nCustomer's Mobile Number : %s", no);
        printf("\n---------------------------------------------------------------------------------------------------");
        printf("\n\t\tItems");
        printf("\t\t\t\t\tQuantity per stripes");
        printf("\tAmount");
        for(int i=0;i<4;i++)
        {
            if(qty[i]!=0)
            {
                printf("\n\t\t%s\t\t\t\t%d\t\t\t%9.2f",item[i], qty[i], amtA[i]);
            }
        }
        
        printf("\n---------------------------------------------------------------------------------------------------");
        printf("\nBill Amount : \t\t\t\t\t\t\t\t\t %9.2f",amt);
        printf("\nDiscount : 2 percent \t\t\t\t\t\t\t\t-%9.2f",amt*0.02);
        total = amt - (amt*0.02);
        printf("\nTOTAL : \t\t\t\t\t\t\t\t\t %9.2f",total);
        printf("\n\t\t\t\t\t THANK YOU !!!");
        printf("\n---------------------------------------------------------------------------------------------------");
}
void cans()
{
      int fv,quantity=0, price,det;double total,amt;
    char item[20][100]={"Soframycin    ","Vicks Balm    ","Move Balm/Tube","Move Spray    ","DAN Gel       ","Kailash Jeevan"};
      int qty[14]={0};
      float priceA[]={57,140,75,125,120,105,150};
      float amtA[14]={0};
    while(1)
    {
    printf("\nPlease Select Medicines From the Below List : ");
    printf("\n1.Soframycin\n2.Vicks Balm\n3.Move Balm/Tube\n4.Move Spray\n5.DAN GEL\n6.Kailash Jeevan\n7.Details of Medicine\n8.Generate Invoice");
    printf("\nEnter your Choice : ");
    scanf("%d",&fv);
    switch(fv)
    {
        case 1: printf("\nSoframycin");
                printf("\nEnter Quantity : ");
                scanf("%d",&quantity);
                price = 57;
                priceA[fv-1]=price;
                qty[fv-1]=quantity;
                amt += 57*quantity;
                amtA[fv-1]=price*quantity;break;
        case 2: printf("\nVicks Balm");
                printf("\nEnter Quantity : ");
                scanf("%d",&quantity);
                price = 140;
                priceA[fv-1]=price;
                qty[fv-1]=quantity;
                amt += 140*quantity;
                amtA[fv-1]=price*quantity;break;
        case 3: printf("\nMove Balm/Tube");
                printf("\nEnter Quantity : ");
                scanf("%d",&quantity);
                price = 75;
                priceA[fv-1]=price;
                qty[fv-1]=quantity;
                amt += 75*quantity;
                amtA[fv-1]=price*quantity;break;
        case 4: printf("\nMove Spray");
                printf("\nEnter Quantity : ");
                scanf("%d",&quantity);
                price = 125;
                priceA[fv-1]=price;
                qty[fv-1]=quantity;
                amt += 125*quantity;
                amtA[fv-1]=price*quantity;break;
        case 5: printf("\nDAN GEL");
                printf("\nEnter Quantity : ");
                scanf("%d",&quantity);
                price = 120;
                priceA[fv-1]=price;
                qty[fv-1]=quantity;
                amt += 120*quantity;
                amtA[fv-1]=price*quantity;break;
        case 6: printf("\nKailash Jeevan");
                printf("\nEnter Quantity : ");
                scanf("%d",&quantity);
                price = 150;
                priceA[fv-1]=price;
                qty[fv-1]=quantity;
                amt += 150*quantity;
                amtA[fv-1]=price*quantity;break;
      
        case 7: printf("\nEnter the Medicines (Number) you bought : ");
                scanf("%d",&det);
                switch(det)
                {
                    case 1:printf("\n\nSoframycin\nMfg. Date : 12 January 2023\nExpiry Date : 1 January 2025\nNet Weight : 30g\n\n");break;
                    case 2:printf("\n\nVicks Balm\nMfg. Date : 7 March 2024\nExpiry Date : 15 May 2026\nNet Weight : 50g\n\n");break;
                    case 3:printf("\n\nMove Balm/Tube\nMfg. Date : 19 July 2023\nExpiry Date : 25 November 2026\nNet Weight : 30g\n\n");break;
                    case 4:printf("\n\nMove Spray\nMfg. Date : 10 August 2023\nExpiry Date : 19 September 2025\nNet Weight : 50g\n\n");break;
                    case 5:printf("\n\nDAN GEL\nMfg. Date : 18 July 2023\nExpiry Date : 9 November 2026\nNet Weight : 30g\n\n");break;
                    case 6:printf("\n\nKailash Jeevan\nMfg. Date : 1 February 2023\nExpiry Date : 25 December 2026\nNet Weight : 20g\n\n");break;
                    default:printf("\nInvalid Choice ");
                }
                break;
        case 8: goto fend;break;
        default:printf("\nInvalid Choice");
    }
    }
    fend : 
    printf("\n\n\n");
        printf("\nINVOICE:");
        printf("\n\t\t\t\t\t K-PHARMACY");
        printf("\n---------------------------------------------------------------------------------------------------");
        printf("\nCustomer's Name : %s",name);
        printf("\nCustomer's Mobile Number : %s", no);
        printf("\n---------------------------------------------------------------------------------------------------");
        printf("\n\t\tItems");
        printf("\t\t\t\t\tQuantity");
        printf("\tAmount");
        for(int i=0;i<14;i++)
        {
            if(qty[i]!=0)
            {
                printf("\n\t\t%s\t\t\t\t%d\t\t%9.2f",item[i], qty[i], amtA[i]);
            }
        }
        
        printf("\n---------------------------------------------------------------------------------------------------");
        printf("\nBill Amount : \t\t\t\t\t\t\t\t%9.2f",amt);
        printf("\nDiscount : 2 percent \t\t\t\t\t\t\t\t-%9.2f",amt*0.02);
        total = amt - (amt*0.02);
        printf("\nTOTAL : \t\t\t\t\t\t\t\t\t %9.2f",total);
        printf("\n\t\t\t\t\t THANK YOU !!!");
        printf("\n---------------------------------------------------------------------------------------------------");
}
void ccm()
{
   int fv,quantity=0, price,det;float total,amt;
    char item[20][100]={"Alex Syrup","Asthakind ","Cofsils   "};
      int qty[14]={0};
      float priceA[]={80,95,60};
      float amtA[14]={0};
    while(1)
    {
    printf("\nPlease Select Medicines From the Below List : ");
    printf("\n1.Alex Syrup\n2.Asthakind\n3.Cofsils\n4.Details of Medicine\n5.Generate Invoice");
    printf("\nEnter your Choice : ");
    scanf("%d",&fv);
    switch(fv)
    {
        case 1: printf("\nAlex Syrup");
                printf("\nEnter Quantity : ");
                scanf("%d",&quantity);
                price = 80;
                priceA[fv-1]=price;
                qty[fv-1]=quantity;
                amt += 80*quantity;
                amtA[fv-1]=price*quantity;break;
        case 2: printf("\nAsthakind");
                printf("\nEnter Quantity : ");
                scanf("%d",&quantity);
                price = 95;
                priceA[fv-1]=price;
                qty[fv-1]=quantity;
                amt += 95*quantity;
                amtA[fv-1]=price*quantity;break;
        case 3: printf("\nCofsils");
                printf("\nEnter Quantity : ");
                scanf("%d",&quantity);
                price = 60;
                priceA[fv-1]=price;
                qty[fv-1]=quantity;
                amt += 60*quantity;
                amtA[fv-1]=price*quantity;break;
        case 4: printf("\nEnter the Medicines(Number) you bought : ");
                scanf("%d",&det);
                switch(det)
                {
                    case 1:printf("\n\nAlex Syrup\nMfg. Date : 12 January 2024\nExpiry Date : 12 January 2026\nNet Dose Weight : 100ml\n\n");break;
                    case 2:printf("\n\nAsthakind\nMfg. Date : 9 October 2023\nExpiry Date : 15 June 2025\nNet Dose Weight : 100ml\n\n");break;
                    case 3:printf("\n\nCofsils\nMfg. Date : 10 March 2024\nExpiry Date : 19 November 2026\nNet Dose Weight : 100ml\n\n");break;
                    default:printf("\nInvalid Choice ");
                }
                break;
        case 5: goto fend;break;
        default:printf("\nInvalid Choice");
    }
    }
    fend : 
    printf("\n\n\n");
        printf("\nINVOICE:");
        printf("\n\t\t\t\t\t K-PHARMACY");
        printf("\n---------------------------------------------------------------------------------------------------");
        printf("\nCustomer's Name : %s",name);
        printf("\nCustomer's Mobile Number : %s", no);
        printf("\n---------------------------------------------------------------------------------------------------");
        printf("\n\t\tItems");
        printf("\t\t\t\tQuantity");
        printf("\t\t  Amount");
        for(int i=0;i<4;i++)
        {
            if(qty[i]!=0)
            {
                printf("\n\t\t%s\t\t\t%d\t\t%9.2f",item[i], qty[i], amtA[i]);
            }
        }
        
        printf("\n---------------------------------------------------------------------------------------------------");
        printf("\nBill Amount : \t\t\t\t\t\t\t\t\t %9.2f",amt);
        printf("\nDiscount : 2 percent \t\t\t\t\t\t\t\t-%9.2f",amt*0.02);
        total = amt - (amt*0.02);
        printf("\nTOTAL : \t\t\t\t\t\t\t\t\t %9.2f",total);
        printf("\n\t\t\t\t\t THANK YOU !!!");
        printf("\n---------------------------------------------------------------------------------------------------");
}
void antibio()
{
        int fv,quantity=0, price,det;float total,amt;
    char item[20][100]={"Azithromycin Tablets","Bezopraz DSR        ","Aziphil             "};
      int qty[14]={0};
      float priceA[]={100,75,64};
      float amtA[14]={0};
    while(1)
    {
    printf("\nPlease Select Medicines From the Below List : ");
    printf("\n1.Azithromycin Tablets\n2.Bezopraz DSR\n3.Aziphil\n4.Details of Medicine\n5.Generate Invoice");
    printf("\nEnter your Choice : ");
    scanf("%d",&fv);
    switch(fv)
    {
        case 1: printf("\nAzithromycin Tablets");
                printf("\nEnter Number of Stripes : ");
                scanf("%d",&quantity);
                price = 100;
                priceA[fv-1]=price;
                qty[fv-1]=quantity;
                amt += 100*quantity;
                amtA[fv-1]=price*quantity;break;
        case 2: printf("\nBezopraz DSR");
                printf("\nEnter Number of Stripes : ");
                scanf("%d",&quantity);
                price = 75;
                priceA[fv-1]=price;
                qty[fv-1]=quantity;
                amt += 75*quantity;
                amtA[fv-1]=price*quantity;break;
        case 3: printf("\nAziphil");
                printf("\nEnter Number of Stripes : ");
                scanf("%d",&quantity);
                price = 64;
                priceA[fv-1]=price;
                qty[fv-1]=quantity;
                amt += 64*quantity;
                amtA[fv-1]=price*quantity;break;
        case 4: printf("\nEnter the Medicines(Number) you bought : ");
                scanf("%d",&det);
                switch(det)
                {
                    case 1:printf("\n\nAzithromycin Tablets\nMfg. Date : 28 January 2024\nExpiry Date : 1 June 2025\nNet Dose Weight : 500mg\n\n");break;
                    case 2:printf("\n\nBezopraz DSR\nMfg. Date : 4 August 2023\nExpiry Date : 15 September 2025\nNet Dose Weight : 250mg\n\n");break;
                    case 3:printf("\n\nAziphil\nMfg. Date : 10 May 2024\nExpiry Date : 19 November 2026\nNet Dose Weight : 500mg\n\n");break;
                    default:printf("\nInvalid Choice ");
                }
                break;
        case 5: goto fend;break;
        default:printf("\nInvalid Choice");
    }
    }
    fend : 
    printf("\n\n\n");
        printf("\nINVOICE:");
        printf("\n\t\t\t\t\t K-PHARMACY");
        printf("\n---------------------------------------------------------------------------------------------------");
        printf("\nCustomer's Name : %s",name);
        printf("\nCustomer's Mobile Number : %s", no);
        printf("\n---------------------------------------------------------------------------------------------------");
        printf("\n\t\tItems");
        printf("\t\t\t\t\tQuantity per stripes");
        printf("\tAmount");
        for(int i=0;i<4;i++)
        {
            if(qty[i]!=0)
            {
                printf("\n\t\t%s\t\t\t\t%d\t\t%9.2f",item[i], qty[i], amtA[i]);
            }
        }
        
        printf("\n---------------------------------------------------------------------------------------------------");
        printf("\nBill Amount : \t\t\t\t\t\t\t\t\t %9.2f",amt);
        printf("\nDiscount : 2 percent \t\t\t\t\t\t\t\t-%9.2f",amt*0.02);
        total = amt - (amt*0.02);
        printf("\nTOTAL : \t\t\t\t\t\t\t\t\t %9.2f",total);
        printf("\n\t\t\t\t\t THANK YOU !!!");
        printf("\n---------------------------------------------------------------------------------------------------");
}
void gy()
{
        int fv,quantity=0, price,det;float total,amt;
    char item[20][100]={"Masks          ","Sanitary Pads  ","Sanitizer      ","Inhaler        ","Gloves         ","Thermometer    ","Bandages       ","Oxymeter       ","Cotton         "};
      int qty[14]={0};
      float priceA[]={20,75,40,60,160,250,100,450,120};
      float amtA[14]={0};
    while(1)
    {
    printf("\nPlease Select Medicines From the Below List : ");
    printf("\n1.Masks\n2.Sanitary Pads\n3.Sanitizer\n4.Inhaler\n5.Gloves\n6.Thermometer\n7.Bandages\n8.Oxymeter\n9.Cotton\n10.Details of Medicine\n11.Generate Invoice");
    printf("\nEnter your Choice : ");
    scanf("%d",&fv);
    switch(fv)
    {
        case 1: printf("\nMasks");
                printf("\nEnter Quantity : ");
                scanf("%d",&quantity);
                price = 20;
                priceA[fv-1]=price;
                qty[fv-1]=quantity;
                amt += 20*quantity;
                amtA[fv-1]=price*quantity;break;
        case 2: printf("\nSanitary Pads");
                printf("\nEnter Quantity (Packets) : ");
                scanf("%d",&quantity);
                price = 75;
                priceA[fv-1]=price;
                qty[fv-1]=quantity;
                amt += 75*quantity;
                amtA[fv-1]=price*quantity;break;
        case 3: printf("\nSanitizer");
                printf("\nEnter Quantity : ");
                scanf("%d",&quantity);
                price = 40;
                priceA[fv-1]=price;
                qty[fv-1]=quantity;
                amt += 40*quantity;
                amtA[fv-1]=price*quantity;break;
        case 4: printf("\nInhaler");
                printf("\nEnter Quantity : ");
                scanf("%d",&quantity);
                price = 60;
                priceA[fv-1]=price;
                qty[fv-1]=quantity;
                amt += 60*quantity;
                amtA[fv-1]=price*quantity;break;
        case 5: printf("\nGloves");
                printf("\nEnter Quantity : ");
                scanf("%d",&quantity);
                price = 160;
                priceA[fv-1]=price;
                qty[fv-1]=quantity;
                amt += 160*quantity;
                amtA[fv-1]=price*quantity;break;
        case 6: printf("\nThermometer");
                printf("\nEnter Quantity : ");
                scanf("%d",&quantity);
                price = 250;
                priceA[fv-1]=price;
                qty[fv-1]=quantity;
                amt += 250*quantity;
                amtA[fv-1]=price*quantity;break;
        case 7: printf("\nBandages");
                printf("\nEnter Quantity (Boxes) : ");
                scanf("%d",&quantity);
                price = 100;
                priceA[fv-1]=price;
                qty[fv-1]=quantity;
                amt += 100*quantity;
                amtA[fv-1]=price*quantity;break;
        case 8: printf("\nOxymeter");
                printf("\nEnter Quantity : ");
                scanf("%d",&quantity);
                price = 450;
                priceA[fv-1]=price;
                qty[fv-1]=quantity;
                amt += 450*quantity;
                amtA[fv-1]=price*quantity;break;
        case 9: printf("\nCotton");
                printf("\nEnter Quantity : ");
                scanf("%d",&quantity);
                price = 120;
                priceA[fv-1]=price;
                qty[fv-1]=quantity;
                amt += 120*quantity;
                amtA[fv-1]=price*quantity;break;
        case 10: printf("\nEnter the Medicines (Number) you bought : ");
                scanf("%d",&det);
                switch(det)
                {
                    case 1:printf("\n\nMasks\n100 Percent Cotton and Effective\n\n");break;
                    case 2:printf("\n\nSanitary Pads\n100 Percent Cotton\nSize : XL\n\n");break;
                    case 3:printf("\n\nSanitizer\nWith Fragnace and Kills 99 Percent Germs\n\n");break;
                    case 4:printf("\nInhaler\nHelps To Breath Better\n\n");break;
                    case 5:printf("\nGloves\nUsed for Medical and General Purpose\n100 Percent Environmental Friendly\n\n");break;
                    case 6:printf("\nThermometer\nHelps To Check Body Temperature\n\n");break;
                    case 7:printf("\nBandages : \nHelps to Heal Wounds as well as Muscular Pain\n\n");break;
                    case 8:printf("\nOxymeter\nHelps to keep Track of your Oxygen Level In the Body\n\n");break;
                    case 9:printf("\nCotton\nPriority of the First Aid Kit\n\n");
                    default:printf("\nInvalid Choice ");
                }
                break;
        case 11: goto fend;break;
        default:printf("\nInvalid Choice");
    }
    }
    fend : 
    printf("\n\n\n");
        printf("\nINVOICE:");
        printf("\n\t\t\t\t\t K-PHARMACY");
        printf("\n---------------------------------------------------------------------------------------------------");
        printf("\nCustomer's Name : %s",name);
        printf("\nCustomer's Mobile Number : %s", no);
        printf("\n---------------------------------------------------------------------------------------------------");
        printf("\n\t\tItems");
        printf("\t\t\t\t\tQuantity per stripes");
        printf("\tAmount");
        for(int i=0;i<14;i++)
        {
            if(qty[i]!=0)
            {
                printf("\n\t\t%s\t\t\t\t%d\t\t\t%9.2f",item[i], qty[i], amtA[i]);
            }
        }
        printf("\n---------------------------------------------------------------------------------------------------");
        printf("\nBill Amount : \t\t\t\t\t\t\t\t\t %9.2f",amt);
        printf("\nDiscount : 2 percent \t\t\t\t\t\t\t\t-%9.2f",amt*0.02);
        total = amt - (amt*0.02);
        printf("\nTOTAL : \t\t\t\t\t\t\t\t\t %9.2f",total);
        printf("\n\t\t\t\t\t THANK YOU !!!");
        printf("\n---------------------------------------------------------------------------------------------------");
}

