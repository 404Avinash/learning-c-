#include<bits/stdc++.h>
using namespace std;
int main(){
    int i, n, num, pos=0, flag=0;
    cout << "Enter the size of the array: ";
    cin >> n;

    int a[n];
    cout << "Enter the elements of the array: ";
    for (i=0;i<n;i++){
        cin >> a[i];
    }

    cout << "Enter the number to be searched: ";
    cin >> num;
    
    int low=0, high=n-1;
    while (low<=high){
        int mid=(low+high)/2;
        if (a[mid]==num){
            flag=1;
            pos=mid+1;
            break;
        }
        else if (a[mid]<num){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if (flag==0){
        cout << "The number is not found in the array." << endl;
    }
    else{
        cout << "The number " << num << " is found at position " << pos << "." << endl;
    }
    return 0;
}