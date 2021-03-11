#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int choice,staff;
int pass,s;

//This is the hospital function
void Hospital(void);
void R_faci();
void Del_room();
void Spe_room();
void General();
void Med_ser();
//This are receptionist management.
void Receptionist(void);
//This function includes in receptionist management.
void Appoit();
void Doc_ava();
void Book_app();
//This are the varaibles of Book appointment.
char Ft_name[20];
char Lt_name[20];
int AGE[3];
char Mob[10];
char Area_name[30];
char p_doc[20];

void view_app();
void Inpat();
//This are the varibles includes in inpatient.
int Adm_id;
char Room_no[3];
char Adate[11];
char Iname[20];
char Mno[10];
char Cons[20];
char Coa[20];

void Add_in();
void Rew_in();
void Outpat();
void Upd_out();
void Rew_out();
void File();

void Bill();
char Bill_no[20];
char P_id[20];
char dtr[20];
char dte[20];
char nae[30];
char cnslt[900];
char ttl[5000];
void Add_bill();
void View_bill();
//The receptionist management ends here.

//This are patient management
void Patient(void);
//This are the variables of patient management.
char Pat_id[20];
char Pat_name[20];
char Suff_dis[30];
char ph_no[10];
char gender[6];
char Pre_doc[20];
char address[30];
int room_no;
char room_type[7];

//This are function of patient management.
void upd_pat();
void Add();
void Review();
//The patient management ends here.

//This are doctor management
void Doctor(void);

//This are varaibles for doctor field.
void Add_doc();
int Doc_id[3];
char Doc_name[20];
int Doc_exp[100];
char Spty[25];
char E_no[10];

//This are function.
void Up_doc();
void Rev_doc();
//The doctor management ends here.

//This are staff management.
void Staff(void);

//This are the variables of staff management.
void addstaff(void);
char sta_id;
char sta_name[20];
char ph_no[10];
char gender[6];
char dep[10];

//This are function of staff management
void viewstaff(void);

//The staff management ends here.
int main()
{
  int choice;
  clrscr();
  textcolor(GREEN+123);
  cprintf("********************************************************************************\n");
  cprintf("******************************** Welcome To ************************************\n");
  cprintf("************************ Hospital Management System ****************************\n");
  cprintf("********************************************************************************\n");

  printf("1.Hospital Service\n\n");
  printf("2.Receptionist\n\n");
  printf("3.Patient Management\n\n");
  printf("4.Doctor Management\n\n");
  printf("5.Staff Management\n\n");
  printf("6.Exit\n\n");

  do
  {
      cprintf("Enter your choice:");
      scanf("%d",&choice);
      switch(choice)
      {
	  case 1:
		Hospital();
		break;

	  case 2:
		Receptionist();
		break;

	  case 3:
		Patient();
		break;

	  case 4:
		Doctor();
		break;

	  case 5:
		Staff();
		break;
      }
  }
while(choice!=6);
return 0;
}
//The hospital management starts from here.
void Hospital()
{
   printf("\nYou Selected:\t1.Hospital Services\n\n");
   printf("\t\t-------------------\n");
   printf("\t\t1.Room Facility");
   printf("\n\n\t\t2.Medical Services");
   cprintf("\n\n\t\t3.Back");
   do
   {
     printf("\n\n\t\tEnter your choice:");
     scanf("%d",&choice);
     switch(choice)
     {
       case 1:R_faci();break;

       case 2:Med_ser();break;
     }
   }
   while(choice!=3);
}
//function of hospital ends here.
void R_faci()
{
   printf("\nYou Selected:\t2.Room Facility:\n\n");
   printf("\t\t--------------\n");
   printf("\t\t1.Deluxe Rooms");
   printf("\n\n\t\t2.Special Room");
   printf("\n\n\t\t3.General Ward");
   cprintf("\n\n\t\t4.Back");

   do
   {
      printf("\n\t\tEnter your choice:");
      scanf("%d",&choice);
      switch(choice)
      {
	 case 1:Del_room();break;

	 case 2:Spe_room();break;

	 case 3:General();break;
      }
   }
   while(choice!=4);
   cprintf("\nBack to previous menu:\n");
   Hospital();
}

void Del_room()
{
   printf("\nYou Selected:\t1.Deluxe Room:\n\n");
   printf("\t\t--------------\n");
   printf("\t\t-> A/C");
   printf("\n\t\t-> Attached Bathroom");
   printf("\n\t\t-> Fridge");
   printf("\n\t\t-> Cable TV");
   printf("\n\t\t-> Telephone");
   printf("\n\t\t-> Pantry");
   printf("\n\t\t-> Nurse Calling System\n");

   cprintf("Viewed 4.Back");
}

void Spe_room()
{
   printf("\nYou Selected:\t2.Special Room:\n\n");
   printf("\t\t--------------\n");
   printf("\t\t-> A/C");
   printf("\n\t\t-> Attached Bathroom");
   printf("\n\t\t-> Cable TV");
   printf("\n\t\t-> Channel/Music");
   printf("\n\t\t-> Telephone");
   printf("\n\t\t-> Nurse Calling System\n");

   cprintf("Viewed 4.Back");
}

void General()
{
   printf("\nYou Selected:\t3.General Room:\n\n");
   printf("\t\t--------------\n");
   printf("\t\t-> A/C Optional");
   printf("\n\t\t-> 3 to 4 Patient/Room");
   printf("\n\t\t-> Cable TV");
   printf("\n\t\t-> Telephone");
   printf("\n\t\t-> Nurse Calling System\n");

   cprintf("Viewed 4.Back");
}

void Med_ser()
{
   printf("\nYou Selected:\t2.Medical Service:\n\n");
   printf("\t\t--------------\n");
   printf("\t\t1.ORTHOPAEDIC");
   printf("\n\t\t2.LAPAROSCOPIC");
   printf("\n\t\t3.ENDOSCOPIC");
   printf("\n\t\t4.CHRONIC DISEASES");
   printf("\n\t\t5.CARDIOLOGY");
   printf("\n\t\t6.OBSTETRICS");
   printf("\n\t\t7.TRAUMA");
   cprintf("\n\t\t8.Back");
   do
   {
     printf("\n\t\tEnter your choice:");
     scanf("%d",&choice);
   }
  while(choice!=8);
  cprintf("\nBack to previous menu:\n");
  Hospital();
}

//Receptionist management starts from here
void Receptionist()
{
   printf("\nYou Selected:\t2.Receptionist\n\n");
   printf("\t\t--------------\n");
   printf("\t\t1.Appointment");
   printf("\n\n\t\t2.Inpatient Details");
   printf("\n\n\t\t3.Outpatient Details");
   printf("\n\n\t\t4.File Medical Report");
   printf("\n\n\t\t5.Bill");
   cprintf("\n\n\t\t6.Back");
   do
   {
      printf("\n\n\t\tEnter your choice:");
      scanf("%d",&choice);
      switch(choice)
      {
	 case 1:Appoit();
		break;

	 case 2:Inpat();
		break;

	 case 3:Outpat();
		break;

	 case 4:File();
		break;

	 case 5:Bill();
		break;
      }
   }
while(choice!=6);
}

//Appointment includes in receptionist management
void Appoit()
{
  printf("\nYou Selected:Appointment\n\n");
  printf("\t\t---------------------\n");
  printf("\n\n\t\t1.Doctor availability");
  printf("\n\n\t\t2.Book appointent");
  printf("\n\n\t\t3.View all appointment");
  printf("\n\n\t\t4.Back");

   do
   {
      printf("\n\n\t\tEnter your choice:");
      scanf("%d",&choice);
      switch(choice)
      {
	 case 1:Doc_ava();
		break;

	 case 2:Book_app();
		break;

	 case 3:view_app();
		break;
      }
   }
 while(choice!=4);
 cprintf("\nBack to previous menu");
 Receptionist();
}

//Doctor availabilty includes in receptionist management.
void Doc_ava()
{
   printf("\nYou Selected:Doctor Availability\n\n");
   printf("\t\t---------------------\n");
   printf("\n\n\t\t1.Doctor Details");
   printf("\n\n\t\t\t* Doctor id: 12");
   printf("\n\n\t\t\t* Doctor name: Nitin Patel");
   printf("\n\n\t\t\t* Experience: 45");
   printf("\n\n\t\t\t* Speciality: Physiatritian");

   printf("\n\n\t\t2.Doctor Details");
   printf("\n\n\t\t\t* Doctor id: 15");
   printf("\n\n\t\t\t* Doctor name: Saurin Updhya");
   printf("\n\n\t\t\t* Experience: 50");
   printf("\n\n\t\t\t* Speciality: Dermatologist");

   printf("\n\n\t4.Back");
}

//Book appointment includes in receptionist management.
void Book_app()
{
   FILE *ptr;
   ptr=fopen("Appointment.csv","a");
   printf("\nYou Selected to:1.Book Appointment\n\n");
   printf("\t\t--------------------\n");
   printf("\n\t\tEnter Appointment details:-");
   fprintf(ptr,"\n\n**************************** Appointment DETAILS ****************************");
   printf("\n\n\t\t\t* First Name:");
   scanf("%s",Ft_name);
   fprintf(ptr,"\nFirst Name:%s",Ft_name);

   printf("\n\n\t\t\t* Last Name:");
   scanf("%s",Lt_name);
   fprintf(ptr,"\nLast Name:%s",Lt_name);

   printf("\n\n\t\t\t* Age:");
   scanf("%d",&AGE);
   fprintf(ptr,"\nAge:%d",AGE);

   printf("\n\n\t\t\t* Mobile no:");
   scanf("%s",Mob);
   fprintf(ptr,"\nMobile no:%s",Mob);

   printf("\n\n\t\t\t* Area name:");
   scanf("%s",Area_name);
   fprintf(ptr,"\nArea name:%s",Area_name);

   printf("\n\n\t\t\t* Preferred Doctor:");
   scanf("%s",p_doc);
   fprintf(ptr,"\nPreferred Doctor:%s",p_doc);

   fclose(ptr);

   cprintf("\nAppointment successful: 4.Back");
}

//view appointment includes in receptionist management.
void view_app()
{
   FILE *ptr;
   char Adm_id[150];
   ptr=fopen("Appointment.csv","r");
   while(!feof(ptr))
   {
	fgets(Adm_id,150,ptr);
	puts(Adm_id);
   }

   cprintf("\nReviewed 4.Back");
   fclose(ptr);

}
//Inpatient includes in receptionist management.
void Inpat()
{
  printf("\nYou Selected:Inpatient\n\n");
  printf("\t\t---------------------\n");
  printf("\n\t\t1.Add Inpatient");
  printf("\n\n\t\t2.Review Inpatient");
  cprintf("\n\n\t\t3.Back");
  do
  {
     printf("\n\n\t\tEnter your choice:");
     scanf("%d",&choice);
     switch(choice)
     {
	case 1:Add_in();
		break;

	case 2:Rew_in();
		break;
     }
  }
  while(choice!=3);
  cprintf("\nBack to previous menu\n");
  Receptionist();
}

//Adding inpatient includes in receptionist management.
void Add_in()
{
   FILE *ptr;
   ptr=fopen("Inpatient.csv","w");
   if(ptr==NULL)
   {
     printf("Error!");
     exit(1);
   }
   printf("\nYou Selected to:1.Add Inpatient Details\n\n");
   printf("\t\t--------------------\n");
   printf("\n\t\tEnter Inpatient details:-");
   fprintf(ptr,"\n\n**************************** INPATIENT DETAILS ****************************");
   printf("\n\n\t\t\t* Admission id:");
   scanf("%d",&Adm_id);
   fprintf(ptr,"\nAdmission id:%d",Adm_id);

   printf("\n\t\t\t* Room no:");
   scanf("%s",Room_no);
   fprintf(ptr,"\nRoom no:%s",Room_no);

   printf("\n\t\t\t* Admission date:");
   scanf("%s",Adate);
   fprintf(ptr,"\nAdmission date:%s",Adate);

   printf("\n\t\t\t* Inpatient Name:");
   scanf("%s",Iname);
   fprintf(ptr,"\nInpatient Name:%s",Iname);

   printf("\n\t\t\t* Mobile no:");
   scanf("%s",Mno);
   fprintf(ptr,"\nMobile no:%s",Mno);

   printf("\n\t\t\t* Consultant:");
   scanf("%s",Cons);
   fprintf(ptr,"\nConsultant:%s",Cons);

   printf("\n\t\t\t* Cause of Admit:");
   scanf("%s",Coa);
   fprintf(ptr,"\nCause of Admit:%s",Coa);

   cprintf("\nAdded Successfully 3.Back");

   fclose(ptr);

}

//Review includes in receptionist management
void Rew_in()
{
   FILE *ptr;
   char Adm_id[150];
   ptr=fopen("Inpatient.csv","r");
   while(!feof(ptr))
   {
	fgets(Adm_id,150,ptr);
	puts(Adm_id);
   }
   fclose(ptr);

   cprintf("\nReviewed Successfully 3.Back\n");
}
//the inpatient contents ends here

//Outpatient includes in receptionist management.
void Outpat()
{
  printf("\nYou Selected:Inpatient\n\n");
  printf("\t\t---------------------\n");
  printf("\n\t\t1.Update Outpatient");
  printf("\n\n\t\t2.Review Inpatient");
  printf("\n\n\t\t3.Back");

  do
  {
     printf("\n\n\t\tEnter your choice:");
     scanf("%d",&choice);
     switch(choice)
     {
	case 1:Upd_out();
		break;

	case 2:Rew_out();
		break;
     }
  }
  while(choice!=3);
  cprintf("\nBack to previous menu\n");
  Receptionist();
}

//update outpatient includes in outpatient
void Upd_out()
{
   FILE *ptr;
   ptr=fopen("Inpatient.csv","a");
   if(ptr==NULL)
   {
     printf("Error!");
     exit(1);
   }
   printf("\nYou Selected to:1.Add Inpatient Details\n\n");
   printf("\t\t--------------------\n");
   printf("\n\t\tEnter Inpatient details:-");
   fprintf(ptr,"\n\n**************************** INPATIENT DETAILS ****************************");
   printf("\n\n\t\t\t* Admission id:");
   scanf("%d",&Adm_id);
   fprintf(ptr,"\nAdmission id:%d",Adm_id);

   printf("\n\t\t\t* Room no:");
   scanf("%s",Room_no);
   fprintf(ptr,"\nRoom no:%s",Room_no);

   printf("\n\t\t\t* Admission date:");
   scanf("%s",Adate);
   fprintf(ptr,"\nAdmission date:%s",Adate);

   printf("\n\t\t\t* Inpatient Name:");
   scanf("%s",Iname);
   fprintf(ptr,"\nInpatient Name:%s",Iname);

   printf("\n\t\t\t* Mobile no:");
   scanf("%s",Mno);
   fprintf(ptr,"\nMobile no:%s",Mno);

   printf("\n\t\t\t* Consultant:");
   scanf("%s",Cons);
   fprintf(ptr,"\nConsultant:%s",Cons);

   printf("\n\t\t\t* Cause of Admit:");
   scanf("%s",Coa);
   fprintf(ptr,"\nCause of Admit:%s",Coa);

   cprintf("\nUpdated Successfully: 3.Back");

   fclose(ptr);
}

//Review outpatient includes in outpatient
void Rew_out()
{
   FILE *ptr;
   char Adm_id[150];
   ptr=fopen("Inpatient.csv","r");
   while(!feof(ptr))
   {
	fgets(Adm_id,150,ptr);
	puts(Adm_id);
   }

   cprintf("\nReviewed 3.Back");
   fclose(ptr);
}

//File include in receptionist management.
void File()
{
  printf("\nYou Selected:Files\n\n");
  printf("\t\t---------------------\n");
  printf("\n\t\t1.Doctor Details");
  printf("\n\n\t\t2.Patient Details");
  printf("\n\n\t\t3.Staff Details");
  printf("\n\n\t\t4.Back");

  do
  {

     printf("\n\n\t\tEnter your choice:");
     scanf("%d",&choice);
     switch(choice)
     {
	case 1:Rev_doc();
		break;

	case 2:Review();
		break;

	case 3:printf("Rev_staff");break;
     }
  }
  while(choice!=4);
  cprintf("\nBack to previous menu:\n");
  Receptionist();

}

//bill includes in receptionist management.
void Bill()
{
  printf("\nYou Selected:Patient Management\n\n");
  printf("\t\t---------------------\n");
  printf("\n\t\t1.Add details[BILL]");
  printf("\n\n\t\t2.View Bill");
  printf("\n\n\t\t3.Back");

  do
  {

     printf("\n\n\t\tEnter your choice:");
     scanf("%d",&choice);
     switch(choice)
     {
	case 1:Add_bill();
		break;

	case 2:View_bill();
		break;
     }
  }
  while(choice!=3);
  cprintf("\nBack to previous menu:\n");
  Receptionist();
}

//adding bill includes in bill.
void Add_bill()
{
   FILE *ptr;
   ptr=fopen("Bill.csv","w");
   if(ptr==NULL)
   {
     printf("Error!");
     exit(1);
   }
   printf("\nYou Selected to:1.Add Details[BILL]\n\n");
   printf("\t\t--------------------\n");
   fprintf(ptr,"\n\n**************************** BILL DETAILS ****************************");
   printf("\n\n\t\t\t* Bill No:");
   scanf("%s",&Bill_no);
   fprintf(ptr,"\nBill_No:%s",Bill_no);

   printf("\n\t\t\t* PATIENT ID:");
   scanf("%s",P_id);
   fprintf(ptr,"\nPATIENT ID:%s",P_id);

   printf("\n\t\t\t* DOCTOR:");
   scanf("%s",dtr);
   fprintf(ptr,"\nDOCTOR:%s",dtr);

   printf("\n\t\t\t* DATE:");
   scanf("%s",dte);
   fprintf(ptr,"\nDATE:%s",dte);

   printf("\n\t\t\t* NAME:");
   scanf("%s",nae);
   fprintf(ptr,"\nNAME:%s",nae);

   printf("\n\t\t\t* Consult amt:");
   scanf("%s",cnslt);
   fprintf(ptr,"\nConsult amt:%s",cnslt);

   printf("\n\t\t\t* TOTAL:");
   scanf("%s",ttl);
   fprintf(ptr,"\nTOTAL:%s",ttl);

   fclose(ptr);

   cprintf("\nBill created Successfully 3.Back");
}

//view bill includes in bill.
void View_bill()
{
    FILE *ptr;
    char Bill_no[150];
    ptr=fopen("Bill.csv","r");
    while(!feof(ptr))
    {
	fgets(Bill_no,500,ptr);
	puts(Bill_no);
    }
    fclose(ptr);

    cprintf("\nReviewed 3.Back");
}
//receptionist management ends here.

//Patient Management starts here
void Patient()
{
  printf("\nYou Selected:Patient Management\n\n");
  printf("\t\t---------------------\n");
  printf("\n\t\t1.Add Patient");
  printf("\n\n\t\t2.Update Patient");
  printf("\n\n\t\t3.Review Patient");
  cprintf("\n\n\t\t4.Back");

  do
  {

     printf("\n\n\t\tEnter your choice:");
     scanf("%d",&choice);
     switch(choice)
     {
	case 1:Add();
		break;

	case 2:upd_pat();
		break;

	case 3:Review();
		break;
     }
  }
  while(choice!=4);
}

//Add patient includes in patient managaement.
void Add()
{
   FILE *ptr;
   ptr=fopen("Database.csv","w");
   if(ptr==NULL)
   {
     printf("Error!");
     exit(1);
   }
   printf("\nYou Selected to:1.Add Patient Details\n\n");
   printf("\t\t--------------------\n");
   printf("\n\t\tEnter patient details:-");
   fprintf(ptr,"\n\n**************************** PATIENT DETAILS ****************************");
   printf("\n\n\t\t\t* Patient id:");
   scanf("%s",Pat_id);
   fprintf(ptr,"\nPatient id:%s",Pat_id);

   printf("\n\t\t\t* Patient name:");
   scanf("%s",Pat_name);
   fprintf(ptr,"\nPatient Name:%s",Pat_name);

   printf("\n\t\t\t* Gender:");
   scanf("%s",gender);
   fprintf(ptr,"\nGender:%s",gender);

   printf("\n\t\t\t* Phone_no:");
   scanf("%s",ph_no);
   fprintf(ptr,"\nPhone no:%s",ph_no);

   printf("\n\t\t\t* Preference Doctor:");
   scanf("%s",Pre_doc);
   fprintf(ptr,"\nPreference Doctor:%s",Pre_doc);

   printf("\n\t\t\t* Suffering Disease:");
   scanf("%s",Suff_dis);
   fprintf(ptr,"\nSuffering Disease:%s",Suff_dis);

   printf("\n\t\t\t* City/State:");
   scanf("%s",address);
   fprintf(ptr,"\nCity/State:%s",address);

   cprintf("\nAdded Successfully 4.Back");
   Patient();
   fclose(ptr);
}

//Review patient include in patient managaement.
void Review()
{
	 FILE *ptr;
	 char Pat_id[150];
	 ptr=fopen("Database.csv","r");
	 while(!feof(ptr))
	 {
		fgets(Pat_id,150,ptr);
		puts(Pat_id);
	 }

	 cprintf("\nReviewed: Back to previous menu\n");
	 Patient();
	 fclose(ptr);
}

//Update patient includes in patient management.
void upd_pat()
{
   FILE *ptr;
   ptr=fopen("Database.csv","a");
   if(ptr==NULL)
   {
     printf("Error!");
     exit(1);
   }
   printf("\nYou Selected to:1.Add Patient Details\n\n");
   printf("\t\t--------------------\n");
   printf("\n\t\tEnter patient details:-");
   fprintf(ptr,"\n\n**************************** PATIENT DETAILS ****************************");
   printf("\n\n\t\t\t* Patient id:");
   scanf("%d",&Pat_id);
   fprintf(ptr,"\nPatient id:%d",Pat_id);

   printf("\n\t\t\t* Patient name:");
   scanf("%s",Pat_name);
   fprintf(ptr,"\nPatient Name:%s",Pat_name);

   printf("\n\t\t\t* Gender:");
   scanf("%s",gender);
   fprintf(ptr,"\nGender:%s",gender);

   printf("\n\t\t\t* Phone_no:");
   scanf("%s",ph_no);
   fprintf(ptr,"\nPhone no:%s",ph_no);

   printf("\n\t\t\t* Preference Doctor:");
   scanf("%s",Pre_doc);
   fprintf(ptr,"\nPreference Doctor:%s",Pre_doc);

   printf("\n\t\t\t* Suffering Disease:");
   scanf("%s",Suff_dis);
   fprintf(ptr,"\nSuffering Disease:%s",Suff_dis);

   printf("\n\t\t\t* City/State:");
   scanf("%s",address);
   fprintf(ptr,"\nCity/State:%s",address);

   cprintf("Updated Successfully: Back to previous menu\n");
   Patient();
   fclose(ptr);
}
//patient management stops here.

//Doctor management starts here.
void Doctor()
{
   printf("\nYou Selected:\t4.Doctor Management\n\n");
   printf("\t\t-------------------\n");
   printf("\t\t1.Add Doctor");
   printf("\n\n\t\t2.Update Doctor");
   printf("\n\n\t\t3.Review Doctor");
   cprintf("\n\n\t\t4.Back");

   do
   {
      printf("\n\n\t\tEnter your choice:");
      scanf("%d",&choice);
      switch(choice)
      {
	  case 1:Add_doc();
		break;

	  case 2:Up_doc();
		break;

	  case 3:Rev_doc();
		break;
      }
   }
   while(choice!=4);
}

//function of update doctor details.
void Up_doc()
{
    FILE *ptr;
    ptr=fopen("Doctor.csv","a");
    if(ptr==NULL)
    {
       printf("Error!");
       exit(1);
    }
    printf("\nYou Selected to:1.Add  Details\n\n");
    printf("\t\t--------------------\n");
    printf("\n\t\tEnter Doctor details:-");
    fprintf(ptr,"\n\n**************************** PATIENT DETAILS ****************************");
    printf("\n\n\t\t\t* Doctor id:");
    scanf("%d",&Doc_id);
    fprintf(ptr,"\nDoctor id:%d",Doc_id);

    printf("\n\n\t\t\t* Doctor name:");
    scanf("%s",Doc_name);
    fprintf(ptr,"\nDoctor name:%s",Doc_name);

    printf("\n\n\t\t\t* Experience:");
    scanf("%d",Doc_exp);
    fprintf(ptr,"\nExperience:%d",Doc_exp);

    printf("\n\n\t\t\t* Speciality:");
    scanf("%s",Spty);
    fprintf(ptr,"\nSpeciality:%s",Spty);

    printf("\n\n\t\t\t* Emergency no:");
    scanf("%s",E_no);
    fprintf(ptr,"\nEmergency no:%s",E_no);

    fclose(ptr);

    cprintf("\nUpdate Successfully: Back to previous menu\n");
    Doctor();
}

//function adding doc detail.
void Add_doc()
{
    FILE *ptr;
    ptr=fopen("Doctor.csv","a");
    if(ptr==NULL)
    {
       printf("Error!");
       exit(1);
    }
    printf("\nYou Selected to:1.Add  Details\n\n");
    printf("\t\t--------------------\n");
    printf("\n\t\tEnter Doctor details:-");
    fprintf(ptr,"\n\n**************************** DOCTOR DETAILS ****************************");
    printf("\n\n\t\t\t* Doctor id:");
    scanf("%d",&Doc_id);
    fprintf(ptr,"\nDoctor id:%d",Doc_id);

    printf("\n\n\t\t\t* Doctor name:");
    scanf("%s",Doc_name);
    fprintf(ptr,"\nDoctor name:%s",Doc_name);

    printf("\n\n\t\t\t* Experience:");
    scanf("%d",Doc_exp);
    fprintf(ptr,"\nExperience:%d",Doc_exp);

    printf("\n\n\t\t\t* Speciality:");
    scanf("%s",Spty);
    fprintf(ptr,"\nSpeciality:%s",Spty);

    printf("\n\n\t\t\t* Emergency no:");
    scanf("%s",E_no);
    fprintf(ptr,"\nEmergency no:%s",E_no);

    fclose(ptr);

    cprintf("\nAdded Successfully: Back to previous menu\n");
    Doctor();
}

//function to review doctor details.
void Rev_doc()
{
    FILE *ptr;
    char Doc_id[150];
    ptr=fopen("Doctor.csv","r");
    while(!feof(ptr))
    {
	fgets(Doc_id,500,ptr);
	puts(Doc_id);
    }

    cprintf("\nReviewed: Back to previous menu\n");
    Doctor();
    fclose(ptr);
}
//Doctor management stops here.

void Staff()
{
   printf("\nYou Selected:\t4.Staff Management\n\n");
   printf("\t\t-------------------\n");
   printf("\t\t1.Add Staff");
   printf("\n\n\t\t2.Review Staff");
   cprintf("\n\n\t\t3.Back");

   do
   {
      printf("\n\n\t\tEnter your choice:");
      scanf("%d",&choice);
      switch(choice)
      {
	    case 1:addstaff();break;

	    case 2:viewstaff();break;
      }
   }
   while(choice!=3);
}

void addstaff()
{
  FILE *fptr;
   fptr=fopen("staff.csv","w");
   if(fptr==NULL)
   {
     printf("Error!");
     exit(1);
   }
   printf("\nYou Selected to:1.Add Staff Details\n\n");
   printf("\t\t--------------------\n");
   printf("\n\t\tEnter Staff details:-");
   fprintf(fptr,"\n\n**************************** STAFF DETAILS ****************************");
   printf("\n\n\t\t\t* Staff id:");
   scanf("%s",sta_id);
   fprintf(fptr,"\nStaff id:%s",sta_id);

   printf("\n\t\t\t* Staff name:");
   scanf("%s",sta_name);
   fprintf(fptr,"\nStaff Name:%s",sta_name);

   printf("\n\t\t\t* Gender:");
   scanf("%s",gender);
   fprintf(fptr,"\nGender:%s",gender);

   printf("\n\t\t\t* Phone_no:");
   scanf("%s",ph_no);
   fprintf(fptr,"\nPhone no:%s",ph_no);

   printf("\n\t\t\t* Department:");
   scanf("%s",dep);
   fprintf(fptr,"\nDepartment:%s",dep);

   cprintf("\nAdded Successfully: Back to previous menu\n");
   Staff();
   fclose(fptr);
}

void viewstaff()
{
    FILE *fptr;
    char sta_id[150];
    fptr=fopen("staff.csv","r");
    while(!feof(fptr))
    {
	fgets(sta_id,500,fptr);
	puts(sta_id);
    }
    cprintf("Reviewed: Back to previous menu\n");
    Staff();
    fclose(fptr);
}
