/********** PROJECT : CLINICAL MANGEMENT******************/
/********** BY : Hamada Ahmed Mohamed*********************/
/********** Date : 7 SEPTEMBER 2022   ********************/
/********** VERISION : V1.0 ******************************/

#include<stdio.h>
#include"STD_Types.h"
#include "project.h"


int main(){
	s32 mode_type,flag ,Password,Feature,ages,date,ident;
    s32 clinic_flag = 1;
    s8 s[20];
    s8 genders[5];
	printf("**welcome in our clinic**\n");
	while(clinic_flag==1)
	{
	 printf ("if you are admin please enter : 1\n");
     printf ("if you are user please  enter : 2\n");
     printf ("Number is : ");
     scanf("%d",&mode_type);
	  if(mode_type==1)
      {
		  printf("**welcome in  admin mode**\n");
         printf("enter you password please : ");
         scanf("%d",& Password);
         if(Password==1234)
         {
             flag=1;
         }
         else
         {
            for(int trail=0;trail<2;trail++)
            {
              printf("try again : ");
              scanf("%d",&Password);
              if(Password==1234)
             {
                         flag = 1;
                         break;
             }
            }
        }
	  if(flag==0){
       printf(" SORRY WRONG PASSWORD");
		
	return 0;}
	
	 if(flag==1)
        {
            s32 New = 1;
            while(New == 1)
            {
                printf("enter  1 to Add new patient record \n");
                printf("enter  2 to Edit patient record \n");
                printf("enter  3 to Reserve a slot with the doctor \n");
                printf("enter  4 to Cancel reservation \n");
                scanf("%d",&Feature);
                if (Feature<5)
                {
                    switch (Feature)
                    {
                        case 1 :

                           printf("Please enter ID: \n");
						   scanf("%d",&ident);
						
							
						printf("Enter your name:\n ");    
						scanf("%s",s);
 
						   printf("Please enter  AGE: \n");
						   scanf("%d",&ages	);
						   printf("Please enter  GENDER:\n");
						  scanf("%s",genders);
                            Add_new_patient (ident,s,ages,genders);

                          break ;

                        case 2 :

						printf("Please enter ID \n");
						   scanf("%d",&ident);
                         Edit_patient_record(ident);

                          break ;

                        case 3 :
						   printf("Please enter ID \n");
						   scanf("%d",&ident);
                           Reservation (ident);

                          break ;

                        case 4 :
                           printf("Please enter ID \n");
						   scanf("%d",&ident);
                        cancel_Reservation (ident);

                          break ;

                    }
                }

                printf("if you want to continue in admin mode press 1 \n");
                printf("if you want to exist press any button \n");
                scanf("%d",&New);
                printf("\n");
            }

        }
        else
        {
                printf("#wrong password try agian later#");
        }
	  }
       
	  else if(mode_type==2)
      {
		  printf("**welcome in  user mode**\n");
           int New2 = 1;
            while(New2 == 1)
            {
				printf("Please enter ID \n");
				scanf("%d",&ident);
						
                View_patient_record(ident);
			   // printf("View_patient_record()\n");
                printf("if you want to logout from user mode press 2 \n");
                printf("if you want to enter id again press 1 \n");
                scanf("%d",&New2);
                printf("\n");
            }


      }
      else
      {
          printf ("please enter 1 or 2 to login");
      }

    printf("Do you want to login to project again press: 1 \n");
    printf("if you don't want to exit press any other key\n");
    scanf("%d",&clinic_flag);
  }

  return 0;
}