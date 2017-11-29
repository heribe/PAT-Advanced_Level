#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

struct student{
    string name,ID;
    char gender;
    int grade;
};

int main() {
    int n,tm=0,tf=0;
    student min,max;
    min.grade=100;
    max.grade=0;
    cin>>n;
    student *stu=new student[n];
    for (int i=0; i<n; i++) {
        cin>>stu[i].name>>stu[i].gender>>stu[i].ID>>stu[i].grade;
        if (stu[i].gender=='M') {
            tm=1;
            if (min.grade>stu[i].grade) {
                min=stu[i];
            }
        }
        else {
            tf=1;
            if (max.grade<stu[i].grade) {
                max=stu[i];
            }
        }
    }
    if (tf==0)
        cout<<"Absent"<<endl;
    else cout<<max.name<<" "<<max.ID<<endl;
    if (tm==0)
        cout<<"Absent"<<endl;
    else cout<<min.name<<" "<<min.ID<<endl;
    if(tm==0||tf==0)
        cout<<"NA";
    else cout<<max.grade-min.grade;
    return 0;
}