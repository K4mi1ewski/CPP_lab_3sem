#include "array.h"

using namespace std;

int* InitArray(int size)
{
    int* new_array = new int [size];
    for (int i = 0; i<size; i++)
    {
        new_array[i]=0;
    }
    return new_array;
}

void CreateSequence(int* array, int size)
{
    for (int i = 0; i<size; i++)
    {
        array[i] = i*i;
    }
}

int* ChangeArraySize(int* array, int old_size, int new_size)
{
   int* new_array = new int [new_size];
   for (int i = 0; i<old_size;i++)
   {
    new_array[i] = array[i];
   }
   for (int i = old_size; i<new_size;i++)
   {
    new_array[i]=0;
   }
   delete[]array;
   return new_array;
}

void DeleteArray(int*array)
{
    delete [] array;
}



