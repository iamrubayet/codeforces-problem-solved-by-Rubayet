#include <bits/stdc++.h>
using namespace std;

typedef long long int LL;
typedef double DB;
typedef float FL;
typedef vector<LL> VL;
typedef tuple<LL, LL, LL> TTL;
typedef tuple<LL, LL, LL, LL> TFL;
const LL N=pow(10, 9)+7;

#define FAST(a, b, c, d) ios::sync_with_stdio(a); cin.tie(b); cout.tie(c);cout<<fixed<<setprecision(d);
#define RW(a, b) freopen(a, "r", stdin); freopen(b, "w", stdout);
#define V(a) vector<a>
#define P(a) pair<a, a>
#define endl "\n"
#define REP(i, a, b, k) for(LL i=a; i<b; i+=k)
#define RREP(i, a, b, k) for(LL i=a; i>b; i-=k)
#define PB push_back
#define PF pop_front
#define MP make_pair
#define MT make_tuple
#define G(i, a) get<i>(a)
#define F first
#define S second

LL MIN(LL a, LL b) // returns the minimum of two numbers a and b
{
    if(a<b) return a;
    else return b;
}

LL MAX(LL a, LL b) // returns the maximum of two numbers a and b
{ 
    if(a>b) return a;
    else return b;
}

void swap(LL *a, LL *b) // swaps the two numbers
{ 
    LL *x=a;
    a=b;
    b=x;
}

V(LL) SOD(LL a) // returns sum of digits of a decimal number
{ 
    V(LL) v;
    LL sum=0;
    while(a!=0)
    {
        v.PB(a%10);
        sum=sum+a%10;
        a=a/10;
    }
    return v;
}

LL NUM1(LL a) // returns the count of number of 1's in binary representation of a decimal number
{ 
    LL s=0;
    while(a!=0)
    {
        if(a%2==1)
        {
            s++;
        }
        a=a/2;
    }
    return s;
}

LL BMOD(string s, LL a) // returns remainder when a binary number in string s is divided by a decimal number a
{ 
    LL res=0;
    REP(i, 0, s.length(), 1) res=(10*res+(LL)s[i]-'0')%a;
    return res;
}

LL NOD(LL n) // returns the number of divisors of n
{ 
    LL ans=0, x=sqrt(n);
    if(x%1==0)
    {
        REP(i, 1, x+1, 1)
        {
            if(n%i==0) ans+=2;
            if(n==i*i) ans--;
        }
    }
    else
    {
        REP(i, 0, x, 1) if(n%i==0) ans+=2;
    }
    return ans;
}

void PF(LL n, map<LL, LL> &mp) // returns all the prime factors of a number n in a vector
{   
    // VL v;
    while(n%2==0)  
    {  
        mp[2]++; 
        n = n/2;  
    }  
    REP(i, 3, sqrt(n)+1, 2)
    {  
        while(n%i==0)  
        {  
            mp[i]++;
            n = n/i;  
        }  
    }
    if (n>2) mp[n]++;
}  

LL FACT(LL n) // returns factorial of a number n
{ 
    if (n==0) 
    return 1; 
    return n*FACT(n-1); 
}

DB DIST(LL x1, LL y1, LL x2, LL y2) // returns the euler distance between two points in a 2D plane
{ 
    LL dx=x1-x2, dy=y1-y2;
    return(pow(dx*dx+dy*dy, 0.5));
}

VL SOE(LL n) // returns a vector containing all the primes upto the number n 
{
    VL v;
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
    for(LL p=2; p*p<=n; p++) 
    { 
        if(prime[p]==true) 
        { 
            for(LL i=p*p; i<=n; i += p) 
                prime[i]=false; 
        } 
    }
    for(LL p=2; p<=n; p++) 
       if(prime[p]) 
            v.PB(p);
    return v; 
}

LL GCD(LL a, LL b) // returns gcd of a and b
{ 
    if (b == 0) 
        return a; 
    return GCD(b, a % b); 
} 

LL LCM(LL arr[], LL n) // returns lcm of a and b
{
    LL ans = arr[0]; 
    for(LL i = 1; i < n; i++) 
        ans=(((arr[i] * ans))/(GCD(arr[i], ans))); 
    return ans; 
}

LL MODEXP(LL x, LL n, LL m) // return modular exponential of x with power n wrt m
{ 
    if (n == 0) return 1;
    else if (n % 2 == 0) return MODEXP((x * x) % m, n / 2, m); 
    else return (x * MODEXP((x * x) % m, (n - 1) / 2, m) % m); 
} 
  
LL GFM(LL a, LL b, LL m) // returns mod of a fraction wrt m
{ 
    LL c = GCD(a, b); 
    a = a / c; 
    b = b / c; 
    LL d = MODEXP(b, m - 2, m); 
    LL ans = ((a % m) * (d % m)) % m; 
    return ans; 
}

LL NOSWP(LL arr[], LL n, LL k) // subarrays with product k
{ 
    LL start = 0, endval = 0, p = 1, countOnes = 0, res = 0; 
    while (endval < n)  
    { 
        p *= (arr[endval]); 
        if(p > k) 
        { 
            while(start <= endval && p > k) 
            { 
                p /= arr[start]; 
                start++; 
            } 
        } 
        if(p == k) 
        { 
            countOnes = 0; 
            while(endval + 1 < n && arr[endval + 1] == 1) 
            { 
                countOnes++; 
                endval++; 
            } 
            res += (countOnes + 1); 
            while(start <= endval && arr[start] == 1 && k!=1) 
            { 
                res += (countOnes + 1); 
                start++; 
            } 
            p /= arr[start]; 
            start++; 
        } 
        endval++; 
    } 
    return res; 
} 

LL FUNC(V(VL) &v, LL a[])
{
    LL x, y;
    cin>>x>>y;
    LL n=v.size();
    stack<LL> s;
    bool vis[n]={false};
    s.push(x);
    while(!s.empty())
    {
        LL f=0;
        if(!vis[s.top()-1])
        {
            vis[s.top()-1]=true;
            if(s.top()==y) break;
        }
        REP(i, 0, v[s.top()-1].size(), 1)
        {
            if(!vis[v[s.top()-1][i]]){
                f=1;
                s.push(v[s.top()-1][i]);
                break;
            }
        }
        if(f==0) s.pop();
    }
    map<LL, LL> mp;
    while(!s.empty())
    {
        PF(a[s.top()-1], mp);
        s.pop();
    }
    LL ans=1;
    map<LL, LL>::iterator it;
    for(it=mp.begin(); it!=mp.end(); ++it)
    {
        ans=((ans%N)*(((it->second)+1)%N))%N;
    }
    return ans;
}

LL SOLVE()
{
    LL n;
    cin>>n;
    cout<<25<<endl;
    return 0;
}

int main()
{
    FAST(0, 0, 0, 30) // untie cin and cout
    // RW("in.txt", "out.txt") // I/O in text file
    LL T=1;
    // cin>>T;
    while(T--) SOLVE();
    return 0;
}