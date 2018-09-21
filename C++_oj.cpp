#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n%2==0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
//*******************************************
#include <iostream>
using namespace std;

int main()
{
    char score;
    while(cin>>score){
        switch(score){
        case 'A':
            cout<<"90~100"<<endl;
            break;
        case 'B':
            cout<<"80~90"<<endl;
            break;
        case 'C':
            cout<<"70~80"<<endl;
            break;
        case 'D':
            cout<<"60~70"<<endl;
            break;
        case 'E':
            cout<<"<60"<<endl;
            break;
        default:
            cout<<"error"<<endl;
        }
    }

    return 0;
}
//*******************************************
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double s,a,n;
    for(s=0,a=1,n=1;fabs((1/n))>=10e-6;s+=a/n,n+=2,a*=-1);
    cout<<"圆周率的近似值为"<<4*s<<endl;
}

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double s=0,a=1,n=1;
    while(fabs((1/n))>=10e-6){
        s+=a/n;n+=2;a*=-1;
    }
    cout<<"圆周率的近似值为"<<4*s<<endl;
}
