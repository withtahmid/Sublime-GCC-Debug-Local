#include<bits/stdc++.h>
using namespace std;
typedef int_fast64_t ll;
#include<bits/stdtr1c++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> 
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define debug(...) cerr<<"[" << #__VA_ARGS__ <<"] --> "; _debug(__VA_ARGS__); cerr << endl
/////////////////////////////
const string io_file_path = "./";
const string input_file = "input.txt";
const string output_file = "output.txt";
const string error_file = "error.txt";
auto starttime = chrono::steady_clock::now();
void io(){
	freopen((io_file_path + input_file).c_str(), "r", stdin);
    freopen((io_file_path + output_file).c_str(), "w", stdout);
    freopen((io_file_path + error_file).c_str(), "w", stderr);
    time_t Time; time(&Time);cerr << ctime(&Time) << endl;
}

void finsh(){
	cerr << "\n\nElapsed time: " << chrono::duration_cast<chrono::milliseconds>
    (chrono::steady_clock::now() - starttime).count() << " millisecond\n";
}

void full_debug(int x){cerr << x;}
void full_debug(int_fast64_t x){cerr << x;}
void full_debug(unsigned long long x){cerr << x; }
void full_debug(char x){cerr << x;}
void full_debug(string x){cerr << x;}
void full_debug(double x){cerr << x;}
void full_debug(long double x){cerr << x;}
///


// data stractures
template<class T,class V>
void full_debug(pair<T,V> x) 
{ 
	cerr << "{";
	full_debug(x.first);
	cerr << ",";
	full_debug(x.second);
	cerr<<"}";
}
template<class T>
void full_debug(vector<T>v){
	cerr<<"Vector: " << typeid(v).name()<<endl<<"Size: "<<v.size()<<endl;
	cerr <<"[\n";
	for(int i = 0; i<v.size(); i++){
		cerr <<"\tv["<<i<<"]: ";
		full_debug(v[i]);
		cerr<<endl;
	}
	cerr <<"]";
}
template<class T>
void full_debug(set<T>s){
	cerr<<"Set: " << typeid(s).name()<<endl<<"Size: "<<s.size()<<endl;
	cerr <<"[\n";
	ll indx = 0;
	for(T i : s){
		cerr << "\ts["<<indx++<<"]: ";
		full_debug(i);
		cerr <<"\n";
	}
	cerr <<"\n]";
}
template<class T>
void full_debug(ordered_set<T>s){
	cerr<<"Set: " << typeid(s).name()<<endl<<"Size: "<<s.size()<<endl;
	cerr <<"[\n";
	ll indx = 0;
	for(T i : s){
		cerr << "\ts["<<indx++<<"]: ";
		full_debug(i);
		cerr <<"\n";
	}
	cerr <<"\n]";
}
template<class T>
void full_debug(multiset<T>s){
	cerr<<"Multiset: " << typeid(s).name()<<endl<<"Size: "<<s.size()<<endl;
	cerr <<"[\n";
	ll indx = 0;
	for(T i : s){
		cerr << "\ts["<<indx++<<"]: ";
		full_debug(i);
		cerr <<"\n";
	}
	cerr <<"\n]";
}
template<class T,class V>
void full_debug(map<T,V>m) 
{ 
	cerr<<"Map: " << typeid(m).name()<<endl<<"Size: "<<m.size()<<endl;
	cerr << "{\n";
	ll indx = 0;
	for(auto i : m)
	{
		cerr <<"\t{ [";
		full_debug(i.first);
		cerr<<"] => ";
		full_debug(i.second);
		cerr<<"},";
		cerr<<" -- indx: "<< indx++ <<endl;
	}
	cerr << "\n}";
}
template<class T>
void full_debug(stack<T>stk) 
{ 
	cerr<<"Stack: " << typeid(stk).name()<<endl<<"Size: "<<stk.size()<<endl;
	cerr << "[ \n";
	int i = 0;
	while(!stk.empty()){
		cerr<<"\t| ";
		if(!i){
			cerr <<"top -> ";
		}
		else{
			cerr<<"\t\t ";
		}
		
		full_debug(stk.top());cerr <<"\t i: "<<i<<"\t";
		cerr<<"\t|";
		cerr <<"\n";
		stk.pop();
		++i;
	}
	cerr << "\n]";
}
template<class T>
void full_debug(queue<T>Q) 
{ 
	cerr<<"Queue: " << typeid(Q).name()<<endl<<"Size: "<<Q.size()<<endl;
	cerr << "[ \n";
	int i = 0;
	while(!Q.empty()){
		cerr<<"\t| ";
		if(!i){
			cerr <<"frnt-> ";
		}
		else{
			cerr<<"\t\t ";
		}
		
		full_debug(Q.front());cerr <<"\t i: "<<i<<"\t";
		cerr<<"\t|";
		cerr <<"\n";
		Q.pop();
		++i;
	}
	cerr << "\n]";
}
template<class T>
void full_debug(deque<T>Q) 
{ 
	cerr<<"Deque: " << typeid(Q).name()<<endl<<"Size: "<<Q.size()<<endl;
	cerr << "[\n";
	int i = 0;
	int n = Q.size(); 
	while(!Q.empty()){
		cerr<<"\t| ";
		if(!i){
			cerr <<"frnt-> ";
		}
		else if(i == n-1){
			cerr <<"back-> ";
		}
		else{
			cerr<<"\t\t ";
		}
		
		full_debug(Q.front()); cerr <<"\t i: "<<i<<"\t";
		cerr<<"\t|";
		cerr <<"\n";
		Q.pop_front();
		++i;
	}
	cerr << "\n]";
}
///////////////////


// premitive types
void _debug(int x){ cerr << x; }
void _debug(int_fast64_t x){ cerr << x; }
void _debug(unsigned long long x){ cerr << x; }
void _debug(char x){ cerr << x; }
void _debug(string x){ cerr << x; }
void _debug(double x){ cerr << x; }
void _debug(long double x){ cerr << x;}
///
template<class T>
void _debug(T x, int mode){

	if(!mode){
		cerr << "\n-------------start---------------\n";
		full_debug(x);
		cerr << "\n--------------end----------------\n";
	}
	else{
		cerr<<"Pass '0' as parameter for full_debug\n";
	}
}
// data stractures
template<class T,class V>
void _debug(pair<T,V> x) 
{ 
	cerr << "{";
	_debug(x.first);
	cerr << ",";
	_debug(x.second);
	cerr<<"}";
}
template<class T>
void _debug(vector<T>v){
	cerr <<"[ ";
	for(T i : v){
		_debug(i);
		cerr <<" ";
	}
	cerr <<"]";
}
template<class T>
void _debug(deque<T>v){
	cerr <<"[ ";
	for(T i : v){
		_debug(i);
		cerr <<" ";
	}
	cerr <<"]";
}
template<class T>
void _debug(set<T>s){
	cerr <<"[ ";
	for(T i : s){
		_debug(i);
		cerr <<", ";
	}
	cerr <<"]";
}
template<class T>
void _debug(multiset<T>s){
	cerr <<"[ ";
	for(T i : s){
		_debug(i);
		cerr <<", ";
	}
	cerr <<"]";
}
template<class T>
void _debug(ordered_set<T>s){
	cerr <<"[ ";
	for(T i : s){
		_debug(i);
		cerr <<", ";
	}
	cerr <<"]";
}

template<class T,class V>
void _debug(map<T,V>m) 
{ 
	cerr << "{ ";
	for(auto i : m)
	{
		cerr <<"[";
		_debug(i.first);
		cerr<<"] => ";
		_debug(i.second);
		cerr<<", ";
	}
	cerr << " }";
}
template<class T>
void _debug(stack<T>stk) 
{ 
	cerr << "[ top -> ";
	while(!stk.empty()){
		_debug(stk.top());
		cerr <<" ";
		stk.pop();
	}
	cerr << " ]";
}
template<class T>
void _debug(queue<T>stk) 
{ 
	cerr << "[ frnt -> ";
	while(!stk.empty()){
		_debug(stk.front());
		cerr <<" ";
		stk.pop();
	}
	cerr << " ]";
}

char dbgsep = ' ';
void dbg(){
	cerr << endl;
}
template<typename T, typename... Args>
void dbg(T value, Args... args) {
	_debug(value);cerr<<dbgsep;
	dbg(args...);
}



