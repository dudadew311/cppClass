//
//  main.cpp
//  Test1
//
//  Created by Raul Diaz on 2/18/16.
//  Copyright © 2016 Raul Diaz. All rights reserved.

#include <iostream>
using namespace std;


int main(){
	string name;
	cout << "Enter your Name: ";
	cin >> name;
	cout << "my name is " << name << endl;
	return 0;
}
//#include <iostream>
//#include <math.h>
//using namespace std;
//
//float sumPositive(float array[], int size);
//float sumNegative(float array[], int size);
//
//
//int main(){
//	float array[100] = {0};
//	float num;
//	int count = 0;
//	do{
//		cout << "Enter a number: ";
//		cin >> num;
//		array[count++] = num;
//		
//	}while(num != 0);
//	cout << "The sum of the Positive numbers is: " << sumPositive(array, count) << endl;
//	cout << "The sum of the Negative numbers is: " << sumNegative(array, count) << endl;
//	
//	return 0;
//}
//
//float sumPositive(float array[], int size){
//	float amount = 0;
//	for(int i = 0; i < size; i++){
//		if(array[i] > 0)
//			amount += array[i];
//	}
//	return amount;
//}
////
////float sumNegative(float array[], int size){
//	float amount = 0;
//	for(int i = 0; i < size; i++){
//		if(array[i] < 0)
//			amount += array[i];
//	}
//	return amount;
//}
//	

//struct vegeType {
//	string vegeName;
//	string color;
//	int fat;
//	int sugar;
//	int size;
//};
//
//
//class DayOfYear{
//public:
//	DayOfYear(int the_month, int the_day);
//	DayOfYear();
//	void input();
//	void output();
//	int get_month();
//	int get_day();
//private:
//	void check_date();
//	int month;
//	int day;
//};
//
//bool before(DayOfYear date1, DayOfYear date2);
//
//int main(){
//	DayOfYear date1(4, 12), date2(4, 11);
//	
//	cout << before(date1, date2) << endl;
//	return 0;
//}
//
//bool before(DayOfYear date1, DayOfYear date2){
//	bool answer = false;
//	if (date1.get_month() < date2.get_month())
//		answer = true;
//	if (date1.get_month() == date2.get_month()){
//		if (date1.get_day() < date2.get_day())
//			answer = true;
//	}
//	return answer;
//}
//
//DayOfYear::DayOfYear(int the_month, int the_day) : month(the_month), day(the_day){
//	//check_date();
//}
//
//int DayOfYear::get_month(){
//	return month;
//}
//
//int DayOfYear::get_day(){
//	return day;
//}
//
//void DayOfYear::input(){
//	cout << "Enter the month as a number: ";
//	cin >> month;
//	cout << "Enter the day of the month: ";
//	cin >> day;
//}
//
//void DayOfYear::output(){
//	cout << "month = " << month
//	<< ", day = " << day << endl;
//}
//#include <iostream>
//
//using namespace std;
//class CDAccount {
//public:
//	CDAccount();
//	CDAccount(double balance, double interest_rate, int term);
//	double get_balance();
//	double get_interest();
//	int get_term();
//	void set(double balance, double interest_rate, int term);
//	void output(ostream& outs);
//	
//private:
//	double balance_after();
//	double balance;
//	double interest_rate;
//	int term;
//};
//
//void get_data(CDAccount account);
//
//int main(){
//	CDAccount account;
//	get_data(account);
//	
//	
//}
//
//void get_data(CDAccount account){
//	double balance = 0, interest_rate = 0;
//	int term = 0;
//	while (balance <= 0){
//		cout << "Enter your balance: ";
//		cin >> balance;
//		if (balance <= 0){
//			cout << "\tNot a valid amount enter!!!\n";
//		}
//		
//	}
//	while (interest_rate <= 0){
//		cout << "Enter interest_rate: ";
//		cin >> interest_rate;
//		
//		if (interest_rate <= 0){
//			cout << "\tNot a valid amount enter!!!\n";
//		}
//	}
//	while (term <= 0 || term > 12){
//		cout << "Enter the term length in months: ";
//		cin >> term;
//		if ((term <= 0) || (term > 12)){
//			cout << "\tNot a valid amount enter!!!\n";
//		}
//	}
//	account.set(balance, interest_rate, term);
//	account.output(cout);
//}
//
//CDAccount::CDAccount() : balance(0), interest_rate(0), term(0){
//	// left intentionally empty
//}
//
//CDAccount::CDAccount(double balance, double interest_rate, int term){
//	if ((balance < 0) || (interest_rate < 0) || (term < 0)){
//		cout << "Illegal value for money or rate.\n";
//		exit(-1);
//	}
//}
//
//double CDAccount::get_balance(){
//	return balance;
//}
//
//double CDAccount::get_interest(){
//	return interest_rate;
//}
//
//int CDAccount::get_term(){
//	return term;
//}
//
//void CDAccount::set(double b, double i, int t){
//	balance = b;
//	interest_rate = i;
//	term = t;
//}
//
//void CDAccount::output(ostream& outs){
//	outs.setf(ios::fixed);
//	outs.setf(ios::showpoint);
//	outs.precision(2);
//	outs << "After " << term << " the balance will be $" << balance << endl;
//	outs << "will be $" << balance_after() << endl;
//}
//
//double CDAccount::balance_after(){
//	double rate_fraction, inter;
//	rate_fraction = interest_rate / 100.0;
//	inter = balance * rate_fraction * (term / 12.0);
//	return balance + inter;
//}


//float getAverage(float array[], int size);
//int count(float array[], int size, float average);
//
//using namespace std;
//
//int main(){
//	float array[10], average;
//	
//	
//	cout << "Enter 10 numbers:\n";
//	
//	for(int i = 0; i < 10; i++){
//		cin >> array[i];
//	}
//	
//	average = getAverage(array , 10);
//	cout << count(array, 10, average) << " numbers are greater or equal to the average\n";
//	
//	return 0;
//}
//
//float getAverage(float array[], int size){
//	float sum;
//	for(int i=0; i < size; i++){
//		sum += array[i];
//	}
//	return sum/10;
//}
//
//int count(float array[], int size, float average){
//	int counter = 0;
//	for(int i = 0; i < size; i++){
//		if(array[i] >= average)
//			counter++;
//	}
//	return counter;
//}
//
//ShoeType discount(ShoeType oldRecord){
//	ShoeType temp;
//	temp.style = oldRecord.style;
//	temp.price = .90 * oldRecord.price;
//	return temp;
//}
//
//void Temperature::set(double newDegrees, char newScale){
//	degrees = newDegrees;
//	scale = newScale;
//}
//
//BankAccount new_account(BankAccount old_account) {
//	BankAccount temp;
//	temp.set(0, old_account.get_rate());
//	return temp;
//}
//
//BankAccount::BankAccount(int dollars, int cents, double rate) : dollars_part(dollars), cents_part(cents), interest_rate(fraction(rate)) {
//	if ((dollars < 0) || (cents < 0) || (rate <  0)) {
//		cout << "Illegal value for money or rate.\n";
//		exit(1);
//	}
//}

//#include <iostream>
//
//int searchit(float a[ ] , int n, float number);
//
//using namespace std;
//
//typedef float* FloatPtr;
//
//int main(){
//	int size, position;
//	float numberToBeFound;
//	FloatPtr numbers;
//	cout << "How many numbers are you entering: ";
//	cin >> size;
//	numbers = new float [size];
//	
//	cout << "Enter a series of " << size << " decimal numbers:\n";
//	
//	for (int i=0; i<size; i++){
//		cin >> numbers[i];
////		cout << numbers[i];
//	}
//	cout << "What number would you like to find: ";
//	cin >> numberToBeFound;
//	position = searchit(numbers, size, numberToBeFound);
//	
//	if(position == -1)
//		cout << numberToBeFound << " was not entered!\n";
//	else
//		cout << numberToBeFound << " is in index " << position << endl;
//	return 0;
//}
//
//int searchit(float a[ ] , int n, float number){
//	int i = 0;
//	while (number != a[i] && i < n){
//		i++;
//	}
//	if (i == n)
//		i = -1;
//	return i;
//}


//#include <iostream>
//#include <string.h>
//using namespace std;
//
//void delete_duplicates(char *afterArray, int size);
//int length(char array[]);
//
//int main(){
//	char array[81] = "mary had a little lamb. its fleece was white as snow.";
//	char *afterArray;
//	afterArray = new char;
//	for(int i = 0; i < sizeof(array); i++)
//	    afterArray[i] = array[i];
//	cout << array << endl;
//	int size;
//	size = length(afterArray);
//
//	
//	delete_duplicates(afterArray, size);
//	
//	cout << "reduced array = " << afterArray << endl;
//	delete [] afterArray;
//	return 0;
//}
//
//void delete_duplicates(char *afterArray, int size){
//	for ( int i = 0; i < size ; i++){
//		for ( int j = i+1; j < size; j++ ){
//			if ( afterArray[j] == afterArray[i] ){
//				for ( int k = j; k < size; k++){
//					afterArray[k] = afterArray[k+1];
//				}
//				j--; //backup, look at this character again!
//				size--;
//			}
//		}
//	}
//}
//
//int length( char array[]){
//	int i;
//	for (i=0; '\0' != array[i]; i++){ //strings are terminated by a \0
//									  //length is the position of '\0'
//									  //body deliberately empty
//	}
//	return i;
//}



//#include <iostream>
//#include <string>
//#include <locale>
//
//

//void to_pigLatin(string& a){
//	char temp;
//	if (a[0] == 'a' || a[0] == 'e' || a[0] == 'i' || a[0] == 'o' || a[0] == 'u') {
//		a += "way";
//	} else {
//		temp = a[0];
//		a.erase(0,1);
//		a = a + temp + "ay";
//	}
//	a[0] = toupper(a[0]);
//}
//int searchLetter(const char letters[], int countLetters, char target);
//void sort(char letters[], int times[], int numberUsed);
//void swapValues(int& a, int&b);
//void swapValuesLetters(char& a, char&b);
//int indexOfLargest(const int times[], int startIndex, int numberUsed);
//int strlenght(char string[]);
//
//int main(){
//	vector<int> v(10);
//	int i;
//	
//	for (i = 0; i < v.size(); i++) {
//		v[i] = i;
//	}
//	vector<int> copy;
//	copy = v;
//	v[0] = 42;
//	
//	for (i = 0; i < copy.size(); i++) {
//		cout << copy[i] << " ";
//	}
//	cout << endl;
//	
//	return 0;
//}
//
//int strlen(char string[]){
//	int count = 0, index = 0;
//	while (string[index] != '\0'){
//		count++;
//		index++;
//	}
//	return count;
//}
//	char letters[27] = {' '};
//	int times[27] = {0}, index = 0, i = 0, result;
//	char nextLetter;
//	
//	cout << "Write a sentence: ";
//	cin >> nextLetter;
//	while (nextLetter != '.'){
//		result = searchLetter(letters, index, nextLetter);
//		if (result < 0){ //was not found
//			letters[index] = nextLetter;
//			times[index]++;
//			index++;
//		} else {
//			times[result]++;
//		}
//		cin >> nextLetter;
//	}
//	
//	sort(letters, times, index);
//	for (i = 0; i < index; i++){
//		cout << letters[i] << " = " << times[i] << endl;
//	}
//	return 0;
//}
//
//int searchLetter(const char letters[], int countLetters, char target){
//	int index = 0;
//	bool found = false;
//	while ((!found) && (index < countLetters)) {
//		if (target == letters[index]){
//			found = true;
//		} else {
//			index++;
//		}
//	}
//	if (found)
//		return index;
//	else
//		return -1;
//}
//
//void sort(char letters[], int times[], int numberUsed){
//	int indexLargest;
//	for (int i = 0; i < numberUsed - 1; i++){
//		indexLargest = indexOfLargest(times, i, numberUsed);
//		swapValues(times[i], times[indexLargest]);
//		swapValuesLetters(letters[i], letters[indexLargest]);
//	}
//}
//
//void swapValues(int& a, int&b){
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//
//void swapValuesLetters(char& a, char&b){
//	char temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//
//int indexOfLargest(const int times[], int startIndex, int numberUsed){
//	int max = times[startIndex], indexOfMax = startIndex;
//	for (int i = startIndex + 1; i < numberUsed; i++){
//		if (times[i] > max) {
//			max = times[i];
//			indexOfMax = i;
//		}
//	}
//	return indexOfMax;
//}