#include<iostream>
#include<thread>
#include<mutex>

using namespace std;

/* 
tries the lock the mutex returns imidiatly on success locak acquisition return true 
if tyr_lock is not able to lock mutex then it dosen.t get blocked thats why it is called non-blocking
if try lock is called again by  the same thread which owns the utex, the behaviour is undefined.
double try is not allowed

mutex:mutual exlusion
race condition
mutex
-0 mutexis uesd to avaid race condition
-1 we use lock, unlock on mutex to avoid race condition.

try_lock();
tries to lock all locakeble objectes passed init one by one
on the succes this funtion return -1
return 0 based mutex index number which it could not lock
try_lock_for(certain)
wait until specified timeout_durations has elapsed or the lock is acqurd , whichever comes frist
on succes lock acquisition retuens , otherwise return flase;
*/
mutex m;
void funt(){
    int x;
    m.lock();
    ++x
    m.unlock();
    
}
int main(){
    
    thread t1(fun);
    t1.join();
}

