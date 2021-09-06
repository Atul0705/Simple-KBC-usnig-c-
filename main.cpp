#include<bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    char ch[11];
    string name;
    int x;
    do
    {
        x=0;
        cout<<endl<<endl;
        cout<<"**********************************************************************************************************************"<<endl;
        cout<<"*************************************************   Welcome to KBC  **************************************************"<<endl;
        cout<<"\n\n Enter your name: ";
        getline(cin,name);
        cout<<"\n Enter answer in form of 'a','b' and'c'only.";
        cout<<"\n Q1.Who is the PM of India?";
        cout<<"\n a.Rahul gandhi";
        cout<<"\n b.Narendra Modi";
        cout<<"\n c.Lal Bhadur Sashtri";
        cin>>ch[1];
        if(ch[1]=='b')
        {
            x=x+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<x;
        }
        else
        {
            cout<<"\n Sorry wrong answer.";
            goto abc;
        }
        cout<<"\n Q2.What is called as ' THE ROOF OF THE WORLD'?";
        cout<<"\n a.Nepal";
        cout<<"\n b.Rome";
        cout<<"\n c.Tibet";
        cin>>ch[2];
        if(ch[2]=='c')
        {
            x=x+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<x;
        }
        else
        {
            cout<<"\n Sorry wrong answer.";
            goto abc;
        }
        cout<<"\n Q3.What is called as ' THE LAND OF RISING SUN'?";
        cout<<"\n a.Chicago";
        cout<<"\n b.Japan";
        cout<<"\n c.Tibet";
        cin>>ch[3];
        if(ch[3]=='b')
        {
            x=x+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<x;
        }
        else
        {
            cout<<"\nSorry wrong answer.";
            goto abc;
        }
        cout<<"\n Q4.What is the capital of China?";
        cout<<"\n a.Chicago";
        cout<<"\n b.Beijing";
        cout<<"\n c.Delhi";
        cin>>ch[4];
        if(ch[4]=='b')
        {
            x=x+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<x;
        }
        else
        {
            cout<<"Sorry wrong answer.";
            goto abc;
        }
        cout<<"\n Q5.Who discover Penicillin?";
        cout<<"\n a.Alexander Felming";
        cout<<"\n b.Robert Brown";
        cout<<"\n c.Issac Newton";
        cin>>ch[5];
        if(ch[5]=='a')
        {
            x=x+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<x;
        }
        else
        {
            cout<<"\n Sorry wrong answer.";
            goto abc;
        }
        cout<<"\n Q6.Which city is called the 'PINK CITY OF INDIA' ?";
        cout<<"\n a.Bhopal";
        cout<<"\n b.Indore";
        cout<<"\n c.Jaipur";
        cin>>ch[6];
        if(ch[6]=='c')
        {
            x=x+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<x;
        }
        else
        {
            cout<<"\n Sorry wrong answer.";
            goto abc;
        }
        cout<<"\n Q7.Who invented the computer ?";
        cout<<"\n a.Charles Babbage";
        cout<<"\n b.James Watt";
        cout<<"\n c.Charles Darwin";
        cin>>ch[7];
        if(ch[7]=='a')
        {
            x=x+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<x;
        }
        else
        {
            cout<<"\n Sorry wrong answer.";
            goto abc;
        }
        cout<<"\n Q8.What is called as ' THE LAND OF WHITE ELEPHANTS'?";
        cout<<"\n a.Bangladesh";
        cout<<"\n b.Thailand";
        cout<<"\n c.India";
        cin>>ch[8];
        if(ch[8]=='b')
        {
            x=x+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<x;
        }
        else
        {
            cout<<"\n Sorry wrong answer.";
            goto abc;
        }
        cout<<"\n Q9.Which is the world's largest flower?";
        cout<<"\n a.Rose";
        cout<<"\n b.Rafflesia";
        cout<<"\n c.Tulip";
        cin>>ch[9];
        if(ch[9]=='b')
        {
            x=x+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<x;
        }
        else
        {
            cout<<"\n Sorry wrong answer";
            goto abc;
        }
        cout<<"\n Q10.What is called as ' THE DARK CONTIENENT'?";
        cout<<"\n a.Asia";
        cout<<"\n b.Australia";
        cout<<"\n c.Africa";
        cin>>ch[10];
        if(ch[10]=='c')
        {
            x=x+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<x;
        }
        else
        {
            cout<<"\n Sorry wrong answer.";
            goto abc;
        }
        abc:
        if(x==100)
        {
            cout<<"\n Wow Outstanding "<<name<<" have you done this earlier also?";
            break;
        }
        if(x==90)
        {
            cout<<"\n "<<name<<" you are extremely intelligent.";
            cout<<"\n Your Score is 90";
        }
        if(x==80)
        {
            cout<<"\n "<<name<<" you are intelligent.";
            cout<<"\n Your Score is 80";
        }
        if(50==x||x==70||x==60)
        {
            cout<<"\n "<<name<<" you are average";
            cout<<"\n Your Score is "<<x<<".";
            cout<<"\n Better luck next time";
        }
        else
        if(x<=40)
            cout<<"\n Very poor performance Not even 5 questions right";
        cout<<"\n\n\n Do you want to play again?(y/n)";
        cin>>ch[11];
    }
    while(ch[11]=='Y'||ch[11]=='y');
    return 0;
}
