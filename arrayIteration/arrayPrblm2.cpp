// This code counts no of distinct elements using two methods..

//    Using Hashing Table    //
// This uses O(n) time on average //

int countElement_HASH(int arr[], int n){
    int cnt=0;
    unordered_set<int> s;

    for(int i=0;i<n;i++){

        //If ele. is not found, insert it in the hash set
        if(s.find(arr[i])==s.end()){
            s.insert(arr[i]);
            cnt++;
        }
    }
    return cnt;
}



//   Using Sorting   //
// This uses O(nlogn) to sort and another O(n) to count elements

// <<<<  QUICK SORT  >>>> //
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int countElement_SORT(int arr[], int n){

    // Here we can use sorting techniques like QuickSort or MergeSort etc
    quickSort(arr,0,n-1);
    int cnt=0;
    for(int i=0;i<n;i++){
        while(i<n-1 && arr[i]==arr[i+1]){
            i++;
        }
        cnt++;
    }

    return cnt;
}

//Driver Code

int main(){
    int n = 5;
    int arr[] = {4,6,9,4,2};
    cout<<countElement_HASH(arr,n)<<endl;
    cout<<countElement_SORT(arr,n)<<endl;
    return 0;
}