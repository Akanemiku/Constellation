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
