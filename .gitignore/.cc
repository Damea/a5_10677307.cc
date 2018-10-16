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
        avgscore = totalage/studentcount;
        avgage   = totalage/studentcount;
        
        student<<"The average age is --"<<endl;
        student << endl;
    }
     student <<"The average score is :"<<avgage<<endl;
        
   
return 0;
}
