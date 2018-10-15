/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/



#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct student
{
    struct{
    string ID[5];
    string name[5];
    int age[5];
    char gender[5];
    float score[5];
    char grade[5];
    double sum= score/5.0;
    double average;
    };
    
int main()
{
    
    double totalscores=0;
    int totalages=0;
    
    int malecount=0;
    int femalecount=0;
    int avgscore=0;
    int studentcount=0;
     studentcount=5;
     
     float score;
     student s;
     
}
    for(int i=0;i<studentcount; i++){
        
        
    cout<<"enter your ID :" <<endl;
    cin>>s.ID[i]>>endl;                    
        
    cout<<"\n enter your name :"<<endl;
    cin>> s.name[i]>>endl;
    
    cout<<"\n enter your age :"<<endl;
    cin>>s[i].age>>endl;
    
    cout<<"\n enter your score :"<<endl;
    cin>>s.score[i]>>endl;
    
    cout<<"\n enter your gender :"<<endl;
    cin>>s.gender[i]>>endl;
    
    
    }
    if(s.score[i]>=80 && s.score[i]<=100)
    {
        s.grade[i]="A";
    }
    
    else if (s.score[i]>=70 && s.score[i]<80)
    
{
    s.grade[i]="B";
}

    else if(s.score>=60 && s.score[i]<70)
    {
        s.grade[i]="C";
    }
    
    else if(s.score[i]>=50 && s.score < 60)
    {
        s.grade[i]="D";
    }
    
    else if(s.score[i]>=40 && s.score[i]<50 )
    {
        s.grade[i]="E";
    }
    
    else 
    {
        s.grade[i]="F";
    }
    cout<<endl;
    
    if (s.gender[i]=="Male")
    {
        malecount++;
    }
    else if (s.gender[i]=="Female")
    {
        femalecount++;
    }
    
    cout<<"*******************************************************************************"<<endl;
    
    cout<< "ID" << "  "<<"Name"<<"   "<<"Age"<<"  "<<"score"<<"   "<<"gender"<<"   "<<endl;
    
    cout<<"*******************************************************************************"<<endl;
    
    for(int i=0; i<studentcount; i++)
    {
        totalscores = totalscores + Eastman.score[i];
        totalage = totalage + Eastman.score[i];
        avgscore = totalage/studentcount;
        avgage   = totalage/studentcount;
        
        student<<"The average age is --"<<endl;
        student <<Eastman.ID[i] <<"\t"<<Eastman.Age[i]<<"\t"<< Eastern.gender[i];
        student << endl;
    }
     student <<"The average score is :"<<avgage<<endl;
        
    }
    switch (score/10.0)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    cout<<'F'<<endl;
    break;
    case 5:
    cout<<'D'<<endl;
    break;
    case 6:
    cout<<'C'<<endl;
    break;
    case 7:
    cout<<'B'<<endl;
    break;
    case 8:
    case 9:
    cout<<'A'<<endl;
    break;
  default:
      cout<<"invalid input"<<endl;
    
    
}

switch (gender)
{
    case 'M':
    case 'm':
    cout<<"Male"<<endl;
    break;
    
    case 'F':
    case 'f':
    cout<<"Female"<<endl;
    break;
    
    default:
    cout<<"wrong input"<<endl;
}

return 0;

