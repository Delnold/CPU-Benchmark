
#include <iostream>
#include <time.h>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>

using namespace std;
auto number_of_iterations = pow(10, 8);

template <typename T>
double summ(T a, T b, T c, T d, T e, T f, T g, T h, T j)
{
	double time = clock();
	for (auto i = 0; i < number_of_iterations; i++)
	{
		a = b + j;
		b = c + d;
		a = e + j;
		b = e + h;
		c = h + f;
		d = g + h;
		d = h + e;
		a = b + j;
		b = c + d;
		a = e + j;
		b = e + h;
		c = h + f;
		d = g + h;
		d = h + e;
	}
	time = number_of_iterations / ((clock() - time) / CLOCKS_PER_SEC);
	return time;
}
template <typename T>
double subs(T a, T b, T c, T d, T e, T f, T g, T h, T j)
{
	double time = clock();
	for (auto i = 0; i < number_of_iterations; i++)
	{
		a = b - j;
		b = c - d;
		a = e - j;
		b = e - h;
		c = h - f;
		d = g - h;
		d = h - e;
		a = b - j;
		b = c - d;
		a = e - j;
		b = e - h;
		c = h - f;
		d = g - h;
		d = h - e;

	}
	time = number_of_iterations / ((clock() - time) / CLOCKS_PER_SEC);
	return time;
}
template <typename T>
double mult(T a, T b, T c, T d, T e, T f, T g, T h, T j)
{
	double time = clock();
	for (auto i = 0; i < number_of_iterations; i++)
	{
		a = b * j;
		b = c * d;
		a = e * j;
		b = e * h;
		c = h * f;
		d = g * h;
		d = h * e;
		a = b * j;
		b = c * d;
		a = e * j;
		b = e * h;
		c = h * f;
		d = g * h;
		d = h * e;
	}
	time = number_of_iterations / ((clock() - time) / CLOCKS_PER_SEC);
	return time;
}
template <typename T>
double div(T a, T b, T c, T d, T e, T f, T g, T h, T j)
{
	double time = clock();
	for (auto i = 0; i < number_of_iterations; i++)
	{

		a = b / j;
		b = c / d;
		a = e / j;
		b = e / h;
		c = h / f;
		d = g / h;
		d = h / e;
		a = b / j;
		b = c / d;
		a = e / j;
		b = e / h;
		c = h / f;
		d = g / h;
		d = h / e;

	}
	time = number_of_iterations / ((clock() - time) / CLOCKS_PER_SEC);
	return time;
}

struct Results {
	string sign;
	string type;
	double op_per_sec;
	int percentage;
	string dynamic_line;
};

template <typename T>
void Creating_Vector_Of_Data(string sign, string type, std::vector<Results>& vect_of_data)
{
	T a, b, c, d, e, f, g, h, j;
	if (type == ("char")) {
		a = 'A';
		b = 'l';
		c = 'c';
		d = '/';
		e = '2';
		f = ' ';
		g = '0';
		h = 's';
		j = 'p';
		if (sign == ("+")) {
			double op_per_sec = summ(a, b, c, d, e, f, g, h, j);
			vect_of_data.push_back(Results{ sign, type, op_per_sec });
		}
		if (sign == ("-")) {
			double op_per_sec = subs(a, b, c, d, e, f, g, h, j);
			vect_of_data.push_back(Results{ sign, type, op_per_sec });
		}
		if (sign == ("*")) {
			double op_per_sec = mult(a, b, c, d, e, f, g, h, j);
			vect_of_data.push_back(Results{ sign, type, op_per_sec });
		}
		if (sign == ("/")) {
			double op_per_sec = div(a, b, c, d, e, f, g, h, j);
			vect_of_data.push_back(Results{ sign, type, op_per_sec });
		}
	}
	if (type == ("long")) {
		a = 3224234L;
		b = 343246544L;
		c = 745457121L;
		d = 42332434L;
		e = 24321134L;
		f = 4421344L;
		g = 843454122L;
		h = 4534624324L;
		j = 73625232L;
		if (sign == ("+")) {
			double op_per_sec = summ(a, b, c, d, e, f, g, h, j);
			vect_of_data.push_back(Results{ sign, type, op_per_sec });
		}
		if (sign == ("-")) {
			double op_per_sec = subs(a, b, c, d, e, f, g, h, j);
			vect_of_data.push_back(Results{ sign, type, op_per_sec });
		}
		if (sign == ("*")) {
			double op_per_sec = mult(a, b, c, d, e, f, g, h, j);
			vect_of_data.push_back(Results{ sign, type, op_per_sec });
		}
		if (sign == ("/")) {
			double op_per_sec = div(a, b, c, d, e, f, g, h, j);
			vect_of_data.push_back(Results{ sign, type, op_per_sec });
		}
	}
	if (type == ("int")) {
		a = 14334232;
		b = 24354445;
		c = 34543214;
		d = 243243424;
		e = 43242343;
		f = 93847234;
		g = 342424345;
		h = 645453232;
		j = 352352342;
		if (sign == ("+")) {
			double op_per_sec = summ(a, b, c, d, e, f, g, h, j);
			vect_of_data.push_back(Results{ sign, type, op_per_sec });
		}
		if (sign == ("-")) {
			double op_per_sec = subs(a, b, c, d, e, f, g, h, j);
			vect_of_data.push_back(Results{ sign, type, op_per_sec });
		}
		if (sign == ("*")) {
			double op_per_sec = mult(a, b, c, d, e, f, g, h, j);
			vect_of_data.push_back(Results{ sign, type, op_per_sec });
		}
		if (sign == ("/")) {
			double op_per_sec = div(a, b, c, d, e, f, g, h, j);
			vect_of_data.push_back(Results{ sign, type, op_per_sec });
		}
	}
	if (type == ("double")) {
		a = 14334232.213;
		b = 24354445.23;
		c = 34543214.1;
		d = 2432434.02;
		e = 43242343.231;
		f = 93847234.92;
		g = 342424345.123;
		h = 645453232.42;
		j = 352352342.90;
		if (sign == ("+")) {
			double op_per_sec = summ(a, b, c, d, e, f, g, h, j);
			vect_of_data.push_back(Results{ sign, type, op_per_sec });
		}
		if (sign == ("-")) {
			double op_per_sec = subs(a, b, c, d, e, f, g, h, j);
			vect_of_data.push_back(Results{ sign, type, op_per_sec });
		}
		if (sign == ("*")) {
			double op_per_sec = mult(a, b, c, d, e, f, g, h, j);
			vect_of_data.push_back(Results{ sign, type, op_per_sec });
		}
		if (sign == ("/")) {
			double op_per_sec = div(a, b, c, d, e, f, g, h, j);
			vect_of_data.push_back(Results{ sign, type, op_per_sec });
		}
	}
	if (type == ("float")) {
		a = 14334232.213F;
		b = 24354445.23F;
		c = 34543214.1F;
		d = 24324342.02F;
		e = 43242343.231F;
		f = 93847234.92F;
		g = 342424345.123F;
		h = 645453232.42F;
		j = 352352342.90F;
		if (sign == ("+")) {
			double op_per_sec = summ(a, b, c, d, e, f, g, h, j);
			vect_of_data.push_back(Results{ sign, type, op_per_sec });
		}
		if (sign == ("-")) {
			double op_per_sec = subs(a, b, c, d, e, f, g, h, j);
			vect_of_data.push_back(Results{ sign, type, op_per_sec });
		}
		if (sign == ("*")) {
			double op_per_sec = mult(a, b, c, d, e, f, g, h, j);
			vect_of_data.push_back(Results{ sign, type, op_per_sec });
		}
		if (sign == ("/")) {
			double op_per_sec = div(a, b, c, d, e, f, g, h, j);
			vect_of_data.push_back(Results{ sign, type, op_per_sec });
		}
	}
}
void Define_Percentage(vector<Results>& vect_of_data) {
	int index = 0;
	double perc = 0;
	for (int i = 0; i < vect_of_data.size(); i++) {
		double temp = vect_of_data[i].op_per_sec;
		if (temp > perc) {
			perc = temp;
			index = i;
		}
		else {
			continue;
		}
	}
	vect_of_data[index].percentage = 100;
	for (int a = 0; a < vect_of_data.size(); a++) {
		if (a != index) {
			vect_of_data[a].percentage = (vect_of_data[a].op_per_sec / vect_of_data[index].op_per_sec) * 100;
		}
	}
}
void Define_Graphs_Perfomance(vector<Results>& vect_of_data) {
	int amount = 50;
	for (int i = 0; i < vect_of_data.size(); i++) {
		if (vect_of_data[i].percentage == 100) {
			string symbol(amount, '#');
			vect_of_data[i].dynamic_line = symbol;
		}
		else {
			int local;
			local = vect_of_data[i].percentage * amount / 100;
			string symbol(local, '#');
			vect_of_data[i].dynamic_line = symbol;

		}
	}
}

int main()
{
	vector<Results> list;
	/* Warming up by cycle */
	for (int i = 0; i < 10; i++)
	{
		Creating_Vector_Of_Data<char>("+", "char", list);
		list.erase(list.begin());

	}

	Creating_Vector_Of_Data<int>("+", "int", list);
	Creating_Vector_Of_Data<float>("+", "float", list);
	Creating_Vector_Of_Data<long>("+", "long", list);
	Creating_Vector_Of_Data<double>("+", "double", list);

	Creating_Vector_Of_Data<int>("-", "int", list);
	Creating_Vector_Of_Data<float>("-", "float", list);
	Creating_Vector_Of_Data<long>("-", "long", list);
	Creating_Vector_Of_Data<double>("-", "double", list);

	Creating_Vector_Of_Data<int>("*", "int", list);
	Creating_Vector_Of_Data<float>("*", "float", list);
	Creating_Vector_Of_Data<long>("*", "long", list);
	Creating_Vector_Of_Data<double>("*", "double", list);

	Creating_Vector_Of_Data<int>("/", "int", list);
	Creating_Vector_Of_Data<float>("/", "float", list);
	Creating_Vector_Of_Data<long>("/", "long", list);
	Creating_Vector_Of_Data<double>("/", "double", list);

	Define_Percentage(list);
	Define_Graphs_Perfomance(list);

	for (int i = 0; i < list.size(); i++) {
		cout << left << setw(10) << list[i].sign << setw(20) << list[i].type << setw(15) <<
			list[i].op_per_sec << setw(60) << list[i].dynamic_line << list[i].percentage << "%" << endl;
	}


}

