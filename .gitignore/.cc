


#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main()
{
    struct{
    string ID;
    string name;
    int age;
    char gender;
    float score=0.0;
    char grade;
    double sum= score/5.0;
    double average;
    };
    
    for(int i=0;i<6; i++){
        
    cout<<"enter your ID" <<endl 
    cin>>s[i].ID>>endl;                    
        
    cout<<"enter your name:"<<endl;
    cin>> s[i].name>>endl;
    
    cout<<"enter your age"<<endl;
    cin>>s[i].age>>endl;
    
    cout<<"enter your score"<<endl;
    cin>>s[i].score>>endl;
    
    cout<<"enter your grade"<<endl;
    cin>>s[i].grade>>endl;
    
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

}
