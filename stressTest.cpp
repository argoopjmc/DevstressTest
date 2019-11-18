#include<iostream>
using std::cout;
using std::cin;
using std::endl;

#include<thread>
using std::thread;

#include <cstdlib>
using std::malloc;

class Test{

public :

	Test(){}

	static void run(int lm){
		double sum = 1;
		double sub = -1;
		double product = 372754;
		double division = 46363;
		while(true){
		sum -= -(sum);
		sub -= sum;
		product *= division;
		division /= sum;
	 	}
	}

};

class DumpObj{
	int x = 0;
};

int main() {
	// automatically detects the available no of cpus
	int x = thread::hardware_concurrency();
	int y;
	cout << "please eneter the amount of random access memory (RAM) your pc has in MegaBytes :: 1gb == 1000mb (0 if you don't want to stress your memory) :" << endl;
	cin >> y;
	cout << "use ctrl+c to exit the stress test" << endl;

	/**
	* now lock the RAM, by creating objects of 4bytes and leaving it in ram without deleting it
	*/
	if(y != 0){
		for(int i = 0 ;i < y*(100000/4); i++){
			new DumpObj();
		}
		cout << "memory locked successfully ..." << endl;
	}
	else{
		cout << "memory locked == false" << endl;
	}

	/**
	* now stress threads with load
	*/
	if(x == 1){
		cout << "thread 1 statred ..." << endl;
		thread t0 (&Test::run, x);
		t0.join();
	}
	else if(x == 2){
		cout << "thread 1 statred ..." << endl;
		thread t0 (&Test::run, x);
		cout << "thread 2 statred ..." << endl;
		thread t1 (&Test::run, x);
		t0.join();
	}
	else if(x == 4){
		cout << "thread 1 statred ..." << endl;
		thread t0 (&Test::run, x);
		cout << "thread 2 statred ..." << endl;
		thread t1 (&Test::run, x);
		cout << "thread 3 statred ..." << endl;
		thread t2 (&Test::run, x);
		cout << "thread 4 statred ..." << endl;
		thread t3 (&Test::run, x);
		t0.join();
	}
	else if(x == 6){
		cout << "thread 1 statred ..." << endl;
		thread t0 (&Test::run, x);
		cout << "thread 2 statred ..." << endl;
		thread t1 (&Test::run, x);
		cout << "thread 3 statred ..." << endl;
		thread t2 (&Test::run, x);
		cout << "thread 4 statred ..." << endl;
		thread t3 (&Test::run, x);
		cout << "thread 5 statred ..." << endl;
		thread t4 (&Test::run, x);
		cout << "thread 6 statred ..." << endl;
		thread t5 (&Test::run, x);
		t0.join();
	}
	else if(x == 8){
		cout << "thread 1 statred ..." << endl;
		thread t0 (&Test::run, x);
		cout << "thread 2 statred ..." << endl;
		thread t1 (&Test::run, x);
		cout << "thread 3 statred ..." << endl;
		thread t2 (&Test::run, x);
		cout << "thread 4 statred ..." << endl;
		thread t3 (&Test::run, x);
		cout << "thread 5 statred ..." << endl;
		thread t4 (&Test::run, x);
		cout << "thread 6 statred ..." << endl;
		thread t5 (&Test::run, x);
		cout << "thread 7 statred ..." << endl;
		thread t6 (&Test::run, x);
		cout << "thread 8 statred ..." << endl;
		thread t7 (&Test::run, x);
		t0.join();
	}
	else if(x == 12){
		cout << "thread 1 statred ..." << endl;
		thread t0 (&Test::run, x);
		cout << "thread 2 statred ..." << endl;
		thread t1 (&Test::run, x);
		cout << "thread 3 statred ..." << endl;
		thread t2 (&Test::run, x);
		cout << "thread 4 statred ..." << endl;
		thread t3 (&Test::run, x);
		cout << "thread 5 statred ..." << endl;
		thread t4 (&Test::run, x);
		cout << "thread 6 statred ..." << endl;
		thread t5 (&Test::run, x);
		cout << "thread 7 statred ..." << endl;
		thread t6 (&Test::run, x);
		cout << "thread 8 statred ..." << endl;
		thread t7 (&Test::run, x);
		cout << "thread 9 statred ..." << endl;
		thread t8 (&Test::run, x);
		cout << "thread 10 statred ..." << endl;
		thread t9 (&Test::run, x);
		cout << "thread 11 statred ..." << endl;
		thread t10 (&Test::run, x);
		cout << "thread 12 statred ..." << endl;
		thread t11 (&Test::run, x);
		t0.join();
	}
	else if(x == 16){
		cout << "thread 1 statred ..." << endl;
		thread t0 (&Test::run, x);
		cout << "thread 2 statred ..." << endl;
		thread t1 (&Test::run, x);
		cout << "thread 3 statred ..." << endl;
		thread t2 (&Test::run, x);
		cout << "thread 4 statred ..." << endl;
		thread t3 (&Test::run, x);
		cout << "thread 5 statred ..." << endl;
		thread t4 (&Test::run, x);
		cout << "thread 6 statred ..." << endl;
		thread t5 (&Test::run, x);
		cout << "thread 7 statred ..." << endl;
		thread t6 (&Test::run, x);
		cout << "thread 8 statred ..." << endl;
		thread t7 (&Test::run, x);
		cout << "thread 9 statred ..." << endl;
		thread t8 (&Test::run, x);
		cout << "thread 10 statred ..." << endl;
		thread t9 (&Test::run, x);
		cout << "thread 11 statred ..." << endl;
		thread t10 (&Test::run, x);
		cout << "thread 12 statred ..." << endl;
		thread t11 (&Test::run, x);
		cout << "thread 13 statred ..." << endl;
		thread t12 (&Test::run, x);
		cout << "thread 14 statred ..." << endl;
		thread t13 (&Test::run, x);
		cout << "thread 15 statred ..." << endl;
		thread t14 (&Test::run, x);
		cout << "thread 16 statred ..." << endl;
		thread t15 (&Test::run, x);
		t0.join();
	}
	else{
		cout << "current stress test only suppports cpu's with 1,2,4,6,8,12,16 threads" << endl;
		cout << "the program terminates now" << endl;
	}
}
