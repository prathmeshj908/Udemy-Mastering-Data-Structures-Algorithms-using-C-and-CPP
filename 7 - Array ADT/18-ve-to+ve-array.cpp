#include <iostream>
using namespace std;

struct array
{
    int A[10];
    int size;
    int length;
};

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void arrange(struct array *arr)
{
    int i = 0;
    int j = arr->length - 1;

    while (i < j)
    {
        while (arr->A[i] < 0) // Corrected condition
            i++;
        while (arr->A[j] >= 0) // Corrected condition
            j--;

        if (i < j)
            swap(&arr->A[i], &arr->A[j]);
    }
}

void display(struct array arr)
{
    for (int j = 0; j < arr.length; j++)
        cout << arr.A[j] << " "; // Include spaces between elements
}

int main()
{
    struct array arr = {{1, -2, -3, 4, 5, -6}, 10, 6};
    arrange(&arr);
    display(arr);

    return 0; // Added return statement
}

// #include <iostream>
// using namespace std;

// struct array
// {
//     int A[10];
//     int size;
//     int length;
// };
// void swap(int *x,int *y)
// {         
//     int temp=*x;
//     *x=*y;
//     *y=temp;
// }
// void arrange(struct array *arr)
// {
//     int i=0;
//     int j=arr->length-1;
//     while(i<j)
//     {
//         while(arr->A[i]<0)
//               i++;
//         while(arr->A[i]>=0)
//               j--;


//         if(i<j)
//             swap(&arr->A[i],&arr->A[j]);
//     }
// }

// void display(struct array arr)
// {
//     for(int j=0;j<arr.length;j++)
//         cout<<arr.A[j]<<" ";
// }

// int main()
// {
//     struct array arr={{1,-2,-3,4,5,-6},10,6};
//     arrange(&arr);
//     display(arr);
//     return 0;
// }