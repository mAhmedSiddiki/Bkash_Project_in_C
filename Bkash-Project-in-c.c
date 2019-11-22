#include<stdio.h>

int pin,user_pin=1234,x=0;

///Main Function * Main Function Main Function * Main Function Main Function * Main Function Main Function * Main Function

int main()
{
	system("color 70");
    ///BKASH * BKASH  BKASH * BKASH  BKASH * BKASH  BKASH * BKASH  BKASH * BKASH  BKASH * BKASH  BKASH BKASH  BKASH * BKASH  BKASH
    int input,number,amount,my;
    while(x==0){
		system("cls");
    	printf("\n\n\n\t\t\t=======================================\n");
	    printf("\t\t\t******* Welcome To bKash Service ******\n");
	    printf("\t\t\t*                                     *\n");
	    printf("\t\t\t*  1. Send Money                      *\n");
	    printf("\t\t\t*  2. Bye airtime                     *\n");
	    printf("\t\t\t*  3. Payment                         *\n");
	    printf("\t\t\t*  4. Cash out                        *\n");
	    printf("\t\t\t*  5. My bkash                        *\n");
	    printf("\t\t\t*  6. Helpline                        *\n");
	    printf("\t\t\t*  7. Quit                            *\n");
	    printf("\t\t\t*                                     *\n");
	    printf("\t\t\t********** Enter Your Choice **********\n");
	    printf("\t\t\t=======================================\n");
	    scanf("%d",&input);
	    system("cls");
	
	    if(input==1)
	    {
	        int withdraw,amount=5000;
	        printf("\n\n\n\t\t\t==================================================\n");
	        printf("\t\t\tPlease enter receiver bKash account number: ");
	        scanf("%d",&number);
	        printf("\t\t\tEnter your amount: ");
	        scanf("%d",&withdraw);
	
	
	            if(withdraw >(amount-500))
	            {
	                printf("\t\t\tINSUFFICENT BALANCE\n");
	            }
	            else
	            {
	
	        printf("\t\t\tEnter your reference no: ");
	        scanf("%d",&my);
	        printf("\t\t\tEnter your pin number: ");
	        scanf("%d",&pin);
	        printf("\t\t\t==================================================\n");
	        if(pin==user_pin)
	        {
	            printf("\t\t\tYou are success\n");
	        }
	        else
	        {
	            printf("\t\t\tYour pin number is incorrect!!!\n");
	        }
	        printf("\t\t\t==================================================\n");
	            }
	
	
	
	
	    }
	
	    else if(input==2)
	    {
	        int sim,input_sim,sim_type;
	        printf("\n\n\n\t\t\t=======================================\n");
	        printf("\t\t\t*  Notification                       *\n");
	        printf("\t\t\t*  bkash                              *\n");
	        printf("\t\t\t*  1. Robi                            *\n");
	        printf("\t\t\t*  2. banglalink                      *\n");
	        printf("\t\t\t*  3. Grameenphone                    *\n");
	        printf("\t\t\t*  4. Airtel                          *\n");
	        printf("\t\t\t*  5. Teletalk                        *\n");
	        printf("\t\t\t=======================================\n");
	        scanf("%d",&sim);
	        system("cls");
	        if(sim==1)
	        {
	            input_sim="Robi";
	        }
	        else if(sim==2)
	        {
	            input_sim="Banglalink";
	        }
	        else if(sim==3)
	        {
	            input_sim="Grameenphone";
	        }
	        else if(sim==4)
	        {
	            input_sim="Airtel";
	        }
	        else if(sim==5)
	        {
	            input_sim="Teletalk";
	        }
	        else
	        {
	            printf("\n\n\n\t\t\t===============================================\n");
	            printf("\t\t\t              INVALID CHOICE\n");
	            printf("\t\t\t===============================================\n");
	        }
	        int withdraw,amount=5000;
	
	        printf("\n\n\n\t\t\t=======================================\n");
	        printf("\t\t\t*  1. Prepaid                         *\n");
	        printf("\t\t\t*  2. Postpaid                        *\n");
	        printf("\t\t\t=======================================\n");
	        scanf("%d",&sim_type);
	        system("cls");
	
	        printf("\n\n\n\t\t\t===========================================\n");
	        printf("\t\t\tEnter your phone number: ");
	        scanf("%d",&number);
	        printf("\t\t\tEnter your amount: ");
	        scanf("%d",&withdraw);
	        if(withdraw >(amount-500))
	            {
	                printf("\t\t\tINSUFFICENT BALANCE\n");
	            }
	            else
	            {
	
	        printf("\t\t\tEnter your pin number: ");
	        scanf("%d",&pin);
	        printf("\t\t\t===========================================\n");
	        if(pin==user_pin)
	        {
	            printf("\t\t\tYou are success!!!\n");
	        }
	        else
	        {
	            printf("\t\t\tYour pin is wrong!!!\n");
	        }
	        printf("\t\t\t=========================================\n");
	            }
	
	    }
	
	
	    else if(input==3)
	    {
	        int merchant_number,merchant_withdraw,amount=5000,pin;
	        printf("\n\n\n\t\t\t=============================================\n");
	        printf("\t\t\tEnter merchant bkash account number: ");
	        scanf("%d",&merchant_number);
	        printf("\t\t\tPayment amount: ");
	        scanf("%d",&merchant_withdraw);
	
	
	
	            if(merchant_withdraw >(amount-500))
	            {
	                printf("\t\t\tINSUFFICENT BALANCE\n");
	            }
	            else
	            {
	
	        printf("\t\t\tEnter your pin: ");
	        scanf("%d",&pin);
	        printf("\t\t\t=============================================\n");
	        if(pin==user_pin)
	        {
	            printf("\t\t\tYou send %d taka to %d\n",merchant_withdraw,merchant_number);
	        }
	        else
	        {
	            printf("\t\t\tYour pin does't match!!!\n");
	        }
	        printf("\t\t\t=============================================\n");
	            }
	
	    }
	
	
	    else if(input==4)
	    {
	        int cashout_type,agent_number,withdraw,amount=5000;
	        printf("\n\n\n\t\t\t=======================================\n");
	        printf("\t\t\t*  Notification       bKash           *\n");
	        printf("\t\t\t*  1. from agent                      *\n");
	        printf("\t\t\t=======================================\n");
	        scanf("%d",&cashout_type);
	         system("cls");
	        if(cashout_type==1)
	        {
	            printf("\n\n\n\t\t\t=======================================\n");
	            printf("\t\t\tEnter the agent number: ");
	            scanf("%d",&agent_number);
	            printf("\t\t\tEnter your amount: ");
	            scanf("%d",&withdraw);
	
	
	            if(withdraw >(amount-500))
	            {
	                printf("\t\t\tINSUFFICENT BALANCE\n");
	            }
	            else
	            {
	                printf("\t\t\tEnter your pin number: ");
	            scanf("%d",&pin);
	            printf("\t\t\t=======================================\n");
	            if(pin==user_pin)
	            {
	                printf("\t\t\tYou are success!!!\n");
	            }
	            else
	            {
	                printf("\t\t\tYour pin number is wrong!!!\n");
	            }
	            printf("\t\t\t=======================================\n");
	            }
	
	        }
	
	
	         else
	            {
	                printf("\n\n\n\t\t\t===============================================\n");
	                printf("\t\t\t              INVALID CHOICE\n");
	                printf("\t\t\t===============================================\n");
	            }
	    }
	
	    else if(input==5)
	    {
	        int my_bkash;
	        printf("\n\n\n\t\t\t=============================================\n");
	        printf("\t\t\t*  Notification          bKash              *\n");
	        printf("\t\t\t*  1. Check balance                         *\n");
	        printf("\t\t\t*  2. Change mobile Menu Pin                *\n");
	        printf("\t\t\t*  3. Active ATM                            *\n");
	        printf("\t\t\t*  4. Change ATM pin                        *\n");
	        printf("\t\t\t=============================================\n");
	        scanf("%d",&my_bkash);
	         system("cls");
	        if(my_bkash==1)
	        {
	            printf("\n\n\n\t\t\t=============================================\n");
	            printf("\t\t\tEnter your pin: ");
	            scanf("%d",&pin);
	            printf("\t\t\t=============================================\n");
	            if(pin==user_pin)
	            {
	                printf("\t\t\tYour balance is: 5000.00\n");
	            }
	            else
	            {
	                printf("\t\t\tYour pin number is wrong!!!\n");
	            }
	            printf("\t\t\t=============================================\n");
	        }
	        else if(my_bkash==2)
	        {
	            int new_pin,confirm_pin;
	            printf("\n\n\n\t\t\t=============================================\n");
	            printf("\t\t\tEnter your old pin: ");
	            scanf("%d",&pin);
	            if(pin==user_pin)
	            {
	                printf("\t\t\tEnter your new pin: ");
	                scanf("%d",&new_pin);
	                printf("\t\t\tConfirm your pin number: ");
	                scanf("%d",&confirm_pin);
	                printf("\t\t\t=============================================\n");
	                if(new_pin==confirm_pin)
	                {
	                    printf("\t\t\tYour pin is successfully changed!!!\n");
	                }
	                else
	                {
	                    printf("\t\t\tYour pin does't match!!!\n");
	                }
	                printf("\t\t\t=============================================\n");
	            }
	
	            else
	            {
	                printf("Your pin is wrong!!!\n");
	            }
	        }
	
	        else if(my_bkash==3)
	        {
	            int atm_pin,atm_confirm_pin;
	            printf("\n\n\n\t\t\t=============================================\n");
	            printf("\t\t\tEnter your new pin: ");
	            scanf("%d",&atm_pin);
	            printf("\t\t\tEnter your confirm pin: ");
	            scanf("%d",&atm_confirm_pin);
	            printf("\t\t\t=============================================\n");
	            if(atm_confirm_pin==atm_pin)
	            {
	                printf("\t\t\tYour pin is successfully set. Your ATM is Active.\n");
	            }
	            else
	            {
	                printf("\t\t\tYour pin does't match!!!\n");
	            }
	            printf("\t\t\t=============================================\n");
	        }
	
	        else if(my_bkash==4)
	        {
	            int user_atm_pin=1234,atm_pin,new_pin,atm_confirm_pin;
	            printf("\n\n\n\t\t\t============================================\n");
	            printf("\t\t\tEnter your old pin: ");
	            scanf("%d",&atm_pin);
	            if(user_atm_pin==atm_pin)
	            {
	                printf("\t\t\tEnter your new pin: ");
	                scanf("%d",&new_pin);
	                printf("\t\t\tEnter your confirm pin: ");
	                scanf("%d",&atm_confirm_pin);
	                printf("\t\t\t=============================================\n");
	                if(atm_confirm_pin==new_pin)
	                {
	                    printf("\t\t\tYour ATM pin is updated.\n");
	                }
	                else
	                {
	                    printf("\t\t\tYour pin does't match!!!\n");
	                }
	
	
	            }
	            else
	            {
	                printf("\t\t\t=============================================\n");
	                printf("\t\t\tYour pin is incorrect!!!\n");
	            }
	            printf("\t\t\t=============================================\n");
	        }
	
	
	            else
	                {
	                    printf("\n\n\n\t\t\t===============================================\n");
	                    printf("\t\t\t              INVALID CHOICE\n");
	
	                    printf("\t\t\t===============================================\n");
	                }
	
	
	    }
	
	
	
	    else if(input==6)
	    {   printf("\n\n\n\t\t\t=======================================\n");
	        printf("\t\t\tHelp line:    bKash\n");
	        printf("\t\t\tPlease contact:Call 16247\n\t\t\t\tor\n\t\t\tIf you want any help\n");
	        printf("\t\t\tPlease visit: www.bkash.com\n");
	        printf("\t\t\t=============================================\n");
	    }
	
	    else if(input==7)
	    {
	        printf("\n\n\n\t\t\t=======================================\n");
	        printf("\t\t\t      Thank you for using bKash \n");
	        printf("\t\t\t=======================================\n");
	        break;
	    }
	    else
	    {
	        printf("\n\n\n\t\t\t===============================================\n");
	        printf("\t\t\t              INVALID CHOICE\n");
	        printf("\t\t\t===============================================\n");
	    }
	    getch();
	    system("cls");
	    printf("\n\n\n\t\t\t=======================================\n");
	    printf("\t\t\t      Do you want to again transaction \n");
	    printf("\t\t\t=======================================\n");
	    printf("\t\t\t      1. Yes\n\t\t\t      2. No\n");
	    printf("\t\t\t=======================================\n");
	    int abc;
	    scanf("%d",&abc);
	    system("cls");
	    if(abc==2){
	    	printf("\n\n\n\t\t\t=======================================\n");
	        printf("\t\t\t      Thank you for using bKash \n");
	        printf("\t\t\t=======================================\n");
	        getch();
	    	x=1;
		}
	}
    
    return 0;
}
