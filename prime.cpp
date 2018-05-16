#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <vector>
#include <map>
#include <set>
#include <bitset>
#include <queue>
#include <deque>
#include <stack>
#include <iomanip>
#include <cstdlib>
using namespace std;
#define is_lower(c) (c>='a' && c<='z')
#define is_upper(c) (c>='A' && c<='Z')
#define is_alpha(c) (is_lower(c) || is_upper(c))
#define is_digit(c) (c>='0' && c<='9')
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
#define IO ios::sync_with_stdio(0);\
    cin.tie(0);\
    cout.tie(0);
#define For(i,a,b) for(int i = a; i <= b; i++)
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
const ll inf=0x3f3f3f3f;
const double EPS=1e-10;
const ll inf_ll=(ll)1e18;
const ll maxn=100005LL;
const ll mod=1000000007LL;
const int N = 1000+5;  
const int maxn = 10000000  
bool vis[maxn+1000000];  
int prime[maxn],n; 
void getprime()  
 {  
     memset(vis, false, sizeof(vis));  
     int num = 0;  
     for (int i = 2; i <= n; ++i)  
     {  
         if ( !vis[i] )  prime[++num] = i;  
         for (int j = 1; j <= num && i * prime[j] <= n;  j++)  
         {  
             vis[ i  *  prime[j] ]  =  true;  
             if (i % prime[j] == 0) break;  
         }  
     }  
 }
 int main()  
 {  
     scanf("%d",&n);  
     getprime();  
     return 0;  
 } 