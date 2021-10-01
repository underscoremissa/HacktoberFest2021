
// C++ program to print largest contiguous array sum
#include<iostream>
#include<climits>
using namespace std;
 
int maxSubArraySum(int arr[], int size)
{
    int max_till_now = INT_MIN, max_till_ending = 0;
 
    for (int i = 0; i < size; i++)
    {
        max_till_ending = max_till_ending + arr[i];
        if (max_till_now < max_till_ending)
        {
            max_till_now = max_till_ending;
        }
 
        if (max_till_ending < 0)
        {
            max_till_ending = 0;
        }
    }
    return max_till_now;
}
 
int main()
{
    
   int num;
   cout << "Enter the number of elements: ";
   cin >> num;
   int arr[num];     //create an array with given number of elements
   cout << "Enter elements:" << endl;
   
   for(int i = 0; i<num; i++) 
   {
      cin >> arr[i];
   }
   
   int n = sizeof(arr)/sizeof(arr[0]);
   int max_contiguos_sum = maxSubArraySum(arr, n);
   cout << "Maximum contiguous sum is: " << max_contiguos_sum;
   return 0;
    
}
