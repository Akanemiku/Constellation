#include <iostream>

using namespace std;
class Student
{
public:
    enum Gender { Male,  Female }; //ö�����ͣ��Ա�
    //������Ԫ���������ڽ�ö����������ı���ʽ
    friend std::ostream& operator<<(std::ostream& os, Gender gender)
	{
		if(gender==Female)
			os<<"Female";
		else
			os<<"Male";
		return os;
	}
    Student(); //�޲������캯��
    Student(const char* name, Gender gender) //���������캯��
    {
        
    }
    Student(const Student& student) //�������캯��
	{
		name_ = new char[strlen(Student.name_)+1];
		strcpy(name_,Student.name_);
		gender = Student.gender;
	}
    Student& operator= (const Student& student) //��ֵ�����
	{
		if(this==student) reuturn *this;
		delete[] name_;
		name_ = new char[strlen(Student.name_)+1];
		strcpy(name_,Student.name_);
	}
    ~Student() //��������
    {

    }
    void Show() const; //����Ա����
private:
    char* name_;    //����
    Gender gender_; //�Ա�
};
int main()
{
    return 0;
}
