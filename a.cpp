#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

unsigned char** new_array2d(unsigned int row, unsigned int column)
{
     unsigned char **array2d = new unsigned char*[row];
     for(int i=0;i<row;i++)
     {
         array2d[i] = new unsigned char[column];
     }
     return array2d;
}
void delete_array2d(unsigned char** array2d, unsigned int row)
{
    for(int i=0;i<row;i++)
    {
        delete []array2d[i];
    }
	delete[] array2d;
    array2d = NULL;		//避免野指针
}
void set_array2d(unsigned char** array2d, unsigned int row, unsigned int column)
{
      for(int i=0;i<row;i++)
        for(int j=0;j<column;j++){
            array2d[i][j] = rand()%256;//0-255
        }
}
unsigned int* histgram(unsigned char** array2d, unsigned int row, unsigned int column)
{
    unsigned int *arr = new unsigned int[256];
	for(int i=0;i<256;i++)
		arr[i] = 0;
    for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			arr[array2d[i][j]]++;
		}
	}
	return arr;
}
void print_array(unsigned int* array1d, unsigned int n)
{
    for(int i=0;i<n;i++)
        cout<<(int)array1d[i]<<" ";
    cout<<endl;
}
void print_array2d(unsigned char** array2d, unsigned int row, unsigned int column)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
            cout<<(int)array2d[i][j]<<" ";
        cout<<endl;
    }
}

unsigned char** get_sub_array(unsigned char** array2d, unsigned int row_index, unsigned int column_index, unsigned int height, unsigned int width)
{
    unsigned char **sub = new unsigned char*[height+1];
    for(int i=0;i<height;i++)
        sub[i] = new unsigned char[width];
	
    int a=0,b=0;
    for(int i=row_index;i<(row_index + height);i++,a++)
    {
        for(int j=column_index;j<(column_index + width);j++,b++)
        {
            sub[a][b] = array2d[i][j];
        }
    }
	return sub;

}
void gray_to_binary(unsigned char** array2d, unsigned int row, unsigned int column)
{
   for(int i=0;i<row;i++)
   {
       for(int j=0;j<column;j++)
       {
           if((int)array2d[i][j]>=128)
               array2d[i][j] = 1;
           else
               array2d[i][j] = 0;
       }
   }
}
unsigned int find_min_value(unsigned char** array2d)
{
  // to do list
}
int main()
{
    srand((unsigned)time(NULL));
    unsigned int row = 0;
    unsigned int column = 0;
    cin >> row >> column;

    unsigned char** array2d = new_array2d(row, column);
    set_array2d(array2d, row, column);
    cout << "Oringin array" << endl;
    print_array2d(array2d, row, column);

    unsigned int* hist = histgram(array2d, row, column);
    cout << "Histgram" << endl;
    print_array(hist, 256);

    unsigned char** sub_array_2d = get_sub_array(array2d, 1, 1, 3, 3);
    cout << "Sub array" << endl;
    print_array2d(sub_array_2d, 3, 3);

    gray_to_binary(sub_array_2d, 3, 3);
    cout << "Binary sub array" << endl;
    print_array2d(sub_array_2d, 3, 3);
    /*
    unsigned int min_value = find_min_value(sub_array_2d);
    cout << "The min value is " << min_value << endl;
    cout << "Now free memeory" << endl;
    delete_array2d(array2d, row);
    delete_array2d(sub_array_2d, 3);
    delete [] hist;
    cin.get();
    */
    return(0);
}





#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<string>
#include<sstream> 
#include<math.h>
#include<bitset>
using namespace std;

unsigned char** new_array2d(unsigned int row, unsigned int column)  
{  
	unsigned char** p = new unsigned char*[row];
	for(int i = 0; i < row; i++){
		p[i] = new unsigned char[column];
	}
	return p;
}  

  

void delete_array2d(unsigned char** array2d, unsigned int row)  
{  
	for(int i = 0; i < row; i++){
		delete[] array2d[i];
	}
	delete[] array2d;
	array2d = NULL;            //彻底删除指针，防微杜渐 
}  

  

void set_array2d(unsigned char** array2d, unsigned int row, unsigned int column)  
{  
	for(int i = 0; i < row ; i++){
		for(int j = 0; j < column; j++){
			array2d[i][j] = rand()%(255 + 1);  //取值范围 0-255 
		}
	}

}  

  

unsigned int* histgram(unsigned char** array2d, unsigned int row, unsigned int column)  
{  
	unsigned int* p = new unsigned int[256];
	for(int i = 0; i < 256; i++){
		p[i] = 0;
	}
	for(int i = 0; i < row; i++){
		for(int j = 0; j < column; j++){
			p[array2d[i][j]]++;
		}
	}
	return p;

}  

  

void print_array1d(unsigned int* array1d, unsigned int n)  
{  
	for(int i = 0; i < n; i++){
		cout<<(int)*(array1d + i)<< " ";
		if((i+1)%20 == 0)  cout<<"\n";
	}
	cout<<endl;
}  

  

  

void print_array2d(unsigned char** array2d, unsigned int row, unsigned int column)  
{  
	for(int i = 0; i < row ; i++){
		for(int j = 0; j < column; j++){
			cout<<setw(3)<<(int)*(*(array2d + i) + j)<<" ";
		}
		cout<<"\n";
	}

}  

  

unsigned char** get_sub_array(unsigned char** array2d, unsigned int row_index, unsigned int column_index, unsigned int height, unsigned int width)  
{  
	unsigned char **p = new unsigned char*[height];
	for(int i = 0; i < height; i++){
		*(p + i) = new unsigned char[width];
	}
	
	for(int i = row_index, m = 0; i < (row_index + height); i++, m++){
		for(int j = column_index, n = 0; j < (column_index + width); j++, n++){
			p[m][n] = array2d[i][j];
		}
	}
	
	return p;

}  

  

void gray_to_binary(unsigned char** array2d, unsigned int row, unsigned int column)  
{  	
	for(int i = 0; i < row; i++){
		for(int j = 0; j < column; j++){
			if((int)array2d[i][j] >= 128)  array2d[i][j] = 1;
			else array2d[i][j] = 0;
		}
	}

}  

int func_binary(int n){              //二进制转换成十进制 
	int k = 0, sum = 0;
	while(n > 0){
		sum += (n%10)*pow(2, k);
		k++;
		n /= 10;
	}
	
	return sum;
}
unsigned int find_min_value(unsigned char** array2d)  
{  
	int p[4][8];
	int a[9] = {array2d[0][0], array2d[0][1], array2d[0][2],            //所获得的3x3的二维数组按顺时针取值a0,a1,a2,a3,a4,a5,a6,a7,a8 
				array2d[1][2], array2d[2][2], array2d[2][1],
				array2d[2][0], array2d[1][0], array2d[1][1]};
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 8; j++){                                 //p[i][j]数组： 
			if(i == 0)  p[i][j] = a[j]^a[8];                       //a0，a1，a2，a3，a4，a5，a6，a7
			else if(i == 1) p[i][j] = a[(j+2)%8]^a[8];            //a2，a3，a4，a5，a6，a7，a0，a1
			else if(i == 2) p[i][j] = a[(j+4)%8]^a[8];           //a4，a5，a6，a7，a0，a1，a2，a3
			else if(i == 3) p[i][j] = a[((j+6)%8)]^a[8];        //a6，a7，a0，a1，a2，a3，a4，a5
			
		}
	}
	
	string s[4];
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 8; j++){  
			char c[2];
			itoa(p[i][j], c, 10);           
			s[i].append(c);                        //将离散值0，1合并且转换成字符串               
		}
	}
	
	int m[4];
	bitset<8> bint;
	for(int i = 0; i < 4; i++){
		stringstream ss;
		ss<<s[i];
		ss>>m[i];                               //将字符串转换成整型 
		
		m[i] = func_binary(m[i]);              //将二进制转换成十进制 
	}
	
	int min = m[0];
	for(int i = 1; i < 4; i++){              //找出最小值 
		if(min > m[i])  min = m[i];           
	}
	
	return min;

}  

int main()  
{  

    unsigned int row = 0;  
    unsigned int column = 0;  
    cin >> row >> column;  

    unsigned char** array2d = new_array2d(row, column);  

    set_array2d(array2d, row, column);  
    
    cout << "Oringin array" << endl;  

    print_array2d(array2d, row, column);  

    unsigned int* hist = histgram(array2d, row, column);  

    cout << "Histgram" << endl;  

    print_array1d(hist, 256);  

    unsigned char** sub_array_2d = get_sub_array(array2d, 1, 1, 3, 3);  
	
    cout << "Sub array" << endl;  

    print_array2d(sub_array_2d, 3, 3);  

    gray_to_binary(sub_array_2d, 3, 3);  

    cout << "Binary sub array" << endl;  

    print_array2d(sub_array_2d, 3, 3);

	unsigned int min_value = find_min_value(sub_array_2d);

	cout << "The min value is " << min_value << endl;  

    cout << "Now free memeory" << endl;  

    delete_array2d(array2d, row);  

    delete_array2d(sub_array_2d, 3);  

    delete [] hist;  

    cin.get();  

    return(0);  

} 

