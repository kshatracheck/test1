//#include <iostream>
//#include <thread>
//using namespace std;
//
//void f1(int n){
//    for(int i=0;i<5;i++){
//        cout << "This is f1 method" << endl;
//        ++n;
//        this_thread::sleep_for(chrono::seconds (0));
//    }
//    cout << this_thread::get_id() << endl;
//}
//
//void f2(int& n){
//    for(int i=0;i<5;i++){
//        cout << "This is f2 method.........." << endl;
//        ++n;
//        this_thread::sleep_for(chrono::seconds (0));
//    }
//    cout << this_thread::get_id() << endl;
//}
//
//int main(){
//    int n = 0;
//    thread t1(f1, n);
//    cout << this_thread::get_id() << endl;
//    thread::id t1_id = t1.get_id();
//    thread t2(f2, ref(n));
//    cout << this_thread::get_id() << endl;
//    thread::id t2_id = t2.get_id();
//    t1.join();
//    t2.join();
//    cout << t1_id << endl;
//    cout << t2_id << endl;
//}
#include <iostream>
#include <thread>
using namespace std;

void test_meth(){
    cout << "CAlled thread" << endl;
}

int main(){
    thread t;
    cout << t.joinable() << endl;
    t = thread(test_meth);
    cout << t.joinable() << endl;
    t.join();
    cout << t.joinable() << endl;
}
