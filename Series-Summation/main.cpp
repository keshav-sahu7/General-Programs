/*
 * main.cpp
 *
 *  Created on: 12-Sep-2019
 *      Author: Keshav Sahu
 */

#include <iostream>
#include <string>

using namespace std;


double evaluate(string exp,int mb,int Mb)
{
	if(mb > Mb){
		int tmp = mb;
		mb = Mb;
		Mb = tmp;
	}
	char _operator = exp.at(0);
	double val = stod(exp.substr(1));
	int sum = 0;
	for(int i = mb; i <= Mb; i++){
		sum = sum + i;
	}

	double result = 0;
	switch(_operator){
	case '+':
		result = sum + (Mb-mb+1)*val;
		break;
	case '-':
		result = sum - (Mb-mb+1)*val;
		break;
	case '*':
		result = sum * val;
		break;
	case '/':
		result = double(sum) /val;
		break;
	case '%':
		for(int i = mb; i <= Mb; i++){
			result += i%int(val);
		}
		break;
	default:
		result = -1;
		break;
	}
	return result;
}

string getSeries(int lb,int ub,string exp)
{
	string ser;
	if(lb < ub)
	{
	for(int i = lb; i < ub; i++){
		ser = ser  + to_string(i) + exp + " + ";
	}
	ser = ser + to_string(ub) + exp;
	}
	else
	{
	for(int i = lb; i > ub; i--){
		ser = ser  + to_string(i) + exp + " + ";
	}
	ser = ser + to_string(ub) + exp;
	}
	return ser;
}


int main()
{
	int lb,ub;
	string expression;
	cout<<"Enter lb and ub : "<<endl;
	cin>>lb>>ub;

	cout<<"Enter expression i.e. *3"<<endl;
	cin>>expression;
	cout<<"series   : "<<getSeries(lb,ub,expression)<<endl;
	cout<<"Solution : "<<evaluate(expression,lb,ub)<<endl;

	fflush(stdin);
	getchar();
	return 0;
}













