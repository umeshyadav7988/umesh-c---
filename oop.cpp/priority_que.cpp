// // #include <iostream>
// // #include <queue>
// // #include <vector>
// // #include<bits/stdc++.h>
// // using namespace std;

// // int main() {
   
// //     /* priority_queue<int> Q;
// //     vector<int> v = {8, 1, 6, 4, 0, 7, 2, 9};
// //     for(int x : v) Q.push(x);
// //     while(!Q.empty()){
// //         cout << Q.top() << " ";
// //         Q.pop();
// //     }
// //     cout << endl; */
// // // }

   
// //     priority_queue<int, vector<int>, std::greater<int>> Q;
// //     vector<int> v = {8, 1, 6, 4, 0, 7, 2, 9};
// //     for(int x : v) Q.push(x);
// //     while(!Q.empty()){
// //         cout << Q.top() << " ";
// //         Q.pop();
// //     }
// //     cout << endl; 

// // }

// #include <bits/stdc++.h>
// using namespace std;
 
// // This function prints all distinct elements
// int countDistinct(int arr[], int n)
// {
//     // Creates an empty hashset
//     unordered_set<int> s;
 
//     // Traverse the input array
//     int res = 0;
//     for (int i = 0; i < n; i++) {
 
//         // If not present, then put it in
//         // hashtable and increment result
//         if (s.find(arr[i]) == s.end()) {
//             s.insert(arr[i]);
//             res++;
//         }
//     }
 
//     return res;
// }
 
// // Driver program to test above function
// int main()
// {
//     int arr[] = { 6, 10, 5, 4, 9, 120, 4, 6, 10 };
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << countDistinct(arr, n);
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// function that accepts the array and it's size and returns
// the number of distince elements
// int distinct(int* arr, int len)
// {
    // set<int> S; // declaring a set container using STL
    // for (int i = 0; i < len; i++) {
        // S.insert(arr[i]); // inserting all elements of the
                        //   array into set
    // }
    // int ans = S.size(); // calculating the size of the set
    // return ans;
// }
// int main()
// {
    // int arr[] = { 12, 10, 9, 45, 2, 10, 10, 45};
    // int l = sizeof(arr)  / sizeof(int); // calculating the size of the array
    // int dis_elements  = distinct(arr, l); // calling the function on array
    // cout << dis_elements << endl;
    // return 0;
// }
// 

// Unordered_map
// Count frequency of array elements in an array
// C++ program to count frequencies of
// integers in array using Hashmap
#include <bits/stdc++.h>
using namespace std;
 
void frequencyNumber(int arr[],int size)
{
   
  // Creating a HashMap containing integer
  // as a key and occurrences as a value
  unordered_map<int,int>freqMap;
 
  for (int i=0;i<size;i++) {
    freqMap[arr[i]]++;
  }
 
  // Printing the freqMap
  for (auto it : freqMap) {
    cout<<it.first<<" "<<it.second<<endl;
  }
}
 
int main()
{
  int arr[] = {10, 20, 20, 10, 10, 20, 5, 20};
  int size = sizeof(arr)/sizeof(arr[0]);
  frequencyNumber(arr,size);
}
