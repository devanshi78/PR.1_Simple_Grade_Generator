#include<iostream>
using namespace std;

int main()
{

    int score;
    char grade;

    cout<<"enter your score : ";
    cin>>score;

    score >= 90 
        ? grade = 'A' 
        : score >= 80
            ? grade = 'B' 
            :score >= 70 
                ? grade = 'C' 
                : score >= 60 
                    ? grade = 'D' 
                    :score >= 50 
                        ? grade = 'E' 
                        : grade = 'F';

    cout<<"your grade is  "<<grade<<" .";

    switch(grade)
    {
        case'A':cout<<"Excellent work!"<<endl;
        break;
        case'B':cout<<"Well done!"<<endl;
        break;
        case'C':cout<<"Good job!"<<endl;
        break;
        case'D':cout<<"You passed, but you could do better"<<endl;
        break;
        case'E':cout<<"Excellent work!"<<endl;
        break;
        case'F':cout<<"Sorry,you failed"<<endl;
        break;
    }

    if(grade == 'A'||grade =='B'||grade =='C'||grade =='D'||grade =='E')
    {
        cout<<"Congratulations! You are eligible for the next level"<<endl;
    }
    else
    {
        cout<<"Please try again next time"<<endl;
    }
    
    return 0;
}