#include<string>
#include<iostream>
#include<random>
using namespace std;
string randDNA(int seed,string bases,int n )
 {
	 mt19937 eng1(seed);
	 int min = 0; //minimum number to generate
	 int max =bases.size()-1; //maximum number to generate
	 
	uniform_int_distribution<> uniform(min,max);
	 int index =0;
	 string dna="";
	 for(int i=0; i < n ;i++)
		{
			index = uniform(eng1);
			dna = dna + bases[index];
		}
	return dna;
 }
