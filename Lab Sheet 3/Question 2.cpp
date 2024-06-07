#include<iostream>
using namespace std;

class isPrime{
	private:
		int num,flag;
		int i;
	public:
		void calc(int num){
			flag=1;                                                //1 to indicate the number is prime
			if(num==2){
				cout<< num<< " is prime"<< endl;
			}
			else{
				for(i=2; i<num; i++){
				if(num%i==0)
					flag=0;
				else
					flag=1;
			}
			if(flag==1)
				cout<< num<< " is prime"<< endl;
			else
				cout<< num<< " is composite"<< endl;
			}
		}
};

int main(){
	isPrime iP1;
	char choice;
	do{
		int num;
		cout<< "Enter the number you want to check whether it is prime or not: ";
		cin>> num;
		iP1.calc(num);
		cout<< "Press \'y\' to continue and \'n\' to exit: ";
		cin>> choice;
	}while(choice=='y' || choice=='Y');
	cout<< endl<< endl;
	cout<< "Program terminated.";
	return 0;
}
