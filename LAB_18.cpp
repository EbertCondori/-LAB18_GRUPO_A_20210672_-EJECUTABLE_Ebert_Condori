#include <iostream>
using namespace std;

/*
//Ejercicio 1
template <int N>
struct suma_num{
	enum { value = N + suma_num <N - 1 >::value };
};

template <>
struct suma_num <0>{
	enum { value = 0 };
};

int main(){
	int x = suma_num<5>::value;
	cout << x << endl;
	return 0;
}
*/

/*
//Ejercicio 2
template <int N>
struct fibo{
	enum { value = fibo <N-1>::value + fibo <N-2>::value };
};

template <>
struct fibo <1>{
	enum { value = 1 };
};

template <>
struct fibo <0>{
	enum { value = 0 };
};

int main(){
	int x = fibo<6>::value;
	cout << x << endl;
	return 0;
}
*/

/*
//Ejercicio 3
template <int N,int P>
struct potencia{
	enum { value = N*potencia<N,P-1>::value };
};

template <int N>
struct potencia<N,1> {
	enum { value =  N};
};

template <int P>
struct potencia<P,0> {
	enum { value =  1};
};

int main(){
	int x = potencia<2,3>::value;
	cout << x << endl;
	return 0;
}
*/


//ejercicio 4

template <int N>

struct fibo{
	
	enum { value = N/16 + fibo<N/16>::value };
};

template <>
struct fibo <10>{
	enum { value = 'a' };
};

template <>
struct fibo <11>{
	enum { value = 'b' };
};

template <>
struct fibo <12>{
	enum { value = 'c' };
};

template <>
struct fibo <13>{
	enum { value = 'd' };
};

template <>
struct fibo <14>{
	enum { value = 'e' };
};

template <>
struct fibo <15>{
	enum { value = 'f' };
};


int main(){
	int x = fibo<160>::value;
	cout << x << endl;
	return 0;
}


	
	
