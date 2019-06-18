// A ---------------------------
#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define repa(i,a,n) for(int i=a;i<=n;i++)
#define repinv(i,n) for(int i=n-1;i>=0;i--)
#define MOD 1000000007
#define set(a) memset(a,-1,sizeof(a))
#define clear(a) memset(a,0,sizeof(a))
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define INF LLONG_MAX

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int n, m,k;
struct cell{
	int x;
	int y;
};

char grid[1001][1001];
bool visited[1001][1001];
int b[1001][1001],s[101000];


bool isValid(int x, int y){
	return x >= 0 && x < n && y >= 0 && y < m;
}

int bfs(cell s,int p){
	int k = 0;
	queue<cell> q,q1;
	visited[s.x][s.y] = true;
	b[s.x][s.y] = p;
	q.push(s);
	while (!q.empty()){
		cell top = q.front();
		q.pop();
		for (int i=-1;i<=1;i++)
			for (int j = -1; j <= 1; j++){
			if (abs(i) != abs(j)){
				int x = top.x + i;
				int y = top.y + j;
				if (isValid(x, y)){
					if (grid[x][y]=='*')
					{
						k++;
					}
					else 
						if (!visited[x][y])
						{
							b[x][y] = p;
							q.push({ x, y });
							visited[x][y] = true;
						}
				}
			}
		}
	}
	return k;
}


int main(){
	char c;
	int x, y;
	cin >> n >> m >> k ;
	rep(i, n)
		cin >> grid[i];
	rep(i, k){
		cin >> x >> y;
		x--, y--;
		if (b[x][y])
			cout << s[b[x][y]] << endl;
		else{
			s[i+1] = bfs({ x, y }, i+1);
			cout << s[i+1] << endl;
		}
	}
	//system("pause");
	return 0;
}