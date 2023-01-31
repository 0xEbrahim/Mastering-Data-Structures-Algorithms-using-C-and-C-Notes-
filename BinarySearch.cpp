int binSearch(int arr[],int item,int high,int low){

    while (low <= high){
        int mid = (high+low)/2;

        if(arr[mid] == item){
            return mid;
        } if (arr[mid] < item)
            low = mid + 1;

        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
  
   
   // sorted array
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
      
    int ind2 = binSearch(arr,2,9,0);
    cout<<ind2; // print     => 1


}
