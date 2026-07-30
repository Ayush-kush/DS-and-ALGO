#include <bits/stdc++.h>

using namespace std;

// Q1. Find 2nd Largest element of array.

// Brute Force: O(NlogN)


// int main(){
//     int t;
//     cin>>t;
    
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         int arr[n];
        
//         for (int i = 0; i < n; i++)
//         {
//             cin>>arr[i];
            
//         }
        
//         sort(arr,arr+n);

//         int largest=arr[n-1];
//         int secondlarge=-1;
//         for (int i = n-1; i >= 0; i--)
//         {  
//          	   if (arr[i]<largest)
//          	   {
//          	   		secondlarge=arr[i];
//          	   		break;
//          	   }

//         }
//         cout<<secondlarge;
//     }
//     return 0;
// }

// Better Approach O(2N)

// int main(int argc, char const *argv[])
// {
	
// 	 int t;
//     cin>>t;
    
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         int arr[n];
        
//         for (int i = 0; i < n; i++)
//         {
//             cin>>arr[i];
            
//         }
        

//         int largest = arr[0];

//         for (int i = 1; i < n; ++i)
//         {
//         	if(largest<arr[i]){
//         		largest=arr[i];
//         	}
//         }

//         int secondLarge = -1;

//         for (int i = 0; i < n; ++i)
//         {
//         	if(arr[i]<largest && secondLarge<arr[i])
//         		secondLarge=arr[i];
//         }

//         cout<<secondLarge;
// }
// 	return 0;
// }

// Best O(N)

// int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            
        }

    int largest=arr[0];
    int secondlargest = INT_MIN;

    for (int i = 1; i < n; i++)
    {
        if(arr[i]>largest){
            secondlargest = largest;
            largest = arr[i];
        }
        else if (arr[i]<largest && secondlargest<arr[i])
        {
            secondlargest=arr[i];
        }
        
    }
    cout<<secondlargest;
    }
    return 0;
}

// Another Solution found on my own
// int main(){
//     int t;
//     cin>>t;
    
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         int arr[n];
        
//          for (int i = 0; i < n; i++)
//          {
//              cin>>arr[i];
//          }

//         int large = arr[n-1];
//         int secondLarge = arr[0];

//         int i = 1 ;
//         int j = n-1 ;

//         while(i<j){


//         	if (large<arr[j])
//         	{
//         		large=arr[j];
//         	}
//         	if(secondLarge < arr[i]){
//         		secondLarge=arr[i];
//         	}
//         	if (large<secondLarge)
//         	{
//         		swap(large,secondLarge);
//         	}
//         	i++;
//         	j--;
//         }
//         cout<<secondLarge;
//     }
//     return 0;
// }  

// Q2. Check if array is sorted

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    
    // while (t--)
    // {
    //     int n;
    //     cin>>n;
    //     int arr[n];
        
    //     // 1. Brute Force
    //      for (int i = 0; i < n; i++)
    //      {
    //          cin>>arr[i];
    //      }

    //      set<int> st;
    //      for (int i = 0; i < n; ++i)
    //      {
    //          st.insert(arr[i]);
    //      }

    //      cout<<st.size();
    // }
    
    //2. Better

    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        
        
         for (int i = 0; i < n; i++)
         {
             cin>>arr[i];
         }

         int index = 0;
         
         for (int i = 1; i < n; i++)
         {
                if(arr[i]>arr[index]){
                    index+=1;
                    arr[index]=arr[i];
                }
         }

        for (int i = 0; i <= index; i++)
         {
             cout<<arr[i];
         }
         
    }

    return 0;

}