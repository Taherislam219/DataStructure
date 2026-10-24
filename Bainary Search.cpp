
#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int num){
int low =0;
int high = n-1;

while (low <= high){
    int mid = (low+high)/2;

    if(arr[mid] == num){
        return mid;
    }
    else if(arr[mid]<num){
        low=mid+1;
    }
    else{
        high=mid-1;
    }
}
return -1;
}

int main(){
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(arr) / sizeof(arr[0]);

    int num;
    cout << "Enter the element to find: ";
    cin >> num;

    int result = binarySearch(arr,n,num);

    if(result != -1){
        cout << "Element found at index " << result;
    } else {
        cout << "Element not found";
    }

return 0;
}
