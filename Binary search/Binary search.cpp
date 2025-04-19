
#include<iostream>
using namespace std;

// Iterative
int bs_iter(int arr[], int n, int key) {
    int l=0, h=n-1;
    while(l<=h) {
        int m=l+(h-l)/2;
        if(arr[m]==key) return m;
        arr[m]<key ? l=m+1 : h=m-1;
    }
    return -1;
}

// Recursive
int bs_rec(int arr[], int l, int h, int key) {
    if(l>h) return -1;
    int m=l+(h-l)/2;
    if(arr[m]==key) return m;
    return arr[m]<key ? bs_rec(arr,m+1,h,key) : bs_rec(arr,l,m-1,key);
}

int main() {
    int arr[]={10,20,30,40,50,60,70,80,90};
    int n=9, key=60;
    cout << "Iter: " << bs_iter(arr,n,key) << endl;
    cout << "Rec: " << bs_rec(arr,0,n-1,key) << endl;
    return 0;
}