#include <bits/stdc++.h>
using namespace std;



// Q1. Reversal of Array
int arr[] = {10, 2 ,4, 5 ,6 ,7 ,7 , 9 ,3};

void reverseArray(int i, int j){

    if(i>=j){
        return;
    }

    int temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    return reverseArray(i+1,j-1);

}

int main()
{

    
    for (int i = 0; i <= 8; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    reverseArray(0,8);

    for (int i = 0; i <= 8; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
