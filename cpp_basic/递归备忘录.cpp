#include<iostream>
#include<unordered_map>
#include<chrono>
using namespace std::chrono;
using namespace std;

static unordered_map<int,int> memo;

int test(int n){
  if(n<=1){
    return n;
  }

  if(memo.find(n)!=memo.end()){
    return memo[n];
  }

  int res = test(n-1)+test(n-2);
  memo[n]=res;
  return res;
}


int test1(int n){
  if(n==1||n==2){
    return n;
  }

  int res = test1(n-1)+test1(n-2);

  return res;
}

int main(){
  int n=3;

  auto start = high_resolution_clock::now();
  int res = test(n);
  auto end = high_resolution_clock::now();
  auto duration=duration_cast<microseconds>(end-start);
  cout<<"time:"<<duration.count()<<endl;
  cout<<res<<endl;
  
  int m=3;
  auto start1 = high_resolution_clock::now();
  res = test1(m);
  auto end1= high_resolution_clock::now();
  auto duration1 = duration_cast<microseconds>(end1-start1);
  cout<<"time1:"<<duration1.count()<<endl;
  cout<<res<<endl;
}
