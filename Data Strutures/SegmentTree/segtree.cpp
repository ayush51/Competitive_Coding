#include <bits/stdc++.h>
#define ll long long
#define pb emplace_back
#define mp make_pair

using namespace std;

template<typename T>
class SegmentTree
{
	int n;
	std::vector<T> seg;
	T (*Union)(T, T);
	T defval;
public:
	SegmentTree(std::vector<T>& a, T (*u)(T, T), T def);
	T query(int l , int r);
	void pointupdate(int i, T val);
	void helperbuild(std::vector<T>& a, int node, int s, int e);
	void helperpointupdate(int node, int i, const T& val, int s, int e);
	T helperquery(int node, int s, int e, int l, int r);
};
template<typename T>
SegmentTree<T>::SegmentTree(std::vector<T>& a, T (*u)(T, T), T def) {
	defval = def;
	Union = u;
	n = a.size();
	seg.resize(4 * n);
	helperbuild(a, 1, 0, n - 1);
}
template<typename T>
void SegmentTree<T>::helperbuild(std::vector<T>& a, int node, int s, int e) {
	if (s == e) { seg[node] = a[s]; return; }
	int m = (s + e) >> 1;
	helperbuild(a, 2 * node, s, m);
	helperbuild(a, 2 * node + 1, m + 1, e);
	seg[node] = Union(seg[2 * node], seg[2 * node + 1]);
}
template<typename T>
void SegmentTree<T>::pointupdate(int i, const T& val, int s = 0, int e = n - 1, int node = 1) {
	if (s > i || i > e) { return; }
	if (s == e) { seg[node] = val; return; }
	int m = (s + e) >> 1;
	pointupdate(i, val, s, m, 2 * node);
	pointupdate(i, val, m + 1, e, 2 * node + 1);
	seg[node] = Union(seg[2 * node + 1], seg[2 * node]);
}
template<typename T>
T SegmentTree<T>::query(int l, int r, int node = 1, int s = 0, int e = n - 1)
{
	if (s > r || e < l) return defval;
	if (l <= s && e <= r) return seg[node];
	int m = (s + e) >> 1;
	return Union(query(l, r, 2 * node, s, m), query(l, r, 2 * node + 1, m + 1, e));
}
