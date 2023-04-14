#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void duplicate(int x[])
{
 for(int i =0 ; i <10 ; i++){
  if (x[i] != x[i+1]){
    cout<< x[i];
  }
 } }

void dubplicate_unsorted(int x[]){
int d[9] = {0};

for(int i=0 ; i<10 ; i++){
  d[x[i]]++;
}

for(int i =0 ; i<9 ;  i++){
    cout << i << ":"<< d[i] << "\n";
      
    }
  }




void test1(int a[] , int size){
  
}





int main()
{

  int a[] = {1,4,7,3,9,2,10};
  int size = 7;

  test1(a,size);

 
 
 }


 

