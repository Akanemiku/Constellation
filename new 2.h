#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class Student
{
public:
    void Account(double score) //���óɼ�
    {
        score_ = score;
        total_score_ += score;
        count++;
    }
    static double Sum()        //���سɼ��ܺ�
    {
        return total_score_;
    }
    static double Average()    //��ƽ���ɼ�
    {
        return total_score_/count;
    }
private:
    double score_;              //�ɼ�
    static double total_score_;  //�ܳɼ�
    static double count;         //ѧ������
};

double Student::total_score_ = 0;
double Student::count = 0;

int main()
{
  int n; //ѧ������
  cin >> n; //��������ѧ������
  //����ѧ����̬����
  Student *student = new Student[n];
  //���ԴӼ�������ѧ���ɼ���Ҳ����������ɡ�
  for(int i=0;i<n;i++)
  {
     srand((int)time(NULL));
     student[i].Account(rand()%101);
  }
    cout<<"ѧ���ɼ�֮�ͣ�"<<Student::Sum()<<endl;
    cout<<"ѧ��ƽ���֣�"<<Student::Average()<<endl;
  return 0;
}
