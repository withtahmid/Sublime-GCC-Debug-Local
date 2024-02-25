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
