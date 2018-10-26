#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
class Student
{
public:
    Student()
    {
        //to do
    }
    Student(int number, int score)
    {
        set_number(number);
        set_score(score);
    }
    void set_number(int number)
    {
        this->number_ = number;
    }
    int get_number()
    {
        return this->number_;
    }
    void set_score(int score)
    {
        this->score_ = score;
    }
    int get_score()
    {
        return this->score_;
    }
    void Display()//打印学号和成绩
    {
        cout<<"学号："<<number_<<"\t"<<"成绩："<<score_<<endl;
    }
private:
    int number_;
    float score_;
};
class Classes
{
public:
    int total_numbers_; //学生总数
    int max_score_; //最高分
    int min_score_; //最低分
    float avg_score_; //平均分
    Classes() //构造函数
    {

    }
    Classes(int n) //构造函数，输入学生总人数
    {
        total_numbers_ = n;
        GenerateStudentsList();
    }
    ~Classes()//析构函数，释放内存
    {
        delete []students_;
    }
    void Display() //显示最高分、最低分和平均分
    {
        FindMaxMinAvgScore();
    }
private:
    Student* students_; //存放学生对象的数组指针
    //generate_students 生成n个学生组成的数组，学号按顺序1~n表示，成绩为0~100随机数
    void GenerateStudentsList()
    {
        srand((int)time(NULL));
        students_ = new Student[total_numbers_];
        for(int i=0;i<total_numbers_;i++)
        {
            students_[i].set_number(i+1);
            students_[i].set_score(rand()%101);
        }

    }
    //找出最高分、最低分的学生，输出学号和成绩，并计算平均分
    void FindMaxMinAvgScore()
    {
        max_score_ = 0;
        int max_index = -1;
        min_score_ = 101;
        int min_index = -1;
        int sum = 0;
        for(int i=0;i<total_numbers_;i++)
        {
            sum += students_[i].get_score();
            if(students_[i].get_score()>max_score_)
            {
                max_score_ = students_[i].get_score();
                max_index = i;
            }
            if(students_[i].get_score()<min_score_)
            {
                min_score_ = students_[i].get_score();
                min_index = i;
            }
        }
        avg_score_ = sum/total_numbers_;
        cout<<"最高分学生:\n";
        students_[max_index].Display();
        cout<<"\n最低分学生：\n";
        students_[min_index].Display();
        cout<<"\n平均分："<<avg_score_<<endl;
    }
};
int main()
{
    Classes classes(100);
    classes.Display();
}
