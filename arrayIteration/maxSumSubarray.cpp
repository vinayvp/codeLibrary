#include <bits/stdc++.h>
using namespace std;

//PROBLEM :  Get maximum sum of subarray and print its subarry

//SOLUTION: Bruteforce method using 2 loops { O(n^2) }
//Store subarray of max sum subarraay
vector<int> subarr;

void storeSubarray(int i, int j, int array[10000]){
  subarr.clear();
  for(int k=i;k<=j;k++){
    subarr.push_back(array[k]);
  }
  return;
}

void printSubarray(){
  int n = subarr.size();
  for(int i=0;i<n;i++){
    cout<<subarr[i]<<" ";
  }
}

int maxSumSubarray(int n, int array[1000]){
  int maxSum = -1000;
  for(int i=0;i<n;i++){
    int sum=0;
    for(int j=i;j<n;j++){
      sum=sum+array[j];
      if(sum>maxSum){
        maxSum=sum;
        storeSubarray(i, j, array);
      }
    }
  }
  return maxSum;
}

//SOLUTION: Get maximum sum of subarray from Kadane's Algorithm { O(n) }

int x;

void storeSubarray_forAlgo(int array[10000], int sum){
  subarr.clear();
  int cur_sum=0;
  for(int i=x;;i--){
    cur_sum=cur_sum+array[i];
    subarr.push_back(array[i]);
    if(cur_sum==sum) break;
  }
  reverse(subarr.begin(),subarr.end());
  return;
}

int kadaneAlgorithm(int n, int array[1000]){
  int max_sum = 0;
  int cur_sum = 0;
  subarr.clear();
  for(int i=0;i<n;i++){
    cur_sum = cur_sum + array[i];
    if(cur_sum>max_sum){
      max_sum=cur_sum;
      x=i;
    }
    if(cur_sum<0){
      cur_sum=0;
    }
  }
  return max_sum;
}

int main(){
  int n,arr[1000];
  cin>>n;
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  cout<<"Using Bruteforce Method >>"<<endl;
  int sum1 = maxSumSubarray(n,arr);
  cout<<sum1<<endl;
  printSubarray();
  cout<<endl<<"Using kadane's Algorithm >>"<<endl;
  int sum2 = kadaneAlgorithm(n,arr);
  cout<<sum2<<endl;
  storeSubarray_forAlgo(arr,sum2);
  printSubarray();
  
  return 0;
}