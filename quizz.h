#ifndef QUIZZ_H_INCLUDED
#define QUIZZ_H_INCLUDED
#include <string>

using namespace std;
class user{
protected:
    char userid[20];
    char pwd[20];
    char username[50];
public:
    void setuserdetails(string,string,string);
    string getname(string);
    string getuserid();
    int checkuserExist(string);
    void show();
    int input();
};
class student:public user{

public:
    void add();
    void Remove();
    void showstudentdetails();
    void quiz();
    void viewperformance();
};
class Admin:public user{
   public:
    static void create_admin(string,string,string);
    void addstudent();
    void removestudent();
    void viewstudenet();
    void addQuestion();
    void removeQuestion();
    void viewQuestion();

};
class Question{
private:
    int quesid;
    int tot_marks;
    char ques[500],op1[100],op2[100],op3[100],op4[100],ans;
public:
    void add();
    void Remove();
    void setQuetionDetails(int,string,string,string,string,char);
    void show();
    void viewQuestion();
    void startQuiz(string);
    int ques_count();
};
class StudentPerformance{
    char studid[10];
    int marks,tot_marks;
public:
    void setMarksDetails(string,int,int);//here we cant make constructor when data write we can pass data ,whne we read data will get from file such that constu dont work
    void saveMarksDetails();
    void viewDetails(string);
    void show();
};

#endif // QUIZZ_H_INCLUDED
