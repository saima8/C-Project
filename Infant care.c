#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

//global function
struct data
{
char username[25],name[35],pass[30],add[70],mob[11];
    char email[100];
    char address[50];
    char code[10];
}w[99];
void salary ()
{
    loading();
    system("cls");
    title();
}
void time ()
{
    loading();
    system("cls");
    title();
}

void contact_us ()
{

int c=0;

    loading();
    system("cls");
    title();

    printf("\n\t\t\t    \xdb Contact Us \xdb");
    printf("\n\t\t\t\--------------------------");
    FILE *fp;
fp=fopen("contact.txt","w");
    fprintf(fp,"\n\n\t\tAddress: A-91/3,Dhanmondi,AB road-2/3,Dhaka-1205,Bangladesh");
    fprintf(fp,"\n\n\t\tCare line 16060 (for appointment & emergency) ");
    fprintf(fp,"\n\n\t\t\tPhone no:");
    fprintf(fp,"\n\t\t\t*********");
    fprintf(fp,"\n\n\n\t\tNeedful Extension Numbers are:");
    fprintf(fp,"\n\t\t\tInformation Desk : 2003, 2004");
    fprintf(fp,"\n\n\t\t\t\t\xdb Offcial Details \xdb");
    fprintf(fp,"\n\n\n\t\t\tSaima Khan");
    fprintf(fp,"\n\t\t\tTel: 880-2-8144400 (PABX) Extn: 1509");
    fprintf(fp,"\n\t\t\tE-mail: saima@infantcare.com");
    fprintf(fp,"\n\n\n\t\t\tFariha Piya");
    fprintf(fp,"\n\t\t\tTel: 880-2-8144400 (PABX) Extn: 1516,");
    fprintf(fp,"\n\t\t\tE-mail: piya@infantcare.com");
    fprintf(fp,"\n\n\t\t\tDristy Islam");
    fprintf(fp,"\n\t\t\tTel: 880-2-8144400 (PABX) Extn: 3136,");
    fprintf(fp,"\n\t\t\tE-mail: dristy@infantcare.com");
fclose(fp);
fp=fopen("contact.txt","r");
int i;
for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }
fclose(fp);

printf("\n\t\t\t");
getch ();
parent_menu();
}

void complain ()
{
  char ne[100];
  char co[150];
  printf("\n\n\n\t\t\tDo You Have any complain??");
  printf("\n\t\t\tPress 1 for comment");
  printf("\n\t\t\tPress 2 for back");
  printf("\n\t\t\tPress your choice:");
  int choice;
  scanf("%d",&choice);
  if (choice==1)
  {
      loading();
      system("cls");
      title();
      printf("\n\n\t\t\t\=========================");
      printf("\n\t\t\t    \xdb Complain \xdb");
      printf("\n\t\t\t\=========================");
      printf("\n\t\t\tEnter Your Name:");
      fflush(stdin);
      gets(ne);
      printf("\n\t\t\tWrite Your Comment:");
      gets(co);
      FILE *fp;
      fp=fopen("complain.txt","a");
      fprintf(fp,"\nName:%s",ne);
      fprintf(fp,"\nComment:%s",co);
      fclose(fp);
  }
  else
  {
      printf("\n\t\t\t");

      parent_menu();
  }
       printf("\n\t\t\t");

   parent_menu();
}
void cost()
{
    loading();
    system("cls");
    title();
    printf("\n\n\t\t\t\=========================");
    printf("\n\t\t\t    \xdb Cost \xdb");
    printf("\n\t\t\t\=========================");
    printf("\n\t\t\t1:Addmission fee : 10,000");
    printf("\n\t\t\t2:Monthly fee : 1000");
    printf("\n\t\t\t12:Bed cost : 1000");
    printf("\n\t\t\t13:Toy Cost : 4000");
    printf("\n\t\t\t14:Medi care cost : 4000");
    printf("\n\t\t\t------------------------------");
    printf("\n\t\t\t\t\t Total cost : 20000");
    printf("\n\t\t\t");
    parent_menu();
}

void parent_log_in()
{
    system("cls");

    printf("\n\n\t\t\t\t\t********************");
    printf("\n\n\t\t\t\t\t      PLEASE");
    printf("\n\n\t\t\t\t\t    LOGIN HERE");
    printf("\n\n\t\t\t\t\t********************");
    printf("\n\n\t\t\t\t\t");

    FILE *fp;
      char c,username[20],pass[30]; int z=0;
      int checku,checkp;
      fp=fopen("Personal database.txt","rb");
      printf("\n\n\t\t\tTo log in please enter username and password");
      int i;
      for(i=0;i<1000;i++)
      {
        printf("\n\n\t\t\t\t  ENTER NAME: ");
        scanf("%s",username);
        fflush (stdin);
        printf("\n\n\t\t\t\t  ENTER PASSWORD: ");
        while((c=_getch())!=13)
        {
          pass[z++]=c;
          printf("%c",'*');
        }
        pass[z]='\0';
      while(!feof(fp))
        {
        fread(&w[i],sizeof(w[i]),1,fp);
          checku=strcmp(username,w[i].name);
          checkp=strcmp(pass,w[i].pass);
          if(checku==0&&checkp==0)
          {
            parent_menu();
            break;
          }

        else
          {
            printf("\n\n\n\t\t\tYou are not a Registered User\n \t\t\tPress enter to register yourself");
            if(_getch()==13)
            registration();
          }
        }
        break;
      }
     _getch();
}
void registration()
{
    system("cls");

    printf("\n\n\t\t\t\t\t********************");
    printf("\n\n\t\t\t\t\t      PLEASE");
    printf("\n\n\t\t\t\t\t    SIGNUP HERE");
    printf("\n\n\t\t\t\t\t********************");
    printf("\n\n\t\t\t\t\t");

    FILE *fp;
    char c; int z=0;
    fp=fopen("Personal database.txt","ab+");
    printf("\n\n\t\t\t\tWELCOME NEW MEMBERS");
    printf("\n\t\t\t\t....................");
    int i;
    for(i=0;i<100;i++)
    {
      printf("\n\t\t\t\t  Enter Your Name:  ");
      scanf("%s",w[i].name);
      fflush (stdin);
        while(!feof(fp))
        {
          fread(&w[i],sizeof(w[i]),1,fp);
        }

       printf("\n\t\t\t\t  Enter Your Address:  ");
      scanf("%s",w[i].add);
        while(!feof(fp))
        {
          fread(&w[i],sizeof(w[i]),1,fp);
        }

        printf("\n\t\t\t\t  Enter Your Contact Number:  ");
      scanf("%s",w[i].mob);
        while(!feof(fp))
        {
          fread(&w[i],sizeof(w[i]),1,fp);
        }

      printf("\n\t\t\t\t  SET YOUR PASSWORD: ");
      while((c=_getch())!=13)
        {
          w[i].pass[z++]=c;
          printf("%c",'*');
        }
      fwrite(&w[i],sizeof(w[i]),1,fp);
      fclose(fp);
      printf("\n\tPress enter to finish your registration");
      if((c=_getch())==13)
        {
        printf("\n\t\tYou are successfully registered,thanks");
        printf("\n\t\tLogin to your account??\n\n\t\t  ");
        parent_log_in();
        }
        break;
      }
      _getch();
}
void parent_frontpage()
{
    loading();
    system("cls");
    title();
    printf("\n\n\t\t\t\-------------------------");
    printf("\n\t\t\t   \xdb Parent Portal \xdb");
    printf("\n\t\t\t\-------------------------");
    printf("\n\n\t\t\t1.Log in");
    printf("\n\t\t\t2.Registration");
    printf("\nEnter Your Choice:\n");
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        parent_log_in();
        break;
    case 2:
        registration();
        break;
    default:
        printf("Invalid Choice");
        parent_frontpage();
        break;
    }
}
void log_out()
{
    loading();
    system("cls");
    title();
    printf("\n\t\t\tDo You want to log out??");
    printf("\n\t\t\tPress 1 to log Out");
    printf("\n\t\t\tPress 2 to Re choice");
    printf("\n\t\t\tEnter Your choice:");
    int choice;
    scanf("%d",&choice);
    if (choice==1)
    {
        printf("\n\t\t\tYou are successfully log out");
        printf("\n\n\t\t\tThanks");
        printf("\n");
        getch();
        front_page();
    }
    else
    {
        admin_menu();
    }
}

void checkParentreg()
{
    system("cls");
    int i;
    int pr;
    FILE *fp1;
    char name[10], pa[10];
     fp1 = fopen("poppy.bin","r");
    for(i=0;i<pr;++i)
    {
        while(fread(&w[i], sizeof(w), 1, fp1));
        {
        fflush(stdin);
        fscanf(fp1,"%s", w[i].name);
        printf("name : %s", name);
        fscanf(fp1,"%s", w[i].pass);
        printf("password : %s", pa);
        }
         break;

    }

fclose(fp1);

}

void checksitterreg ()
{
    loading();
    system("cls");
    title();
    int i;
    int si;
    FILE *fp1;
    fp1 = fopen("sit_reg.bin","rb+");
    fclose(fp1);
    for(i=0;i<=si+1;++i)
    {
        while(fread(&w[i], sizeof(w), 1, fp1))
        {
                 printf("\n\t\t\tUSID:");
        fprintf(fp1, "%s", w[i].name);
        printf("\n\t\t\tPassword:");
        fprintf(fp1, "%s", w[i].pass);
        printf("\n\t\t\tcode:");
        fprintf(fp1, "%s", w[i].code);
        }
        break;

    }
}
void stuff ()
{
    loading();
    system("cls");
    title();
    printf("\n\n\t\t\t\=========================");
    printf("\n\t\t\t    \xdb Staff \xdb");
    printf("\n\t\t\t\=========================");
    printf ("\n\t\t\t1. Tarek Ahmed\n");
    printf ("\n\t\t\t2. Sahadat Hossain\n");
    printf ("\n\t\t\t3. Ekram Hasan\n");
    printf ("\n\t\t\t4. Mahin Hasan\n");
    printf ("\n\t\t\t5. Sujon Ahmed\n");
    printf ("\n\t\t\t6. Saif Uddin\n");
    printf ("\n\t\t\t7. Afroja khatun\n");
    printf ("\n\t\t\t8. Suchitra Ahmed\n");
    printf ("\n\t\t\t9. Choitey Ahmed\n");
    printf ("\n\t\t\t10.Sarwar Alam\n");
     getch();
         admin_menu();

}
void sit_50 ()
{
    system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_50.txt","w");
    fprintf(fp,"Raima Sikder\n");
    fprintf(fp,"Qualification : BBA,MBA\n");
    fprintf(fp,"Address:  Plot # 15, Road # 71, Gulshan - 2, Dhaka - 1212, Bangladesh\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_50.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift2();
    }
}
void sit_49 ()
{
    system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_49.txt","w");
    fprintf(fp,"Riya khan\n");
    fprintf(fp,"Qualification :BBA\n");
    fprintf(fp,"Address:House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_49.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift2();
    }
}
void sit_48 ()
{
    system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_48.txt","w");
    fprintf(fp,"Mili pal\n");
    fprintf(fp,"Qualification : HSC\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_48.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift2();
    }
}
void sit_47 ()
{
    system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_47.txt","w");
    fprintf(fp,"Rahima Akter\n");
    fprintf(fp,"Qualification :MBA\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_47.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift2();
    }
}
void sit_46 ()
{
    system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_46.txt","w");
    fprintf(fp,"Liya Hossain\n");
    fprintf(fp,"Qualification : BBA\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_46.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift2();
    }
}
void sit_45 ()
{
    system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_45.txt","w");
    fprintf(fp,"Sikha Sikder\n");
    fprintf(fp,"Qualification : BSC\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_45.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift2();
    }
}
void sit_44 ()
{
    system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_44.txt","w");
    fprintf(fp,"Saima khan\n");
    fprintf(fp,"Qualification : MSC\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_44.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift2();
    }
}
void sit_43 ()
{
    system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_43.txt","w");
    fprintf(fp,"Shawlin\n");
    fprintf(fp,"Qualification : MBBS\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_43.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift2();
    }
}
void sit_42 ()
{
    system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_42.txt","w");
    fprintf(fp,"Pakhi Habib\n");
    fprintf(fp,"Qualification : BSC\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_42.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift2();
    }
}
void sit_41 ()
{
    system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_41.txt","w");
    fprintf(fp,"Akhi Hossain\n");
    fprintf(fp,"Qualification : MBA\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_41.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift2();
    }
}
void sit_40 ()
{
    system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_40.txt","w");
    fprintf(fp,"Likha Sikder\n");
    fprintf(fp,"Qualification : BBA\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_40.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift2();
    }
}
void sit_39 ()
{
    system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_39.txt","w");
    fprintf(fp,"Anida khan\n");
    fprintf(fp,"Qualification : MBBS\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_39.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift2();
    }
}
void sit_38 ()
{
    system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_38.txt","w");
    fprintf(fp,"Samiya Mihi\n");
    fprintf(fp,"Qualification : BBA\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_38.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift2();
    }
}
void sit_37 ()
{
    system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_37.txt","w");
    fprintf(fp,"Sneha billal\n");
    fprintf(fp,"Qualification : BBA\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_37.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift2();
    }
}
void sit_36 ()
{
    system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_36.txt","w");
    fprintf(fp,"Munia Hossain\n");
    fprintf(fp,"Qualification : BSS\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_36.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift2();
    }
}
void sit_35 ()
{
    system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_35.txt","w");
    fprintf(fp,"Madhuri Dixit\n");
    fprintf(fp,"Qualification : BCOM\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_35.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift2();
    }
}
void sit_34 ()
{
    system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_34.txt","w");
    fprintf(fp,"Priyanka chopra\n");
    fprintf(fp,"Qualification : IBA\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_34.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift2();
    }
}
void sit_33()
{
   system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_33.txt","w");
    fprintf(fp,"Anushka sharma\n");
    fprintf(fp,"Qualification : BBA\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_33.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift2();
    }
}
void sit_32 ()
{
    system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_32.txt","w");
    fprintf(fp,"Alia bhatt\n");
    fprintf(fp,"Qualification : MBA\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_32.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift2();
    }
}
void sit_31 ()
{
     system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_31.txt","w");
    fprintf(fp,"Sonam Kapoor\n");
    fprintf(fp,"Qualification : BSC\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_31.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift2();
    }
}

void sit_25 ()
{
     system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_25.txt","w");
    fprintf(fp,"Fariha Piya\n");
    fprintf(fp,"Qualification : BBA\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_25.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift1();
    }
}
void sit_24 ()
{
    system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_24.txt","w");
    fprintf(fp,"jannat Fatema\n");
    fprintf(fp,"Qualification : MBA\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_24.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift1();
    }
}
void sit_23 ()
{
     system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_23.txt","w");
    fprintf(fp,"Boby Kapur\n");
    fprintf(fp,"Qualification : IBA\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_23.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift1();
    }
}
void sit_22 ()
{
     system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_22.txt","w");
    fprintf(fp,"Audity DS\n");
    fprintf(fp,"Qualification : HSC\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_22.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift1();
    }
}
void sit_21 ()
{
     system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_21.txt","w");
    fprintf(fp,"Nilima Abed\n");
    fprintf(fp,"Qualification : BBA\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_21.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift1();
    }
}
void sit_20 ()
{
     system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_20.txt","w");
    fprintf(fp,"srity Alam\n");
    fprintf(fp,"Qualification :BSC\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_20.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift1();
    }
}
void sit_19 ()
{
     system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_19.txt","w");
    fprintf(fp,"jafrin Chawla\n");
    fprintf(fp,"Qualification : MSC\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_19.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift1();
    }
}
void sit_18 ()
{
     system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_18.txt","w");
    fprintf(fp,"Amity Kapoor\n");
    fprintf(fp,"Qualification : HSC\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_18.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift1();
    }
}
void sit_17 ()
{
    system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_17.txt","w");
    fprintf(fp,"Shifa Aktar\n");
    fprintf(fp,"Qualification : SSC,HSC\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_17.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift1();
    }

}
void sit_16 ()
{
    system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_16.txt","w");
    fprintf(fp,"Aysha Ahmed\n");
    fprintf(fp,"Qualification : MBA\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_16.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift1();
    }

}
void sit_15 ()
{
  system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_15.txt","w");
    fprintf(fp,"jannat Alam\n");
    fprintf(fp,"Qualification : BSC\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_15.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift1();
    }

}
void sit_14 ()
{
     system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_14.txt","w");
    fprintf(fp,"jafrin Haque\n");
    fprintf(fp,"Qualification : MSC\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_14.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift1();
    }

}

void sit_13 ()
{
     system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_13.txt","w");
    fprintf(fp,"Shiuly Kapoor\n");
    fprintf(fp,"Qualification : BSS\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_13.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift1();
    }

}

void sit_12 ()
{
     system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_12.txt","w");
    fprintf(fp,"Nadia Aktar\n");
    fprintf(fp,"Qualification : BSS\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_12.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift1();
    }

}

void sit_11 ()
{
     system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_11.txt","w");
    fprintf(fp,"Nabila Ahmed\n");
    fprintf(fp,"Qualification : BSS\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_11.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift1();
    }

}

void sit_10 ()
{
     system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_10.txt","w");
    fprintf(fp,"Kazi Alam\n");
    fprintf(fp,"Qualification : B.COM\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_10.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift1();
    }

}

void sit_9 ()
{
     system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_9.txt","w");
    fprintf(fp,"jafrin CS\n");
    fprintf(fp,"Qualification : BBA\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_9.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift1();
    }

}
void sit_8 ()
{
     system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_8.txt","w");
    fprintf(fp,"Amity Khan\n");
    fprintf(fp,"Qualification : MBA\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_8.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift1();
    }

}
void sit_7 ()
{
     system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_7.txt","w");
    fprintf(fp,"tahmina Aktar\n");
    fprintf(fp,"Qualification : SSC\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_7.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift1();
    }

}
void sit_6 ()
{
     system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_6.txt","w");
    fprintf(fp,"Hafiza Ahmed\n");
    fprintf(fp,"Qualification :HSC\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_6.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift1();
    }

}
void sit_5 ()
{
     system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_5.txt","w");
    fprintf(fp,"Prity zinta\n");
    fprintf(fp,"Qualification : BBA\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_5.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift1();
    }

}
void sit_4 ()
{
     system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_4.txt","w");
    fprintf(fp,"Aishwarya\n");
    fprintf(fp,"Qualification :MBA\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_4.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift1();
    }

}
void sit_3 ()
{
     system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_3.txt","w");
    fprintf(fp,"Katrina kaif\n");
    fprintf(fp,"Qualification : MBBS\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_3.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift1();
    }
}
void sit_2 ()
{
     system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_2.txt","w");
    fprintf(fp,"Deepika padukone\n");
    fprintf(fp,"Qualification : BBA\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_2.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift1();
    }

}
void sit_1 ()
{
        system("cls");
    title();

   char c=0;

        int i;
    char pname[100];
    char pphn[15];
    FILE *fp;
    fp=fopen("sit_1.txt","w");
    fprintf(fp,"Kareena Kapoor\n");
    fprintf(fp,"Qualification : MBA\n");
    fprintf(fp,"Address: House 17, Road 8, Dhanmondi, Dhaka\n");
    fprintf(fp,"Phone: +880-2-8613883, 8616074, 9670295");
    fclose(fp);
        fp=fopen("sit_1.txt","r");
       for(i=0;c!=EOF;++i)
    {
        c = getc(fp);
        printf("%c", c);
    }

    fclose(fp);
     printf("\n\n\n\t\t\tPress 1 to BAck Page");
     int choice;
    printf("\n\n\t\t\tEnter YOur choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        shift1();
    }
}
void shift2()
{
    system("cls");
    title();
    printf("\n\n\t\t\t-----------Shift 2 Details-------------");
    printf("\n\n\n\t1.Sonam Kapoor");
    printf("\n\t\t\t2.Alia bhatt");
    printf("\n\t\t\t3.Anushka sharma");
    printf("\n\t\t\t4.Priyanka chopra");
    printf("\n\t\t\t5.Madhuri Dixit");

    printf("\n\t\t\t6.Munia Hossain");
    printf("\n\t\t\t7.Sneha billal");
    printf("\n\t\t\t8.Samiya Mihi");
    printf("\n\t\t\t9.Anida khan");
    printf("\n\t\t\t10.Likha Sikder");

     printf("\n\t\t\t11.Akhi Hossain");
    printf("\n\t\t\t12.Pakhi Habib");
    printf("\n\t\t\t13.Shawlin");
    printf("\n\t\t\t14.Saima khan");
    printf("\n\t\t\t15. Sikha Sikder");

    printf("\n\t\t\t16.Liya Hossain");
    printf("\n\t\t\t17.Rahima Akter");
    printf("\n\t\t\t18. Mili pal");
    printf("\n\t\t\t19.Riya khan");
    printf("\n\t\t\t20.Raima Sikder");

   printf("\n\n\t\t\tEnter your choice: ");
    int choice;
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        sit_31();
        break;
        case 2:
        sit_32();
        break;
        case 3:
        sit_33();
        break;
        case 4:
        sit_34();
        break;
        case 5:
        sit_35();
        break;
        case 6:
        sit_36();
        break;
        case 7:
        sit_37();
        break;
        case 8:
        sit_38();
        break;
        case 9:
        sit_39();
        break;
        case 10:
        sit_40();
        break;
        case 11:
        sit_41();
        break;
        case 12:
        sit_42();
        break;
        case 13:
        sit_43();
        break;
        case 14:
        sit_44();
        break;
        case 15:
        sit_45();
        break;
        case 16:
        sit_46();
        break;
        case 17:
        sit_47();
        break;
        case 18:
        sit_48();
        break;
        case 19:
        sit_49();
        break;
        case 20:
        sit_50();
        break;

        default:
        printf("\n\n\t\t\t\tyou entered the wrong number!!!!....");
         printf("\n\t\t\tPress 1 to BAck Page");
    printf("\n\t\t\tPress 2 to Re choice");
    printf("\n\t\t\tEnter YOur choice:");
    int choice;
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        list();
    }
    else
        shift2();

    }

}


void shift1()
{
    system("cls");
    title();
    printf("\n\n\t\t\t-----------Shift 1 Details-------------");
    printf("\n\n\n\t1.Kareena Kapoor");
    printf("\n\t\t\t2.Deepika padukone");
    printf("\n\t\t\t3.Katrina kaif");
    printf("\n\t\t\t4.Aishwarya");
    printf("\n\t\t\t5.Prity zinta");

    printf("\n\t\t\t6.Hafiza Ahmed");
    printf("\n\t\t\t7.tahmina Aktar");
    printf("\n\t\t\t8.Amity Khan");
    printf("\n\t\t\t9.jafrin CS");
    printf("\n\t\t\t10.Kazi Alam");

    printf("\n\t\t\t11.Nabila Ahmed");
    printf("\n\t\t\t12.Nadia Aktar");
    printf("\n\t\t\t13.Shiuly Kapoor");
    printf("\n\t\t\t14.jafrin Haque");
    printf("\n\t\t\t15.jannat Alam");

    printf("\n\t\t\t16.Aysha Ahmed");
    printf("\n\t\t\t17.Shifa Aktar");
    printf("\n\t\t\t18.Amity Kapoor");
    printf("\n\t\t\t19.jafrin Chawla");
    printf("\n\t\t\t20.srity Alam");

    printf("\n\t\t\t21.Nilima Abed");
    printf("\n\t\t\t22.Audity DS");
    printf("\n\t\t\t23.Boby Kapur");
    printf("\n\t\t\t24.jannat Fatema");
    printf("\n\t\t\t25.Fariha Piya");


    printf("\n\n\t\t\tEnter your choice: ");
    int choice;
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        sit_1();
        break;
        case 2:
        sit_2();
        break;
        case 3:
        sit_3();
        break;
        case 4:
        sit_4();
        break;
        case 5:
        sit_5();
        break;
        case 6:
        sit_6();
        break;
        case 7:
        sit_7();
        break;
        case 8:
        sit_8();
        break;
        case 9:
        sit_9();
        break;
        case 10:
        sit_10();
        break;

        case 11:
        sit_11();
        break;
        case 12:
        sit_12();
        break;
        case 13:
        sit_13();
        break;
        case 14:
        sit_14();
        break;
        case 15:
        sit_15();
        break;
        case 16:
        sit_16();
        break;
        case 17:
        sit_17();
        break;
        case 18:
        sit_18();
        break;
        case 19:
        sit_19();
        break;
        case 20:
        sit_20();
        break;

         case 21:
        sit_21();
        break;
        case 22:
        sit_22();
        break;
        case 23:
        sit_23();
        break;
        case 24:
        sit_24();
        break;
        case 25:
        sit_25();
        break;

        default:
        printf("\n\n\t\t\t\tyou entered the wrong number!!!!....");
         printf("\n\t\t\tPress 1 to BAck Page");
    printf("\n\t\t\tPress 2 to Re choice");
    printf("\n\t\t\tEnter YOur choice:");
    int choice;
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        list();
    }
    else
        shift1();

    }

}

void list()
{
    loading();
    system("cls");
    title();
    printf("\n\n\t\t\t\=========================");
    printf("\n\t\t\t    \xdb Categories \xdb");
    printf("\n\t\t\t\=========================");
    printf("\n\n\t\t\t1. Shift 1 (9.00-1.00pm) ");
    printf("\n\t\t\t2. Shift 2 (1.00-5.00pm) ");
    printf("\n\t\t\tenter your choice: ");
    int choice;
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
      shift1();
      break;
    case 2:
        shift2();
        break;
    default:
        printf("\n\t\t\tNo match found");
 printf("\n\n\t\t\t\tyou entered the wrong number!!!!....");
    printf("\n\t\t\tPress 1 to BAck Page");
    printf("\n\t\t\tPress 2 to Re choice");
    printf("\n\t\t\tEnter YOur choice:");
    int choice, p;
    scanf("%d",&choice);
    if (choice==1)
    {
        loading();
        if(p==0)
        {
        admin_menu();
        }
        else
        {
            parent_menu();
        }
    }
    else
    {
        list();
    }
        break;

    }
}
void parent_menu()
{
   loading();
    system("cls");
    title();
     printf("\n\n\t\t\t\=========================");
    printf("\n\t\t\t    \xdb Parent Menu \xdb");
    printf("\n\t\t\t\=========================");
    printf("\n\t\t1.Description of cost");
    printf("\n\t\t2.Contact Us");
    printf("\n\t\t3.Complain");
    printf("\n\n\t\t4.Log Out");
    printf("\n\n\n\t\tEnter your choice: ");
    int choice;
    scanf("%d",&choice);
    switch (choice)
            {
            case 1:
                  cost();
                break;
            case 2:
                 contact_us();
                break;
            case 3:
               complain();
                break;
            case 4:
                 printf("\n\t\t\t");
                 front_page();
            break;
                 default:
        printf("\n\n\n\t\t\tno match found");
        printf("\n\t\t\tPress 1 for Log out");
        scanf("%d",&choice);
        if(choice==1);
        {
            printf("\n\n\t\t\tThanks");
            front_page();
        }

         }
}
void thursday ()
{
    system("cls");
    title();
    printf("\n\n");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD\tName\t\t\xDD\tCategory\t\xDD\tTime \xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Nilima Abed\t\t\xDD\tFrom Age 1 to 2\t\xDD\t 9.00-1.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Audity DS\t\t\xDD\tFrom Age 2 to 3\t\xDD\t 9.00-1.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Boby Kapur\t\t\xDD\tFrom Age 3 to 4\t\xDD\t 9.00-1.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD jannat Fatema\t\t\xDD\tFrom Age 4 to 5\t\xDD\t 9.00-1.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Fariha Piya\t\t\xDD\tFrom Age 5 to above\xDD\t 9.00-1.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Liya Hos.\t\t\xDD\tFrom Age 1 to 2\t\xDD\t 1.00-5.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Rahima Akter\t\t\xDD\tFrom Age 2 to 3\t\xDD\t 1.00-5.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Mili pal\t\t\xDD\tFrom Age 3 to 4\t\xDD\t 1.00-5.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD\ Riya khan\t\t\xDD\tFrom Age 4 to 5\t\xDD\t 1.00-5.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Raima Sikder\t\t\xDD\tFrom Age 5 to above\xDD\t 1.00-5.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n\n\n\t\t\tPress Enter To Go Menu:");
    getch();
    days();

}

void wednesday ()
{
    system("cls");
    title();
    printf("\n\n");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD\tName\t\t\xDD\tCategory\t\xDD\tTime \xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Aysha Ahmed\t\t\xDD\tFrom Age 1 to 2\t\xDD\t 9.00-1.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Shifa Aktar\t\t\xDD\tFrom Age 2 to 3\t\xDD\t 9.00-1.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Amity Kapoor\t\t\xDD\tFrom Age 3 to 4\t\xDD\t 9.00-1.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD jafrin Chawla\t\t\xDD\tFrom Age 4 to 5\t\xDD\t 9.00-1.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD srity Alam\t\t\xDD\tFrom Age 5 to above\xDD\t 9.00-1.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Munira Hos.\t\t\xDD\tFrom Age 1 to 2\t\xDD\t 1.00-5.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Sneha Habib\t\t\xDD\tFrom Age 2 to 3\t\xDD\t 1.00-5.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Sumaiya Mihi\t\t\xDD\tFrom Age 3 to 4\t\xDD\t 1.00-5.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD\ Abida khan\t\t\xDD\tFrom Age 4 to 5\t\xDD\t 1.00-5.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Sikha Sikder\t\t\xDD\tFrom Age 5 to above\xDD\t 1.00-5.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n\n\n\t\t\tPress Enter To Go Menu:");
    getch();
    days();

}

void tuesday()
{
    system("cls");
    title();
    printf("\n\n");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD\tName\t\t\xDD\tCategory\t\xDD\tTime \xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Aysha Ahmed\t\t\xDD\tFrom Age 1 to 2\t\xDD\t 9.00-1.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Shifa Aktar\t\t\xDD\tFrom Age 2 to 3\t\xDD\t 9.00-1.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Amity Kapoor\t\t\xDD\tFrom Age 3 to 4\t\xDD\t 9.00-1.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD jafrin Chawla\t\t\xDD\tFrom Age 4 to 5\t\xDD\t 9.00-1.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD srity Alam\t\t\xDD\tFrom Age 5 to above\xDD\t 9.00-1.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Munira Hos.\t\t\xDD\tFrom Age 1 to 2\t\xDD\t 1.00-5.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Sneha Habib\t\t\xDD\tFrom Age 2 to 3\t\xDD\t 1.00-5.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Sumaiya Mihi\t\t\xDD\tFrom Age 3 to 4\t\xDD\t 1.00-5.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD\ Abida khan\t\t\xDD\tFrom Age 4 to 5\t\xDD\t 1.00-5.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Sikha Sikder\t\t\xDD\tFrom Age 5 to above\xDD\t 1.00-5.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n\n\n\t\t\tPress Enter To Go Menu:");
    getch();
    days();

}

void monday ()
{
    system("cls");
    title();
    printf("\n\n");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD\tName\t\t\xDD\tCategory\t\xDD\tTime \xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Nabila Ahmed\t\t\xDD\tFrom Age 1 to 2\t\xDD\t 9.00-1.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Nadia Aktar\t\t\xDD\tFrom Age 2 to 3\t\xDD\t 9.00-1.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Shiuly Kapoor\t\t\xDD\tFrom Age 3 to 4\t\xDD\t 9.00-1.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD jafrin Haque\t\t\xDD\tFrom Age 4 to 5\t\xDD\t 9.00-1.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD jannat Alam\t\t\xDD\tFrom Age 5 to above\xDD\t 9.00-1.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Akhi Hos.\t\t\xDD\tFrom Age 1 to 2\t\xDD\t 1.00-5.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Pakhi Habib\t\t\xDD\tFrom Age 2 to 3\t\xDD\t 1.00-5.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Shawlin\t\t\xDD\tFrom Age 3 to 4\t\xDD\t 1.00-5.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD\ Saima khan\t\t\xDD\tFrom Age 4 to 5\t\xDD\t 1.00-5.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Sikha Sikder\t\t\xDD\tFrom Age 5 to above\xDD\t 1.00-5.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n\n\n\t\t\tPress Enter To Go Menu:");
    getch();
    days();

}

void sunday ()
{
    system("cls");
    title();
    printf("\n\n");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD\tName\t\t\xDD\tCategory\t\xDD\tTime \xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Hafiza Ahmed\t\t\xDD\tFrom Age 1 to 2\t\xDD\t 9.00-1.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD tahmina Aktar\t\t\xDD\tFrom Age 2 to 3\t\xDD\t 9.00-1.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Amity Khan\t\t\xDD\tFrom Age 3 to 4\t\xDD\t 9.00-1.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD jafrin CS\t\t\xDD\tFrom Age 4 to 5\t\xDD\t 9.00-1.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Kazi Alam\t\t\xDD\tFrom Age 5 to above\xDD\t 9.00-1.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Munia Hos.\t\t\xDD\tFrom Age 1 to 2\t\xDD\t 1.00-5.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Sneha billal\t\t\xDD\tFrom Age 2 to 3\t\xDD\t 1.00-5.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Samiya Mihi\t\t\xDD\tFrom Age 3 to 4\t\xDD\t 1.00-5.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD\ Anida khan\t\t\xDD\tFrom Age 4 to 5\t\xDD\t 1.00-5.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Likha Sikder\t\t\xDD\tFrom Age 5 to above\xDD\t 1.00-5.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n\n\n\t\t\tPress Enter To Go Menu:");
    getch();
    days();

}

void saturday()
{
    system("cls");
    title();
    printf("\n\n");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD\tName\t\t\xDD\tCategory\t\xDD\tTime \xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Kareena K.\t\t\xDD\tFrom Age 1 to 2\t\xDD\t 9.00-1.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Deepika pa.\t\t\xDD\tFrom Age 2 to 3\t\xDD\t 9.00-1.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Katrina ka.\t\t\xDD\tFrom Age 3 to 4\t\xDD\t 9.00-1.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Aishwarya\t\t\xDD\tFrom Age 4 to 5\t\xDD\t 9.00-1.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Prity zinta\t\t\xDD\tFrom Age 5 to above\xDD\t 9.00-1.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Sonam ka.\t\t\xDD\tFrom Age 1 to 2\t\xDD\t 1.00-5.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Alia bhatt\t\t\xDD\tFrom Age 2 to 3\t\xDD\t 1.00-5.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Anushka sh.\t\t\xDD\tFrom Age 3 to 4\t\xDD\t 1.00-5.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD\ Priyanka ch.\t\t\xDD\tFrom Age 4 to 5\t\xDD\t 1.00-5.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n-----------------------------------------------------------------------------");
    printf("\n\xDD Madhuri Dix.\t\t\xDD\tFrom Age 5 to above\xDD\t 1.00-5.00pm\xDD");
    printf("\n-----------------------------------------------------------------------------");

    printf("\n\n\n\t\t\tPress Enter To Go Menu:");
    getch();
    days();

}
void days()
{
    system("cls");
    title();
    printf("\n\n\t\t=====\xdbTime Schedule of Sitters\xdb=======");
    printf("\n\n\n\t\t1.Saturday");
    printf("\n\n\n\t\t2.Sunday");
    printf("\n\n\n\t\t3.Monday");
    printf("\n\n\n\t\t4.Tuesday");
    printf("\n\n\n\t\t5.Wednesday");
    printf("\n\n\n\t\t6.Thursday");

    printf("\n\n\n\t\tEnter Your Choice:");
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
      saturday();
      break;
    case 2:
        sunday();
        break;
    case 3:
        monday();
        break;
    case 4:
        tuesday();
        break;
    case 5:
        wednesday();
        break;
    case 6:
        thursday();
        break;
    default:
        printf("\n\t\t\tNo match found");
             printf("\n\n\n\t\t\tPress Enter to Back Page");
             int p;
             getch();
             if(p==1)
             {
                 parent_menu();
             }
             admin_menu();
             break;
}
}

void admin_menu()
{
    int p=0;
    loading();
    system("cls");
    title();

    printf("\n\n\t\t\t\=========================");
    printf("\n\t\t\t    \xdb Management Menu \xdb");
    printf("\n\t\t\t\=========================");
    printf("\n\n\n\n\t\t\t1.Time schedule of sitters");
    printf("\n\n\t\t\t2.Sitters Details");
    printf("\n\n\t\t\t3.Time schedule of stuff");
    printf("\n\n\t\t\t4.Check Registration of Sitters");
    printf("\n\n\t\t\t5.Check Registration of Parents");
    printf("\n\n\t\t\t6.Check Complain");
    printf("\n\n\t\t\t7.Log out");
    printf("\n\n\n\t\t\tEnter your choice: ");
    int choice;
    scanf("%d",&choice);
    switch (choice)
    {
    case 2:
    list();
    break;
    case 3:
    stuff();
    break;
    case 4:
    checksitterreg();
    break;
    case 5:
    checkParentreg();
    break;
    case 6:
    loading();

    system("cls");
    title();
    printf("\n\n\t\t\t\=========================");
    printf("\n\t\t\t    \xdb Check Complain \xdb");
    printf("\n\t\t\t\=========================");
    printf("\n\n");
    char c=0;
    int i;
    FILE *fp;
    fp=fopen("complain.txt","r");
    for(i=0;c!=EOF;++i)
    {
        c=getc(fp);
        printf("%c",c);
    }
    fclose(fp);
        break;
    case 7:
        printf("\n\t\t\t");

        front_page();
    break;
    default:
    printf("\n\n\n\t\t\tNo Match Found");
    log_out();
    getch();
    break;
         }
   printf("\n\t\t\t");
   system("pause");
   admin_menu();
}
void admin_log_in()
{
int i;
char name[20];
char password[30];
char ch;
    printf("\n\n\t\t\t\=========================");
    printf("\n\t\t\t    \xdb Management Portal \xdb");
    printf("\n\t\t\t\=========================");
printf("\n\n\t\t\tUsername: ");
scanf("%s",name);
printf("\n\t\t\tPassword: ");
 scanf("%s", password);

if (strcmp(name, "Saima") == 0 && strcmp(password, "1234") == 0)
{
printf("\t\t\tYour Are Successfully Log In!!!\n");
printf("\n\n\n\t\t\tPress Enter To Continue:");
getch();
admin_menu();
}
else if(strcmp(name,"Piya") == 0 && strcmp(password, "4321") == 0)
{
printf("\t\t\tYour Are Successfully Log In!!!\n");
printf("\n\n\n\t\t\tPress Enter To Continue:");
getch();
admin_menu();
}
else if(strcmp(name, "Dristy") == 0 && strcmp(password, "1234") == 0)
{
printf("\t\t\tYou Are Successfully Logged In!!!\n");
printf("\n\n\n\t\t\tPress Enter To Continue:");
getch();
admin_menu();
}
else
{
printf("\n\n\t\t\tThe user name or password you entered is invalid.\n");
printf("\n\n\t\t\tDo you want to Exit ??");
printf("\n\t\t\tPress 1 to go back page");
printf("\n\t\t\t Or");
printf("\n\t\t\tPress 2 to Re-enter your password");
printf("\n\t\t\tEnter YOur choice:");
int choice;
scanf("%d",&choice);
if (choice==1)
    front_page();
else if (choice==2)
    admin_log_in();
else
{

    printf("\n\t\t\tAgain Your choice is Invalid!!!!!!!");
getch();
}
}
}
int loading()
{
    int i;
    char a[]="Loading.......";
    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\xdb\xdb");
    for(i=0;a[i]!='\0';i++)
    {
        //Sleep(100);
        printf("%c",a[i]);
    }
}
void comments()
{   system ("CLS");
    char b;
    printf ("\n\t\t\t\tThanks for choosing this option :)");
    printf ("\n\n\tPlease put your valueable comment:-");
    scanf ("%s\n\n\t",b);
}

void parents()

{  system("color F3");
     system ("CLS");
    printf ("\n\n\t\tParent tips on how to find a babysitter or nanny\n");
    printf ("\n\n\tThe following parent resources have been developed to help parents select the ideal nanny or babysitter,organise daily routines and build great working (& playing) relationships.This parent information has been created and collated with the input of experienced mums and dads!");
    printf ("\n\n\n\t\t1. Working mothers - easing the guilt\n");
    printf ("\n\n\n\t\t2. Babysitters Ratings System Information for Parents\n");
    printf ("\n\n\n\t\t3. First Aid Courses & Safety Courses\n");
    printf ("\n\n\n\t\t4. Interview Questions when interviewing a nanny or babysitter\n");
}
void  how()

{  system("color F3");
    system ("CLS");
   printf ("\t\t\tHow does it work?\n\n");
   printf ("\n\t\t\t1. Find a baby sitter\n");
   printf ("\n\t\t\t2. Check their credentials\n");
   printf ("\n\t\t\t3. Join the network\n");
   printf ("\n\t\t\t4. Lock in a date\n");
   printf ("\n\t\t\t5. Peace of mind\n");
   printf ("\n\n\n\t\t\t !! Stay Happy !!");
}
void features ()
{
    system("color F3");
    loading();
     system("cls");
     title();
     printf ("\t\t\t\t\t child care, SIMPLIFIED\n\n");
     printf("\n\n\t\t\t1.How it works?\n");
     printf("\t\t\t2.Tips for parents\n");
     printf("\t\t\t4.parent's comments\n\n");
     printf("\n\t\t\tEnter Your Choice:");
     int n;
    scanf("%d", &n);
    switch(n)

    {
    case 1:
        how();
        break;
    case 2:
        parents();
        break;
    case 4:
       comments ();
        break;
    default:
        printf("Error");

    }
}
int management_frontpage(void)
{
        system("color F3");
        loading();
        system("cls");
        title();
        admin_log_in();

}
void title()
{
  printf("\n\n\t\t\t\-------------------------\t\t\t");
  printf("\n\t\t\t*------Infant Care------*\t\t\t");
  printf("\n\t\t\t-------------------------\t\t\t");
}
void front_page()
{
    system("color F3");
     loading();
     system("cls");
     title();
     printf("\n\n\t\t\t1.Management\n\n");
     printf("\t\t\t2.Parents\n\n");
     printf("\t\t\t3.Features\n\n");
     printf("\n\t\t\tEnter Your Choice:");
     int choice;
     int i;
     scanf("%d",&choice);

         switch(choice)
         {

         case 1:
             management_frontpage();
             i++;
             break;
         case 2:
             system("cls");
              title();
              parent_frontpage();
              i++;
            break;
         case 3:
               system("cls");
              title();
              features ();
             break;

         default:
            printf("Invalid Number");
            printf("\nPress Enter:");
            getch();
            front_page();
            break;
     }

}
int welcome_page(void)
{
        system("cls");
        system("color FC");
        printf("\n\n\n\t\t\t--------------------------\t\t\t");
        printf("\n\t\t\t--Welcome To Infant Care--\t\t\t\n");
        printf("\t\t\t-------------------------\t\t\t\n\n");
        printf("\n\t\t\tpress enter to continue!!\n");
        getch();
}
int main()
{
    system("color F3");
    loading();
    welcome_page();
    front_page();
}
