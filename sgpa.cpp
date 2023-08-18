#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    cout<<"Enter name of grade of 12 subjects serially: (IN CAPITAL LETTERS ONLY)\n";
    string grade[12];
    float credits[] = {2,3,3,2,3,3,1,1,1,1,1,0.5};
    string g;
    for(int i=0;i<12;i++)
    {
        cin>>g;
        grade[i]=g;
    }
    cout<<endl;
    float total_points=0;
    for(int i=0;i<12;i++)
    {
        if(grade[i]=="A++")
        {
            total_points+=credits[i]*10;
        }
        else if(grade[i]=="A+")
        {
            total_points+=credits[i]*9;
        }
        else if(grade[i]=="A")
        {
            total_points+=credits[i]*8.5;
        }
        else if(grade[i]=="B+")
        {
            total_points+=credits[i]*8;
        }
        else if(grade[i]=="B")
        {
            total_points+=credits[i]*7.5;
        }
        else if(grade[i]=="C+")
        {
            total_points+=credits[i]*7;
        }
        else if(grade[i]=="C")
        {
            total_points+=credits[i]*6.5;
        }
        else if(grade[i]=="D+")
        {
            total_points+=credits[i]*6;
        }
        else if(grade[i]=="D")
        {
            total_points+=credits[i]*5.5;
        }
        else if(grade[i]=="E+")
        {
            total_points+=credits[i]*5;
        }
        else if(grade[i]=="E")
        {
            total_points+=credits[i]*4;
        }
        else if(grade[i]=="F")
        {
            total_points+=credits[i]*0;
        }
        else
        {cout<<"Wrong Input!!!";}

    }
    float sgpa=total_points/21.5;
    cout<<"\n"<<"YOUR 5TH SEM SGPA IS: "<<sgpa<<endl;
    return 0;
}