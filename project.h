 #ifndef PROJECT_H
 #define PROJECT_H
 #include"STD_Types.h"
 
 typedef struct N
{
   s32 id ;
   s8 name[10];
   s32 age;
   s32 date;
   s8 gender[10];
   struct N *next;
}Patient;


static Patient *CreateNode(s32 id,s8 *name,s32 age,s8 *gender);
void  Add_new_patient(s32 id,s8 *name,s32 age,s8 *gender);
void Last(s32 id,s8 *name,s32 age,s8 *gender);
void View_patient_record(s32 id);
void Edit_patient_record(s32 id);

void Display_Reserved_slot(); 
void Reservation (s32 id);



void cancel_Reservation (s32 id);

void user_View_todays_reservations();
void user_Display_Reserved_slot();

 #endif