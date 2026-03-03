#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {3, 44, 555, 678, 1222};
    int n = 5;
    
    sort(arr, arr + n);
    
    for(int i = 0; i < n; i++){
        int low = 0, high = n - 1, first = -1, last = -1;
        
        // Find first occurrence
        while(low <= high){
            int mid = (low + high) / 2;
            if(arr[mid] == arr[i]){
                first = mid;
                high = mid - 1;
            }
            else if(arr[mid] < arr[i]) low = mid + 1;
            else high = mid - 1;
        }
        
        // Find last occurrence
        low = 0, high = n - 1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(arr[mid] == arr[i]){
                last = mid;
                low = mid + 1;
            }
            else if(arr[mid] < arr[i]) low = mid + 1;
            else high = mid - 1;
        }
        
        if(i == 0 || arr[i] != arr[i-1])
            cout << arr[i] << " --> " << (last - first + 1) << endl;
    }
    
    return 0;
}
