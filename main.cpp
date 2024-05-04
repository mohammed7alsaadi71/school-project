#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
#include<process.h>
#include<windows.h>

using namespace std;


  void Student();
  void Teacher();
  void Public();
  void Password();

class STUDENT{
      private:
      char name[50];
      char fname[50];
      char mname[50];
      char date[15];
      char telno[15];
      int sclass;
      char div;
      int rno;
      char stream;
      float marks[5];
      char sec_code[5];
      int attct;
      float per;
      char grade;
      void getper()
      {
           per=(marks[0]+marks[1]+marks[2]+marks[3]+marks[4])/5;
      }
      void getgrade()
      {
           if(per>=80)
           grade='A';
           else if((per>=60)&&(per<=79))
           grade='B';
           else if((per>=40)&&(per<=59))
           grade='C';
           else if((per>=35)&&(per<=39))
           grade='D';
           else if(per<35)
           grade='E';
      }
      public:
      void enter()
      {
           cout<<"\t\t\t  -------------------------------"<<"\n";
           cout<<"\t\t\t     enter the student details "<<"\n";
           cout<<"\t\t\t  -------------------------------"<<"\n\n";
           cout<<"\t\t name of the student    : ";
           cin.ignore();
           cin.getline(name,50);
           cout<<"\t\t father's name          : ";
           cin.getline(fname,50);
           cout<<"\t\t mother's name          : ";
           cin.getline(mname,50);
           cout<<"\t\t date of birth(dd/mm/yy): ";
           cin.getline(date,15);
           cout<<"\t\t telephone number       : ";
           cin.getline(telno,15);
           cout<<"\t\t security code          : ";
           cin.getline(sec_code,5);
           cout<<"\t\t class                 : ";
           cin>>sclass;
           cout<<"\t\t division               : ";
           cin>>div;
           cout<<"\t\t roll number          : ";
           cin>>rno;
           cout<<"\t\t days present           : ";
           cin>>attct;
           cout<<"\n\t\t stream('C' for computer or 'B' for biology ): ";
           cin>>stream;
           cout<<"\n";
           if(stream=='C')
           {
              cout<<"\t\t\t  -----------------------------"<<"\n";
              cout<<"\t\t\t    enter the subject marks"<<"\n";
              cout<<"\t\t\t  -----------------------------"<<"\n\n";
              cout<<"\t\t\t       physics    : ";
              cin>>marks[0];
              cout<<"\t\t\t       chemistry  : ";
              cin>>marks[1];
              cout<<"\t\t\t       mathematics: ";
              cin>>marks[2];
              cout<<"\t\t\t       computer   : ";
              cin>>marks[3];
              cout<<"\t\t\t       english    : ";
              cin>>marks[4];
           }
           else
           {
              cout<<"\t\t\t  -----------------------------"<<"\n";
              cout<<"\t\t\t    enter the subject marks "<<"\n";
              cout<<"\t\t\t  -----------------------------"<<"\n\n";
              cout<<"\t\t\t       physics   : ";
              cin>>marks[0];
              cout<<"\t\t\t       chemistry  : ";
              cin>>marks[1];
              cout<<"\t\t\t       mathematics : ";
              cin>>marks[2];
              cout<<"\t\t\t       biology    : ";
              cin>>marks[3];
              cout<<"\t\t\t       english     : ";
              cin>>marks[4];
           }
           cout<<"\n\n";
           getper();
           getgrade();
      }
      void display_report()
      {
           cout<<"----------------------------------------";
           cout<<"---------------------------------------\n";
           cout<<"                            student report card\n";
           cout<<"----------------------------------------";
           cout<<"---------------------------------------\n\n";
           cout<<"                         ------------------------\n";
           cout<<"                            personal details\n";
           cout<<"                         ------------------------\n\n";
           cout<<"name: "<<name<<"\t\t";
           cout<<"class: "<<sclass<<"\t";
           cout<<"div: "<<div<<"\t\t";
           cout<<"roll no: "<<rno<<"\n\n";
           cout<<"date of birth: "<<date<<"\t";
           if(stream=='C')
           {
               cout<<"stream: "<<"computer"<<"\t";
           }
           else if(stream=='B')
           {
                cout<<"stream : "<<"biology "<<"\t";
           }
           cout<<"telephone : "<<telno<<"\n\n";
           cout<<"fathers name : "<<fname<<"\t\t\t";
           cout<<" mothers name  : "<<mname<<"\n\n";
           cout<<"                        ----------------------------\n";
           cout<<"                            academic performance\n";
           cout<<"                        ----------------------------\n\n";
           cout<<"                 ---------------------------------------\n";
           cout<<"                                  marks\n";
           cout<<"                 ---------------------------------------\n";
           if(stream=='C')
           {
               cout<<"\t\t\t physics\t"<<marks[0]<<"\n";
               cout<<"\t\t\t  chemistry\t"<<marks[1]<<"\n";
               cout<<"\t\t\t  maths\t\t"<<marks[2]<<"\n";
               cout<<"\t\t\t  computer\t"<<marks[3]<<"\n";
               cout<<"\t\t\t  english\t"<<marks[4]<<"\n";
           }
           else if(stream=='B')
           {
               cout<<"\t\t\t  physics\t"<<marks[0]<<"\n";
               cout<<"\t\t\t  chemistry\t"<<marks[1]<<"\n";
               cout<<"\t\t\t  maths\t\t"<<marks[2]<<"\n";
               cout<<"\t\t\t  biology\t"<<marks[3]<<"\n";
               cout<<"\t\t\t  english\t"<<marks[4]<<"\n";
           }
           cout<<"                -------------------        ------------\n";
           cout<<"                 percentage: "<<per<<"%"<<"           ";
           cout<<"grade: "<<grade<<"\n";
           cout<<"                -------------------        ------------\n\n";
      }
      void display_all()
      {
           cout<<"\t\t name: "<<name<<"\n";
           cout<<"\t\father: "<<fname<<"\t"<<"mother: "<<mname<<"\n";
           cout<<"\t\t roll no: "<<rno<<"\t"<<"secure code : "<<sec_code<<"\n";
           cout<<"\t\t class : "<<sclass<<" "<<div<<"\t";
           cout<<"stream: "<<stream<<"\n";
           cout<<"\t\t telephone no : "<<telno<<"\n\n";
           cout<<"\t\t                     marks"<<"\n";
           cout<<"\t\t phy\t chem\ maths\t bio/comp\t eng "<<"\n";
           cout<<"\t\t"<<marks[0]<<"\t"<<marks[1]<<"\t"<<marks[2]<<"\t";
           cout<<marks[3]<<"\t\t"<<marks[4]<<"\n\n";
           cout<<"\t\t percentage: "<<per<<"%\t\t"<<"grade: "<<grade<<"\n";
           cout<<"\t\t attendance: "<<attct;

      }
      friend void del();
      friend void modify();
      friend void search();
      friend void search_student();
      friend void sort();
      friend void sortmark();
      friend void sortper();
};


void add()
{
     STUDENT s;
     ofstream f("record.dat",ios::binary|ios::app);
     s.enter();
     f.write((char*)&s,sizeof(s));
     f.close();
}


void dispall()
{
     STUDENT s;
     ifstream f("record.dat");
     if(!f)
     {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t file not found!";
         cout<<"\n\n\n\n\n\n\n\n";
     }
     else
     {
         cout<<"\t\t\t  ---------------------------"<<"\n";
         cout<<"\t\t\t     list of class records LIST"<<"\n";
         cout<<"\t\t\t  ---------------------------"<<"\n\n";
         while(f.read((char*)&s,sizeof(s)))
         {
             s.display_all();
             cout<<"\n\n\n\t\t---------------------------------------------\n\n\n";
         }
     }
     f.close();
}


void del()
{
     STUDENT s;
     ifstream f1("record.dat");
     ofstream f2("temp.dat",ios::binary);
     int n,flag=0;
     if(!f1)
     {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t file not found!";
         cout<<"\n\n\n\n\n\n\n\n";
     }
     else
     {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t";
         cout<<"enter the roll number of the student: ";
         cin>>n;
         system("cls");
         while(f1.read((char*)&s,sizeof(s)))
         {
             if(n!=s.rno)
             {
                 f2.write((char*)&s,sizeof(s));
                 flag=1;
             }
         }
         if(flag==0)
         {
             cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t record not found!";
             cout<<"\n\n\n\n\n\n\n\n";
         }
         else
         {
              cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t";
              cout<<" the record record was deleted successfully";
              cout<<"\n\n\n\n\n\n\n\n";
         }
     }
     f1.close();
     f2.close();
     remove("Record.dat");
     rename("Temp.dat","Record.dat");
}


void modify()
{
     STUDENT s;
     ifstream f1("Record.dat");
     ofstream f2("Temp.dat",ios::binary);
     int n,flag=0;
     if(!f1)
     {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t file  not found!";
         cout<<"\n\n\n\n\n\n\n\n";
     }
     else
     {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t";
         cout<<"enter the roll number of the student: ";
         cin>>n;
         system("cls");
         while(f1.read((char*)&s,sizeof(s)))
         {
             if(n==s.rno)
             {
                 cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t";
                 cout<<"enter the modified details of the student";
                 Sleep(3000);
                 system("cls");
                 s.enter();

                 f2.write((char*)&s,sizeof(s));
                 flag=1;
             }
             else
             {
                 f2.write((char*)&s,sizeof(s));
             }
         }
         if(flag==0)
         {
             cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t record not found !";
             cout<<"\n\n\n\n\n\n\n\n";
         }
     }
     f1.close();
     f2.close();
     remove("Record.dat");
     rename("Temp.dat","Record.dat");
}


void search()
{
     STUDENT s;
     ifstream f("Record.dat");
     int n,flag=0;
     if(!f)
     {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t file not found!";
         cout<<"\n\n\n\n\n\n\n\n";
     }
     else
     {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t";
         cout<<"enter the roll number of the student: ";
         cin>>n;
         system("cls");
         while(f.read((char*)&s,sizeof(s)))
         {
             if(n==s.rno)
             {
                 flag=1;
                 s.display_report();
             }
         }
         if(flag==0)
         {
             cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t record not found!";
             cout<<"\n\n\n\n\n\n\n\n";
         }
     }
     f.close();
}


void search_student()
{
     STUDENT s;
     ifstream f("Record.dat");
     int n,flag=0;
     char a[5];
     if(!f)
     {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t file not found!";
         cout<<"\n\n\n\n\n\n\n\n";
     }
     else
     {
         cout<<"\n\n\n\n\n\n\n\n\n\t\t\t";
         cout<<"enter your roll number: ";
         cin>>n;
         cout<<"\n\t\t\t";
         cout<<"enter your secure code : ";
         cin.ignore();
         cin.getline(a,5);
         system("cls");
         while(f.read((char*)&s,sizeof(s)))
         {
             if((n==s.rno) && (strcmp(a,s.sec_code)==0))
             {
                 flag=1;
                 s.display_report();
             }
         }
         if(flag==0)
         {
             cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t record not found!";
             cout<<"\n\n\n\n\n\n\n\n";
         }
     }
     f.close();
}


void sortper()
{
     STUDENT s,t[100],temp;
     ifstream f("Record.dat");
     int n=0;
     if(!f)
     {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t file not found!";
         cout<<"\n\n\n\n\n\n\n\n";
     }
     else
     {
         {
             while(f.read((char*)&s,sizeof(s)))
             {
                 t[n++]=s;
             }
         }
         f.close();

         for(int i=0;i< n; i++)
         {
             for(int j=0;j<n-1;j++)
             {
                 if(t[j].per<t[j+1].per)
                 {
                     temp=t[j];
                     t[j]=t[j+1];
                     t[j+1]=temp;
                 }
             }
         }


         cout<<"\t\t\t  -----------------------------------"<<"\n";
         cout<<"\t\t\t     list of class records (sorted)"<<"\n";
         cout<<"\t\t\t  -----------------------------------"<<"\n\n";
         for(int i=0;i<n;i++)
         {
             t[i].display_all();
             cout<<"\n\n\n\t\t---------------------------------------------\n\n\n";
         }
         getch();
     }
}

/**************************sorting by mark**************************/
void sortmark()
{
     STUDENT s,t[100],temp;
     ifstream f("Record.dat");
     int x,y,n=0;
     char ch[25];
     if(!f)
     {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t file not found!";
         cout<<"\n\n\n\n\n\n\n\n";
     }
     else
     {
         {
             while(f.read((char*)&s,sizeof(s)))
             {
                 t[n++]=s;
             }
         }
         f.close();

         cout<<"\n\n\n\n\n\n";
         cout<<"\t\t\t  ----------------------"<<"\n";
         cout<<"\t\t\t     select a subject"<<"\n";
         cout<<"\t\t\t  ----------------------"<<"\n";
         cout<<"\t\t\t       1. physics "<<"\n";
         cout<<"\t\t\t       2.  chemistry"<<"\n";
         cout<<"\t\t\t       3. maths "<<"\n";
         cout<<"\t\t\t       4. biology or computer"<<"\n";
         cout<<"\t\t\t       5. English"<<"\n\n";
         cout<<"\t\t\t     enter your option: ";
         cin>>y;
         system("cls");
         cout<<endl;
         if(y>5)
         {
             cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t wrong option!";
             cout<<"\n\n\n\n\n\n\n\n";
         }
         else
         x=y-1;

         for(int i=0;i<n;i++)
         {
             for(int j=0;j<n-1;j++)
             {
                 if(t[j].marks[x]<t[j+1].marks[x])
                 {
                     temp=t[j];
                     t[j]=t[j+1];
                     t[j+1]=temp;
                 }
             }
         }


         cout<<"\n\n\n\n\n\n";
         cout<<"\t\t\t"<<"-------------------------------"<<"\n";
         cout<<"\t\t\t"<<"   SL. NO:"<<"\t"<<"marks"<<"\t"<<"name"<<"\n";
         cout<<"\t\t\t"<<"-------------------------------"<<"\n\n";
         for(int i=0;i<5;++i)
         {
             cout<<"\t\t\t   ";
             cout<<i+1<<". "<<"\t\t";
             cout<<t[i].marks[x]<<"\t"<<t[i].name;
             cout<<endl;
         }
         cout<<"\n\n\n";
     }
}

void statistics()
{
     int n;
     cout<<"\n\n\n\n\n\n\n";
     cout<<"\t\t              ----------------"<<"\n";
     cout<<"\t\t                 statistics"<<"\n";
     cout<<"\t\t              ----------------"<<"\n";
     cout<<"\t\t   1. view ascending order of percentage"<<"\n";
     cout<<"\t\t   2. view top five marks in each subject"<<"\n\n";
     cout<<"\t\t           enter your option: ";
     cin>>n;
     system("cls");
     switch(n)
     {
              case 1: sortper();
                      break;
              case 2: sortmark();
                      break;
              default:cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWRONG OPTION!";
                      cout<<"\n\n\n\n\n\n\n\n";
     }
}


void Intro()
{
     Sleep(3000);
     system("cls");
     for(int i=1;i<=100;++i)
     {
         Sleep(5);
         system("cls");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWELCOME TO";
         cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tLOADING "<<i<<"%";
         if(i==100)
         {
             Sleep(1000);
         }
     }
     system("cls");
     cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\tStudent Grading System";
     Sleep(3000);
     system("cls");
}


void Segregation()
{
     int n;
     start:
     system("cls");
     cout<<"\n\n\n\n\n";
     cout<<"\t\t\t      ---------------"<<"\n";
     cout<<"\t\t\t         main menu"<<"\n";
     cout<<"\t\t\t      ---------------"<<"\n\n\n";
     cout<<"\t\t\t     select options"<<"\n\n";
     cout<<"\t\t-------------------------------------------"<<"\n";
     cout<<"\t\t  1. student\t2. teacher \t3. public"<<"\n";
     cout<<"\t\t-------------------------------------------"<<"\n\n";
     cout<<"\t\t             (press 4 to exit)"<<"\n\n\n";
     cout<<"\t\t      enter an option: ";
     cin>>n;
     system("cls");
     switch(n)
     {
              case 1: system("cls");
                      Student();

              case 2: Teacher();

              case 3: Public();

              case 4: exit(0);

              default:cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t wrong option!";
                      cout<<"\n\n\n\n\n\n\n\n";
                      system("pause");
     }
     goto start;
}

/*************************TEACHER FUNCTION*************************/
void Teacher()
{
    for(;;){
            int num;
     int n;
     start:
     system("cls");
     cout<<"\n\n\n\n\n\n";
     cout<<"\t\t\t\t  ------------"<<"\n";
     cout<<"\t\t\t\t      menu"<<"\n";
     cout<<"\t\t\t\t  ------------"<<"\n";
     cout<<"\t\t\t     1. Create new Record"<<"\n";
     cout<<"\t\t\t     2. Search Existing Record"<<"\n";
     cout<<"\t\t\t     3. Update a Record"<<"\n";
     cout<<"\t\t\t     4. Remove a Record"<<"\n";
     cout<<"\t\t\t     5. Display All Records"<<"\n";
     cout<<"\t\t\t     6. Class Records"<<"\n";
     cout<<"\t\t\t     7. Back to Main Menu"<<"\n\n";
     cout<<"\t\t\t     enter your option: ";
     cin>>n;
     system("cls");
     switch(n)
     {
              case 1: add();
                      break;
              case 2: search();
                      break;
              case 3: modify();
                      break;
              case 4: del();
                      break;
              case 5: dispall();
                      break;
              case 6: statistics();
                      break;
              case 7: Segregation();
                      break;
              default:cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t wrong option!";
                      cout<<"\n\n\n\n\n\n\n\n";
     }
     system("pause");
     goto start;
     cout<<"enter num 1 for exit or enter num 2 back minun";
     cin>>num;

     if(num==1)
        break;
     else
     {
      continue;
     }

    }
}

/*************************STUDENT FUNCTION*************************/
void Student()
{
     int n;
     start:
     system("cls");
     cout<<"\n\n\n\n\n\n\n";
     cout<<"\t\t\t\t ------------"<<"\n";
     cout<<"\t\t\t\t     MENU"<<"\n";
     cout<<"\t\t\t\t ------------"<<"\n";
     cout<<"\t\t\t   1. Search Current Record"<<"\n";
     cout<<"\t\t\t   2. View Class Record"<<"\n";
     cout<<"\t\t\t   3. Back to Main Menu"<<"\n\n";
     cout<<"\t\t\t   enter your option: ";
     cin>>n;
     system("cls");
     switch(n)
     {
              case 1:search_student();
                     break;
              case 2:statistics();
                     break;
              case 3:Segregation();
                     break;
              default:cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t wrong option!!";
                      cout<<"\n\n\n\n\n\n\n\n";
     }
     system("pause");
     goto start;
}


void Public()
{
     int n;
     start:
     system("cls");
     cout<<"\n\n\n\n\n\n\n\n";
     cout<<"\t\t\t\t ------------"<<"\n";
     cout<<"\t\t\t\t     menu "<<"\n";
     cout<<"\t\t\t\t ------------"<<"\n";
     cout<<"\t\t\t   1. View Class Record"<<"\n";
     cout<<"\t\t\t   2. Back to Main Menu"<<"\n\n";
     cout<<"\t\t\t   enter an option: ";
     cin>>n;
     system("cls");
     switch(n)
     {
              case 1: statistics();
                      break;
              case 2: Segregation();
                      break;
              default:cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t wrong option!!";
                      cout<<"\n\n\n\n\n\n\n\n";
     }
     system("pause");
     goto start;
}

/***********************PASSWORD FUNCTION***********************/
void Password()
{
     char pass[7];
     pass[6]='\0';
     int t=0;
     start:
     cout<<"\n\n\n\n\n\n\n\n\n\t\t\tenter the password: ";
     for(int i=0;i<6;++i)
     {
             pass[i]=getch();
             cout<<"*";
     }
     cout<<"\n\n";
     if(strcmp(pass,"123456")==0)
     {
         cout<<"\t\t\t      access granted";
         Sleep(3000);
         system("cls");
         Teacher();
     }
     else
     {
         if(t==2)
         {
             cout<<"\t\t\t     access denied"<<"\n\n\n\n\n\n\n\n";
             system("pause");
             system("cls");
             Segregation();
         }
         cout<<"\t\t\t     try again ";
         ++t;
         Sleep(3000);
         system("cls");
         goto start;
     }
}


void SEQUENCE()
{
     Intro();
     Segregation();
}


int main()
{
     system("Student Grading System");
     SEQUENCE();
     getch();
     return 0;
}



