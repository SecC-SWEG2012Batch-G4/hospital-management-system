//HMSS hospital management system this c++ program implement different kind of services which is given in the Birhanu hospital .........
/*The program will help the patient to register with out the help of third party and see doctors tip and full information this is in
For doctor it is possible to enter tip and other patient requirement and to keep patient confidentiality doctor uses password.
********************************* section C Groups 4  member name*********************************
->Fatima Abayneh...0296/12                          ->Ephratah Wodajo..................0249/12                  ->Firdews Abrar.....0296/12
->Gelila Workneh...0312/12                          ->Seble Samuel.....................1041/12*/

#include <iostream>//input output stream.
#include<string.h>//string library.
#include<iomanip>// used to construct table with proper width.
#include<cmath>//used to calculation pary
#include<cstdlib>//used for using setw which is for size of space
#include<stdio.h>

using namespace std;

struct dateofadd
{
    int dd,mm,yy;
};
//store data of appointment
struct appoint
{
    int dd,mm,yy;
    string day;
};
//used to store data of doctors in the hospital
struct Doctors
{
string name;
int age;
char sex;
string specialst;
string schedule;
};

struct Address
{
string city;
string kfleketema;
int kebele,wereda;
string email;
string phone;
};
//used to store data of hospital
struct Hospitals
{
string name;
string service;
Doctors hos_doc;
Address hos_add;

};
//used to store personal information of patient
struct patient_info
{
string name;
string city;
string kfleketema;

char lname[100];
char blood[100];
char  contact[100];
char sex[100];
int date,month,year,age,kebele,wereda;

string health_condition;
string medicine_taken;
int no_medicine,passcode,id;

string illnesses;
string surgeries;
int no_surgeries;

string vacsination;
string allergies;
string symptoms;
int days;
float cost;
dateofadd dateadd;
Address patiadd;

double weight, height, heightt,bmi;
string tipFromDoc,recommend,checkup,prescription;

};

//store the data that the doctors must fill
struct doctors_form
{
string prescription;
string medicine;
string tip;
string recommendation;
string str1;
int passcode;
}d[1000];

//function declaration

void menu();
void patient();
void newPatient();
void oldPatient();
void inpatient();
void edit();
void doctor();
void hospital_information();
void medicalTip();
int c = 0, id = 1;

struct patient_info p[1000];//patient_info structure global definition
//here we call the menu function
int main()
{
    system("color 9F");//used to coloring the output screen
    int id;
    int c=0;
    menu();

return 0;
}
//menu function definition it used to give different options for users that help him to fulfill his target
//stores data for option
void menu(){
int opp;

    cout<<"            |=============================================================================|"<<endl;
    cout<<"            |==============This is HMSS hospital management system software===============|"<<endl;
    cout<<"            |=================Option 1-For patient =======================================|"<<endl;
    cout<<"            |=================Option 2-For Doctors =======================================|"<<endl;
    cout<<"            |=================Option 3-major Information about the hospital ==============|"<<endl;
    cout<<"            |=================Option 4-For exit ==========================================|"<<endl;
    cout<<"            |=============================================================================|"<<endl;


cout<<"\nEnter your choice from the option listed above: ";
cin>>opp;
switch(opp){
case 1:
    system("cls");//used to clear screan
    patient();//patient function is being called
    break;

case 2:
    system("cls");
    doctor();//doctores function is being called
    break;

case 3:
    system("cls");
    hospital_information();//hospital information function is being called
    break;

case 4:
    exit(1);//closing the system
    break;

default:
    //function
    break;
}
}
//patient function definition
//patient options
void patient(){
int c;
cout<<"=================Choose your option from listed below==============";

cout<<"\n\t1.For patient registration"<<endl;
cout<<"\t2.for existing patient login"<<endl;
cout<<"\t3.for inpatient "<<endl;
cout<<"\t4.For editing information"<<endl;
cout<<"\t5.Back"<<endl;

cout<<"\n\nEnter your option from listed above: ";
cin>>c;

switch(c){
case 1:
    system("cls");
    newPatient();//calling newpatient function
    break;

case 2:
    system("cls");
    oldPatient();//oldpatient function is being called
    break;

 case 3:
     system("cls");
     inpatient();
     menu();
    break;

 case 4:
     system("cls");
     edit();
     menu();
    break;
case 5:
     system("cls");
     menu();//the system return back to menu part
    break;
}

}
//newpatient definition
//registration will be occured....information of patients will be stored
void newPatient(){

int response;

  for (int i = 0; i<1; i++){
    appoint ap;
    Hospitals Hos;

Hos.hos_doc={"DR.Firdews Abrar",27,'f',"General Doctor","(Monday-Thursday)=4:00am-11:30pm,(Friday and Saturday)=2:30am-6:00am"};

        cout<<"\nEnter the day, month and year of registration respectively on different line: "<<endl;
        cin>>p[i+c].dateadd.dd;
        cin>>p[i+c].dateadd.mm;
        cin>>p[i+c].dateadd.mm;


  cout<<"\n\n-----------------------Personal Information Registration For Patient------------------------"<<endl;

     cout<<"\nEnter full  name : ";
    cin.ignore();
     getline(cin,p[i+c].name);

     cout<<"\nAddress : ";
     cout<<"\nEnter city name: ";
    cin.ignore();
     getline(cin,p[i+c].city);//used to string with spaces

     cout<<"\nEnter kfleketema : ";
     cin.ignore();
     getline(cin,p[i+c].kfleketema);

     cout<<"\nEnter kebele  : ";
     cin>>p[i+c].kebele;

     cout<<"\nEnter wereda: ";
     cin>>p[i+c].wereda;

     cout<<"\nContact Number : ";
     cin>>p[i+c].contact;

     cout<<"\nDate Of Birth : ";
     cin>>p[i+c].date;

     cout<<"\nMonth Of Birth : ";
     cin>>p[i+c].month;

     cout<<"\nYear Of Birth : ";
     cin>>p[i+c].year;

     cout<<"\nAge : ";
     cin>>p[i+c].age;

     cout<<"\nSex(m/f) : ";
     cin>>p[i+c].sex;

     cout<<"\nBlood Group : ";
     cin>>p[i+c].blood;

     system("cls");

    cout<<"\n_________________________________BMI Calculator__________________________________________ \n";

cout<<"\tBody mass index is a value derived from the mass and height of\n\t a person."
    <<"The BMI is defined as the body mass divided by the \n\tsquare of the body height,and is expressed in units of kg/m2.\n\n";
cout<<"\nPlease inter patients mass and height in order to calculate BMI"<<endl;

cout<<"Enter Weight in Kilograms : ";
cin>>p[i+c].weight;

cout<<"\nEnter Height in Meters : ";
cin>>p[i+c].height;

p[i+c].height=p[i+c].height*p[i+c].height;
p[i+c].bmi= p[i+c].weight/p[i+c].height;

if(p[i+c].bmi<18.5)
    cout<< "Under Weight";

else if(p[i+c].bmi>=18.5 &&p[i+c].bmi<=24.9)
    cout<< "Normal Range";

else if(p[i+c].bmi>=25 && p[i+c].bmi<=29.9)
    cout<< "Over Weight";

else if(p[i+c].bmi>=30 && p[i+c].bmi<=39.9)
    cout<< "Obese";

    else

system("cls");
cout<<"\n_________________________________ Medical history registration ________________________________________\n\n";

cout<<"\nEnter types of medicine taken: "<<endl;
cin.ignore();
getline(cin,p[i+c].medicine_taken);


cout<<"\nEnter number of medicine you have taken from each type: "<<endl;
cin>>p[i+c].no_medicine;
cin.ignore();

cout<<"\nEnter types of illness: "<<endl;
getline(cin,p[i+c].illnesses);


cout<<"\nEnter the types of surgery that you have been in if there is any: "<<endl;
getline(cin,p[i+c].surgeries);


cout<<"\nEnter the number of times did you have been in surgery: "<<endl;
cin>>p[i+c].no_surgeries;
cin.ignore();


cout<<"\nEnter the name of  allergies if they have any or say non: "<<endl;
getline(cin,p[i+c].allergies);


cout<<"\nEnter the symptoms of the disease that you are experiencing: "<<endl;
getline(cin,p[i+c].symptoms);
system("cls");

cout<<"\n\n==============================================Appointment====================================================="<<endl;
cout<<"\nHere is the doctors schedule "<<endl;

    cout<<"\nDoctor's name: "<<Hos.hos_doc.name<<"\nAge: "<<Hos.hos_doc.age<<"\nSex: "<<Hos.hos_doc.sex<<"\nSpeciality name: "<<Hos.hos_doc.specialst<<"\nSchedule: "<<Hos.hos_doc.schedule;

    cout<<" \n\nNow you can see when the doctor is available and choose your appointment."<<endl;

    cout<<"\n The appointment date day: ";
    cin>>ap.dd;

    cout<<"\n The month: ";
    cin>>ap.mm;

    cout<<"\n The year: ";
    cin>>ap.yy;

    cout<<"\n\nYou have successfully book an appointment : "<<endl;
    cout<<"***Don't forget your appointment and be punctual!!!**"<<endl;


system("cls");
cout<<"\n---------------------------------------------------------"<<endl;
cout<<"\nThank you the information have been registered\n";

cout<<"\t\t\t\t\tDate"<<p[i+c].dateadd.dd<<"/"<<p[i+c].dateadd.mm<<"/"<<p[i+c].dateadd.yy<<endl;

    cout<<"create passcode: ";
    cin>>p[i+c].passcode;
    p[i+c].id=id;
    c++;
    id++;
  }

   do{
    cout<<"\npress 1 to go back: ";
    cin>>response;//entering value for choosing the option which is listed above
    }while(response!=1);
     system("cls");
     patient();//if the user press 1 it return back to patient function

}
//display registered patients information
void display(){

int response;

    for(int i =0; i<c; i++){
        cout<<"patient ID: ";
        cout<<p[i].id;
        cout<<"..................Well come doctor firdews please fill the following information according to patients information............. "<<endl;
    cout<<"\n\n===============patient information stored in table================="<<endl;

    cout<<"\t\t\t\t\tDate"<<p[i].dateadd.dd<<"/"<<p[i].dateadd.mm<<"/"<<p[i].dateadd.yy<<endl;
cout<<"================================================================"<<endl;
cout<<"\n\nfirst name :            "<<setw (32)<< left<<p[i].name;//setw used to making spaces according to given size
cout<<"\nContact Number :        "<<setw (32)<< left<<p[i].contact;
cout<<"\nAge :                   "<<setw (32)<< left<<p[i].age;
cout<<"\nSex :                   "<<setw (32)<< left<<p[i].sex;
cout<<"\nBlood Group :           "<<setw (32)<< left<<p[i].blood;
cout<<"\nBMI :                  "<<setw (30)<<left<<p[i+c].bmi;
cout<<"\Medicine taken:         "<<setw (30)<< left<<p[i].medicine_taken<<endl;
cout<<"Number of medicine:     "<<setw (30)<< left<<p[i].no_medicine<<endl;
cout<<"Name of illnesses:      "<<setw (30)<< left<<p[i].illnesses<<endl;
cout<<"Type of surgeries:      "<<setw (30)<< left<<p[i].surgeries<<endl;
cout<<"Number of surgeries:    "<<setw (30)<< left<<p[i].no_surgeries<<endl;
cout<<"Type of allergic:       "<<setw (30)<< left<<p[i].allergies<<endl;
cout<<"symptoms experienced:   "<<setw (30)<< left<<p[i].symptoms<<endl;
cout<<"\n\n================================================================"<<endl;
    }
    cout<<"total: "<<c;

     do{
    cout<<"\npress 1 to go back: ";
    cin>>response;
    }while(response!=1);
     system("cls");
     doctor();//if the user presses 1 it return back to doctor function

}
//login if already registered
void oldPatient(){

int pass,response;

    cout<<"\nEnter passcode";
    cin>>pass;//asks the password that the patient have entered when he/she was registering

    for(int i = 0; i<c; i++){
    if( pass==p[i].passcode ){

        cout<<"patient ID: ";
        cout<<p[i].id;
cout<<"================================================================"<<endl;
cout<<"\nPatient name :            "<<setw (32)<< left<<p[i].name;

cout<<"\nCity name:              "<<setw (32)<< left<<p[i].city;

cout<<"\nKfleketema :            "<<setw (32)<< left<<p[i].kfleketema;
cout<<"\nKebele  :               "<<setw (32)<< left<<p[i].kebele;

cout<<"\nWereda:                 "<<setw (32)<< left<<p[i].wereda;
cout<<"\nContact Number :        "<<setw (32)<< left<<p[i].contact;

cout<<"\nDate Of Birth :         "<<setw (32)<< left<<p[i].date;
cout<<"\nMonth Of Birth :        "<<setw (32)<< left<<p[i].month;

cout<<"\nYear Of Birth :         "<<setw (32)<< left<<p[i].year;
cout<<"\nAge :                   "<<setw (32)<< left<<p[i].age;

cout<<"\nSex :                   "<<setw (32)<< left<<p[i].sex;
cout<<"\nBlood Group :           "<<setw (32)<< left<<p[i].blood;
cout<<"\nBMI :                  "<<setw (30)<<left<<p[i].bmi;

cout<<"\nMedicine taken:         "<<setw (30)<< left<<p[i].medicine_taken<<endl;

cout<<"\nNumber of medicine:     "<<setw (30)<< left<<p[i].no_medicine<<endl;
cout<<"Name of illnesses:      "<<setw (30)<< left<<p[i].illnesses<<endl;

cout<<"Type of surgeries:      "<<setw (30)<< left<<p[i].surgeries<<endl;
cout<<"Number of surgeries:    "<<setw (30)<< left<<p[i].no_surgeries<<endl;

cout<<"Type of allergic:       "<<setw (30)<< left<<p[i].allergies<<endl;
cout<<"symptoms experienced:   "<<setw (30)<< left<<p[i].symptoms<<endl;

cout<<"\n\n\n================================================================"<<endl;

        cout<<"doctor recommendation for you: ";
        cout<<p[i].recommend<<endl;

        cout<<"doctor tip: ";
        cout<<p[i].tipFromDoc<<endl;

        cout<<"doctor check up order for you: ";
        cout<<p[i].checkup<<endl;


        cout<<"doctor prescription for you: ";
        cout<<p[i].prescription<<endl;
        cout<<"\n";
    }
    }

    do{
    cout<<"\npress 1 to go back: ";
    cin>>response;
    }while(response!=1);
     system("cls");
     patient();//if the user press 1 it returns back to patient function

}
void inpatient()
{
    int response,pass;
     int days[100],cost[100];
     cout<<"\nEnter passcode";
    cin>>pass;//asks the password that the patient have entered when he/she was registering


for(int i = 0; i<c; i++){
    if( pass==p[i].passcode ){


    cout<< "Enter the number of days you have Stayed in the hospital : ";

cin>>p[i].days;
cout<<"The severity of illness is : " ;

if(p[i].days<=1)
    cout<<" Minor"<< endl;

    else if(p[i].days<=3)
    cout<<" Moderate"<< endl;

        else if(p[i].days<=6)
        cout<<" Major"<< endl;

        else
        cout<<" Extreme"<< endl;
        p[i].cost= 200*p[i].days;

   cout<<"The total cost for "<<p[i].days<<" days is : "<<p[i].cost;
 }}
    do{
    cout<<"\npress 1 to go back: ";
    cin>>response;
    }while(response!=1);
     system("cls");
     patient();
}
void edit()
{
        int response,pass;
         int choose,i;
cout<<"\nenter passcode";
    cin>>pass;//asks the password that the patient have entered when he/she was registering


for(int i = 0; i<c; i++){
    if( pass==p[i].passcode ){

cout<<"================================================================"<<endl;
cout<<"\nPatient name :            "<<setw (32)<< left<<p[i].name;

cout<<"\nCity name:              "<<setw (32)<< left<<p[i].city;

cout<<"\nKfleketema :            "<<setw (32)<< left<<p[i].kfleketema;
cout<<"\nKebele  :               "<<setw (32)<< left<<p[i].kebele;

cout<<"\nWereda:                 "<<setw (32)<< left<<p[i].wereda;
cout<<"\nContact Number :        "<<setw (32)<< left<<p[i].contact;

cout<<"\nDate Of Birth :         "<<setw (32)<< left<<p[i].date;
cout<<"\nMonth Of Birth :        "<<setw (32)<< left<<p[i].month;

cout<<"\nYear Of Birth :         "<<setw (32)<< left<<p[i].year;
cout<<"\nAge :                   "<<setw (32)<< left<<p[i].age;

cout<<"\nSex :                   "<<setw (32)<< left<<p[i].sex;
cout<<"\nBlood Group :           "<<setw (32)<< left<<p[i].blood;
cout<<"\nMedicine taken:         "<<setw (30)<< left<<p[i].medicine_taken<<endl;

cout<<"\nNumber of medicine:     "<<setw (30)<< left<<p[i].no_medicine<<endl;
cout<<"Name of illnesses:      "<<setw (30)<< left<<p[i].illnesses<<endl;

cout<<"Type of surgeries:      "<<setw (30)<< left<<p[i].surgeries<<endl;
cout<<"Number of surgeries:    "<<setw (30)<< left<<p[i].no_surgeries<<endl;

cout<<"Type of allergic:       "<<setw (30)<< left<<p[i].allergies<<endl;
cout<<"symptoms experienced:   "<<setw (30)<< left<<p[i].symptoms<<endl;

cout<<"\n\n\n================================================================"<<endl;
cout<<"\n\n\n================================================================"<<endl;
cout<<"\n\n\n================================================================"<<endl;

cout<< "which statement do u want to edit"<<endl;
cout<< "choose 1 if you want to edit first name"<<endl;
cout<< "choose 2 if you want to edit age"<<endl;
cout<< "choose 3 if you want to edit your contact"<<endl;
cout<< "choose 4 if you want to edit other information you have to register again"<<endl;
cin>>choose;
    switch(choose)
    {
    case 1:
        cout<< "enter your full name"<<endl;
            cin.ignore();
    getline(cin,p[i+c].name);
    break;
    case 2:
        cout<<"enter your age"<<endl;
        cin>>p[i+c].age;
        break;
    case 3:
        cout<<"enter your contact number here"<<endl;
        cin>>p[i+c].contact;
        break;
    case 4:
        newPatient();
        break;
    default:
        cout<< "you have entered a wrong number please try again"<<endl;
    }
    }}
    do{
    cout<<"\npress 1 to go back: ";
    cin>>response;
    }while(response!=1);
     system("cls");
     patient();

}


//function definition
//only applicable for doctors
void doctor(){
    int c,x,code,response;
    x=1565;
cout<<"Enter password:";
cin>>code;
if(code==x){
cout<<"=================Choose your option from listed below==============";
 cout<<"\n\n1.display patients information\n";
 cout<<"2.doctors note for patient\n";
 cout<<"3.back\n";

 cout<<"enter your option: ";
 cin>>c;
 cout<<endl;

 switch(c){
 case 1:
     system("cls");
     display();//calling display funtion

     break;
 case 2:
     system("cls");
     medicalTip();//calling medical tip function
    break;

case 3:
     system("cls");
     menu();//if the user press 3 it return to menu function

    break;
 }}
 else
{cout<<"\nIncorrect password!!!Please try again\n "<<endl;}
 do{
    cout<<"\npress 1 to go back: ";
    cin>>response;
    }while(response!=1);
     system("cls");
     doctor();
 }
//stored medical tip from doctors
void medicalTip(){

    int response;
    string rec,tip,pres,check;
    int pid;

    cout<<"enter patient ID: ";
    cin>>pid;//entering patients id that he/she uses when they register in order to display their information according to their id number

     for(int i=0; i<c; i++){
        if(pid==p[i].id){

        cout<<"patient ID: ";
        cout<<p[i].id;

cout<<"\n name of patient:            "<<setw (32)<<p[i].name;
 cout<<"\npatient age:             "<<setw (32)<<p[i].age;
cout<<"\nSex :                   "<<setw (32)<<p[i].sex;
cout<<"\nBlood Group :           "<<setw (32)<<p[i].blood;
cout<<"\nPatient ID Number :     "<<setw (32)<<p[i].id;
cout<<"\nBMI :                  "<<setw (30)<<left<<p[i].bmi;
cout<<"\n\nMedicine taken:         "<<setw (30)<<p[i].medicine_taken<<endl;

cout<<"Number of medicine:     "<<setw (30)<<p[i].no_medicine<<endl;
cout<<"\nName of illnesses:      "<<setw (30)<<p[i].illnesses<<endl;

cout<<"\nType of surgeries:      "<<setw (30)<<p[i].surgeries<<endl;
cout<<"Number of surgeries:    "<<setw (30)<<p[i].no_surgeries<<endl;

cout<<"\nType of allergic:       "<<setw (30)<<p[i].allergies<<endl;
cout<<"\nsymptoms experienced:   "<<setw (30)<<p[i].symptoms<<endl;
        cout<<"\n";
        }
     }

     cout<<"enter tip\n";
     cin.ignore();
     getline(cin,tip);
     fflush(stdin);

   cout<<"enter recommendation\n";
     cin.ignore();
     getline(cin,rec);
     fflush(stdin);

     cout<<"enter check up\n";
     cin.ignore();
     getline(cin,check);
     fflush(stdin);

     cout<<"enter prescription\n";
    cin.ignore();
     getline(cin,pres);
     fflush(stdin);

      for(int i=0; i<c; i++){
        if(pid==p[i].id){
             fflush(stdin);//used to copying information to display it in another function
             p[i].tipFromDoc = tip;
             fflush(stdin);

             p[i].recommend = rec;
             fflush(stdin);

             p[i].checkup = check;
             fflush(stdin);

             p[i].prescription = pres;
             fflush(stdin);

        }
        }

    do{
    cout<<"\npress 1 to go back: ";
    cin>>response;
    }while(response!=1);
     system("cls");
     doctor();//if the user press 1 it will return back to doctor functions

}
//hospital
//hospitals information is stored
void hospital_information()
{

Hospitals Hos;
Hos.name={"Birhanu centralized hospital"};

Hos.service={"\n - short-term hospitalization\n - emergency room services\n - general and specialty surgical services\n - x-ray radiology services \n - laboratory services\n - blood services."};
Hos.hos_doc={"DR.Firdews Abrar",27,'f',"General Doctor","(Monday-Thursday)=4:00am-11:30pm,(Friday and Saturday)=2:30am-6:00am"};

Hos.hos_add={"Addiss Ababa","Kolfe Keranyo",05,1,"birhanu_centrhos@gmail.com","011-345-654"};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


cout<<"Name of Hospital: "<<Hos.name<<endl;
cout<<"\n->Service that "<<Hos.name<<" provide: "<<endl<<Hos.service<<endl;
cout<<"\n General information:"<<"\n ->President — Peter L. Slavin,\n-> Total certified beds — 907\n-> Total employees (part- and full-time) — 23,302\n-> Total operating revenue — $612 million"<<endl;
cout<<"\nPatient and surgical statistics: "<<"\n #Total inpatients — 47,250\n #Average length of stay — 5.82 days\n #Admissions to observe — 7,978\n #Total surgical cases — 36,701\n #Inpatient surgical cases — 19,233\n #Ambulatory surgical cases — 17,468"<<endl;
cout<<"\nDoctors information in "<<Hos.name<<endl;
cout<<"______________________________________________________"<<endl;

cout<<"\nDoctor's name: "<<Hos.hos_doc.name<<"\nAge: "<<Hos.hos_doc.age<<"\nSex: "<<Hos.hos_doc.sex<<"\nSpeciality name: "<<Hos.hos_doc.specialst<<"\nSchedule: "<<Hos.hos_doc.schedule;


cout<<"\n\n________Hospitals Address_____________"<<endl;
cout<<"\nHispitals city: "<<Hos.hos_add.city<<"\n"<<" KfleKetema: "<<Hos.hos_add.kfleketema<<endl;
cout<<"kebele: "<<Hos.hos_add.kebele<<"\n"<<" wereda: "<<Hos.hos_add.wereda<<endl;
cout<<"Hispitals  emailaddress: "<<Hos.hos_add.email<<"\n"<<" phone number: "<<Hos.hos_add.phone<<endl;

cout<<"......................................................"<<endl;
system("pause");
system("cls");
menu();

}



