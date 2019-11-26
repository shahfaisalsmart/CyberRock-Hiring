///==================================================///
///               !! HELLO WORLD !!                  ///
///                 >>IT'S ME<<                      ///
///               MOHAMMAD FAISAL                    ///
///==================================================///
//THIS CODE IS IMPLEMENTED BY DUGGU_123(MOHAMMAD FAISAL)
// author: MOHAMMAD FAISAL (email: mohammad.faisal78612@gmail.com)
// Beginning with the name of Almighty God ALLAH SUBHANA-WATAA-A-ALLAH.
/*
 
        _/ _/ _/ _/  _/ _/ _/ _/   _/  _/ _/ _/   _/ _/ _/ _/  _/
       _/           _/       _/   _/  _/         _/       _/  _/
      _/ _/ _/     _/ _/ _/ _/   _/  _/ _/ _/   _/ _/ _/ _/  _/
     _/           _/       _/   _/        _/   _/       _/  _/
    _/           _/       _/   _/  _/ _/ _/   _/       _/  _/ _/ _/ _/
 
 */
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
#include <ext/pb_ds/detail/standard_policies.hpp>
#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
#define test() int t; cin >> t; while(t--)
#define ll long long
#define ull unsigned long long int
#define ld long double
#define lop(i,n) for(int i=0;i<n;i++)
#define rloop(i,n) for (int i = n-1; i >= 0; i--)
#define loop(x, n) for(ll x = 0; x < n; ++ x)
#define rep(x,n) for(ll x=1;x<=n;x++)
#define mp make_pair
#define pb push_back
#define I cin>>
#define O cout<<
#define W(x) while(x--)
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)
#define sc(x) scanf("%s",x)
#define pc(x) printf("%s",x)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define out2(x, y) cout<< (x) << " " << (y) << endl
#define out3(x, y, z) cout<< (x) << " " << (y) << " " << (z) << endl
#define F first
#define S second
#define inf 1e18
#define MAX 10000000
#define M 1000000007
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
#define prec(x) fixed<<setprecision(15)<<x
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define magic ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0)
#define XXX return 0;
#define ARR(a,n) ll a[n];for(ll i=0;i<n;scanf("%ld ",&a[i++]));
#define ARR2D(a,n,m) ll a[n][m];for(ll i=0;i<n;i++)for(ll j=0;i<m;scanf("%ld ",&a[i][j++]));
#define SHOW2D(a,n,m) ll a[n][m];for(ll i=0;i<n;i++){for(ll j=0;i<m;printf("%ld ",a[i][j++]));printf("\n")}
#define SHOW(a,n) printf("\n");for(ll i=0;i<n;printf("%ld ",a[i++]));
#define br cout<<endl;
#define RESET(a,b)	memset(a,b,sizeof(a))
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define _abs(x, y) ((x>y)?(x-y):(y-x))
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

const double PI=3.141592653589793238462643383279502884197169399375105820974944;

// template <signed M, unsigned T>
// struct mod_int {
// 	constexpr static signed MODULO = M;
// 	constexpr static unsigned TABLE_SIZE = T;
 
// 	signed x;
 
// 	mod_int() : x(0) {}
 
// 	mod_int(long long y) : x(static_cast<signed>(y >= 0 ? y % MODULO : MODULO - (-y) % MODULO)) {}
 
// 	mod_int(signed y) : x(y >= 0 ? y % MODULO : MODULO - (-y) % MODULO) {}
 
// 	mod_int& operator+=(const mod_int& rhs) {
// 		if ((x += rhs.x) >= MODULO) x -= MODULO;
// 		return *this;
// 	}
 
// 	mod_int& operator-=(const mod_int& rhs) {
// 		if ((x += MODULO - rhs.x) >= MODULO) x -= MODULO;
// 		return *this;
// 	}
 
// 	mod_int& operator*=(const mod_int& rhs) {
// 		x = static_cast<signed>(1LL * x * rhs.x % MODULO);
// 		return *this;
// 	}
 
// 	mod_int& operator/=(const mod_int& rhs) {
// 		x = static_cast<signed>((1LL * x * rhs.inv().x) % MODULO);
// 		return *this;
// 	}
 
// 	mod_int operator-() const { return mod_int(-x); }
 
// 	mod_int operator+(const mod_int& rhs) const { return mod_int(*this) += rhs; }
 
// 	mod_int operator-(const mod_int& rhs) const { return mod_int(*this) -= rhs; }
 
// 	mod_int operator*(const mod_int& rhs) const { return mod_int(*this) *= rhs; }
 
// 	mod_int operator/(const mod_int& rhs) const { return mod_int(*this) /= rhs; }
 
// 	bool operator<(const mod_int& rhs) const { return x < rhs.x; }
 
// 	mod_int inv() const {
// 		assert(x != 0);
// 		if (x <= static_cast<signed>(TABLE_SIZE)) {
// 			if (_inv[1].x == 0) prepare();
// 			return _inv[x];
// 		}
// 		else {
// 			signed a = x, b = MODULO, u = 1, v = 0, t;
// 			while (b) {
// 				t = a / b;
// 				a -= t * b;
// 				std::swap(a, b);
// 				u -= t * v;
// 				std::swap(u, v);
// 			}
// 			return mod_int(u);
// 		}
// 	}
 
// 	mod_int pow(long long t) const {
// 		assert(!(x == 0 && t == 0));
// 		mod_int e = *this, res = mod_int(1);
// 		for (; t; e *= e, t >>= 1)
// 			if (t & 1) res *= e;
// 		return res;
// 	}
 
// 	mod_int fact() {
// 		if (_fact[0].x == 0) prepare();
// 		return _fact[x];
// 	}
 
// 	mod_int inv_fact() {
// 		if (_fact[0].x == 0) prepare();
// 		return _inv_fact[x];
// 	}
 
// 	mod_int choose(mod_int y) {
// 		assert(y.x <= x);
// 		return this->fact() * y.inv_fact() * mod_int(x - y.x).inv_fact();
// 	}
 
// 	static mod_int _inv[TABLE_SIZE + 1];
 
// 	static mod_int _fact[TABLE_SIZE + 1];
 
// 	static mod_int _inv_fact[TABLE_SIZE + 1];
 
// 	static void prepare() {
// 		_inv[1] = 1;
// 		for (int i = 2; i <= (int)TABLE_SIZE; ++i) {
// 			_inv[i] = 1LL * _inv[MODULO % i].x * (MODULO - MODULO / i) % MODULO;
// 		}
// 		_fact[0] = 1;
// 		for (unsigned i = 1; i <= TABLE_SIZE; ++i) {
// 			_fact[i] = _fact[i - 1] * signed(i);
// 		}
// 		_inv_fact[TABLE_SIZE] = _fact[TABLE_SIZE].inv();
// 		for (int i = (int)TABLE_SIZE - 1; i >= 0; --i) {
// 			_inv_fact[i] = _inv_fact[i + 1] * (i + 1);
// 		}
// 	}
// };
 
// template <signed M, unsigned F>
// std::ostream& operator<<(std::ostream& os, const mod_int<M, F>& rhs) {
// 	return os << rhs.x;
// }
 
// template <signed M, unsigned F>
// std::istream& operator >> (std::istream& is, mod_int<M, F>& rhs) {
// 	long long s;
// 	is >> s;
// 	rhs = mod_int<M, F>(s);
// 	return is;
// }
 
// template <signed M, unsigned F>
// mod_int<M, F> mod_int<M, F>::_inv[TABLE_SIZE + 1];
 
// template <signed M, unsigned F>
// mod_int<M, F> mod_int<M, F>::_fact[TABLE_SIZE + 1];
 
// template <signed M, unsigned F>
// mod_int<M, F> mod_int<M, F>::_inv_fact[TABLE_SIZE + 1];
 
// template <signed M, unsigned F>
// bool operator==(const mod_int<M, F>& lhs, const mod_int<M, F>& rhs) {
// 	return lhs.x == rhs.x;
// }
 
// template <int M, unsigned F>
// bool operator!=(const mod_int<M, F>& lhs, const mod_int<M, F>& rhs) {
// 	return !(lhs == rhs);
// }
 
vector<unsigned long long int> primes;
void primes()
{
  primes.push_back(2);
  for (unsigned long long int i = 3; i <= limit; i += 2)
  {
    bool isPrime = true;
    for (auto p : primes)
    {
      if (p*p > i)
        break;

      if (i % p == 0)
      {
        isPrime = false;
        break;
      }
    }
    if (isPrime)
      primes.push_back(i);
  }
}
int main ()
{
    magic;
    /*
     
     O
    <C>
     /\
     
     */
	GF256init();
	srand((unsigned)time(NULL));

	try 
	{ 
		/** Define and parse the program options 
		*/ 
		namespace po = boost::program_options; 
		po::options_description desc("Program Usage"); 
		desc.add_options() 
			("help,h", "Print help messages") 
			("split,s", po::value<vector<string>>()->multitoken(), "Split a file")
			("reconstruct,r", po::value<vector<string>>()->multitoken(), "Reconstruct a file from its shares");

		po::variables_map vm; 
		try 
		{ 
			po::store(po::parse_command_line(argc, argv, desc),
				vm); // throws on error 

			/** --help option 
			*/ 
			if (vm.count("help")) 
			{ 
				std::cout << "Shamir's Secret Sharing Scheme for Files" << std::endl 
					<< desc << std::endl; 
				return SUCCESS; 
			} 

			if (vm.count("split")) {
				std::cout << "Splitting" << std::endl;
				vector<string> const &splitInputs = vm["split"].as<vector<string>>();
				if (splitInputs.size() != 3) {
					throw po::error("Split usage: [Input File] [Total Share #] [Share Number Required to Reconstruct]");
				}
				path inputPath(splitInputs[0]);
				try {
					int n = boost::lexical_cast<int>(splitInputs[1].c_str());
					int k = boost::lexical_cast<int>(splitInputs[2].c_str());
					if (n <= 0 || k <= 0 || n > 255 || k > 255) {
						throw po::error("n and k must be between 1 and 255 (inclusive)");
					}
					if (n < k) {
						throw po::error("n must be larger or equal to k");
					}
					splitSecretFile(inputPath, n, k);
				}
				catch (boost::bad_lexical_cast _) {
					throw po::error("[Total Share Number] and [Share Number Required to Reconstruct] must be numbers");
				}
				catch (std::exception &e) {
					throw po::error(e.what());
				}
				return SUCCESS;
			}

			else if (vm.count("reconstruct")) {
				std::cout << "Reconstructing" << std::endl;
				vector<string> const &reconInputs = vm["reconstruct"].as<vector<string>>();
				if (reconInputs.size() != 2)
					throw po::error("Reconstruct Usage: [Original File Name (and the folder path containing the shares)] [Output File Name (and folder path)]");
				path inputFile(reconInputs[0]);
				path outputFile(reconInputs[1]);
				try {
					reconstructSecretFile(inputFile, outputFile);
				}
				catch (std::exception &e) {
					throw po::error(e.what());
				}
			}
			else { 
			//fail to parse input, output Usage
			std::cout << "Shamir's Secret Sharing Scheme for Files" << std::endl 
				<< desc << std::endl; 
			return SUCCESS; 
			}

			po::notify(vm); // throws on error, so do after help in case there are any problems 
		} 
		catch(po::error& e) 
		{ 
			std::cerr << "ERROR: " << e.what() << std::endl << std::endl; 
			std::cerr << desc << std::endl; 
			return ERROR_IN_COMMAND_LINE; 
		} 

	} 
	catch(std::exception& e) 
	{ 
		std::cerr << "Unhandled Exception reached the top of main: " 
			<< e.what() << ", application will now exit" << std::endl; 
		return ERROR_UNHANDLED_EXCEPTION; 

	} 

	return SUCCESS; 

	return 0;
}
    XXX
}
