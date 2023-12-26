// http://boj.kr/a9f89b45ac624c2a8d13f27a01dd78d1
#include <bits/stdc++.h>
using namespace std;

// int overflow 방지
using ll = long long;

// a^b mod m 을 계산하는 함수
ll POW(ll a, ll b, ll m){
  // base condition
  if(b==1) return a % m;
  ll val = POW(a, b/2, m);
  val = val * val % m;
  // b가 짝수일 때, k승을 m으로 나눈 나머지이므로 그대로 val 반환
  if(b%2 == 0) return val;
  // b가 홀수일 때, a를 한 번 더 곱해서 k+1승을 m으로 나눈 나머지 반환
  return val * a % m;
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll a,b,c;
  cin >> a >> b >> c;
  cout << POW(a,b,c);
}