#include<iostream>
#include<pthread.h>
#include<mutex>
#include<unistd.h>
using namespace std;
int denominator;
int number=0;
int flag;
std::mutex mtx;

void* foo(void * id) 
{
    int x=(long)id;
    cout<<"Hel\n";
    mtx.lock();
while(x<10)
{
  if (flag==1)
  {
    x=11;
  }
  x++;
  denominator++;
  cout<<"\rdeno:"<<denominator<<flush;
 sleep(1); 
}
mtx.unlock();
}
void * getuserdata(void *arg){
    if (cin.get())
    {
        flag=1;
    }
    
}
int  impotry(){
pthread_t thread1;
    pthread_t thread2;
  int c= pthread_create(&thread1,NULL,&foo,(void*)number);
  int d= pthread_create(&thread2,NULL,&getuserdata,NULL);
  while (denominator<=10&&flag!=1)
  {
     
      sleep(1);
      if (denominator==10)
      {cout<<"\n";
         return 0;
      }
      
  }
  
  pthread_exit(NULL);
}
 string check(string tobechecked){
 return tobechecked;
}
int main(){

 
string playername;
playername="Cyusa";
  cout<<"Player Name: "<<playername<<"\n";
  cout<<"Player context:"<<check("Football")<<"\n";
  impotry();
for(int  j = 0; j < 3; j++)
{
  cout<<"|";
for (int x = 0; x < 3; x++)
{
   cout<<j+x<<"|";
}
cout<<"\n";
}
// impotry();   
}
