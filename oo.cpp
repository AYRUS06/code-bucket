#include <bits/stdc++.h>
using namespace std;
#define all(v) (v).begin(), (v).end()
#define debug(x) cout << #x << " = " << x << endl
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
inline ll Mod(ll x, ll mod) { return x % mod >= 0 ? x % mod : x % mod + mod; }

const ll N = 2000000;
ll Phi[N];
ll phiphi[N + 1];
ll prefix[N];
vector<int> primes;

void find_primes(ll n)
{
    int lp[n + 1] = {0};
    for (int i = 2; i <= n; ++i)
    {
        if (lp[i] == 0)
        {
            lp[i] = i;
            primes.push_back(i);
        }
        for (int j = 0; j < (int)primes.size() && primes[j] <= lp[i] && i * primes[j] <= n; ++j)
            lp[i * primes[j]] = primes[j];
    }
}

int upper(ll r)
{
    ll q = sqrt(2 * r);
    q -= 3;
    for (int i = 0; i < 6; i++)
    {
        if (q * (q + 1) / 2 > r)
        {
            return q - 1;
        }
        q++;
    }
    return -1;
}

int lower(ll l)
{
    ll q = sqrt(2 * l);
    q += 3;
    for (int i = 0; i < 6; i++)
    {
        if (q * (q + 1) / 2 < l)
        {
            return q + 1;
        }
        q--;
    }
    return -1;
}

void factorize(int n, vector<int> &s)
{
    for (int i : primes)
    {
        if (i * i > n)
            break;
        if (n % i == 0)
        {
            s.emplace_back(i);
            while (n % i == 0)
                n /= i;
        }
    }
    if (n > 1)
        s.emplace_back(n);
}

ll phi(ll i)
{
    vector<int> prime_factors;
    prime_factors.reserve(40);
    if (!(i % 2))
        i /= 2;
    factorize(i, prime_factors);
    for (int k : prime_factors)
    {
        i -= i / k;
    }
    return i;
}

void prepare()
{
    primes.reserve(150);
    find_primes(1500);
    phiphi[1] = 1;
    for (ll i = 1; i < N + 1; i++)
        phiphi[i] = phi(i);
    for (int i = 1; i < N; i++)
        Phi[i] = phiphi[i] * phiphi[i + 1];
    prefix[0] = 0;
    for (int i = 1; i < N; i++)
        prefix[i] = prefix[i - 1] + Phi[i];
}

ll solve(ll l, ll r)
{
    int R = upper(r);
    int L = lower(l);
    //cout << R << " " << L << '\n' ;
    return prefix[R] - prefix[L - 1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    prepare();
    int t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        cout << solve(l, r) << '\n';
    }
}