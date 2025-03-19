#include <iostream>
using namespace std;
#include <chrono>
#include <thread>
#include <random>


int main() {
	int bizila;
	string text1, text2, text3;
	int i, j, k;
	string uwu[] = {"xoooo", "oxooo", "ooxoo", "oooxo", "oooox", "oooxo", "ooxoo", "oxooo"};
	
	
	
	string platki[] = {"*oooooooo", "o*ooooooo", "oo*oooooo", "ooo*ooooo", "oooo*oooo", "ooooo*ooo", "oooooo*oo", "ooooooo*o", "oooooooo*"};
	
	string platek = "oooo*oooo";
	string pusta =  "ooooooooo";

	text1="dwa stare uchole ";
	text2="lubia programowac";
	text3 = text1+text2;
	random_device rd;  // Urządzenie losujące (może być różne na różnych komputerach)
    mt19937 gen(rd()); // Generator Mersenne Twister
    uniform_int_distribution<int> dist(0, 8);

	cin >>  bizila;
	cout << "paweł to gawron"  << endl;
	cout << bizila  << endl;

	if (bizila > 42 ){
		cout << "ivi lopa" << endl;
	}

	cout << text3  << endl;

    for(k=0; k<=10; k++){
        int losowa = dist(gen); 
        string platek = platki[losowa];
        for(j=0; j<=7; j++){
            std::cout << "\033[2J\033[H"; 
            for(i=0; i<=7; i++){
        	    
        	    if(i==j)
        	        cout<<platek<<endl;
        	    else
        	        cout<<pusta<<endl;
        		//cout<<uwu[i]<<endl;
        		//this_thread::sleep_for(chrono::seconds(1));
            }
            this_thread::sleep_for(chrono::milliseconds(700));
        }
        this_thread::sleep_for(chrono::milliseconds(500));
    }

return 0;
}