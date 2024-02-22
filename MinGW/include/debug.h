#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define local(...) do{ __VA_ARGS__ ;} while(0);
#define debug(...) cerr << "\nLine " << __LINE__ <<": [ " << #__VA_ARGS__ << " ] --> "; __dbg(__VA_ARGS__); cerr << "\n";
auto starttime = chrono::steady_clock::now();

string __init__(){
	const string io_file_path = "./";
	const string input_file = "input.txt";
	const string output_file = "output.txt";
	const string error_file = "error.txt";
	freopen((io_file_path + input_file).c_str(), "r", stdin);
    freopen((io_file_path + output_file).c_str(), "w", stdout);
    freopen((io_file_path + error_file).c_str(), "w", stderr);
    time_t Time; time(&Time);
    return ctime(&Time);
}

string __elapsed__(){
	cerr << "\n\nElapsed time: " << chrono::duration_cast<chrono::milliseconds>
    (chrono::steady_clock::now() - starttime).count() << " millisecond";
    return "";
}
string __case__(int case_no){
	return string(case_no > 1 ? "\n" : "") + string("---- Case ") + to_string(case_no) + string(" ---------\n");
}

inline void __dbg(){}

inline void __dbg(const bool& x){
	cerr << (x ? "true" : "false");
}

inline void __dbg(const auto& x){
	cerr << x;
}
inline void __dbg(const auto &...a) {((__dbg(a)), ...);}

void __dbg(const pair<auto, auto>& p){
	__dbg("{ ", p.first, ", ", p.second, " }");
}
void __dbg(const vector<auto>& v){
	__dbg("[ ");
	for(const auto& i : v){
		__dbg(i);__dbg(" ");
	}
	__dbg("]");
}
void __dbg(stack<auto> stk){
	__dbg("[ ");
	while(not stk.empty()){
		__dbg(stk.top());
		__dbg(" ");
		stk.pop();
	}
	__dbg("]");
}
void __dbg(queue<auto> q){
	__dbg("[ ");
	while(not q.empty()){
		__dbg(q.front());
		__dbg(" ");
		q.pop();
	}
	__dbg("]");
}
void __dbg(const deque<auto>& dq){
	__dbg("[ ");
	for(const auto& i : dq){
		__dbg(i);__dbg(" ");
	}
	__dbg("]");
}
void __dbg(const set<auto>& st){
	__dbg("[ ");
	for(const auto& i : st){
		__dbg(i);__dbg(" ");
	}
	__dbg("]");
}
void __dbg(const multiset<auto>& st){
	__dbg("[ ");
	for(const auto& i : st){
		__dbg(i);__dbg(" ");
	}
	__dbg("]");
}
void __dbg(const tree<auto, null_type, less<auto>, rb_tree_tag, tree_order_statistics_node_update>& s){
	__dbg("[ ");
	for(const auto& i : s){
		__dbg(i);__dbg(" ");
	}
	__dbg("]");
}
void __dbg(const tree<auto, null_type, less_equal<auto>, rb_tree_tag, tree_order_statistics_node_update>& s){
	__dbg("[ ");
	for(const auto& i : s){
		__dbg(i);__dbg(" ");
	}
	__dbg("]");
}
void __dbg(const tree<auto, null_type, greater<auto>, rb_tree_tag, tree_order_statistics_node_update>& s){
	__dbg("[ ");
	for(const auto& i : s){
		__dbg(i);__dbg(" ");
	}
	__dbg("]");
}
void __dbg(const map<auto, auto>& mp){
	__dbg("[ ");
	for(const auto& [key, value] : mp){
		__dbg("{ "); __dbg(key); __dbg(" => "); __dbg(value);__dbg(" }");
	}
	__dbg("]");
}

char dbgsep = ' ';
void dbg(){
	cerr << endl;
}
template<typename Type, typename... Args>
void dbg(Type value, Args... args) {
	__dbg(value);
	__dbg(dbgsep);
	dbg(args...);
}



// #include<bits/stdc++.h>
// #define local(...) do{__VA_ARGS__;}while(0);
// using namespace std;
// typedef long long ll;
// #include<bits/stdtr1c++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// // template<class T>
// // using tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update> = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
// // #define debug(...) cerr<<"[" << #__VA_ARGS__ <<"] --> "; full_debug(__VA_ARGS__); cerr << endl
// /////////////////////////////
// const string io_file_path = "/home/withtahmid/cp/IOFiles/";
// const string input_file = "input.txt";
// const string output_file = "output.txt";
// const string error_file = "error.txt";

// // const string __elapsed__ = "\nReturned with exit code 0";

// auto starttime = chrono::steady_clock::now();
// // struct rusage usage;
// string __init__(){
// 	freopen((io_file_path + input_file).c_str(), "r", stdin);
//     freopen((io_file_path + output_file).c_str(), "w", stdout);
//     freopen((io_file_path + error_file).c_str(), "w", stderr);
//     time_t Time; time(&Time);
//     return ctime(&Time);
// }

// string __elapsed__(){
// 	cerr << "\n\nElapsed time: " << chrono::duration_cast<chrono::milliseconds>
//     (chrono::steady_clock::now() - starttime).count() << " millisecond";
//     return "";
// }
// string __case__(int case_no){
// 	string ret = string(case_no > 1 ? "\n" : "") + string("---- Case ") + to_string(case_no) + string(" ---------\n");
// 	return ret;
// }
// void full_debug(int x){cerr << x;}
// void full_debug(long long x){cerr << x;}
// void full_debug(unsigned long long x){cerr << x; }
// void full_debug(char x){cerr << x;}
// void full_debug(string x){cerr << x;}
// void full_debug(double x){cerr << x;}
// void full_debug(long double x){cerr << x;}
// ///


// // data stractures
// template<class T,class V>
// void full_debug(pair<T,V> x)
// {
// 	cerr << "{";
// 	full_debug(x.first);
// 	cerr << ",";
// 	full_debug(x.second);
// 	cerr<<"}";
// }
// template<class T>
// void full_debug(vector<T>v){
// 	cerr<<"Vector: " << "Size: "<<v.size()<<endl;
// 	cerr <<"[\n";
// 	for(int i = 0; i<v.size(); i++){
// 		cerr <<"\tv["<<i<<"]: ";
// 		full_debug(v[i]);
// 		cerr<<endl;
// 	}
// 	cerr <<"]";
// }
// template<class T>
// void full_debug(set<T>s){
// 	cerr<<"Set: " << "Size: "<<s.size()<<endl;
// 	cerr <<"[\n";
// 	ll indx = 0;
// 	for(T i : s){
// 		cerr << "\ts["<<indx++<<"]: ";
// 		full_debug(i);
// 		cerr <<"\n";
// 	}
// 	cerr <<"\n]";
// }
// template<class T>
// void full_debug(tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update> s){
// 	cerr<<"Set: " << "Size: "<<s.size()<<endl;
// 	cerr <<"[\n";
// 	ll indx = 0;
// 	for(T i : s){
// 		cerr << "\ts["<<indx++<<"]: ";
// 		full_debug(i);
// 		cerr <<"\n";
// 	}
// 	cerr <<"\n]";
// }
// template<class T>
// void full_debug(multiset<T>s){
// 	cerr<<"Multiset: " << "Size: "<<s.size()<<endl;
// 	cerr <<"[\n";
// 	ll indx = 0;
// 	for(T i : s){
// 		cerr << "\ts["<<indx++<<"]: ";
// 		full_debug(i);
// 		cerr <<"\n";
// 	}
// 	cerr <<"\n]";
// }
// template<class T,class V>
// void full_debug(map<T,V>m)
// {
// 	cerr<<"Map: " << "Size: "<<m.size()<<endl;
// 	cerr << "{\n";
// 	ll indx = 0;
// 	for(auto i : m)
// 	{
// 		cerr <<"\t{ [";
// 		full_debug(i.first);
// 		cerr<<"] => ";
// 		full_debug(i.second);
// 		cerr<<"},";
// 		cerr<<" -- indx: "<< indx++ <<endl;
// 	}
// 	cerr << "\n}";
// }
// template<class T>
// void full_debug(stack<T>stk)
// {
// 	cerr<<"Stack: " << "Size: "<<stk.size()<<endl;
// 	cerr << "[ \n";
// 	int i = 0;
// 	while(!stk.empty()){
// 		cerr<<"\t| ";
// 		if(!i){
// 			cerr <<"top -> ";
// 		}
// 		else{
// 			cerr<<"\t\t ";
// 		}

// 		full_debug(stk.top());cerr <<"\t i: "<<i<<"\t";
// 		cerr<<"\t|";
// 		cerr <<"\n";
// 		stk.pop();
// 		++i;
// 	}
// 	cerr << "\n]";
// }
// template<class T>
// void full_debug(queue<T>Q)
// {
// 	cerr<<"Deque: " << "Size: "<<Q.size()<<endl;
// 	cerr << "[ \n";
// 	int i = 0;
// 	while(!Q.empty()){
// 		cerr<<"\t| ";
// 		if(!i){
// 			cerr <<"frnt-> ";
// 		}
// 		else{
// 			cerr<<"\t\t ";
// 		}

// 		full_debug(Q.front());cerr <<"\t i: "<<i<<"\t";
// 		cerr<<"\t|";
// 		cerr <<"\n";
// 		Q.pop();
// 		++i;
// 	}
// 	cerr << "\n]";
// }
// template<class T>
// void full_debug(deque<T>Q)
// {
// 	cerr<<"Deque: " << "Size: "<<Q.size()<<endl;
// 	cerr << "[\n";
// 	int i = 0;
// 	int n = Q.size();
// 	while(!Q.empty()){
// 		cerr<<"\t| ";
// 		if(!i){
// 			cerr <<"frnt-> ";
// 		}
// 		else if(i == n-1){
// 			cerr <<"back-> ";
// 		}
// 		else{
// 			cerr<<"\t\t ";
// 		}

// 		full_debug(Q.front()); cerr <<"\t i: "<<i<<"\t";
// 		cerr<<"\t|";
// 		cerr <<"\n";
// 		Q.pop_front();
// 		++i;
// 	}
// 	cerr << "\n]";
// }
// ///////////////////


// // premitive types
// void _debug(int x){ cerr << x; }
// void _debug(long long x){ cerr << x; }
// void _debug(unsigned long long x){ cerr << x; }
// void _debug(char x){ cerr << x; }
// void _debug(string x){ cerr << x; }
// void _debug(double x){ cerr << x; }
// void _debug(long double x){ cerr << x;}
// ///
// template<class T>
// void _debug(T x, int mode){

// 	if(!mode){
// 		cerr << "\n-------------start---------------\n";
// 		full_debug(x);
// 		cerr << "\n--------------end----------------\n";
// 	}
// 	else{
// 		cerr<<"Pass '0' as parameter for full_debug\n";
// 	}
// }
// // data stractures
// template<class T,class V>
// void _debug(pair<T,V> x)
// {
// 	cerr << "{";
// 	_debug(x.first);
// 	cerr << ",";
// 	_debug(x.second);
// 	cerr<<"}";
// }
// template<class T>
// void _debug(vector<T>v){
// 	cerr <<"[ ";
// 	for(T i : v){
// 		_debug(i);
// 		cerr <<" ";
// 	}
// 	cerr <<"]";
// }
// template<class T>
// void _debug(deque<T>v){
// 	cerr <<"[ ";
// 	for(T i : v){
// 		_debug(i);
// 		cerr <<" ";
// 	}
// 	cerr <<"]";
// }
// template<class T>
// void _debug(set<T>s){
// 	cerr <<"[ ";
// 	for(T i : s){
// 		_debug(i);
// 		cerr <<", ";
// 	}
// 	cerr <<"]";
// }
// template<class T>
// void _debug(multiset<T>s){
// 	cerr <<"[ ";
// 	for(T i : s){
// 		_debug(i);
// 		cerr <<", ";
// 	}
// 	cerr <<"]";
// }
// template<class T>
// void _debug(tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>s){
// 	cerr <<"[ ";
// 	for(T i : s){
// 		_debug(i);
// 		cerr <<", ";
// 	}
// 	cerr <<"]";
// }
// template<class T>
// void _debug(tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>s){
// 	cerr <<"[ ";
// 	for(T i : s){
// 		_debug(i);
// 		cerr <<", ";
// 	}
// 	cerr <<"]";
// }

// template<class T,class V>
// void _debug(map<T,V>m)
// {
// 	cerr << "{ ";
// 	for(auto i : m)
// 	{
// 		cerr <<"[";
// 		_debug(i.first);
// 		cerr<<"] => ";
// 		_debug(i.second);
// 		cerr<<", ";
// 	}
// 	cerr << " }";
// }
// template<class T>
// void _debug(stack<T>stk)
// {
// 	cerr << "[ top -> ";
// 	while(!stk.empty()){
// 		_debug(stk.top());
// 		cerr <<" ";
// 		stk.pop();
// 	}
// 	cerr << " ]";
// }
// template<class T>
// void _debug(queue<T>stk)
// {
// 	cerr << "[ frnt -> ";
// 	while(!stk.empty()){
// 		_debug(stk.front());
// 		cerr <<" ";
// 		stk.pop();
// 	}
// 	cerr << " ]";
// }

// char dbgsep = ' ';
// void dbg(){
// 	cerr << endl;
// }
// template<typename T, typename... Args>
// void dbg(T value, Args... args) {
// 	_debug(value);cerr<<dbgsep;
// 	dbg(args...);
// }


// char debugsep = '\n';



// void debug(){
// 	cerr << endl;
// }
// template<typename T, typename... Args>
// void debug(T value, Args... args) {
// 	full_debug(value); cerr << debugsep;
// 	debug(args...);
// }
