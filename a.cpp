unsigned char** new_array2d(unsigned int row, unsigned int column)  
{  
    // to do list  
}  
void delete_array2d(unsigned char** array2d, unsigned int row)  
{  
    // to do list  
}  
void set_array2d(unsigned char** array2d, unsigned int row, unsigned int column)  
{  
    // to do list  
}  
unsigned int* histgram(unsigned char** array2d, unsigned int row, unsigned int column)  
{  
    // to do list     
}  
void print_array1d(unsigned int* array1d, unsigned int n)  
{  
    // to do list  
}  
void print_array2d(unsigned char** array2d, unsigned int row, unsigned int column)  
{  
    // to do list  
}  
unsigned char** get_sub_array(unsigned char** array2d, unsigned int row_index, unsigned int column_index, unsigned int height, unsigned int width)  
{  
   // to do list  
}  
void gray_to_binary(unsigned char** array2d, unsigned int row, unsigned int column)  
{  
   // to do list      
}  
unsigned int find_min_value(unsigned char** array2d)  
{  
  // to do list  
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
    print_array(hist, 256);  
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
