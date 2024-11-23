#include <iostream>
using namespace std;
int count_meta(int N){
  int count=0;
  for (int i = 0; i <= N; i++)
  {
    if(i%1==0&&i%2==0&&i%4==0&&i%8==0&&i%10!=0){
        count++;
    }
  }
  return count;
  
}
int main(){
  int n;
  cin>>n;
  int ans=count_meta(n);
  cout<<ans;

}