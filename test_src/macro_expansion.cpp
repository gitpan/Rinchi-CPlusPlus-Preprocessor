#define x    3
#define f(a) f(x * (a))
#undef   x
#define x    2
#define g    f
#define z    z[0]
#define h    g(~
#define m(a) a(w)
#define w    0,1
#define t(a) a
#define p()    int
#define q(x)   x
#define r(x,y) x ## y
#define str(x) #x
#define A (B)
#define B (C)
#define C (A)

#pragma start
f(y+1) + f(f(z)) % t(t(g)(0) + t)(1);
#pragma compare "f(2*(y+1))+f(2*(f(2*(z[0]))))%f(2*(0))+t(1);"
#pragma start
g(x+(3,4)-w) | h 5) & m (f)^m(m);
#pragma compare "f(2*(2+(3,4)-0,1))|f(2*(~5))&f(2*(0,1))^m(0,1);"
#pragma start
p() i[q()] = { q(1), r(2,3), r(4,), r(,5), r(,) };
#pragma compare "int i[]={1,23,4,5,};"
#pragma start
char c[2][6] = { str(hello), str() };
#pragma compare "char c[2][6]={\"hello\",\"\"};"
#pragma start
ABC=A+B+C;
#pragma compare "ABC=(((A)))+(((B)))+(((C)));"

