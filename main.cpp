//#include <iostream>
//#include <ctime>
//#include <cstdlib>
//#include <thread>
//#include <future>
//using namespace std;
//int num;
//int even_ind = 0;
//int odd_ind = 0;
//int oddarray[10];
//int evenarray[10];
//
//
//int random_num(){
////    this_thread::sleep_for(chrono::milliseconds(1));
//    srand(time(0));
//    num =  (rand() % 100) + 1;
//    return num;
//}
//
//void store_odd_num(int num){
//    oddarray[odd_ind] = num;
//    odd_ind++;
//}
//
//void store_even_num(int num){
//    evenarray[even_ind] = num;
//    even_ind++;
//}
//
//void check_odd_even(int num){
//    cout << num << endl;
//    if(num%2 == 0){
//        thread t2(store_even_num, num);
////        this_thread::sleep_for(chrono::milliseconds (100));
//        t2.join();
//    } else{
//        thread t3(store_odd_num, num);
////        this_thread::sleep_for(chrono::milliseconds(100));
//        t3.join();
//    }
//}

#include <iostream>
#include <cstdlib>
#include <thread>
#include <time.h>
#include <future>
using namespace std;
int num;

int random_num(){
    srand(time(0));
    num =  (rand() % 10) + 1;
    return num;
}
int main()
{
    for(int i=0;i<10;i++) {
        future<int> result = async(launch::async, random_num);
        cout << result.get() << endl;
    }
}
